__int64 __fastcall ruff_python_formatter::comments::placement::handle_trailing_binary_like_comment(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned int v11; // edx
  unsigned int v12; // ebp
  unsigned int v13; // eax
  char v14; // cl
  int v15; // edx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int128 v19; // [rsp+0h] [rbp-98h] BYREF
  __int64 v20; // [rsp+10h] [rbp-88h] BYREF
  char v21; // [rsp+18h] [rbp-80h]
  _QWORD v22[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v23[48]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v24[56]; // [rsp+60h] [rbp-38h] BYREF

  v7 = *((_QWORD *)a2 + 2);
  result = *((_QWORD *)a2 + 4);
  if ( result == 94 || v7 == 94 )
    goto LABEL_6;
  v9 = *((_QWORD *)a2 + 3);
  v10 = *((_QWORD *)a2 + 5);
  *(_QWORD *)&v19 = v7;
  *((_QWORD *)&v19 + 1) = v9;
  v22[0] = result;
  v22[1] = v10;
  <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v19);
  v12 = v11;
  v13 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(v22);
  if ( v12 > v13 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D1F8);
  ruff_python_trivia::tokenizer::SimpleTokenizer::new(v23, a3, a4, v12, v13);
  v24[0] = 0;
  core::iter::traits::iterator::Iterator::try_fold(&v20, v23, v24);
  if ( v21 == 90 )
    core::option::expect_failed(aExpectedAToken, 33LL, &off_57D210);
  result = *((unsigned int *)a2 + 17);
  if ( (unsigned int)result < (unsigned int)v20 )
  {
    v14 = *((_BYTE *)a2 + 72);
    v15 = *((_DWORD *)a2 + 16);
    *(_OWORD *)(a1 + 8) = v19;
    *(_DWORD *)(a1 + 24) = v15;
    *(_DWORD *)(a1 + 28) = result;
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 33) = v14;
    *(_QWORD *)a1 = 95LL;
  }
  else
  {
LABEL_6:
    *(_OWORD *)(a1 + 64) = a2[4];
    v16 = *a2;
    v17 = a2[1];
    v18 = a2[2];
    *(_OWORD *)(a1 + 48) = a2[3];
    *(_OWORD *)(a1 + 32) = v18;
    *(_OWORD *)(a1 + 16) = v17;
    *(_OWORD *)a1 = v16;
  }
  return result;
}