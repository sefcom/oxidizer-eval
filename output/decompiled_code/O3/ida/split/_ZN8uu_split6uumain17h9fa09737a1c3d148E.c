__int64 __fastcall uu_split::uumain(void *a1, void *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  const void *v8; // r13
  void *v9; // r12
  void *v10; // r15
  void *v11; // rbp
  __int64 v12; // r15
  __int64 (__fastcall **v13)(); // rdx
  __int64 (__fastcall **v14)(); // r12
  char *v15; // rdx
  _OWORD *v16; // rax
  __int128 v17; // xmm0
  __int64 (__fastcall **v18)(); // rdx
  _OWORD *v19; // rax
  __int128 v20; // xmm0
  __int128 v21; // rax
  __int128 v22; // rax
  unsigned int v23; // ebx
  __int128 v24; // kr00_16
  __int64 v25; // rsi
  const void *v27; // r13
  void *v28; // r12
  void *v29; // rbp
  __int64 v30; // [rsp+0h] [rbp-4D8h] BYREF
  __int128 v31; // [rsp+8h] [rbp-4D0h] BYREF
  __int128 v32; // [rsp+18h] [rbp-4C0h]
  void *v33; // [rsp+28h] [rbp-4B0h]
  __int128 v34; // [rsp+30h] [rbp-4A8h] BYREF
  __int64 v35; // [rsp+40h] [rbp-498h]
  _BYTE v36[24]; // [rsp+48h] [rbp-490h] BYREF
  __int128 v37; // [rsp+60h] [rbp-478h] BYREF
  __int128 v38; // [rsp+70h] [rbp-468h]
  __int128 v39; // [rsp+80h] [rbp-458h]
  __int64 v40; // [rsp+90h] [rbp-448h]
  __int128 v41; // [rsp+98h] [rbp-440h] BYREF
  _QWORD *v42; // [rsp+A8h] [rbp-430h]
  __int128 v43; // [rsp+B0h] [rbp-428h] BYREF
  __int128 v44; // [rsp+C0h] [rbp-418h]
  __int128 v45; // [rsp+D0h] [rbp-408h]
  __int64 v46; // [rsp+E0h] [rbp-3F8h]
  _QWORD v47[3]; // [rsp+E8h] [rbp-3F0h] BYREF
  void *src[22]; // [rsp+100h] [rbp-3D8h] BYREF
  __int128 v49; // [rsp+1B0h] [rbp-328h]
  __int64 v50; // [rsp+1C0h] [rbp-318h]
  __int128 v51; // [rsp+1C8h] [rbp-310h] BYREF
  void *v52; // [rsp+1D8h] [rbp-300h]
  _OWORD dest[18]; // [rsp+1E0h] [rbp-2F8h] BYREF
  _QWORD v54[50]; // [rsp+308h] [rbp-1D0h] BYREF
  char v55; // [rsp+49Dh] [rbp-3Bh]
  char v56; // [rsp+49Fh] [rbp-39h]

  *(_QWORD *)&v43 = 0x8000000000000000LL;
  LOBYTE(v41) = 0;
  LOBYTE(v31) = 0;
  src[0] = a1;
  src[1] = a2;
  src[2] = &v43;
  src[3] = &v41;
  src[4] = &v31;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v37, src);
  *((_QWORD *)&dest[2] + 1) = v44;
  *(_OWORD *)((char *)&dest[1] + 8) = v43;
  dest[0] = v37;
  *(_QWORD *)&dest[1] = v38;
  v50 = v38;
  v49 = v37;
  v35 = v44;
  v34 = v43;
  uu_split::uu_app(dest);
  src[0] = *((void **)&v49 + 1);
  src[1] = *((void **)&v49 + 1);
  src[2] = (void *)v49;
  src[3] = (void *)(*((_QWORD *)&v49 + 1) + 24 * v50);
  alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(
    v36,
    src);
  v30 = 0LL;
  if ( (v55 & 8) == 0
    || (v2 = clap_lex::RawArgs::next_os(v36, &v30)) == 0
    || (v4 = std::path::Path::file_stem(v2, v3)) == 0
    || (std::sys::os_str::bytes::Slice::to_str(src, v4), src[0]) )
  {
    if ( (v56 & 2) != 0 )
      goto LABEL_12;
    v5 = clap_lex::RawArgs::next_os(v36, &v30);
    if ( !v5 )
      goto LABEL_12;
    v7 = std::path::Path::file_name(v5, v6);
    if ( !v7 )
      goto LABEL_12;
    std::sys::os_str::bytes::Slice::to_str(src, v7);
    if ( src[0] || v54[0] != 0x8000000000000000LL )
      goto LABEL_12;
    v8 = src[1];
    v9 = src[2];
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(src, src[2], 0LL);
    v10 = src[1];
    if ( !src[0] )
    {
      v11 = src[2];
      memcpy(src[2], v8, (size_t)v9);
      v54[0] = v10;
      v54[1] = v11;
      v54[2] = v9;
LABEL_12:
      clap_builder::builder::command::Command::_do_parse(&v37, dest, v36, v30);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v36);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v36);
      goto LABEL_13;
    }
LABEL_46:
    alloc::raw_vec::handle_error(v10, src[2]);
  }
  v27 = src[1];
  v28 = src[2];
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(src, src[2], 0LL);
  v10 = src[1];
  if ( src[0] )
    goto LABEL_46;
  v29 = src[2];
  memcpy(src[2], v27, (size_t)v28);
  v47[0] = v10;
  v47[1] = v29;
  v47[2] = v28;
  *(_QWORD *)&v41 = 0LL;
  *((_QWORD *)&v41 + 1) = 1LL;
  v42 = v47;
  alloc::vec::Vec<T,A>::drain(&v31, v36, v30);
  src[7] = v42;
  *(_OWORD *)&src[5] = v41;
  *(_OWORD *)src = v31;
  *(_OWORD *)&src[2] = v32;
  src[4] = v33;
  <alloc::vec::splice::Splice<I,A> as core::ops::drop::Drop>::drop(src);
  <alloc::vec::drain::Drain<T,A> as core::ops::drop::Drop>::drop(src);
  <core::array::iter::IntoIter<T,_> as core::ops::drop::Drop>::drop(&src[5]);
  v54[33] = 1LL;
  v54[34] = 0LL;
  if ( v54[0] != 0x8000000000000000LL )
  {
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v54);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v54);
  }
  v54[0] = 0x8000000000000000LL;
  clap_builder::builder::command::Command::_do_parse(&v37, dest, v36, v30);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v47);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v47);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v36);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v36);
LABEL_13:
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(dest);
  if ( (_QWORD)v37 != 0x8000000000000000LL )
  {
    v46 = v40;
    v45 = v39;
    v44 = v38;
    v43 = v37;
    uu_split::Settings::from(src, &v43, &v34);
    if ( src[0] != (char *)&dword_0 + 2 )
    {
      memcpy(dest, src, 0xA8uLL);
      v12 = uu_split::split(dest);
      v14 = v18;
      core::ptr::drop_in_place<uu_split::Settings>(dest);
      goto LABEL_28;
    }
    v15 = 0LL;
    if ( (unsigned __int64)src[1] - 4 < 5 )
      v15 = (char *)src[1] - 3;
    if ( v15 )
    {
      if ( v15 == (_BYTE *)&dword_0 + 1 && LODWORD(src[2]) == 1 )
        goto LABEL_22;
    }
    else if ( LODWORD(src[1]) == 3 )
    {
LABEL_22:
      *(void **)&v39 = src[5];
      v38 = *(_OWORD *)&src[3];
      v37 = *(_OWORD *)&src[1];
      *(_QWORD *)&v41 = &v37;
      *((_QWORD *)&v41 + 1) = <uu_split::SettingsError as core::fmt::Display>::fmt;
      *(_QWORD *)&dest[0] = &anon_edec59db3b863b6761f2fcbb7c5018ad_75_llvm_1026247603497507326;
      *((_QWORD *)&dest[0] + 1) = 1LL;
      *(_QWORD *)&dest[2] = 0LL;
      *(_QWORD *)&dest[1] = &v41;
      *((_QWORD *)&dest[1] + 1) = 1LL;
      alloc::fmt::format::format_inner(&v31, dest);
      DWORD2(dest[1]) = 1;
      dest[0] = v31;
      *(_QWORD *)&dest[1] = v32;
      v16 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v16 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v12 = (__int64)v16;
      v17 = dest[0];
      v16[1] = dest[1];
      *v16 = v17;
      core::ptr::drop_in_place<uu_split::SettingsError>(&v37);
      v14 = &off_1088D0;
      goto LABEL_28;
    }
    *(void **)&v39 = src[5];
    v38 = *(_OWORD *)&src[3];
    v37 = *(_OWORD *)&src[1];
    *(_QWORD *)&v41 = &v37;
    *((_QWORD *)&v41 + 1) = <uu_split::SettingsError as core::fmt::Display>::fmt;
    *(_QWORD *)&dest[0] = &anon_edec59db3b863b6761f2fcbb7c5018ad_75_llvm_1026247603497507326;
    *((_QWORD *)&dest[0] + 1) = 1LL;
    *(_QWORD *)&dest[2] = 0LL;
    *(_QWORD *)&dest[1] = &v41;
    *((_QWORD *)&dest[1] + 1) = 1LL;
    alloc::fmt::format::format_inner(&v31, dest);
    DWORD2(dest[1]) = 1;
    dest[0] = v31;
    *(_QWORD *)&dest[1] = v32;
    v19 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v19 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v12 = (__int64)v19;
    v20 = dest[0];
    v19[1] = dest[1];
    *v19 = v20;
    core::ptr::drop_in_place<uu_split::SettingsError>(&v37);
    v14 = &off_108978;
LABEL_28:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v43);
    if ( (_QWORD)v34 == 0x8000000000000000LL )
      goto LABEL_30;
    goto LABEL_29;
  }
  v12 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v37 + 1));
  v14 = v13;
  if ( (_QWORD)v34 == 0x8000000000000000LL )
    goto LABEL_30;
LABEL_29:
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v34);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v34);
LABEL_30:
  if ( v12 )
  {
    *(_QWORD *)&v31 = v12;
    *((_QWORD *)&v31 + 1) = v14;
    src[0] = &v31;
    src[1] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    *(_QWORD *)&dest[0] = &anon_edec59db3b863b6761f2fcbb7c5018ad_75_llvm_1026247603497507326;
    *((_QWORD *)&dest[0] + 1) = 1LL;
    *(_QWORD *)&dest[2] = 0LL;
    *(_QWORD *)&dest[1] = src;
    *((_QWORD *)&dest[1] + 1) = 1LL;
    alloc::fmt::format::format_inner(&v51, dest);
    *(_OWORD *)src = v51;
    src[2] = v52;
    if ( v52 )
    {
      *(_QWORD *)&v21 = uucore::util_name();
      v37 = v21;
      *(_QWORD *)&v43 = &v37;
      *((_QWORD *)&v43 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&dest[0] = &unk_108850;
      *((_QWORD *)&dest[0] + 1) = 2LL;
      *(_QWORD *)&dest[2] = 0LL;
      *(_QWORD *)&dest[1] = &v43;
      *((_QWORD *)&dest[1] + 1) = 1LL;
      std::io::stdio::_eprint(dest);
      *(_QWORD *)&v37 = src;
      *((_QWORD *)&v37 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&dest[0] = &unk_108870;
      *((_QWORD *)&dest[0] + 1) = 2LL;
      *(_QWORD *)&dest[2] = 0LL;
      *(_QWORD *)&dest[1] = &v37;
      *((_QWORD *)&dest[1] + 1) = 1LL;
      std::io::stdio::_eprint(dest);
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v31 + 1) + 104LL))(v31) )
    {
      *(_QWORD *)&v22 = uucore::execution_phrase();
      v37 = v22;
      *(_QWORD *)&v43 = &v37;
      *((_QWORD *)&v43 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&dest[0] = &off_108890;
      *((_QWORD *)&dest[0] + 1) = 2LL;
      *(_QWORD *)&dest[2] = 0LL;
      *(_QWORD *)&dest[1] = &v43;
      *((_QWORD *)&dest[1] + 1) = 1LL;
      std::io::stdio::_eprint(dest);
    }
    v23 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v31 + 1) + 96LL))(v31);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(src);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(src);
    v24 = v31;
    if ( **((_QWORD **)&v31 + 1) )
      (**((void (__fastcall ***)(_QWORD))&v31 + 1))(v31);
    v25 = *(_QWORD *)(*((_QWORD *)&v24 + 1) + 8LL);
    if ( v25 )
      _rust_dealloc(v24, v25, *(_QWORD *)(*((_QWORD *)&v24 + 1) + 16LL));
  }
  else
  {
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  return v23;
}
