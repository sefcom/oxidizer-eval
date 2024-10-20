_QWORD *__fastcall uu_du::read_files_from(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // r15
  __int64 v5; // rbx
  void *v6; // r14
  __int64 v7; // rax
  __int64 (__fastcall **v8)(); // rcx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r13
  void *v12; // rbp
  size_t v13; // rbx
  __int64 v14; // r13
  void *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r15
  char v20; // al
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r15
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int128 v27; // xmm0
  __int64 (__fastcall **v28)(); // rax
  __int64 (__fastcall *v29)(); // rsi
  __int64 (__fastcall **v30)(); // rax
  __int64 (__fastcall *v31)(); // rsi
  __int64 v32; // rax
  _OWORD *v33; // rax
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  _OWORD *v36; // rbx
  char v37; // al
  unsigned __int64 v38; // rbx
  _QWORD *result; // rax
  __int128 v40; // [rsp+8h] [rbp-2E0h] BYREF
  void *dest; // [rsp+18h] [rbp-2D0h]
  __int64 v42; // [rsp+20h] [rbp-2C8h]
  __int64 v43; // [rsp+28h] [rbp-2C0h]
  __int64 v44; // [rsp+38h] [rbp-2B0h] BYREF
  __int64 (__fastcall **v45)(); // [rsp+40h] [rbp-2A8h]
  char v46; // [rsp+48h] [rbp-2A0h]
  __int64 v47; // [rsp+50h] [rbp-298h]
  __int128 v48; // [rsp+58h] [rbp-290h] BYREF
  unsigned __int64 v49; // [rsp+68h] [rbp-280h]
  _OWORD *v50; // [rsp+70h] [rbp-278h]
  __int64 v51; // [rsp+78h] [rbp-270h]
  __int64 v52; // [rsp+80h] [rbp-268h] BYREF
  __int64 v53; // [rsp+88h] [rbp-260h]
  _DWORD v54[2]; // [rsp+90h] [rbp-258h] BYREF
  unsigned __int64 v55; // [rsp+98h] [rbp-250h]
  __int128 v56; // [rsp+A0h] [rbp-248h] BYREF
  void *v57; // [rsp+B0h] [rbp-238h]
  __int64 v58; // [rsp+B8h] [rbp-230h] BYREF
  void *src; // [rsp+C0h] [rbp-228h]
  size_t n; // [rsp+C8h] [rbp-220h] BYREF
  __int128 v61; // [rsp+D0h] [rbp-218h] BYREF
  size_t v62; // [rsp+E0h] [rbp-208h]
  unsigned __int64 v63; // [rsp+E8h] [rbp-200h]
  unsigned __int64 v64; // [rsp+F0h] [rbp-1F8h]
  __int64 v65; // [rsp+F8h] [rbp-1F0h] BYREF
  __int128 v66; // [rsp+100h] [rbp-1E8h]
  size_t v67; // [rsp+110h] [rbp-1D8h]
  _QWORD v68[2]; // [rsp+120h] [rbp-1C8h] BYREF
  _QWORD v69[2]; // [rsp+130h] [rbp-1B8h] BYREF
  _QWORD v70[2]; // [rsp+140h] [rbp-1A8h] BYREF
  _QWORD v71[2]; // [rsp+150h] [rbp-198h] BYREF
  __int128 v72; // [rsp+160h] [rbp-188h]
  __int64 v73; // [rsp+170h] [rbp-178h]
  _QWORD v74[4]; // [rsp+180h] [rbp-168h] BYREF
  __int128 v75; // [rsp+1A0h] [rbp-148h] BYREF
  __int64 v76; // [rsp+1B0h] [rbp-138h]
  __int128 v77; // [rsp+1C0h] [rbp-128h] BYREF
  __int64 v78; // [rsp+1D0h] [rbp-118h]
  __int128 v79; // [rsp+1E0h] [rbp-108h]
  void *v80; // [rsp+1F0h] [rbp-F8h]
  __int128 v81; // [rsp+1F8h] [rbp-F0h] BYREF
  __int64 v82; // [rsp+208h] [rbp-E0h]
  __int128 v83; // [rsp+210h] [rbp-D8h] BYREF
  __int64 v84; // [rsp+220h] [rbp-C8h]
  _QWORD v85[6]; // [rsp+228h] [rbp-C0h] BYREF
  _QWORD v86[6]; // [rsp+258h] [rbp-90h] BYREF
  _OWORD v87[6]; // [rsp+288h] [rbp-60h] BYREF

  v4 = a1;
  v52 = a2;
  v53 = a3;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, asc_2DFE7, 1LL) )
  {
    v5 = std::io::stdio::stdin();
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v40, 0x2000LL, 0LL);
    if ( (_QWORD)v40 )
      alloc::raw_vec::handle_error(*((_QWORD *)&v40 + 1), dest);
    v6 = dest;
    if ( !dest )
      core::panicking::panic_nounwind(anon_3ea58ce9b04195e65e7596eb035a132b_2_llvm_3490124054932126836, 93LL);
    v72 = 0LL;
    v73 = 0LL;
    v7 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 48LL, 0LL);
    v50 = a1;
    if ( !v7 )
      alloc::alloc::handle_alloc_error(8LL, 48LL);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = 0x2000LL;
    *(_OWORD *)(v7 + 16) = v72;
    *(_QWORD *)(v7 + 32) = v73;
    *(_QWORD *)(v7 + 40) = v5;
    v8 = &off_164FF0;
LABEL_6:
    *(_QWORD *)&v48 = 0LL;
    *((_QWORD *)&v48 + 1) = 8LL;
    v49 = 0LL;
    v44 = v7;
    v45 = v8;
    v46 = 0;
    v47 = 0LL;
    v63 = 0x8000000000000001LL;
    while ( 1 )
    {
      while ( 1 )
      {
        <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v40, &v44);
        v9 = v40;
        if ( (_QWORD)v40 == v63 )
        {
          v28 = v45;
          v4 = v50;
          if ( *v45 )
          {
            ((void (__fastcall *)(__int64))*v45)(v44);
            v28 = v45;
          }
          v29 = v28[1];
          if ( v29 )
            _rust_dealloc(v44, v29, v28[2]);
          v4[2] = v49;
          *(_OWORD *)v4 = v48;
          return v4;
        }
        v80 = dest;
        v79 = v40;
        v10 = v47 + 1;
        if ( v47 == -1 )
          core::panicking::panic_const::panic_const_add_overflow(&anon_2cf07ae4b49557eeaae3aaef43c787a0_4_llvm_3742275652936995853);
        ++v47;
        v11 = *((_QWORD *)&v40 + 1);
        if ( (_QWORD)v40 == 0x8000000000000000LL )
        {
          v4 = v50;
          *v50 = __PAIR128__(*((unsigned __int64 *)&v40 + 1), 0x8000000000000000LL);
          v30 = v45;
          if ( *v45 )
          {
            ((void (__fastcall *)(__int64))*v45)(v44);
            v30 = v45;
          }
          v31 = v30[1];
          if ( v31 )
            _rust_dealloc(v44, v31, v30[2]);
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v48);
          return v4;
        }
        if ( dest )
          break;
        v65 = v10;
        v21 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v22 = *(_QWORD *)(v21 + 8);
        v23 = *(_QWORD *)(v21 + 16);
        core::slice::raw::from_raw_parts::precondition_check(v22, 1LL, 1LL, v23);
        v71[0] = v22;
        v71[1] = v23;
        v70[0] = v71;
        v70[1] = <&T as core::fmt::Display>::fmt;
        v85[0] = &unk_165078;
        v85[1] = 2LL;
        v85[4] = 0LL;
        v85[2] = v70;
        v85[3] = 1LL;
        std::io::stdio::_eprint(v85);
        v74[0] = &v52;
        v74[1] = <&T as core::fmt::Display>::fmt;
        v74[2] = &v65;
        v74[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v86[0] = &unk_165098;
        v86[1] = 3LL;
        v86[4] = 0LL;
        v86[2] = v74;
        v86[3] = 2LL;
        std::io::stdio::_eprint(v86);
        _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
LABEL_28:
        if ( v9 )
          goto LABEL_33;
      }
      if ( !*((_QWORD *)&v40 + 1) || (__int64)dest < 0 )
        core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
      alloc::string::String::from_utf8_lossy(&v58, *((_QWORD *)&v40 + 1));
      v12 = src;
      v13 = n;
      if ( v58 != 0x8000000000000000LL && (!src || (n & 0x8000000000000000LL) != 0LL) )
        goto LABEL_65;
      v51 = v11;
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v40, n, 0LL);
      v14 = *((_QWORD *)&v40 + 1);
      if ( (_QWORD)v40 )
        alloc::raw_vec::handle_error(*((_QWORD *)&v40 + 1), dest);
      v15 = dest;
      core::intrinsics::copy_nonoverlapping::precondition_check(v12, dest, 1LL, 1LL, v13);
      memcpy(v15, v12, v13);
      *(_QWORD *)&v61 = v14;
      *((_QWORD *)&v61 + 1) = v15;
      v62 = v13;
      v11 = v51;
      if ( v58 != 0x8000000000000000LL )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(&v40, &v58, v16, v17);
        if ( *((_QWORD *)&v40 + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, v40, *((_QWORD *)&v40 + 1), dest);
      }
      v18 = *((_QWORD *)&v48 + 1);
      if ( !*((_QWORD *)&v48 + 1) || (BYTE8(v48) & 7) != 0 || v49 >= 0x555555555555556LL )
        goto LABEL_65;
      v19 = 24 * v49;
      while ( v19 )
      {
        v20 = <std::path::PathBuf as core::cmp::PartialEq>::eq(v18, &v61);
        v18 += 24LL;
        v19 -= 24LL;
        if ( v20 )
        {
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v61);
          goto LABEL_28;
        }
      }
      v67 = v62;
      v66 = v61;
      v24 = v49;
      if ( v49 == (_QWORD)v48 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v48);
      v25 = *((_QWORD *)&v48 + 1);
      v26 = 3 * v24;
      v27 = v66;
      *(_QWORD *)(*((_QWORD *)&v48 + 1) + 8 * v26 + 16) = v67;
      *(_OWORD *)(v25 + 8 * v26) = v27;
      v49 = v24 + 1;
      if ( v9 )
LABEL_33:
        _rust_dealloc(v11, v9, 1LL);
    }
  }
  std::sys::os_str::bytes::Slice::to_owned(&v40, a2, a3);
  v57 = dest;
  v56 = v40;
  if ( !*((_QWORD *)&v40 + 1) || (__int64)dest < 0 )
LABEL_65:
    core::panicking::panic_nounwind(anon_8085cf7280ca5a7279da5d96bb8c0362_48_llvm_11242443447069085683, 162LL);
  if ( (unsigned __int8)std::path::Path::is_dir(*((_QWORD *)&v40 + 1), dest) )
  {
    v68[0] = &v52;
    v68[1] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v40 = &unk_164FD0;
    *((_QWORD *)&v40 + 1) = 2LL;
    dest = v68;
    v42 = 1LL;
    v43 = 0LL;
    alloc::fmt::format::format_inner(&v81, &v40);
    v75 = v81;
    v76 = v82;
    a1[1] = std::io::error::Error::new(39LL, &v75);
    *a1 = 0x8000000000000000LL;
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v56);
    return v4;
  }
  *(_QWORD *)&v40 = 0x1B600000000LL;
  DWORD2(v40) = 1;
  WORD6(v40) = 0;
  std::fs::OpenOptions::_open(v54, &v40, v52, v53);
  if ( !v54[0] )
  {
    std::io::buffered::bufreader::BufReader<R>::with_capacity(v87, 0x2000LL, v54[1]);
    v33 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 48LL, 0LL);
    if ( !v33 )
      alloc::alloc::handle_alloc_error(8LL, 48LL);
    v34 = v87[0];
    v35 = v87[1];
    v33[2] = v87[2];
    v33[1] = v35;
    v36 = v33;
    *v33 = v34;
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v56);
    v50 = a1;
    v8 = &off_164F28;
    v7 = (__int64)v36;
    goto LABEL_6;
  }
  switch ( v55 & 3 )
  {
    case 0uLL:
      v32 = 16LL;
      goto LABEL_57;
    case 1uLL:
      v32 = 15LL;
LABEL_57:
      v37 = *(_BYTE *)(v55 + v32);
      break;
    case 2uLL:
      v37 = std::sys::pal::unix::decode_error_kind(HIDWORD(v55));
      break;
    case 3uLL:
      v37 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v55));
      if ( v37 == 41 )
        core::hint::unreachable_unchecked::precondition_check();
      return result;
  }
  v38 = v55;
  if ( v37 )
  {
    a1[1] = v55;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    v64 = v55;
    v69[0] = &v52;
    v69[1] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v40 = &off_164FB0;
    *((_QWORD *)&v40 + 1) = 2LL;
    dest = v69;
    v42 = 1LL;
    v43 = 0LL;
    alloc::fmt::format::format_inner(&v83, &v40);
    v77 = v83;
    v78 = v84;
    a1[1] = std::io::error::Error::new(39LL, &v77);
    *a1 = 0x8000000000000000LL;
    std::io::error::repr_bitpacked::decode_repr(&v40, v38);
    if ( (unsigned __int8)v40 >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v40 + 8);
  }
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v56);
  return v4;
}
