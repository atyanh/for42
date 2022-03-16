#include <stdlib.h>

void	*ft_memset(void *str, int c, size_t n);
void 	ft_bzero(void * s, size_t n);
void	*ft_memcpy(void *dst, const void *source, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c,size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memchr(void	*arr, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_toupper(int c);
int	ft_tolower(int c);
