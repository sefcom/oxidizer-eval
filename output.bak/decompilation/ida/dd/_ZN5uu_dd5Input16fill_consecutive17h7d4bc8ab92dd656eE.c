__int64 __fastcall uu_dd::Input::fill_consecutive(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 result; // rax
  __int64 v9; // rdx
  __int128 v11; // [rsp+8h] [rbp-60h] BYREF
  __int64 v12; // [rsp+18h] [rbp-50h]
  __int128 v13; // [rsp+20h] [rbp-48h]

  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 112LL);
  if ( !v3 )
  {
    *(_QWORD *)&v11 = &off_1610A0;
    *((_QWORD *)&v11 + 1) = 1LL;
    v12 = 8LL;
    v13 = 0LL;
    core::panicking::panic_fmt(&v11, &off_1610B0);
  }
  v11 = *(_OWORD *)(a3 + 8);
  v12 = v3;
  v4 = <core::slice::iter::ChunksMut<T> as core::iter::traits::iterator::Iterator>::next(&v11);
  if ( v4 )
  {
    v5 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    while ( 1 )
    {
      result = <uu_dd::Input as std::io::Read>::read(a2, v4);
      if ( result )
        break;
      if ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 112LL) == v9 )
      {
        ++v5;
      }
      else
      {
        if ( !v9 )
          goto LABEL_11;
        ++v6;
      }
      v7 += v9;
      v4 = <core::slice::iter::ChunksMut<T> as core::iter::traits::iterator::Iterator>::next(&v11);
      if ( !v4 )
        goto LABEL_11;
    }
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)a1 = 1LL;
  }
  else
  {
    v7 = 0LL;
    v6 = 0LL;
    v5 = 0LL;
LABEL_11:
    result = alloc::vec::Vec<T,A>::truncate(a3, v7);
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 24) = v7;
    *(_DWORD *)(a1 + 32) = 0;
    *(_QWORD *)a1 = 0LL;
  }
  return result;
}
