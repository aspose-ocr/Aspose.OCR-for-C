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

	// Prepare buffer for result (in symbols, len_byte = len * sizeof(wchar_t))
	const size_t len = 4096;
	wchar_t buffer[len] = { 0 };

	size_t size = aspose::ocr::page(image_path.c_str(), buffer, len);

	//Print result
	std::wcout << buffer << L"\n";

	// ExEnd: PerformOcrOnImage
	std::wcout << "PerformOcrOnImage executed successfully" << L'\n';
}

void PrepareRectangles() {
	// ExStart: PrepareRectangles
	std::string image_path = "../Data/Source/sample.png";

	// Prepare buffer for result (in symbols, len_byte = len * sizeof(wchar_t))
	const size_t len = 4096;
	wchar_t buffer[len] = { 0 };

	int x = 138, y = 352, w = 2033, h = 537;

	size_t size = aspose::ocr::page_rect(image_path.c_str(), buffer, len, x, y, w, h);

	//Print result
	std::wcout << buffer << L"\n";

	// ExEnd: PrepareRectangles
	std::wcout << "PrepareRectangles executed successfully" << L'\n';
}

void SpecifyAllowedCharacters() {
	// ExStart: SpecifyAllowedCharacters
	std::string image_path = "../Data/Source/sample.png";

	// Prepare buffer for result (in symbols, len_byte = len * sizeof(wchar_t))
	const size_t len = 4096;
	wchar_t buffer[len] = { 0 };

	size_t size = aspose::ocr::page_abc(image_path.c_str(), buffer, len,
		L" !\",#$%&()*+,-./0123456789:;<=>?@[\\]_`{|}"
		"~ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

	//Print result
	std::wcout << buffer << L"\n";

	// ExEnd: SpecifyAllowedCharacters
	std::wcout << "SpecifyAllowedCharacters executed successfully" << L'\n';
}

void SpecifyAllowedCharactersWithinRectangle() {
	// ExStart: SpecifyAllowedCharactersWithinRectangle
	std::string image_path = "../Data/Source/sample.png";

	// Prepare buffer for result (in symbols, len_byte = len * sizeof(wchar_t))
	const size_t len = 4096;
	wchar_t buffer[len] = { 0 };

	int x = 138, y = 352, w = 2033, h = 537;

	size_t size = aspose::ocr::page_rect_abc(image_path.c_str(), buffer, len, x, y, w, h,
		L" !\",#$%&()*+,-./0123456789:;<=>?@[\\]_`{|}"
		"~ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

	//Print result
	std::wcout << buffer << L"\n";

	// ExEnd: SpecifyAllowedCharactersWithinRectangle
	std::wcout << "SpecifyAllowedCharactersWithinRectangle executed successfully" << L'\n';
}

void RecognizeLine() {
	// ExStart: RecognizeLine
	std::string image_path = "../Data/Source/sample_line.jpg";

	// Prepare buffer for result (in symbols, len_byte = len * sizeof(wchar_t))
	const size_t len = 4096;
	wchar_t buffer[len] = { 0 };

	size_t size = aspose::ocr::line(image_path.c_str(), buffer, len);

	//Print result
	std::wcout << buffer << L"\n";

	// ExEnd: RecognizeLine
	std::wcout << "RecognizeLine executed successfully" << L'\n';
}

void RecognizeLineWithAllowedCharacters() {
	// ExStart: RecognizeLineWithAllowedCharacters
	std::string image_path = "../Data/Source/0001460985.jpg";

	// Prepare buffer for result (in symbols, len_byte = len * sizeof(wchar_t))
	const size_t len = 4096;
	wchar_t buffer[len] = { 0 };

	size_t size = aspose::ocr::line_abc(image_path.c_str(), buffer, len, L"0123456789");

	//Print result
	std::wcout << buffer << L"\n";

	// ExEnd: RecognizeLineWithAllowedCharacters
	std::wcout << "RecognizeLineWithAllowedCharacters executed successfully" << L'\n';
}

void WorkingWithDifferentLanguages() {
	// ExStart: WorkingWithDifferentLanguages
	std::string image_path = "../Data/Source/sample_spanish_line.png";

	// Prepare buffer for result (in symbols, len_byte = len * sizeof(wchar_t))
	const size_t len = 4096;
	wchar_t buffer[len] = { 0 };

	size_t size = aspose::ocr::line(image_path.c_str(), buffer, len);

	//Print result
	std::wcout << buffer << L"\n";

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

	//GetSkew();
	//PerformOcrOnImage();
	//PrepareRectangles();
	//SpecifyAllowedCharacters();
	//SpecifyAllowedCharactersWithinRectangle();
	//RecognizeLine();
	//RecognizeLineWithAllowedCharacters();
	//WorkingWithDifferentLanguages();

	//Stop before exiting
	std::wcout << "\nProgram Finished. Press Enter to Exit....";
}