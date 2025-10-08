__int64 __fastcall ruff_python_formatter::other::parameters::find_parameter_separators(
        int *a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  unsigned int v6; // ebp
  unsigned int v7; // r12d
  unsigned int v8; // r15d
  __int64 v9; // r14
  __int64 result; // rax
  char v12; // r13
  __int64 v13; // r8
  __int64 v14; // r12
  int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // r11
  __int64 v20; // r8
  bool v21; // r10
  int *v22; // r9
  int v23; // r8d
  int v24; // [rsp+Ch] [rbp-9Ch]
  _OWORD v25[3]; // [rsp+10h] [rbp-98h] BYREF
  _DWORD *v26; // [rsp+40h] [rbp-68h]
  _OWORD v27[6]; // [rsp+48h] [rbp-60h] BYREF

  v9 = a4;
  result = *(_QWORD *)(a4 + 16);
  v12 = 1;
  if ( !result || (result = *(_QWORD *)(a4 + 8) + 88 * result, result == 88) )
  {
    v15 = 0;
    if ( *(_QWORD *)(a4 + 80) )
      goto LABEL_13;
  }
  else
  {
    v6 = *(_DWORD *)(result - 84);
    v13 = *(unsigned int *)(a4 + 76);
    if ( v6 > (unsigned int)v13 )
      core::panicking::panic(aAssertionFaile_0, 38LL, &off_57E490);
    v8 = (unsigned int)a2;
    v14 = a3;
    ruff_python_trivia::tokenizer::SimpleTokenizer::new(v27, a2, a3, v6, v13);
    v25[2] = v27[2];
    v25[1] = v27[1];
    v25[0] = v27[0];
    core::iter::traits::iterator::Iterator::try_fold(v27, v25);
    if ( BYTE8(v27[0]) == 90 )
      core::option::expect_failed(aTheFunctionDef, 38LL, &off_57E4A8);
    core::iter::traits::iterator::Iterator::try_fold(v27, v25);
    if ( BYTE8(v27[0]) == 90 )
      core::option::expect_failed(aTheFunctionDef, 38LL, &off_57E4C0);
    v24 = v27[0];
    result = DWORD1(v27[0]);
    v12 = 0;
    a3 = v14;
    v7 = DWORD1(v27[0]);
    v15 = 0;
    if ( *(_QWORD *)(v9 + 80) )
    {
LABEL_13:
      v18 = *(_QWORD *)(v9 + 40);
      if ( !v18 )
        goto LABEL_28;
LABEL_14:
      a2 = *(int **)(v9 + 32);
      a6 = *a2;
      v19 = *(_QWORD *)(v9 + 80);
      if ( !v19 )
        goto LABEL_29;
      goto LABEL_15;
    }
  }
  if ( !*(_QWORD *)(v9 + 64) )
    goto LABEL_13;
  v16 = *(_QWORD *)(v9 + 40);
  v26 = *(_DWORD **)(v9 + 56);
  if ( v16 )
  {
    v17 = *(_QWORD *)(v9 + 32) + 88 * v16;
    if ( v17 != 88 )
    {
      v8 = *(_DWORD *)(v17 - 84);
LABEL_20:
      v20 = *(unsigned int *)(v9 + 76);
      if ( v8 > (unsigned int)v20 )
        core::panicking::panic(aAssertionFaile_0, 38LL, &off_57E4D8);
      ruff_python_trivia::tokenizer::SimpleTokenizer::new(v27, a2, a3, v8, v20);
      core::iter::traits::iterator::Iterator::try_fold(v25, v27);
      if ( BYTE8(v25[0]) == 90 )
        core::option::expect_failed(aTheFunctionDef, 38LL, &off_57E4F0);
      a2 = (int *)v27;
      core::iter::traits::iterator::Iterator::try_fold(v25, v27);
      if ( BYTE8(v25[0]) == 90 )
        core::option::expect_failed(aTheFunctionDef, 38LL, &off_57E508);
      result = LODWORD(v25[0]);
      LODWORD(a4) = DWORD1(v25[0]);
      goto LABEL_27;
    }
  }
  v8 = v7;
  if ( !v12 )
    goto LABEL_20;
  ruff_python_trivia::tokenizer::SimpleTokenizer::new(
    v27,
    a2,
    a3,
    *(unsigned int *)(v9 + 72),
    *(unsigned int *)(v9 + 76));
  a2 = (int *)v27;
  core::iter::traits::iterator::Iterator::try_fold(v25, v27);
  if ( BYTE8(v25[0]) == 5 )
  {
    a2 = (int *)v27;
    core::iter::traits::iterator::Iterator::try_fold(v25, v27);
    if ( BYTE8(v25[0]) == 90 )
      core::option::expect_failed(aTheFunctionDef, 38LL, &off_57E538);
    result = LODWORD(v25[0]);
    LODWORD(a4) = DWORD1(v25[0]);
  }
  else
  {
    if ( BYTE8(v25[0]) == 90 )
      core::option::expect_failed(aTheFunctionDef, 38LL, &off_57E520);
    result = *(_QWORD *)&v25[0];
    a4 = HIDWORD(*(_QWORD *)&v25[0]);
  }
  v8 = *(_DWORD *)(v9 + 72);
LABEL_27:
  LODWORD(a3) = *v26;
  v15 = 1;
  v18 = *(_QWORD *)(v9 + 40);
  if ( v18 )
    goto LABEL_14;
LABEL_28:
  v19 = *(_QWORD *)(v9 + 80);
  if ( v19 )
LABEL_15:
    LODWORD(a2) = *(_DWORD *)v19;
LABEL_29:
  v21 = (v19 | v18) != 0;
  if ( !v19 )
    LODWORD(a2) = result;
  if ( v18 )
    LODWORD(a2) = a6;
  v22 = *(int **)(v9 + 88);
  if ( v22 )
  {
    v23 = (int)a2;
    if ( !(_BYTE)v15 )
      v23 = *v22;
    if ( v21 )
      v23 = (int)a2;
  }
  else
  {
    v23 = (int)a2;
    if ( !((unsigned __int8)v15 | v21) )
      v23 = *(_DWORD *)(v9 + 76);
  }
  *a1 = (unsigned __int8)v12 ^ 1;
  a1[1] = v24;
  a1[2] = v7;
  a1[3] = v6;
  a1[4] = v23;
  a1[5] = v15;
  a1[6] = result;
  a1[7] = a4;
  a1[8] = v8;
  a1[9] = a3;
  return result;
}