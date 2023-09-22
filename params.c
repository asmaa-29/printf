#include "main.h"
/**
 * init params - clears struct fields and reset buf
 * @params: the parameters struct
 * @ap: the argument pointer
 *
 * Return: void
*/
void init _params (params_t *params, va_list ap)
{
	params-›unsign = 0;
	params-›plus_flag = 0;
	params->space flag = 0;
	params-›hashtag_flag = 0;
	params->zero flag = 0;
	params-›minus flag = 0;
	params->width = 0;
	params-›precision = UINT_ MAX;
	params->h modifier = 0;
	params->1 modifier = 0;
	(void) api;
}
