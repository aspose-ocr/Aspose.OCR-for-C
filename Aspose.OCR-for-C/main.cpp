#include <iostream>
#include <stdio.h>
#include <fcntl.h>
#include <io.h>
#include <aspose_ocr.h>

void SetLicense() {
	// ExStart: SetLicense
	// Set License
	const std::string lic = "LicenseFilePath";
	aspose::ocr::set_license(lic.c_str());
	// ExEnd: SetLicense

	// ExStart: CheckLicenseState
	// Check License State
	std::wcout << aspose::ocr::get_state() << '\n';
	// ExEnd: CheckLicenseState
}

void PerformOcrOnImage() {
	// ExStart: PerformOcrOnImage
	std::string image_path = "../Data/Source/sample.png";
	const wchar_t* result = aspose::ocr::recognize_page(image_path.c_str());
	std::wcout << result << L'\n';
	// ExEnd: PerformOcrOnImage
	std::wcout << "PerformOcrOnImage executed successfully" << L'\n';
}

void RecognizeLine() {
	// ExStart: RecognizeLine
	std::string image_path = "../Data/Source/sample_line.jpg";
	const wchar_t* result = aspose::ocr::recognize_line(image_path.c_str());
	std::wcout << result << L'\n';
	// ExEnd: RecognizeLine
	std::wcout << "RecognizeLine executed successfully" << L'\n';
}

void WorkingWithDifferentLanguages() {
	// ExStart: WorkingWithDifferentLanguages
	std::string image_path = "../Data/Source/sample_spanish_line.png";
	const wchar_t* result = aspose::ocr::recognize_line(image_path.c_str());
	std::wcout << result << L'\n';
	// ExEnd: WorkingWithDifferentLanguages
	std::wcout << "WorkingWithDifferentLanguages executed successfully" << L'\n';
}

void GetSkew() {
	// ExStart: GetSkew
	std::string image_path = "../Data/Source/skewSample.png";
	std::double_t result = aspose::ocr::get_skew(image_path.c_str());
	std::wcout << result << L'\n';
	// ExEnd: GetSkew
	std::wcout << "GetSkew executed successfully" << L'\n';
}

int main() {
	//output console
	_setmode(_fileno(stdout), _O_U16TEXT);

	//Uncomment the one you want to try out
	//SetLicense();

	GetSkew();
	PerformOcrOnImage();
	WorkingWithDifferentLanguages();
	RecognizeLine();

	//Stop before exiting
	std::wcout << "\nProgram Finished. Press Enter to Exit....";
}