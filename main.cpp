#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
int main()
{
	//读取本地的一张图片便显示出来
	//imread后面的文件路径可以根据自己的实际路径修改。

	//Excese2 RGB转灰度
	cv::Mat img = imread("C:/Users/STAR ZHANG/Pictures/3.jpg",0);
	imshow("test", img);


	//等待用户按键
	waitKey(0);
	return 0;
}