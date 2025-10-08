__int64 __fastcall ruff_python_formatter::comments::placement::handle_unary_op_comment(
        __int64 a1,
        __int128 *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v8; // ebp
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int64 result; // rax
  unsigned int v12; // ecx
  int v13; // edx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v17; // [rsp+Ch] [rbp-7Ch] BYREF
  int v18; // [rsp+14h] [rbp-74h]
  __int64 v19; // [rsp+18h] [rbp-70h] BYREF
  int v20; // [rsp+20h] [rbp-68h]
  _BYTE v21[96]; // [rsp+28h] [rbp-60h] BYREF

  v8 = *((_DWORD *)a3 + 2);
  v9 = <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(*a3);
  if ( v8 > v9 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D390);
  ruff_python_trivia::tokenizer::SimpleTokenizer::new(v21, a4, a5, v8, v9);
  core::iter::traits::iterator::Iterator::try_fold(&v17, v21);
  core::iter::traits::iterator::Iterator::try_fold(&v17, v21);
  if ( (_BYTE)v18 == 90 )
  {
    LOBYTE(v20) = 90;
  }
  else
  {
    v20 = v18;
    v19 = v17;
  }
  v10 = <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(*a3);
  result = core::option::Option<T>::map_or(&v19, v10);
  v12 = *((_DWORD *)a2 + 17);
  if ( v12 >= (unsigned int)result )
  {
    *(_OWORD *)(a1 + 64) = a2[4];
    v14 = *a2;
    v15 = a2[1];
    v16 = a2[2];
    *(_OWORD *)(a1 + 48) = a2[3];
    *(_OWORD *)(a1 + 32) = v16;
    *(_OWORD *)(a1 + 16) = v15;
    *(_OWORD *)a1 = v14;
  }
  else
  {
    result = *((unsigned __int8 *)a2 + 72);
    v13 = *((_DWORD *)a2 + 16);
    *(_QWORD *)(a1 + 8) = 30LL;
    *(_QWORD *)(a1 + 16) = a3;
    *(_DWORD *)(a1 + 24) = v13;
    *(_DWORD *)(a1 + 28) = v12;
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 33) = result;
    *(_QWORD *)a1 = 94LL;
  }
  return result;
}