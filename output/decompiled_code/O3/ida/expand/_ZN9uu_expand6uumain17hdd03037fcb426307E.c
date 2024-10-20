__int64 __fastcall uu_expand::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  const void *v8; // r12
  size_t v9; // r15
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 (__fastcall **v13)(); // rdx
  __int64 (__fastcall **v14)(); // r15
  _OWORD *v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 (__fastcall **v18)(); // rdx
  __int128 v19; // rax
  __int128 v20; // rax
  unsigned int v21; // ebx
  __int128 v22; // kr00_16
  __int64 v23; // rsi
  const void *v25; // r12
  size_t v26; // r15
  __int64 v27; // r13
  __int64 v28; // [rsp+8h] [rbp-470h] BYREF
  _BYTE src[40]; // [rsp+10h] [rbp-468h] BYREF
  __int128 v30; // [rsp+38h] [rbp-440h] BYREF
  __int128 v31; // [rsp+48h] [rbp-430h]
  __int64 v32; // [rsp+58h] [rbp-420h]
  _BYTE v33[24]; // [rsp+68h] [rbp-410h] BYREF
  __int128 v34; // [rsp+80h] [rbp-3F8h] BYREF
  __int128 v35; // [rsp+90h] [rbp-3E8h]
  __int128 v36; // [rsp+A0h] [rbp-3D8h]
  __int64 v37; // [rsp+B0h] [rbp-3C8h]
  _OWORD v38[2]; // [rsp+C0h] [rbp-3B8h] BYREF
  __int64 v39; // [rsp+E0h] [rbp-398h]
  _QWORD v40[3]; // [rsp+E8h] [rbp-390h] BYREF
  _OWORD v41[3]; // [rsp+100h] [rbp-378h] BYREF
  __int64 v42; // [rsp+130h] [rbp-348h]
  __int128 v43; // [rsp+138h] [rbp-340h]
  _QWORD *v44; // [rsp+148h] [rbp-330h]
  __int64 v45; // [rsp+150h] [rbp-328h] BYREF
  __int64 v46; // [rsp+158h] [rbp-320h]
  __int64 v47; // [rsp+160h] [rbp-318h]
  __int128 v48; // [rsp+168h] [rbp-310h] BYREF
  __int64 v49; // [rsp+178h] [rbp-300h]
  _BYTE v50[56]; // [rsp+180h] [rbp-2F8h] BYREF
  __int128 v51; // [rsp+1B8h] [rbp-2C0h]
  __int64 v52; // [rsp+1C8h] [rbp-2B0h]
  _QWORD v53[50]; // [rsp+2A8h] [rbp-1D0h] BYREF
  char v54; // [rsp+43Dh] [rbp-3Bh]
  char v55; // [rsp+43Fh] [rbp-39h]

  uu_expand::uu_app(v50);
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(src, a1, a2);
  uu_expand::expand_shortcuts(&v45, src);
  *(_QWORD *)src = v46;
  *(_QWORD *)&src[8] = v46;
  *(_QWORD *)&src[16] = v45;
  *(_QWORD *)&src[24] = v46 + 24 * v47;
  alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(
    v33,
    src);
  v28 = 0LL;
  if ( (v54 & 8) == 0
    || (v2 = clap_lex::RawArgs::next_os(v33, &v28)) == 0
    || (v4 = std::path::Path::file_stem(v2, v3)) == 0
    || (std::sys::os_str::bytes::Slice::to_str(src, v4), *(_QWORD *)src) )
  {
    if ( (v55 & 2) != 0 )
      goto LABEL_12;
    v5 = clap_lex::RawArgs::next_os(v33, &v28);
    if ( !v5 )
      goto LABEL_12;
    v7 = std::path::Path::file_name(v5, v6);
    if ( !v7 )
      goto LABEL_12;
    std::sys::os_str::bytes::Slice::to_str(src, v7);
    if ( *(_QWORD *)src || v53[0] != 0x8000000000000000LL )
      goto LABEL_12;
    v8 = *(const void **)&src[8];
    v9 = *(_QWORD *)&src[16];
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(src, *(_QWORD *)&src[16], 0LL);
    v10 = *(_QWORD *)&src[8];
    if ( !*(_QWORD *)src )
    {
      v11 = *(_QWORD *)&src[16];
      memcpy(*(void **)&src[16], v8, v9);
      v53[0] = v10;
      v53[1] = v11;
      v53[2] = v9;
LABEL_12:
      clap_builder::builder::command::Command::_do_parse(&v34, v50, v33, v28);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v33);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v33);
      goto LABEL_13;
    }
LABEL_35:
    alloc::raw_vec::handle_error(v10, *(_QWORD *)&src[16]);
  }
  v25 = *(const void **)&src[8];
  v26 = *(_QWORD *)&src[16];
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(src, *(_QWORD *)&src[16], 0LL);
  v10 = *(_QWORD *)&src[8];
  if ( *(_QWORD *)src )
    goto LABEL_35;
  v27 = *(_QWORD *)&src[16];
  memcpy(*(void **)&src[16], v25, v26);
  v40[0] = v10;
  v40[1] = v27;
  v40[2] = v26;
  *(_QWORD *)&v43 = 0LL;
  *((_QWORD *)&v43 + 1) = 1LL;
  v44 = v40;
  alloc::vec::Vec<T,A>::drain(v38, v33, v28);
  *(_QWORD *)&v31 = v44;
  v30 = v43;
  *(_OWORD *)src = v38[0];
  *(_OWORD *)&src[16] = v38[1];
  *(_QWORD *)&src[32] = v39;
  <alloc::vec::splice::Splice<I,A> as core::ops::drop::Drop>::drop(src);
  <alloc::vec::drain::Drain<T,A> as core::ops::drop::Drop>::drop(src);
  <core::array::iter::IntoIter<T,_> as core::ops::drop::Drop>::drop(&v30);
  v53[33] = 1LL;
  v53[34] = 0LL;
  if ( v53[0] != 0x8000000000000000LL )
  {
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v53);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v53);
  }
  v53[0] = 0x8000000000000000LL;
  clap_builder::builder::command::Command::_do_parse(&v34, v50, v33, v28);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v40);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v40);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v33);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v33);
LABEL_13:
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(v50);
  if ( (_QWORD)v34 == 0x8000000000000000LL )
  {
    v12 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v34 + 1));
    v14 = v13;
    if ( !v12 )
      return (unsigned int)uucore::mods::error::get_exit_code();
  }
  else
  {
    v42 = v37;
    v41[2] = v36;
    v41[1] = v35;
    v41[0] = v34;
    uu_expand::Options::new(v50, v41);
    v34 = *(_OWORD *)&v50[8];
    v35 = *(_OWORD *)&v50[24];
    v36 = *(_OWORD *)&v50[40];
    if ( *(_QWORD *)v50 == 0x8000000000000000LL )
    {
      *(_OWORD *)&v50[32] = v36;
      *(_OWORD *)&v50[16] = v35;
      *(_OWORD *)v50 = v34;
      v15 = (_OWORD *)_rust_alloc(48LL, 8LL);
      if ( !v15 )
        alloc::alloc::handle_alloc_error(8LL, 48LL);
      v12 = (__int64)v15;
      v16 = *(_OWORD *)v50;
      v17 = *(_OWORD *)&v50[16];
      v15[2] = *(_OWORD *)&v50[32];
      v15[1] = v17;
      *v15 = v16;
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v41);
      v14 = &off_E2E58;
    }
    else
    {
      v32 = v52;
      v31 = v51;
      *(_OWORD *)&src[8] = v34;
      *(_OWORD *)&src[24] = v35;
      v30 = v36;
      *(_QWORD *)src = *(_QWORD *)v50;
      v12 = uu_expand::expand(src);
      v14 = v18;
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v41);
      core::ptr::drop_in_place<uu_expand::Options>(src);
      if ( !v12 )
        return (unsigned int)uucore::mods::error::get_exit_code();
    }
  }
  *(_QWORD *)&v38[0] = v12;
  *((_QWORD *)&v38[0] + 1) = v14;
  *(_QWORD *)src = v38;
  *(_QWORD *)&src[8] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)v50 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *(_QWORD *)&v50[8] = 1LL;
  *(_QWORD *)&v50[32] = 0LL;
  *(_QWORD *)&v50[16] = src;
  *(_QWORD *)&v50[24] = 1LL;
  alloc::fmt::format::format_inner(&v48, v50);
  *(_OWORD *)src = v48;
  *(_QWORD *)&src[16] = v49;
  if ( v49 )
  {
    *(_QWORD *)&v19 = uucore::util_name();
    v34 = v19;
    *(_QWORD *)&v41[0] = &v34;
    *((_QWORD *)&v41[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v50 = &unk_E2DC0;
    *(_QWORD *)&v50[8] = 2LL;
    *(_QWORD *)&v50[32] = 0LL;
    *(_QWORD *)&v50[16] = v41;
    *(_QWORD *)&v50[24] = 1LL;
    std::io::stdio::_eprint(v50);
    *(_QWORD *)&v34 = src;
    *((_QWORD *)&v34 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)v50 = &unk_E2DE0;
    *(_QWORD *)&v50[8] = 2LL;
    *(_QWORD *)&v50[32] = 0LL;
    *(_QWORD *)&v50[16] = &v34;
    *(_QWORD *)&v50[24] = 1LL;
    std::io::stdio::_eprint(v50);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v38[0] + 1) + 104LL))(*(_QWORD *)&v38[0]) )
  {
    *(_QWORD *)&v20 = uucore::execution_phrase();
    v34 = v20;
    *(_QWORD *)&v41[0] = &v34;
    *((_QWORD *)&v41[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v50 = &off_E2E00;
    *(_QWORD *)&v50[8] = 2LL;
    *(_QWORD *)&v50[32] = 0LL;
    *(_QWORD *)&v50[16] = v41;
    *(_QWORD *)&v50[24] = 1LL;
    std::io::stdio::_eprint(v50);
  }
  v21 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v38[0] + 1) + 96LL))(*(_QWORD *)&v38[0]);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(src);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(src);
  v22 = v38[0];
  if ( **((_QWORD **)&v38[0] + 1) )
    (**((void (__fastcall ***)(_QWORD))&v38[0] + 1))(*(_QWORD *)&v38[0]);
  v23 = *(_QWORD *)(*((_QWORD *)&v22 + 1) + 8LL);
  if ( v23 )
    _rust_dealloc(v22, v23, *(_QWORD *)(*((_QWORD *)&v22 + 1) + 16LL));
  return v21;
}
