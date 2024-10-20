__int64 __fastcall uu_ptx::format_tex_field(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  _QWORD *v5; // r15
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  __int64 v9; // [rsp+10h] [rbp-48h]
  __int64 v10; // [rsp+18h] [rbp-40h]
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]

  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v8, a2, a2 + a3);
  v3 = v9;
  v4 = v10;
  alloc::str::join_generic_copy(&v11, v9, v10, 1LL, 0LL);
  *(_QWORD *)(a1 + 16) = v12;
  *(_OWORD *)a1 = v11;
  if ( v4 )
  {
    v5 = (_QWORD *)(v3 + 8);
    do
    {
      v6 = *(v5 - 1);
      if ( v6 )
        _rust_dealloc(*v5, v6, 1LL);
      v5 += 3;
      --v4;
    }
    while ( v4 );
  }
  result = v8;
  if ( v8 )
    return _rust_dealloc(v3, 24 * v8, 8LL);
  return result;
}
