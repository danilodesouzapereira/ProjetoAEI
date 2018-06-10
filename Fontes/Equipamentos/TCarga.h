//---------------------------------------------------------------------------
#ifndef TCargaH
#define TCargaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
//---------------------------------------------------------------------------
class TCarga : public TEqpto
{
private:
	int TipoEqpto;

public:

	__fastcall TCarga(String Codigo);
	__fastcall ~TCarga();
};
//---------------------------------------------------------------------------
#endif
