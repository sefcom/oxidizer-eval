__int64 __fastcall uu_dd::Input::fill_consecutive(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v9; // r13
  __int64 v10; // rbp
  unsigned __int64 v11; // r14
  __int64 v12; // rdx
  __int128 v13; // [rsp+18h] [rbp-60h] BYREF
  __int64 v14; // [rsp+28h] [rbp-50h]
  __int128 v15; // [rsp+30h] [rbp-48h]

  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 112LL);
  if ( !v6 )
  {
    *(_QWORD *)&v13 = &off_13D1A0;
    *((_QWORD *)&v13 + 1) = 1LL;
    v14 = 8LL;
    v15 = 0LL;
    core::panicking::panic_fmt(&v13, &off_13DD80, a3, a4, a5, a6);
  }
  v13 = *(_OWORD *)(a3 + 8);
  v14 = v6;
  result = <core::slice::iter::ChunksMut<T> as core::iter::traits::iterator::Iterator>::next(&v13);
  if ( !result )
  {
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    goto LABEL_12;
  }
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  while ( 1 )
  {
    if ( (<uu_dd::Input as std::io::Read>::read(a2, result) & 1) != 0 )
    {
      result = a1;
      *(_QWORD *)(a1 + 8) = v12;
      *(_QWORD *)a1 = 1LL;
      return result;
    }
    result = *(_QWORD *)(a2 + 8);
    if ( *(_QWORD *)(result + 112) != v12 )
      break;
    ++v9;
LABEL_5:
    v11 += v12;
    result = <core::slice::iter::ChunksMut<T> as core::iter::traits::iterator::Iterator>::next(&v13);
    if ( !result )
      goto LABEL_11;
  }
  if ( v12 )
  {
    ++v10;
    goto LABEL_5;
  }
LABEL_11:
  if ( v11 > *(_QWORD *)(a3 + 16) )
    goto LABEL_13;
LABEL_12:
  *(_QWORD *)(a3 + 16) = v11;
LABEL_13:
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 16) = v10;
  *(_QWORD *)(a1 + 24) = v11;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = 0LL;
  return result;
}