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

void PerformOcrOnImageWithoutAutomaticTextAreaDetection() {
	// ExStart: PerformOcrOnImageWithoutAutomaticTextAreaDetection
	std::string image_path = "../Data/Source/sample.png";

	// Prepare buffer for result (in symbols, len_byte = len * sizeof(wchar_t))
	const size_t len = 4096;
	wchar_t buffer[len] = { 0 };

	size_t size = aspose::ocr::page_all(image_path.c_str(), buffer, len, true);

	//Print result
	std::wcout << buffer << L"\n";

	// ExEnd: PerformOcrOnImageWithoutAutomaticTextAreaDetection
	std::wcout << "PerformOcrOnImageWithoutAutomaticTextAreaDetection executed successfully" << L'\n';
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

void SpecifyAllowedCharactersWithoutAutomaticTextAreaDetection() {
	// ExStart: SpecifyAllowedCharactersWithoutAutomaticTextAreaDetection
	std::string image_path = "../Data/Source/sample.png";

	// Prepare buffer for result (in symbols, len_byte = len * sizeof(wchar_t))
	const size_t len = 4096;
	wchar_t buffer[len] = { 0 };

	size_t size = aspose::ocr::page_abc_all(image_path.c_str(), buffer, len,
		L" !\",#$%&()*+,-./0123456789:;<=>?@[\\]_`{|}"
		"~ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz", false);

	//Print result
	std::wcout << buffer << L"\n";

	// ExEnd: SpecifyAllowedCharactersWithoutAutomaticTextAreaDetection
	std::wcout << "SpecifyAllowedCharactersWithoutAutomaticTextAreaDetection executed successfully" << L'\n';
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

void PerformOCROnImageFromUrl() {
	// ExStart: PerformOCROnImageFromUrl
	const char* uri = "https://www.castlegateit.co.uk/wp-content/uploads/2016/09/justified_text.png";
	rect rectangles[3] = { {90, 186, 775, 95} , { 928, 606, 790, 160 }, { 934, 370, 720, 54 } };
	const size_t len = 4096;
	wchar_t buffer[len] = { 0 };

	RecognitionSettings settings;
	settings.all_image = true;
	settings.correct_skew = false;
	settings.alphabet = L"";
	settings.format = export_format::json;
	settings.rectangles = rectangles;
	settings.rectangles_size = 3;

	size_t res = aspose::ocr::page_from_uri(uri, buffer, len, settings);
	std::wcout << buffer << L"\n";
	// ExEnd: PerformOCROnImageFromUrl
	std::wcout << "PerformOCROnImageFromUrl executed successfully" << L'\n';
}

void OCROperationWithLanguageSelection() {
	// ExStart: OCROperationWithLanguageSelection
	std::string image_path = "../Data/Source/sample.png";
	rect rectangles[2] = { {90, 186, 775, 95} , { 928, 606, 790, 160 } };
	const size_t len = 4096;
	wchar_t buffer[len] = { 0 };

	RecognitionSettings settings;
	settings.all_image = false; // default
	settings.correct_skew = true; // default
	settings.alphabet = L"1234567890";
	settings.format = export_format::text;
	settings.rectangles = rectangles;
	settings.rectangles_size = 2;
	settings.skew = 5;
	settings.language_alphabet = language::eng; //	none, eng,	deu, por, spa, fra, ita, cze, dan, dum, est, fin, lav, lit, nor, pol, rum, srp_hrv, slk, slv, swe, chi
	size_t res_len = aspose::ocr::page_settings(image_path.c_str(), buffer, len, settings);
	std::wcout << buffer;
	// ExEnd: OCROperationWithLanguageSelection
	std::wcout << "OCROperationWithLanguageSelection executed successfully" << L'\n';
}

void RecognizeImageIgnoredCharacters() {
	// ExStart: RecognizeImageIgnoredCharacters
	std::string image_path = "../Data/Source/0001460985.jpg";

	// Prepare buffer for result (in symbols, len_byte = len * sizeof(wchar_t))
	const size_t len = 4096;
	wchar_t buffer[len] = { 0 };

	RecognitionSettings settings;
	settings.ignoredCharacters = L"85";
	size_t res_len = aspose::ocr::page_settings(image_path.c_str(), buffer, len, settings);
	std::wcout << buffer; // instead of 8 and 5 we will see the nearest characters

	// ExEnd: RecognizeImageIgnoredCharacters
	std::wcout << "RecognizeImageIgnoredCharacters executed successfully" << L'\n';
}

void GetJson() {
	// ExStart: GetJson
	std::string image_path = "../Data/Source/sample.png";

	// Prepare buffer for result (in symbols, len_byte = len * sizeof(wchar_t))
	const size_t len = 4096;
	wchar_t buffer[len] = { 0 };

	RecognitionSettings settings;
	settings.format = export_format::json;
	size_t res_len = aspose::ocr::page_settings(image_path.c_str(), buffer, len, settings);
	std::wcout << buffer;

	// ExEnd: GetJson
	std::wcout << "GetJson executed successfully" << L'\n';

	// JSON result contains
	// {"recognitionText":"full text\n",
	//		"recognitionAreasData":
	//		[
	//			{"Rectangle":{"height":0,"width":0,"x":0,"y":0},"text":"text in partiqular rectangler\n"},
	//			{"Rectangle":{"height": 0,"width": 0,"x":0,"y":0},"text":"text in partiqular rectangler\n\n"},
	//		]
	//	}
}

void SaveDocx() {
	// ExStart: SaveDocx
	std::string image_path = "../Data/Source/sample.png";

	RecognitionSettings settings;
	settings.format = export_format::json;// or text
	settings.language_alphabet = language::chi;
	settings.save_format = file_format::docx;
	aspose::ocr::page_save(image_path.c_str(), "new_file.docx", settings);
	// ExEnd: SaveDocx
	std::wcout << "SaveDocx executed successfully" << L'\n';
}

void SavePdf() {
	// ExStart: GetJson
	std::string image_path = "../Data/Source/sample.png";

	RecognitionSettings settings;
	settings.format = export_format::text;// or json
	settings.save_format = file_format::pdf;
	aspose::ocr::page_save(image_path.c_str(), "new_file.pdf", settings);
	// doesn't support chinese alphabet
	// 
	// ExEnd: SavePdf
	std::wcout << "SavePdf executed successfully" << L'\n';
}

void SetCustomThreshold() {
// ExStart: SetCustomThreshold
std::string image_path = "../Data/Source/sample.png";

// Prepare buffer for result (in symbols, len_byte = len * sizeof(wchar_t))
const size_t len = 4096;
wchar_t buffer[len] = { 0 };

RecognitionSettings settings;
settings.threshold_value = 10; // auto threshold calculation will be ignored

size_t res_len = aspose::ocr::page_settings(image_path.c_str(), buffer, len, settings);
std::wcout << buffer; 
// ExEnd: SetCustomThreshold
std::wcout << "SetCustomThreshold executed successfully" << L'\n';
}

void SetLinesFiltration() {
	// ExStart: SetLinesFiltration
	std::string image_path = "../Data/Source/table3.jpg";

	// Prepare buffer for result (in symbols, len_byte = len * sizeof(wchar_t))
	const size_t len = 4096;
	wchar_t buffer[len] = { 0 };

	RecognitionSettings settings;
	settings.lines_filtration = true; // works good on the images with table and without areas detection
	settings.all_image = true;// switch off areas detection

	size_t res_len = aspose::ocr::page_settings(image_path.c_str(), buffer, len, settings);
	std::wcout << buffer;
	// ExEnd: SetLinesFiltration
	std::wcout << "SetLinesFiltration executed successfully" << L'\n';
}

void PerformOcrOnImagesInFolder() {
// ExStart: PerformOcrOnImagesInFolder
std::string image_path = "../Data/Source";

// Prepare buffer for result (in symbols, len_byte = len * sizeof(wchar_t))
const size_t len = 4096;
wchar_t buffer[len] = { 0 };

RecognitionSettings settings;//default

size_t res_len = aspose::ocr::pages_multi(image_path.c_str(), buffer, len, settings);
std::wcout << buffer;
// ExEnd: PerformOcrOnImagesInFolder
std::wcout << "PerformOcrOnImagesInFolder executed successfully" << L'\n';
}

void PerformOcrOnImagesInZip() {
	// ExStart: PerformOcrOnImagesInZip
	std::string image_path = "../Data/Source/Source.zip";

	// Prepare buffer for result (in symbols, len_byte = len * sizeof(wchar_t))
	const size_t len = 4096;
	wchar_t buffer[len] = { 0 };

	RecognitionSettings settings;//default

	size_t res_len = aspose::ocr::pages_multi(image_path.c_str(), buffer, len, settings);
	std::wcout << buffer;
	// ExEnd: PerformOcrOnImagesInZip
	std::wcout << "PerformOcrOnImagesInZip executed successfully" << L'\n';
}

void GetRectanglesParagraphs() {
	// ExStart: GetRectangles
	std::string image_path = "../Data/Source/sample.png";

	// if you want to get a paragraphs  - don't set all_image = true
	// first calculate rectangles number
	size_t res_len = aspose::ocr::get_rectangles_number(image_path.c_str(), areas_type::paragraphs, false);
	std::wcout << "paragraphs number: " << res_len << std::endl;

	// allocate memory for rectangles
	rect* rectangles = new rect[res_len];
	// be careful and set the same settings for get_rectangles_number and get_rectangles
	res_len = aspose::ocr::get_rectangles(image_path.c_str(), areas_type::paragraphs, false, rectangles, res_len);

	std::wcout << "paragraphs: " << std::endl;
	for (size_t i = 0; i < res_len; i++)
	{
		std::wcout << " x: " << rectangles[i].x << " y: " << rectangles[i].y << " width: " << rectangles[i].width << " height: " << rectangles[i].height << std::endl;
	}
	delete[] rectangles;
	// ExEnd: GetRectangles
	std::wcout << "GetRectangles executed successfully" << L'\n';
}

void GetRectanglesLines() {
	// ExStart: GetRectanglesLines
	std::string image_path = "../Data/Source/sample.png";

	// if you want to get lines in paragraphs  - set all_image = false (useful for images with columns, pictures, and difficult structure
	// in case you set all_image = true - you will get lines defined across the entire width of the image (useful for images with text only)

	// first calculate rectangles number
	size_t res_len = aspose::ocr::get_rectangles_number(image_path.c_str(), areas_type::lines, false);
	std::wcout << "lines number: " << res_len << std::endl;

	// allocate memory for rectangles
	rect* rectangles = new rect[res_len];
	// be careful and set the same settings for get_rectangles_number and get_rectangles
	res_len = aspose::ocr::get_rectangles(image_path.c_str(), areas_type::lines, false, rectangles, res_len); 

	std::wcout << "lines: " << std::endl;
	for (size_t i = 0; i < res_len; i++)
	{
		std::wcout << " x: " << rectangles[i].x << " y: " << rectangles[i].y << " width: " << rectangles[i].width << " height: " << rectangles[i].height << std::endl;
	}
	delete [] rectangles;
	// ExEnd: GetRectanglesLines
	std::wcout << "GetRectanglesLines executed successfully" << L'\n';
}

void GetChoicesForEachCharacterInResult() {
	// ExStart: GetChoicesForEachCharacterInResult
	std::string image_path = "../Data/Source/sample.png";

	// allocate memory for 5 characters choices +1 on '\0'
	const size_t len = 4096; // estimated  length of the text on the image
	wchar_t buffer[len][6] = { 0 };

	RecognitionSettings settings; // default
	size_t res_len = aspose::ocr::page_characters_choices(image_path.c_str(), buffer, len, settings);
	// res_len - the real length of the text on the image
	for (size_t i = 0; i < res_len; i++)
	{
		// print recognized letter
		std::wcout << buffer[i][0] << " - choices: ";
		// or print all cases std::wcout << buffer[i];
		for (size_t j = 1; j < 5; j++)
		{
			std::wcout << buffer[i][j] << " ";
		}
		std::wcout << std::endl;
	}

	std::wcout << std::endl;
	// ExEnd: GetChoicesForEachCharacterInResult
	std::wcout << "GetChoicesForEachCharacterInResult executed successfully" << L'\n';
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
	//PerformOcrOnImageWithoutAutomaticTextAreaDetection();
	//SpecifyAllowedCharactersWithoutAutomaticTextAreaDetection();
	//PerformOCROnImageFromUrl();
	//OCROperationWithLanguageSelection();
	//RecognizeImageIgnoredCharacters();
	//GetJson();
	//SaveDocx();
	//SavePdf();
	//SetCustomThreshold();
	//SetLinesFiltration();
	//PerformOcrOnImagesInFolder();
	//PerformOcrOnImagesInZip();
	//GetRectanglesParagraphs();
	//GetRectanglesLines();
	//GetChoicesForEachCharacterInResult();
	//Stop before exiting
	std::wcout << "\nProgram Finished. Press Enter to Exit....";
}