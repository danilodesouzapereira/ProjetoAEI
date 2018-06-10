//---------------------------------------------------------------------------
#ifndef TEqptoH
#define TEqptoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
//---------------------------------------------------------------------------
#include "..\Enums.h"
//---------------------------------------------------------------------------
class TEqpto
{
private:
	int    TipoEqpto;
	String Codigo;

public:

	__fastcall TEqpto(String Codigo);
	__fastcall ~TEqpto();

	String __fastcall GetCodigo();
	int    __fastcall GetTipoEqpto();
};
//---------------------------------------------------------------------------
#endif
