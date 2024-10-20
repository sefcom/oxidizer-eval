__int64 __fastcall uu_pr::split_lines_if_form_feed::{{closure}}(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r13
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rcx
  char *v9; // rbx
  void *v10; // rbp
  void *v11; // r14
  void *v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  char v19; // bp
  char *v20; // rbx
  __int64 v21; // rbp
  char *v22; // r14
  char *v23; // r15
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  _QWORD *v30; // rbx
  __int64 v32; // [rsp+0h] [rbp-1E8h] BYREF
  void *dest[2]; // [rsp+8h] [rbp-1E0h] BYREF
  char *v34; // [rsp+18h] [rbp-1D0h] BYREF
  void *src; // [rsp+20h] [rbp-1C8h]
  size_t n; // [rsp+28h] [rbp-1C0h]
  __int128 v37; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v38; // [rsp+40h] [rbp-1A8h]
  void *v39; // [rsp+48h] [rbp-1A0h]
  _QWORD *v40; // [rsp+50h] [rbp-198h]
  __int64 v41; // [rsp+58h] [rbp-190h]
  char *v42; // [rsp+60h] [rbp-188h] BYREF
  __int128 v43; // [rsp+68h] [rbp-180h]
  _BYTE v44[48]; // [rsp+78h] [rbp-170h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-140h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-138h]
  __int64 v47; // [rsp+B8h] [rbp-130h] BYREF
  __int128 v48; // [rsp+C0h] [rbp-128h]
  __int128 v49; // [rsp+D0h] [rbp-118h]
  __int64 v50; // [rsp+E0h] [rbp-108h]
  __int128 v51; // [rsp+E8h] [rbp-100h]
  _BYTE v52[48]; // [rsp+F8h] [rbp-F0h] BYREF
  __int64 v53; // [rsp+128h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+130h] [rbp-B8h]
  __int64 v55; // [rsp+138h] [rbp-B0h] BYREF
  __int128 v56; // [rsp+140h] [rbp-A8h]
  __int128 v57; // [rsp+150h] [rbp-98h]
  __int64 v58; // [rsp+160h] [rbp-88h]
  _QWORD v59[3]; // [rsp+168h] [rbp-80h] BYREF
  __int128 v60; // [rsp+180h] [rbp-68h]
  _QWORD v61[3]; // [rsp+190h] [rbp-58h] BYREF
  __int128 v62; // [rsp+1A8h] [rbp-40h]

  v2 = a1;
  *(_QWORD *)&v37 = 0LL;
  *((_QWORD *)&v37 + 1) = 8LL;
  v38 = 0LL;
  v34 = 0LL;
  src = &dword_0 + 1;
  n = 0LL;
  v3 = a2[1];
  v4 = a2[2];
  core::slice::raw::from_raw_parts::precondition_check(v3, 1LL, 1LL, v4);
  v40 = a2;
  if ( !v4 )
  {
    v20 = 0LL;
    v6 = 0LL;
    goto LABEL_34;
  }
  v5 = v3 + v4;
  v6 = 0LL;
  v41 = a1;
  do
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( !(v7 + v3) )
      {
        v5 = 0LL;
LABEL_33:
        v20 = (char *)n;
        v6 = v5 - v3;
        v2 = v41;
        goto LABEL_34;
      }
      v42 = (char *)(v7 + v3);
      if ( !(unsigned __int8)core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(&v42, &off_2C8010) )
        break;
      if ( v7 == -1 )
        core::panicking::panic_const::panic_const_add_overflow(&off_2C8030);
      v8 = v3 + v7++ + 1;
      if ( v8 == v5 )
        goto LABEL_33;
    }
    v9 = (char *)n;
    if ( !v7 )
      goto LABEL_27;
    v10 = src;
    if ( !src || (n & 0x8000000000000000LL) != 0LL )
      core::panicking::panic_nounwind(anon_965c7e9797bf363381d1deac3dc9c421_2_llvm_809249241883912370, 162LL);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v32, n, 0LL);
    v39 = dest[0];
    if ( v32 )
      alloc::raw_vec::handle_error(v39, dest[1]);
    v11 = dest[1];
    core::intrinsics::copy_nonoverlapping::precondition_check(v10, dest[1], 1LL, 1LL, v9);
    memcpy(v11, v10, (size_t)v9);
    if ( !v11 )
      goto LABEL_50;
    v12 = v39;
    core::str::converts::from_utf8(&v32, v11, v9);
    if ( v32 )
    {
      if ( v12 != (void *)0x8000000000000000LL )
      {
        v59[0] = v12;
        v59[1] = v11;
        v59[2] = v9;
        v60 = *(_OWORD *)dest;
        core::result::unwrap_failed(
          anon_7c75ec29d226220b36fc1f3bbd3b01ef_1_llvm_17389174869910011146,
          43LL,
          v59,
          &off_2C7A68,
          &off_2C8018);
      }
      v12 = v11;
      v11 = v9;
      v9 = (char *)dest[0];
    }
    v53 = 0LL;
    v57 = 0LL;
    v56 = 0LL;
    v54 = 1LL;
    v55 = 0LL;
    v58 = 0LL;
    memset(&v52[8], 0, 32);
    *(_QWORD *)&v51 = v12;
    *((_QWORD *)&v51 + 1) = v11;
    *(_QWORD *)v52 = v9;
    *(_QWORD *)&v52[40] = v7;
    v13 = v38;
    if ( v38 == (_QWORD)v37 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v37);
    v14 = *((_QWORD *)&v37 + 1);
    v15 = v13 << 6;
    v16 = v51;
    v17 = *(_OWORD *)v52;
    v18 = *(_OWORD *)&v52[16];
    *(_OWORD *)(*((_QWORD *)&v37 + 1) + v15 + 48) = *(_OWORD *)&v52[32];
    *(_OWORD *)(v14 + v15 + 32) = v18;
    *(_OWORD *)(v14 + v15 + 16) = v17;
    *(_OWORD *)(v14 + v15) = v16;
    v38 = v13 + 1;
    v6 = 0LL;
    if ( v53 == 0x8000000000000000LL )
    {
      std::io::error::repr_bitpacked::decode_repr(&v32, v54);
      if ( (unsigned __int8)v32 >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(dest);
    }
    else
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(&v32, &v53);
      if ( dest[0] )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v55, v32, dest[0], dest[1]);
    }
    if ( !src || (n & 0x8000000000000000LL) != 0LL )
      core::panicking::panic_nounwind(anon_7bf8453590977c7a3fe5e2865e6df318_13_llvm_976352915506230263, 166LL);
    n = 0LL;
    v9 = 0LL;
LABEL_27:
    v19 = *v42;
    if ( v9 == v34 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v34);
    v3 += v7 + 1;
    v9[(_QWORD)src] = v19;
    v20 = v9 + 1;
    n = (size_t)v20;
    v2 = v41;
  }
  while ( v3 != v5 );
LABEL_34:
  v21 = v6;
  v22 = (char *)src;
  if ( !src || (__int64)v20 < 0 )
LABEL_50:
    core::panicking::panic_nounwind(anon_475f815846da37737caa07221b879fb7_10_llvm_234892413440793941, 162LL);
  v23 = v34;
  core::str::converts::from_utf8(&v32, src, v20);
  if ( v32 )
  {
    if ( v23 != (char *)0x8000000000000000LL )
    {
      v61[0] = v23;
      v61[1] = v22;
      v61[2] = v20;
      v62 = *(_OWORD *)dest;
      core::result::unwrap_failed(
        anon_7c75ec29d226220b36fc1f3bbd3b01ef_1_llvm_17389174869910011146,
        43LL,
        v61,
        &off_2C7A68,
        &off_2C7FF8);
    }
    v23 = v22;
    v22 = v20;
    v20 = (char *)dest[0];
  }
  v45 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v46 = 1LL;
  v47 = 0LL;
  v50 = 0LL;
  memset(&v44[8], 0, 32);
  *(_QWORD *)&v43 = v23;
  *((_QWORD *)&v43 + 1) = v22;
  *(_QWORD *)v44 = v20;
  *(_QWORD *)&v44[40] = v21;
  v24 = v38;
  if ( v38 == (_QWORD)v37 )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v37);
  v25 = *((_QWORD *)&v37 + 1);
  v26 = v24 << 6;
  v27 = v43;
  v28 = *(_OWORD *)v44;
  v29 = *(_OWORD *)&v44[16];
  *(_OWORD *)(*((_QWORD *)&v37 + 1) + v26 + 48) = *(_OWORD *)&v44[32];
  *(_OWORD *)(v25 + v26 + 32) = v29;
  *(_OWORD *)(v25 + v26 + 16) = v28;
  *(_OWORD *)(v25 + v26) = v27;
  v38 = v24 + 1;
  v30 = v40;
  if ( v45 == 0x8000000000000000LL )
  {
    std::io::error::repr_bitpacked::decode_repr(&v32, v46);
    if ( (unsigned __int8)v32 >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(dest);
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v32, &v45);
    if ( dest[0] )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v47, v32, dest[0], dest[1]);
  }
  *(_QWORD *)(v2 + 16) = v38;
  *(_OWORD *)v2 = v37;
  if ( *v30 )
    _rust_dealloc(v30[1], *v30, 1LL);
  return v2;
}
