---
title: Aspose.OCR for CPP 20.7 Release Notes
type: docs
weight: 8
url: /cpp/aspose-ocr-for-cpp-20-7-release-notes/
---

{{% alert color="primary" %}}

This page contains release notes for Aspose.OCR for C++ 20.7.

{{% /alert %}}

## All Features

|Key|Summary|Category|
|---|---|---|
|OCRCPP-116|Recognizing text in the tables (remove vertical and horizontal lines from tables).|Enhancement|
|OСRCPP-131|Add image recognition using GPU and CUDA technology (available in separate assembly Aspose.Ocr.Cpp.Gpu).|Enhancement|
|OСRCPP-109|New ML model with improved recognition.|Enhancement|

## Public API and Backwards Incompatible Changes

### New API

|Method|Description|
|---|---|
|size_t asposeocr_page_all(const char* image_path, wchar_t* buffer, size_t buffer_size, bool correct_skew)|Recognition image without automatic detection of text areas. Get all images as text area. Correct skew of the text according to the parameter. image_path - full path to the image, result - pointer to buffer with recognized string, buffer_size - the size of buffer reserved for the result. correct_skew - autoskew image. Return size of result string in wchar_t symbols.|
|size_t asposeocr_page_abc_all(const char* image_path, wchar_t* buffer, size_t buffer_size, const wchar_t* const alphabet, bool correct_skew)|Recognition image without automatic detection of text areas. Get all images as text area. Correct skew of the text according to the parameter. image_path - full path to the image, result - pointer to buffer with recognized string, buffer_size - the size of buffer reserved for the result. alphabet - string with allowed symbols. correct_skew - autoskew image. Return size of result string in wchar_t symbols.|

### Removed APIs

No Changes

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

 /* asposeocr_page_all */
 size_t res_len = asposeocr_page_all(image.string().c_str(), buffer, len, true);

 //Print result
 std::wcout << buffer << L"\n";

 /* asposeocr_page_abc_all */
 size = asposeocr_page_abc_all(image.string().c_str(), buffer, len,
        L" !\",#$%&()*+,-./0123456789:;<=>?@[\\]_`{|}"
        "~ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz", false);
 std::wcout << buffer << L"\n";

}

{{< /highlight >}}
