__int64 __fastcall rg::flags::hiargs::HiArgs::printer(_QWORD *a1, __int64 a2, char a3, __int64 a4)
{
  unsigned __int8 v4; // al
  __int64 result; // rax

  if ( *(_BYTE *)(a2 + 906) )
  {
    v4 = (a3 == 2) | 4;
LABEL_3:
    result = rg::flags::hiargs::HiArgs::printer_summary(a1 + 1, a2, a4, v4);
    *a1 = 2LL;
  }
  else
  {
    switch ( a3 )
    {
      case 0:
        result = rg::flags::hiargs::HiArgs::printer_standard(a1, a2, a4);
        break;
      case 1:
        v4 = 2;
        goto LABEL_3;
      case 2:
        v4 = 3;
        goto LABEL_3;
      case 3:
        v4 = 0;
        goto LABEL_3;
      case 4:
        v4 = 1;
        goto LABEL_3;
      case 5:
        result = rg::flags::hiargs::HiArgs::printer_json(a1 + 1, a2, a4);
        *a1 = 3LL;
        break;
    }
  }
  return result;
}