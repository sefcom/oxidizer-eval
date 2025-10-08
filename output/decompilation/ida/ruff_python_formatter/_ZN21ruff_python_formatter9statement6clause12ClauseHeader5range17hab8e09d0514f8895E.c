__int64 __fastcall ruff_python_formatter::statement::clause::ClauseHeader::range(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  int v9; // edx
  unsigned int v10; // ebp
  __int64 v11; // rax
  char v12; // cl
  __int64 v13; // rcx
  char v14; // cl
  bool v15; // zf
  int v16; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v17; // [rsp+4h] [rbp-54h]
  unsigned int v18; // [rsp+8h] [rbp-50h] BYREF
  __int64 v19; // [rsp+Ch] [rbp-4Ch]
  __int64 v20; // [rsp+14h] [rbp-44h]
  int v21; // [rsp+1Ch] [rbp-3Ch]
  unsigned int v22; // [rsp+24h] [rbp-34h]

  ruff_python_formatter::statement::clause::ClauseHeader::first_keyword_range(&v18);
  result = v18;
  v9 = v19;
  v10 = HIDWORD(v19);
  if ( v18 == 4 )
  {
    v22 = v19;
    v16 = 0;
    ruff_python_formatter::statement::clause::ClauseHeader::visit(a2, a3, &v16);
    v11 = 12LL;
    if ( (unsigned __int64)(a2 - 3) < 0xC )
      v11 = a2 - 3;
    switch ( v11 )
    {
      case 0LL:
      case 1LL:
        if ( (v16 & 1) != 0 )
          v10 = v17;
        else
          v10 = *(_DWORD *)(a3 + 52);
        break;
      case 2LL:
      case 3LL:
      case 4LL:
      case 6LL:
      case 7LL:
      case 8LL:
      case 9LL:
      case 10LL:
      case 11LL:
      case 12LL:
        v12 = v16;
        LODWORD(v11) = v17;
        goto LABEL_6;
      case 5LL:
        v14 = *(_BYTE *)(a3 + 55);
        if ( v14 != -38 )
          LODWORD(v11) = *(_DWORD *)(a3 + 28);
        v15 = v14 == -38;
        if ( v14 == -38 )
          LODWORD(v11) = v17;
        v12 = 1;
        if ( v15 )
          v12 = v16;
LABEL_6:
        if ( (v12 & 1) != 0 )
          v10 = v11;
        break;
    }
    ruff_python_formatter::statement::clause::colon_range(&v18, v10, a4, a5);
    result = v18;
    if ( v18 == 4 )
    {
      result = HIDWORD(v19);
      if ( v22 > HIDWORD(v19) )
        core::panicking::panic(aAssertionFaile_0, 38LL, &off_57E7B0);
      *(_DWORD *)(a1 + 4) = v22;
      *(_DWORD *)(a1 + 8) = result;
      *(_DWORD *)a1 = 4;
    }
    else
    {
      *(_DWORD *)(a1 + 20) = v21;
      *(_QWORD *)(a1 + 12) = v20;
      v13 = v19;
      *(_DWORD *)a1 = result;
      *(_QWORD *)(a1 + 4) = v13;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 20) = v21;
    *(_QWORD *)(a1 + 12) = v20;
    *(_DWORD *)a1 = result;
    *(_DWORD *)(a1 + 4) = v9;
    *(_DWORD *)(a1 + 8) = v10;
  }
  return result;
}