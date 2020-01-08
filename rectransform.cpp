// rectransform.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

static void sccale_right90(int* src,int width,int height,int* dst) {
	for (int hsrc = 0; hsrc < width; hsrc++) {
		int wsrc = height - 1;
		
		for (int wdst = 0; wsrc >= 0; wsrc--, wdst++) {
			int srcindex = wsrc * width + hsrc;
			int dstindex = hsrc * height + wdst;
			dst[dstindex] = src[srcindex];			
			std::cout << dst[dstindex] << " ";
		}
		std::cout << "\r\n";
		
	}
	for (int i = 0; i < height*width;i++) {
		std::cout << dst[i] << " ";
	}
}


//bool rgb24_rotate_90(unsigned char *src_rgb, unsigned int iWidth, unsigned int iHeight, bool direction)
//{
//	if (!src_rgb)
//		return false;
//	unsigned int n = 0;
//	unsigned int linesize = iWidth * 3;
//	unsigned char *dst_rgb = (unsigned char*)malloc(iWidth*iHeight * 3);
//	int i, j;
//	if (direction)
//	{
//		for (j = iWidth; j > 0; j--)
//			for (i = 0; i < iHeight; i++)
//			{
//				memcpy(&dst_rgb[n], &src_rgb[linesize*i + j * 3 - 3], 3);
//				n += 3;
//			}
//	}
//	else
//	{
//		for (j = 0; j < iWidth; j++)
//			for (i = iHeight; i > 0; i--)
//			{
//				memcpy(&dst_rgb[n], &src_rgb[linesize*(i - 1) + j * 3 - 3], 3);
//				n += 3;
//			}
//	}
//	memcpy(src_rgb, dst_rgb, iWidth*iHeight * 3); // itmp = iLBytes*iHeight;
//	free(dst_rgb);
//	return true;
//}


int main()
{
    std::cout << "Hello World!\n"; 
	int width = 4;
	int height = 3;
	int src[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int dst[12] = { 0,0,0,0,0,0,0,0,0,0,0,0 };
	
	sccale_right90(src,width,height,dst);

	int k = 0;
	std::cin >> k;
}

