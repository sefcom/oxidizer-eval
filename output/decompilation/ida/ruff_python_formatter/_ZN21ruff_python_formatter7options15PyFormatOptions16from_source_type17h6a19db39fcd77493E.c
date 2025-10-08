__int64 __fastcall ruff_python_formatter::options::PyFormatOptions::from_source_type(__int64 a1, char a2)
{
  __int16 v3; // [rsp+8h] [rbp-20h] BYREF
  int v4; // [rsp+Ah] [rbp-1Eh]
  char v5; // [rsp+Eh] [rbp-1Ah]
  int v6; // [rsp+10h] [rbp-18h]
  char v7; // [rsp+14h] [rbp-14h]
  char v8; // [rsp+15h] [rbp-13h]
  char v9; // [rsp+16h] [rbp-12h]

  <ruff_python_formatter::options::PyFormatOptions as core::default::Default>::default(&v3);
  *(_BYTE *)(a1 + 7) = a2;
  *(_WORD *)a1 = v3;
  *(_BYTE *)(a1 + 6) = v5;
  *(_DWORD *)(a1 + 8) = v6;
  *(_BYTE *)(a1 + 12) = v7;
  *(_BYTE *)(a1 + 13) = v8;
  *(_DWORD *)(a1 + 2) = v4;
  *(_BYTE *)(a1 + 14) = v9;
  return a1;
}