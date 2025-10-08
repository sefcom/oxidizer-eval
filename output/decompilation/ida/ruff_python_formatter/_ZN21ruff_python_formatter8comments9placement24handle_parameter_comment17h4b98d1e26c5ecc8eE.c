__int64 __fastcall ruff_python_formatter::comments::placement::handle_parameter_comment(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  char v7; // cl
  int v8; // edx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  char v12; // [rsp+Fh] [rbp-49h] BYREF
  __int64 v13; // [rsp+10h] [rbp-48h] BYREF
  char v14; // [rsp+18h] [rbp-40h]

  if ( *(_QWORD *)(a3 + 8) )
  {
    ruff_python_trivia::tokenizer::first_non_trivia_token(&v13, *(unsigned int *)(a3 + 20), a4, a5);
    if ( v14 == 90 )
      core::option::expect_failed(aAAnnotatedPara, 85LL, &off_57D168);
    v12 = v14;
    if ( v14 != 12 )
    {
      v13 = 0LL;
      core::panicking::assert_failed(0LL, &v12, &unk_8A9B3, &v13, &off_57D180);
    }
    result = *((unsigned int *)a2 + 16);
    if ( (unsigned int)result < (unsigned int)v13 )
      goto LABEL_5;
  }
  else
  {
    result = *((unsigned int *)a2 + 16);
    if ( (unsigned int)result < *(_DWORD *)(a3 + 16) )
    {
LABEL_5:
      v7 = *((_BYTE *)a2 + 72);
      v8 = *((_DWORD *)a2 + 17);
      *(_QWORD *)(a1 + 8) = 80LL;
      *(_QWORD *)(a1 + 16) = a3;
      *(_DWORD *)(a1 + 24) = result;
      *(_DWORD *)(a1 + 28) = v8;
      *(_BYTE *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 33) = v7;
      *(_QWORD *)a1 = 94LL;
      return result;
    }
  }
  *(_OWORD *)(a1 + 64) = a2[4];
  v9 = *a2;
  v10 = a2[1];
  v11 = a2[2];
  *(_OWORD *)(a1 + 48) = a2[3];
  *(_OWORD *)(a1 + 32) = v11;
  *(_OWORD *)(a1 + 16) = v10;
  *(_OWORD *)a1 = v9;
  return result;
}