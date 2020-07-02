# Aspose.OCR for C++

[Aspose.OCR for C++](https://products.aspose.com/ocr/cpp) is a robust optical character recognition API. Developers can easily add OCR functionalities in their applications. The API is extensible, easy to use, compact and provides a simple set of classes for controlling character recognition.

<p align="center">
<a title="Download complete Aspose.OCR for C++ example project" href="https://github.com/aspose-ocr/Aspose.OCR-for-C/archive/master.zip">
	<img src="https://raw.github.com/AsposeExamples/java-examples-dashboard/master/images/downloadZip-Button-Large.png" />
  </a>
</p>

This repository contains Examples for [Aspose.OCR for C++](https://products.aspose.com/ocr/cpp) to help you learn and write your applications.

Directory | Description
--------- | -----------
[Aspose.OCR-for-C](Aspose.OCR-for-C)  | A collection of C++ examples that help you learn and explore the API features
[Data](Data)  | Sample files used in the Examples

## Supported Characters

|   |   |   |   |   |   |   |   |   |   |
|---|---|---|---|---|---|---|---|---|---|
| space | ! | " | # | $ | % | & | ' | ( | ) |
| * | + | , | - | . | / | 0 | 1 | 2 | 3 |
| 4 | 5 | 6 | 7 | 8 | 9 | : | ; | < | = |
| > | ? | @ | [ | \ | ] | _ | ` | { | \| |
| } | ~ | A | B | C | D | E | F | G | H |
| I | J | K | L | M | N | O | P | Q | R |
| S | T | U | V | W | X | Y | Z | a | b |
| c | d | e | f | g | h | i | j | k | l |
| m | n | o | p | q | r | s | t | u | v |
| w | x | y | z | Â | À | Á | Ã | Ä | Æ |
| Ç | È | É | Ê | Ë | Ì | Í | Î | Ï | Ñ |
| Ò | Ó | Ô | Õ | Ö | Ù | Ú | Û | Ü | ẞ |
| ß | à | á | â | ã | ä | æ | ç | è | é |
| ê | ë | ì | í | î | ï | ñ | ò | ó | ô |
| õ | ö | ù | ú | û | ü | ÿ | Œ | œ | Ÿ |

# Optical Character Recognition (OCR) C++ API

[Aspose.OCR for C++](https://products.aspose.com/ocr/cpp) is a standalone OCR API that enhances your C++ apps to perform the [OCR operation on JPEG, PNG, & BMP images](https://docs.aspose.com/display/ocrcpp/Supported+File+Formats) for extraction of English content.

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

## Getting Started with Aspose.OCR for C++

Are you ready to give Aspose.OCR for C++ a try? Simply execute `Install-Package Aspose.OCR.Cpp` from Package Manager Console in Visual Studio to fetch the NuGet package. If you already have Aspose.OCR for C++ and want to upgrade the version, please execute `Update-Package Aspose.OCR.Cpp` to get the latest version.

Execute the following code snippet to see how Aspose.OCR API performs with your own samples or check the [GitHub Repository](https://github.com/aspose-ocr/Aspose.OCR-for-C) for other common usage scenarios.

## Perform OCR on PNG Image via C++ Code

```cpp
// For complete examples and data files, please go to https://github.com/aspose-ocr/Aspose.OCR-for-C
std::string image_path = "../Data/Source/sample.png";
const wchar_t* result = aspose::ocr::recognize_page(image_path.c_str());
std::wcout << result << L'\n';
```

## Evaluation Version Limitation

The evaluation version of Aspose.OCR for C++ limits the number of characters extracted from an image to 300.

[Product Page](https://products.aspose.com/ocr/cpp) | [Docs](https://docs.aspose.com/display/ocrcpp/Home) | [Demos](https://products.aspose.app/ocr/family) | [API Reference](https://apireference.aspose.com/ocr/cpp) | [Examples](https://github.com/aspose-ocr/Aspose.OCR-for-C) | [Blog](https://blog.aspose.com/category/ocr/) | [Free Support](https://forum.aspose.com/c/ocr) |  [Temporary License](https://purchase.aspose.com/temporary-license)

