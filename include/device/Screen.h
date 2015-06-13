class Screen
{
public:
	Screen();
	~Screen();
	void Drawdot(int x,int y);
private:
	//about the Screen size and mode;
	int number;
	int mode;
	int width;
	int height;
	int phyWidth;
	int phyHeight;
	//method for initing the screen;
	boolen init();
}
