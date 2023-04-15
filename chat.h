int chat(char c[100])
{
	if(strcmp(c,"e")==0)
	{
		return 2000;
	}
	if(strcmp(c,"h")==0)
	{
		return 2001;
	}
	if(strcmp(c,"make a call")==0 || strcmp(c,"call amma")==0)
	{
		return 2002;
	}
	if(strcmp(c,"tell me about your self")==0 || strcmp(c,"your name?")==0 || strcmp(c,"your name")==0 || strcmp(c,"about you")==0)
	{
		return 2100;
	}
	
	
	if(strcmp(c,"hi")==0 || strcmp(c,"hiii")==0 || strcmp(c,"hii")==0 || strcmp(c,"hi there")==0)
	{
		return 1;
	}
	else if(strcmp(c,"how are you?")==0 || strcmp(c,"about you?")==0 || strcmp(c,"how are you")==0)
	{
		return 2;
	}
	else if(strcmp(c,"bye")==0 || strcmp(c,"see you later")==0)
	{
		return 3;
	}
	else if(strcmp(c,"polynomial addition")==0 || strcmp(c,"ans for polynomial addition")==0)
	{
		return 4;
	}
	else if(strcmp(c,"i love you")==0 || strcmp(c,"do you love me?")==0)
	{
		return 5;
	}
	else if( strcmp(c,"tell me the date")==0 || strcmp(c,"current date")==0 || strcmp(c,"tell the date")==0)
	{
		return 6;
	}
	else if(strcmp(c,"tell me the time")==0 || strcmp(c,"current time")==0 || strcmp(c,"tell the time")==0)
	{
		return 66;
	}
	else if(strcmp(c,"tell me the date and the time")==0 || strcmp(c,"tell the date and the time")==0 || strcmp(c,"tell the date and time")==0 || strcmp(c,"tell me the date and time")==0 )
	{
		return 666;
	}
	
// night...
	else if(strcmp(c,"calculator")==0)
	{
		return 7;
	}
	else if(strcmp(c,"who is our PM")==0)
	{
		return 8;
	}
	else if(strcmp(c,"which is our capital?")==0 || strcmp(c,"which is our capital")==0)
	{
		return 9;
	}
	else if(strcmp(c,"which is our national animal?")==0 || strcmp(c,"which is our national animal")==0)
	{
		return 10;
	}
	else if(strcmp(c,"which is our national bird?")==0 || strcmp(c,"which is our national bird")==0)
	{
		return 11;
	}
	else if(strcmp(c,"who is our national crush?")==0 || strcmp(c,"who is our national crush")==0)
	{
		return 12;
	}
	else if(strcmp(c,"which is the capital of Tamilnadu?")==0 || strcmp(c,"which is the capital of Tamilnadu")==0)
	{
		return 13;
	}
	else if(strcmp(c,"which is our capital?")==0 || strcmp(c,"which is our capital?")==0)
	{
		return 14;
	}
	else if(strcmp(c,"infix to postfix")==0)
	{
		return 15;
	}
	else if(strcmp(c,"change theme")==0)
	{
		return 16;
	}
	
	else if(strcmp(c,"today's weather?")==0 || strcmp(c,"about weather?")==0 || strcmp(c,"about weather")==0)
	{
		return 1001;
	}
	
	
///project
	else if(strcmp(c,"i am very depressed")==0 || strcmp(c,"i don't know what to do")==0 || strcmp(c,"i am depressed")==0 )
	{
		return 3000;
	}
	
	
	else
	{
		return 0;
	}
}
