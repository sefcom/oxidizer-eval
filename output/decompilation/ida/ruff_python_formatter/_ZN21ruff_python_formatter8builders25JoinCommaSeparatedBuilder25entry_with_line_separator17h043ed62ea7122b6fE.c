__int64 __fastcall ruff_python_formatter::builders::JoinCommaSeparatedBuilder::entry_with_line_separator(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // eax
  char v5; // [rsp+Fh] [rbp-59h] BYREF
  int v6; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v7[20]; // [rsp+14h] [rbp-54h]
  _QWORD v8[8]; // [rsp+28h] [rbp-40h] BYREF

  v5 = 0;
  v3 = *(_DWORD *)(a1 + 8);
  v8[0] = *(_QWORD *)(a1 + 32);
  v8[1] = a1;
  v8[2] = &v5;
  v8[3] = a2;
  v8[4] = a3;
  v8[5] = &unk_57E6A0;
  if ( v3 == 4 )
  {
    ruff_python_formatter::builders::JoinCommaSeparatedBuilder::entry_with_line_separator::{{closure}}(&v6, v8);
  }
  else
  {
    v6 = v3;
    *(_OWORD *)v7 = *(_OWORD *)(a1 + 12);
    *(_DWORD *)&v7[16] = *(_DWORD *)(a1 + 28);
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)&v7[12];
  *(_DWORD *)(a1 + 8) = v6;
  *(_QWORD *)(a1 + 12) = *(_QWORD *)v7;
  *(_DWORD *)(a1 + 20) = *(_DWORD *)&v7[8];
  return a1;
}