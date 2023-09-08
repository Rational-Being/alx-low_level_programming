#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
#include <string.h>
#include <elf.h>
#define MAX_BUFFER_SIZE 128

void print_error(const char *error)
{
	fprintf(stderr, "%s\n", error);
	exit (98);
}

int main(int argc, char *argv[])
{
	const char *filename = argv[1];
	int i, fd;
	Elf64_Ehdr header;
	
	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	fd = open(filename, O_RDONLY);
//	if (fd == -1)
//		print_error("Error: cannot open the file");

	if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		print_error("Error: header not found");

	if (memcmp (header.e_ident, ELFMAG, SELFMAG) != 0 ||
			header.e_ident[EI_CLASS] != ELFCLASS64)
		print_error("Error: file not valid|");

	printf("	Magic: 	");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header.e_ident[i]);

	printf("\n");
	printf( "	Class;	%s\n", (header.e_ident[EI_CLASS] ==ELFCLASS64) ? "ELF64" : "Elf32");
	printf( "	Data;	%s\n", (header.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
	printf( "	Version:	%d (current)\n", header.e_ident[EI_VERSION]);
	printf( "	OS/ABI:	%d\n", header.e_ident[EI_OSABI]);
	printf( "	ABI Version:	%d\n", header.e_ident[EI_ABIVERSION]);
	printf( "	Type:	%d\n", header.e_type);
	printf( "	Entry pointaddress:	0x%lx\n", (unsigned long)header.e_entry);

	close(fd);
	return (0);
}
