![Nuget](https://img.shields.io/nuget/v/Aspose.ocr.Cpp) ![Nuget](https://img.shields.io/nuget/dt/Aspose.ocr.Cpp)
# Optical Character Recognition (OCR) C++ API

[Aspose.OCR for C++](https://products.aspose.com/ocr/cpp) is a standalone OCR API that enhances your C++ apps to [perform OCR on JPEG, PNG, & BMP images](hhttps://docs.aspose.com/ocr/cpp/supported-file-formats/) for extraction of textual content.

<p align="center">
<a title="Download complete Aspose.OCR for C++ example project" href="https://github.com/aspose-ocr/Aspose.OCR-for-C/archive/master.zip">
	<img src="https://raw.github.com/AsposeExamples/java-examples-dashboard/master/images/downloadZip-Button-Large.png" />
  </a>
	
</p>


Directory | Description
--------- | -----------
[Aspose.OCR-for-C](Aspose.OCR-for-C)  | A collection of C++ examples that help you learn and explore the API features.
[Data](Data)  | Sample files used in the Examples.

## Image OCR API Features

- Recognize characters from images.
- Calculate the skew angle of images.
- Currently it supports English language.
- Auto-align image and autodetect text areas.
- Get a single line and recognize it.

## Read Image Formats for OCR

**Raster Formats:** JPEG, BMP ( 32bit and 16bit images are not supported), PNG

## Supported Charset for Recognition

EN

## Pre-requisites

Aspose OCR library requires `onnxruntime.dll` in the system path.

## Get Started with Aspose.OCR for C++

Are you ready to give Aspose.OCR for C++ a try? Simply execute `Install-Package Aspose.OCR.Cpp` from Package Manager Console in Visual Studio to fetch the NuGet package. If you already have Aspose.OCR for C++ and want to upgrade the version, please execute `Update-Package Aspose.OCR.Cpp` to get the latest version.

## Perform OCR on PNG Image

```cpp
std::string image_path = "../Data/Source/sample.png";
const wchar_t* result = aspose::ocr::recognize_page(image_path.c_str());
std::wcout << result << L'\n';
```

## Evaluation Version Limitation

The evaluation version of Aspose.OCR for C++ limits the number of characters extracted from an image to 300.

[Home](https://www.aspose.com/) | [Product Page](https://products.aspose.com/ocr/cpp) | [Docs](https://docs.aspose.com/ocr/cpp/) | [Demos](https://products.aspose.app/ocr/family) | [API Reference](https://apireference.aspose.com/ocr/cpp) | [Examples](https://github.com/aspose-ocr/Aspose.OCR-for-C) | [Blog](https://blog.aspose.com/category/ocr/) | [Search](https://search.aspose.com/) | [Free Support](https://forum.aspose.com/c/ocr) |  [Temporary License](https://purchase.aspose.com/temporary-license)

