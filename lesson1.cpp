#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/// <summary>
/// for image import
/// </summary>

void main() {

	string path = "resources/foto.jpg";

	Mat img = imread(path);
	Mat res, res_gray_scale;
	
	resize(img, res, Size(200, 250), INTER_AREA);
	cvtColor(res, res_gray_scale, COLOR_BGR2GRAY);
	imshow("Img", res_gray_scale);
	waitKey(0);
}

