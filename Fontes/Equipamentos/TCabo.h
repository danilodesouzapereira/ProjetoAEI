//---------------------------------------------------------------------------
#ifndef TCaboH
#define TCaboH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
//---------------------------------------------------------------------------
class TCabo : public TEqpto
{
private:
	int TipoEqpto;

public:
	__fastcall TCabo(String Codigo);
	__fastcall ~TCabo();

};
//---------------------------------------------------------------------------
#endif
