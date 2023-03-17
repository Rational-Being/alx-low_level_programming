#include <stdlib.h>

/**
 *  * function that concatenates two strings
 *   * @s1: input string 1
 *    * @s2: input string 2
 *     * @n: 	n bytes
 *      * Return: new_str
 *       */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
		char *new_str;
			char *nul = "";
				unsigned int x, y;

					x = y = 0;
						if (s1 == NULL)
									s1 = nul;
							if (s2 == NULL)
										s2 = nul;
								while (s1[x] != '\0')
											x += 1;
									while (s2[y] != '\0')
												y += 1;
										y++;
											if (n >= y)
														n = y;
												new_str = malloc(sizeof(*new_str) * n + (x + 1));
													if (new_str == NULL)
																return (NULL);
														x = 0;
															while (s1[x] != '\0')
																	{
																				new_str[x] = s1[x];
																						x += 1;
																							}
																y = 0;
																	while (s2[y] != '\0' && y < n)
																			{
																						new_str[x] = s2[y];
																								x++;
																										y++;
																											}
																		new_str[x] = '\0';
																			return (new_str);
}
