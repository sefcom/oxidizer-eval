_QWORD *__fastcall uu_uniq::Uniq::skip_fields(_QWORD *a1, _QWORD *a2, unsigned __int8 *a3, size_t a4)
{
  unsigned __int8 *v5; // rbx
  __int64 v6; // r13
  unsigned __int8 *v7; // r12
  char v8; // dl
  __int64 v9; // r15
  __int64 v10; // rbp
  unsigned __int8 *v11; // rax
  unsigned __int64 v12; // rcx
  char v13; // r12
  __int64 v14; // r15
  void *v15; // r13
  __int64 v16; // rsi
  __int64 v18; // [rsp+10h] [rbp-78h]
  unsigned __int8 *v19; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int8 *v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int8 *v22; // [rsp+30h] [rbp-58h]
  __int64 v23; // [rsp+38h] [rbp-50h]
  __int64 v24; // [rsp+40h] [rbp-48h] BYREF
  __int64 v25; // [rsp+48h] [rbp-40h]
  void *dest; // [rsp+50h] [rbp-38h]

  v5 = a3;
  if ( *a2 != 1LL )
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v24, a4, 0LL);
    v14 = v25;
    if ( v24 )
      alloc::raw_vec::handle_error(v25, dest);
    v15 = dest;
    core::intrinsics::copy_nonoverlapping::precondition_check(v5, dest, 1LL, 1LL, a4);
    memcpy(v15, v5, a4);
    *a1 = v14;
    a1[1] = v15;
    a1[2] = a4;
    return a1;
  }
  v6 = a2[1];
  v7 = &a3[a4];
  v20 = &a3[a4];
  if ( !v6 )
  {
LABEL_22:
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(a1, v5, v7);
    v16 = v18;
    if ( !v6 )
      return a1;
    goto LABEL_23;
  }
  v8 = 1;
  v9 = 0LL;
  v10 = 0x100003600LL;
LABEL_4:
  if ( v5 != v7 )
  {
    ++v9;
    v11 = v5;
    while ( v11 )
    {
      v12 = *v11;
      if ( v12 > 0x20 || !_bittest64(&v10, v12) )
      {
        v13 = v8;
        v19 = v11 + 1;
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v21, &v19, 0LL);
        if ( !((v18 == 0) | v13 & 1) )
          _rust_dealloc(v5, v18, 1LL);
        v18 = v21;
        v5 = v22;
        if ( !v23 )
        {
          *a1 = 0LL;
          a1[1] = 1LL;
          a1[2] = 0LL;
          v16 = v18;
          if ( v18 )
            goto LABEL_24;
          return a1;
        }
        if ( !v22 || v23 < 0 )
          core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
        v7 = &v22[v23];
        v19 = v22;
        v20 = &v22[v23];
        v8 = 0;
        if ( v9 != v6 )
          goto LABEL_4;
        goto LABEL_22;
      }
      if ( ++v11 == v7 )
        break;
    }
  }
  *a1 = 0LL;
  a1[1] = 1LL;
  a1[2] = 0LL;
  v16 = v18;
  if ( (v8 & 1) == 0 )
  {
LABEL_23:
    if ( v16 )
LABEL_24:
      _rust_dealloc(v5, v16, 1LL);
  }
  return a1;
}
