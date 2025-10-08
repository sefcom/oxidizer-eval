__int64 __fastcall ruff_python_formatter::statement::suite::stub_suite_can_omit_empty_line(
        signed __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  signed __int64 v4; // r13
  signed __int64 v5; // rbp
  __int64 (__fastcall *v7)(__int64); // rbx
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // ebp
  __int64 v12; // rax
  signed __int64 v13; // rcx
  bool v14; // r13
  bool v15; // al
  signed __int64 v16; // r12
  signed __int64 v17; // r15
  __int64 v18; // rax

  if ( __OFSUB__(0LL, *a1) )
  {
    v4 = a1[5];
    v5 = a1[6];
    v7 = *(__int64 (__fastcall **)(__int64))(a4 + 48);
    v8 = v7(a3);
    if ( (unsigned __int8)ruff_python_formatter::statement::suite::contains_only_an_ellipsis(
                            v4,
                            v5,
                            *(_QWORD *)(v8 + 16)) )
    {
      if ( *a2 == 0x8000000000000000LL )
      {
        v9 = ruff_python_formatter::statement::suite::stub_suite_can_omit_empty_line::{{closure}}(a3, a4, a2 + 1);
        v10 = a3;
        v11 = v9;
      }
      else
      {
        v11 = 0;
        v10 = a3;
      }
    }
    else
    {
      v11 = 0;
      v10 = a3;
    }
    v12 = v7(v10);
  }
  else
  {
    v7 = *(__int64 (__fastcall **)(__int64))(a4 + 48);
    v11 = 0;
    v12 = v7(a3);
  }
  v13 = *a1;
  if ( *(_BYTE *)(v12 + 58) )
  {
    v14 = 0;
    v15 = 0;
    if ( v13 <= (__int64)0x8000000000000017LL )
      goto LABEL_20;
  }
  else
  {
    if ( v13 <= (__int64)0x8000000000000017LL )
    {
      v14 = 0;
LABEL_19:
      v15 = 0;
      goto LABEL_20;
    }
    v14 = *a2 == 0x8000000000000000LL && a2[3] != 0LL;
  }
  v16 = a1[4];
  v17 = a1[5];
  v18 = v7(a3);
  if ( !(unsigned __int8)ruff_python_formatter::statement::suite::contains_only_an_ellipsis(
                           v16,
                           v17,
                           *(_QWORD *)(v18 + 16)) )
    goto LABEL_19;
  v15 = *a2 > (__int64)0x8000000000000017LL;
LABEL_20:
  LOBYTE(v11) = v15 | v14 | v11;
  return v11;
}