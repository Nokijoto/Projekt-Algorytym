#include "XLS.h"
#include <Aspose.Cells.h>

XLS::XLS()
{

	try
	{
		// Create a License object
		intrusive_ptr<License> license = new License();

		// Set the license of Aspose.Cells to avoid the evaluation limitations
		license->SetLicense(new String("Aspose.Cells.lic"));

		// Instantiate a Workbook object that represents Excel file.
		intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook();

		// When you create a new workbook, a default "Sheet1" is added to the workbook.
		intrusive_ptr <IWorksheet> sheet = wb->GetIWorksheets()->GetObjectByIndex(0);

		// Access the "A1" cell in the sheet.
		intrusive_ptr <ICell> cell = sheet->GetICells()->GetObjectByIndex(new String("A1"));

		// Input the "Hello World!" text into the "A1" cell
		cell->PutValue((StringPtr)(new String("Hello World!")));

		// Save the Excel file.
		wb->Save(new String("MyBook_out.xlsx"));
	}
	catch (Exception& ex)
	{
		Console::WriteLine(ex.GetMessageExp());
	}
//{
//	/*create a new workbook*/
//	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook();
//
//	/*get the first worksheet*/
//	intrusive_ptr<IWorksheetCollection> wsc = wb->GetIWorksheets();
//	intrusive_ptr<IWorksheet> ws = wsc->GetObjectByIndex(0);
//
//	/*get cell(0,0)*/
//	intrusive_ptr<ICells> cells = ws->GetICells();
//	intrusive_ptr<ICell> cell = cells->GetObjectByIndex(0, 0);
//
//	/*write "Hello World" to cell(0,0) of the first sheet*/
//	intrusive_ptr<String> str = new String("Hello World!");
//	cell->PutValue(str);
//
//	/*save this workbook to resultFile folder*/
//	wb->Save(resultPath->StringAppend(new String("workbook.xlsx")));


}
