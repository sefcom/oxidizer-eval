__int64 __fastcall bat::printer::Colors::colored(__int64 a1, char a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 result; // rax

  result = 60946LL;
  if ( (a2 & 1) != 0 )
    result = bat::terminal::to_ansi_color(a3, a4);
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 9) = result;
  *(_DWORD *)(a1 + 13) = 21;
  *(_QWORD *)(a1 + 17) = 0LL;
  *(_BYTE *)(a1 + 25) = 0;
  *(_DWORD *)(a1 + 26) = result;
  *(_DWORD *)(a1 + 30) = 21;
  *(_BYTE *)(a1 + 34) = 1;
  *(_QWORD *)(a1 + 35) = 0LL;
  *(_QWORD *)(a1 + 43) = 0x1500000015LL;
  *(_QWORD *)(a1 + 51) = 0LL;
  *(_BYTE *)(a1 + 59) = 0;
  *(_QWORD *)(a1 + 60) = 0x1500000004LL;
  *(_QWORD *)(a1 + 68) = 0LL;
  *(_BYTE *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 77) = 0x1500000002LL;
  *(_QWORD *)(a1 + 85) = 0LL;
  *(_BYTE *)(a1 + 93) = 0;
  *(_QWORD *)(a1 + 94) = 0x1500000006LL;
  *(_QWORD *)(a1 + 102) = 0LL;
  *(_BYTE *)(a1 + 110) = 0;
  *(_DWORD *)(a1 + 111) = result;
  *(_DWORD *)(a1 + 115) = 21;
  return result;
}