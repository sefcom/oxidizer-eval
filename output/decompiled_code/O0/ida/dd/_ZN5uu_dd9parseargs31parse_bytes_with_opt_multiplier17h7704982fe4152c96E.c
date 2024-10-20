__int64 __fastcall uu_dd::parseargs::parse_bytes_with_opt_multiplier(__int64 a1, void *a2, size_t a3)
{
  void *v4; // r15
  __int64 v5; // r12
  unsigned __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  char **v11; // rax
  char *v12; // r13
  size_t v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rbx
  size_t v16; // r12
  void *v17; // r14
  __int64 v18; // r15
  unsigned __int64 v19; // rcx
  bool v20; // of
  __int64 v21; // rbx
  const void *v22; // r13
  void *v23; // r15
  void *v25; // [rsp+10h] [rbp-188h] BYREF
  __int64 v26; // [rsp+18h] [rbp-180h]
  void *dest; // [rsp+20h] [rbp-178h]
  __int64 v28; // [rsp+28h] [rbp-170h]
  __int64 v29; // [rsp+30h] [rbp-168h]
  size_t v30; // [rsp+38h] [rbp-160h]
  int v31; // [rsp+40h] [rbp-158h]
  int v32; // [rsp+44h] [rbp-154h]
  char v33; // [rsp+48h] [rbp-150h]
  __int16 v34; // [rsp+50h] [rbp-148h]
  unsigned __int64 v35; // [rsp+58h] [rbp-140h] BYREF
  __int64 v36; // [rsp+60h] [rbp-138h]
  __int64 v37; // [rsp+68h] [rbp-130h]
  __int64 v38; // [rsp+70h] [rbp-128h] BYREF
  char **v39; // [rsp+78h] [rbp-120h]
  unsigned __int64 v40; // [rsp+80h] [rbp-118h]
  char **v41; // [rsp+88h] [rbp-110h]
  __int64 v42; // [rsp+90h] [rbp-108h]
  _QWORD v43[2]; // [rsp+98h] [rbp-100h] BYREF
  _QWORD v44[2]; // [rsp+A8h] [rbp-F0h] BYREF
  _QWORD v45[4]; // [rsp+B8h] [rbp-E0h] BYREF
  _QWORD v46[3]; // [rsp+D8h] [rbp-C0h] BYREF
  char v47; // [rsp+F0h] [rbp-A8h]
  _QWORD v48[3]; // [rsp+F8h] [rbp-A0h] BYREF
  char v49; // [rsp+110h] [rbp-88h]
  _QWORD v50[6]; // [rsp+118h] [rbp-80h] BYREF
  __int64 v51; // [rsp+148h] [rbp-50h] BYREF
  unsigned __int64 v52; // [rsp+150h] [rbp-48h]
  __int128 v53; // [rsp+158h] [rbp-40h]

  v4 = a2;
  v5 = a1;
  LODWORD(v25) = 0;
  core::char::methods::encode_utf8_raw(120LL, &v25, 4LL);
  if ( v6 >= 0x100 )
    core::result::unwrap_failed(
      "char len should be less than 255\x01",
      32LL,
      v50,
      &anon_cf3a0699d036d4a433c5534177ef0521_7_llvm_15788873575520176247,
      &anon_02b40c0e5390e28ea90696fc8ba4da26_29_llvm_16801938774416938183);
  v7 = (int)v25;
  v25 = 0LL;
  v26 = a3;
  dest = a2;
  v28 = a3;
  v29 = 0LL;
  v30 = a3;
  v31 = v7;
  v32 = 120;
  v33 = v6;
  v34 = 1;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v35, &v25);
  if ( v37 == 1 )
  {
    if ( !v36 || (v36 & 7) != 0 )
      core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
    uu_dd::parseargs::parse_bytes_no_x(a1, a2, a3, *(char **)v36, *(_QWORD *)(v36 + 8));
    if ( v35 )
    {
      if ( v35 >> 60 )
        core::panicking::panic_nounwind(anon_e45d65516cdf6c355a9aa2094419ed73_18_llvm_7530283562111826792, 69LL);
      v8 = 16 * v35;
      v25 = (void *)v36;
      v26 = 8LL;
      v9 = 16LL;
    }
    else
    {
      v9 = 8LL;
      v8 = 0LL;
    }
    *(void **)((char *)&v25 + v9) = (void *)v8;
    if ( v26 && dest )
      _rust_dealloc(v25, dest, v26);
  }
  else
  {
    v38 = v36;
    v39 = (char **)v36;
    v40 = v35;
    v41 = (char **)(v36 + 16 * v37);
    v10 = 1LL;
    do
    {
      v11 = v39;
      if ( v39 == v41 || (v39 += 2, (v12 = *v11) == 0LL) )
      {
        <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v38);
        v5 = a1;
        *(_QWORD *)(a1 + 8) = v10;
        *(_QWORD *)a1 = 14LL;
        return v5;
      }
      v13 = (size_t)v11[1];
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*v11, v13, "0", 1LL) )
      {
        v14 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v42 = v10;
        v15 = *(_QWORD *)(v14 + 8);
        v16 = a3;
        v17 = v4;
        v18 = *(_QWORD *)(v14 + 16);
        core::slice::raw::from_raw_parts::precondition_check(v15, 1LL, 1LL, v18);
        v44[0] = v15;
        v10 = v42;
        v44[1] = v18;
        v4 = v17;
        a3 = v16;
        v43[0] = v44;
        v43[1] = <&T as core::fmt::Display>::fmt;
        v50[0] = &unk_144590;
        v50[1] = 2LL;
        v50[4] = 0LL;
        v50[2] = v43;
        v50[3] = 1LL;
        std::io::stdio::_eprint(v50);
        v46[0] = 0LL;
        v46[1] = "0x00x0";
        v46[2] = 2LL;
        v47 = 1;
        v48[0] = 0LL;
        v48[1] = "00x0";
        v48[2] = 3LL;
        v49 = 1;
        v45[0] = v46;
        v45[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v45[2] = v48;
        v45[3] = <os_display::Quoted as core::fmt::Display>::fmt;
        v25 = &unk_1445B0;
        v26 = 3LL;
        v29 = 0LL;
        dest = v45;
        v28 = 2LL;
        std::io::stdio::_eprint(&v25);
      }
      uu_dd::parseargs::parse_bytes_no_x((__int64)&v51, v4, a3, v12, v13);
      v19 = v52;
      if ( v51 != 14 )
      {
        v5 = a1;
        *(_QWORD *)a1 = v51;
        *(_QWORD *)(a1 + 8) = v19;
        *(_OWORD *)(a1 + 16) = v53;
        goto LABEL_23;
      }
      v20 = (v52 * (unsigned __int128)(unsigned __int64)v10) >> 64 != 0;
      v10 *= v52;
    }
    while ( !v20 );
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v25, a3, 0LL);
    v21 = v26;
    v5 = a1;
    if ( v25 )
      alloc::raw_vec::handle_error(v26, dest);
    v22 = v4;
    v23 = dest;
    core::intrinsics::copy_nonoverlapping::precondition_check(v22, dest, 1LL, 1LL, a3);
    memcpy(v23, v22, a3);
    *(_QWORD *)a1 = 13LL;
    *(_QWORD *)(a1 + 8) = v21;
    *(_QWORD *)(a1 + 16) = v23;
    *(_QWORD *)(a1 + 24) = a3;
LABEL_23:
    <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v38);
  }
  return v5;
}
