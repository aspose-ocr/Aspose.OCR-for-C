---
title: Aspose.OCR for CPP 20.6 Release Notes
type: docs
weight: 9
url: /cpp/aspose-ocr-for-cpp-20-6-release-notes/
---

{{% alert color="primary" %}}

This page contains release notes for Aspose.OCR for C++ 20.6.

{{% /alert %}}

Aspose.OCR for C (C++) is a cross-platform C and C++ library for optical character recognition and document scanning. It allows you to scan documents and recognize characters.

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

## Input formats

- bmp (32bit and 16bit not supported)
- jpg
- png

## Aspose OCR API

Note: C++ API have alias for all methods. Replace "asposeocr_FUNCTION_NAME" to aspose::ocr::FUNCTION_NAME *

|**Method**|**Description**|
| :- | :- |
|void asposeocr_set_license(const char* licenseFullPath)|licenseFullPath - path to xml license file.|
|bool asposeocr_get_state()|Return license status.|
|size_t asposeocr_page(const char* image_path, wchar_t* result, size_t buffer_size)|Auto-align image and autodetect text areas. image_path - full path to the image, result - pointer to buffer with recognized string, buffer_size - the size of buffer reserved for the result. Return size of result string in wchar_t symbols.|
|size_t asposeocr_page_rect(const char* image_path, wchar_t* result, size_t buffer_size, int x, int y, int w, int h)|Auto-align image and autodetect text areas. image_path - full path to the image, result - pointer to buffer with recognized string, buffer_size - the size of buffer reserved for the result. x, y - the coordinates of the top-left point of the rectangle. w, h - rectangle width and height. Return size of result string in wchar_t symbols.|
|size_t asposeocr_page_abc(const char* image_path, wchar_t* result, size_t buffer_size, const wchar_t* const alphabet)|Auto-align image and autodetect text areas. image_path - full path to the image, result - pointer to buffer with recognized string, buffer_size - the size of buffer reserved for the result. alphabet - const whar_t * string with allowed symbols. Return size of result string in wchar_t symbols.|
|size_t asposeocr_page_rect_abc(const char* image_path, wchar_t* result, size_t buffer_size, int x, int y, int w, int h, const wchar_t* const alphabet)|Auto-align image and autodetect text areas. image_path - full path to the image, result - pointer to buffer with recognized string, buffer_size - the size of buffer reserved for the result. x, y - the coordinates of the top-left point of the rectangle. w, h - rectangle width and height.alphabet - const whar_t * string with allowed symbols. Return size of result string in wchar_t symbols.|
|size_t asposeocr_line(const char* image_path, wchar_t* result, size_t buffer_size)|Get a single line and recognize it. image_path - full path to the image, result - pointer to buffer with recognized string, buffer_size - the size of buffer reserved for the result. Return size of result string in wchar_t symbols.|
|size_t asposeocr_line_abc(const char* image_path, wchar_t* result, size_t buffer_size, const wchar_t* const alphabet)|size_t asposeocr_line_abc(const char* image_path, wchar_t* result, size_t buffer_size, const wchar_t* const alphabet)|
|double asposeocr_get_skew(const char* image_path)|Calculate the skew angle.|

## New features

- C interface and compatibility.
- The dependency of onnxruntime library from NuGet (in Windows)
- New API for recognition in rectangle and limited symbol set.

Old: const wchar_t* aspose::ocr::recognize_page(const char* image_path); Replaced to: size_t asposeocr_page(const char* image_path, wchar_t* result, size_t buffer_size) size_t aspose::ocr::page(const char* image_path, wchar_t* result, size_t buffer_size);

Old: const wchar_t* aspose::ocr::recognize_line(const char* image_path); Replaced to: size_t asposeocr_line(const char* image_path, wchar_t* result, size_t buffer_size) size_t aspose::ocr::line(const char* image_path, wchar_t* result, size_t buffer_size)

New API:bool asposeocr_get_state() | Return license status. size_t asposeocr_page_rect(const char* image_path, wchar_t* result, size_t buffer_size, int x, int y, int w, int h) | Auto-align image and autodetect texts areas. image_path - full path to the image, result - pointer to buffer with recognized string, buffer_size - the size of buffer reserved for the result. x, y - the coordinates of the top-left point of the rectangle. w, h - rectangle width and height. Return size of result string in wchar_t symbols. size_t asposeocr_page_abc(const char* image_path, wchar_t* result, size_t buffer_size, const wchar_t* const alphabet) | Auto-align image and autodetect texts areas. image_path - full path to the image, result - pointer to buffer with recognized string, buffer_size - the size of buffer reserved for the result. alphabet - const whar_t * string with allowed symbols. Return size of result string in wchar_t symbols. size_t asposeocr_page_rect_abc(const char* image_path, wchar_t* result, size_t buffer_size, int x, int y, int w, int h, const wchar_t* const alphabet) | Auto-align image and autodetect texts areas. image_path - full path to the image, result - pointer to buffer with recognized string, buffer_size - the size of buffer reserved for the result. x, y - the coordinates of the top-left point of the rectangle. w, h - rectangle width and height.alphabet - const whar_t * string with allowed symbols. Return size of result string in wchar_t symbols. size_t asposeocr_line_abc(const char* image_path, wchar_t* result, size_t buffer_size, const wchar_t* const alphabet) | Get single line and recognize it. image_path - full path to the image, result - pointer to buffer with recognized string, buffer_size - the size of buffer reserved for the result. alphabet - const whar_t * string with allowed symbols. Return size of result string in wchar_t symbols.

## Example (C++17 since filesystem)
{{< highlight cpp >}}

#include <iostream>

#include <aspose_ocr.h>

#include <filesystem>

#include <corecrt_io.h>

#include <fcntl.h>

int main()
{

 _setmode(_fileno(stdout), _O_U16TEXT);

 //Current directory
 const std::filesystem::path path{ std::filesystem::current_path() };

 /* asposeocr_set_license */

 const std::string lic = "/Aspose.Total.lic";
 std::filesystem::path license = path.string() + lic;
 asposeocr_set_license(license.string().c_str());

 /* asposeocr_set_license */

 bool lic_result = asposeocr_get_state();

 //Recognize image
 std::filesystem::path image = path.string() + "/p.png";

 // Prepare buffer for result (in symbols, len_byte = len * sizeof(wchar_t))
 const size_t len = 4096;
 wchar_t buffer[len] = { 0 };

 /* asposeocr_page */

 size_t res_len = asposeocr_page(image.string().c_str(), buffer, len);

 //Print result
 std::wcout << buffer << L"\n";

 /* asposeocr_page_rect */

 int x = 138, y = 352, w = 2033, h = 537;
 size_t size = asposeocr_page_rect(image.string().c_str(), buffer, len, x, y, w, h);
 std::wcout << buffer << L"\n";

 /* asposeocr_page_abc */

 size = asposeocr_page_abc(image.string().c_str(), buffer, len,
 L" !\",#$%&()*+,-./0123456789:;<=>?@[\\]_`{|}"
 "~ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
 std::wcout << buffer << L"\n";

 /* asposeocr_page_rect_abc */
 size = asposeocr_page_rect_abc(image.string().c_str(), buffer, len, x, y, w, h,
 L" !\",#$%&()*+,-./0123456789:;<=>?@[\\]_`{|}"
 "~ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

 std::wcout << buffer << L"\n";

 std::string f = path.string() + "/0001460985.Jpeg";

 /* asposeocr_line */
 size = asposeocr_page(f.c_str(), buffer, len);
 std::wcout << buffer;

 /* asposeocr_line_abc */
 size = asposeocr_line_abc(f.c_str(), buffer, len, L"0123456789");
 std::wcout << buffer;
}

{{< /highlight >}}
