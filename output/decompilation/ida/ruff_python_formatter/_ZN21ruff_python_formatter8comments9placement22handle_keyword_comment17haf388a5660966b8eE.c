__int64 __fastcall ruff_python_formatter::comments::placement::handle_keyword_comment(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rdi
  unsigned int v9; // eax
  unsigned int v10; // ebp
  unsigned __int8 v11; // al
  __int64 result; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  int v16; // ecx
  _BYTE v17[96]; // [rsp+8h] [rbp-60h] BYREF

  v8 = 0LL;
  if ( *(_BYTE *)(a3 + 111) != 0xDA )
    v8 = a3 + 80;
  v9 = core::option::Option<T>::map_or(v8, *(unsigned int *)(a3 + 120));
  v10 = *((_DWORD *)a2 + 16);
  if ( v9 > v10 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D258);
  ruff_python_trivia::tokenizer::SimpleTokenizer::new(v17, a4, a5, v9, v10);
  v11 = core::iter::traits::iterator::Iterator::try_fold(v17);
  result = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v11, 1LL);
  if ( (_BYTE)result )
  {
    *(_OWORD *)(a1 + 64) = a2[4];
    v13 = *a2;
    v14 = a2[1];
    v15 = a2[2];
    *(_OWORD *)(a1 + 48) = a2[3];
    *(_OWORD *)(a1 + 32) = v15;
    *(_OWORD *)(a1 + 16) = v14;
    *(_OWORD *)a1 = v13;
  }
  else
  {
    result = *((unsigned __int8 *)a2 + 72);
    v16 = *((_DWORD *)a2 + 17);
    *(_OWORD *)(a1 + 8) = *a2;
    *(_DWORD *)(a1 + 24) = v10;
    *(_DWORD *)(a1 + 28) = v16;
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 33) = result;
    *(_QWORD *)a1 = 94LL;
  }
  return result;
}