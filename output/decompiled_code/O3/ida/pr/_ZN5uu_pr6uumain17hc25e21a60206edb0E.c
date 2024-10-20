__int64 __fastcall uu_pr::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int128 v8; // kr00_16
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int128 v15; // rax
  __int128 v16; // rax
  unsigned int v17; // ebx
  __int128 v18; // kr10_16
  __int64 v19; // rsi
  __m256i v21; // [rsp+0h] [rbp-708h] BYREF
  __int64 v22; // [rsp+30h] [rbp-6D8h] BYREF
  __int128 v23; // [rsp+38h] [rbp-6D0h]
  _BYTE v24[8]; // [rsp+48h] [rbp-6C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-6B8h]
  __int64 v26; // [rsp+58h] [rbp-6B0h]
  __int128 v27; // [rsp+60h] [rbp-6A8h] BYREF
  __int64 v28; // [rsp+70h] [rbp-698h]
  _OWORD v29[3]; // [rsp+78h] [rbp-690h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-660h]
  __int64 *v31; // [rsp+B0h] [rbp-658h] BYREF
  __int64 *v32; // [rsp+B8h] [rbp-650h]
  __int64 v33; // [rsp+C0h] [rbp-648h]
  __int64 *v34; // [rsp+C8h] [rbp-640h]
  __m256i v35; // [rsp+D0h] [rbp-638h] BYREF
  __int64 v36; // [rsp+F0h] [rbp-618h] BYREF
  __int64 *v37; // [rsp+F8h] [rbp-610h]
  __int64 v38; // [rsp+100h] [rbp-608h]
  __int128 v39; // [rsp+108h] [rbp-600h] BYREF
  __int64 v40; // [rsp+118h] [rbp-5F0h]
  _QWORD v41[4]; // [rsp+120h] [rbp-5E8h] BYREF
  __int128 v42; // [rsp+140h] [rbp-5C8h]
  __int128 v43; // [rsp+158h] [rbp-5B0h] BYREF
  __int64 v44; // [rsp+168h] [rbp-5A0h]
  _OWORD dest[21]; // [rsp+170h] [rbp-598h] BYREF
  _OWORD src[21]; // [rsp+2C0h] [rbp-448h] BYREF
  char **v47; // [rsp+410h] [rbp-2F8h] BYREF
  __int64 v48; // [rsp+418h] [rbp-2F0h]
  _OWORD *v49; // [rsp+420h] [rbp-2E8h]
  __int64 v50; // [rsp+428h] [rbp-2E0h]
  __int64 v51; // [rsp+430h] [rbp-2D8h]

  uucore::Args::collect_ignore(v24, a1, a2);
  uu_pr::recreate_arguments(&v39, v25, v26);
  uu_pr::uu_app(&v47);
  *(_QWORD *)&src[1] = v40;
  src[0] = v39;
  clap_builder::builder::command::Command::try_get_matches_from_mut(dest, &v47, src);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
  {
    v30 = *(_QWORD *)&dest[3];
    v29[2] = dest[2];
    v29[1] = dest[1];
    v29[0] = dest[0];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v29, aFiles, 5LL);
    clap_builder::parser::error::MatchesError::unwrap(src, aFiles, 5LL, dest);
    if ( *(_QWORD *)&src[0]
      && (dest[3] = src[3],
          dest[2] = src[2],
          dest[1] = src[1],
          dest[0] = src[0],
          <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v21, dest),
          *(_OWORD *)v35.m256i_i8 = *(_OWORD *)&v21.m256i_u64[1],
          v21.m256i_i64[0] != 0x8000000000000000LL) )
    {
      *(_OWORD *)((char *)dest + 8) = *(_OWORD *)v35.m256i_i8;
      *(_QWORD *)&dest[0] = v21.m256i_i64[0];
    }
    else
    {
      *(_QWORD *)&dest[0] = 0LL;
      *((_QWORD *)&dest[0] + 1) = 8LL;
      *(_QWORD *)&dest[1] = 0LL;
    }
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v27, dest);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(dest);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(dest);
    if ( !v28 )
      alloc::vec::Vec<T,A>::insert(&v27, 0LL, asc_5A67C, 1LL);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v29, aMerge, 5LL) )
    {
      v5 = _rust_alloc(24LL, 8LL);
      if ( !v5 )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      *(_QWORD *)(v5 + 16) = v28;
      *(_OWORD *)v5 = v27;
      alloc::slice::hack::into_vec(&v36, v5, 1LL);
    }
    else
    {
      v41[0] = *((_QWORD *)&v27 + 1);
      v41[1] = *((_QWORD *)&v27 + 1);
      v41[2] = v27;
      v41[3] = *((_QWORD *)&v27 + 1) + 16 * v28;
      alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(
        &v36,
        v41);
    }
    v6 = v37;
    v31 = v37;
    v32 = v37;
    v33 = v36;
    v34 = &v37[3 * v38];
    if ( v38 )
    {
      while ( 1 )
      {
        v32 = v6 + 3;
        v7 = *v6;
        v42 = *(_OWORD *)(v6 + 1);
        if ( v7 == 0x8000000000000000LL )
          goto LABEL_21;
        v22 = v7;
        v23 = v42;
        v8 = v42;
        alloc::str::join_generic_copy(dest, v25, v26, asc_5A682, 1LL);
        v21.m256i_i64[2] = *(_QWORD *)&dest[1];
        *(_OWORD *)v21.m256i_i8 = dest[0];
        uu_pr::build_options(src, v29, v8, *((_QWORD *)&v8 + 1), *((_QWORD *)&dest[0] + 1));
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v21);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v21);
        if ( *(_QWORD *)&src[0] == 2LL )
          break;
        memcpy(dest, src, 0x148uLL);
        itertools::Itertools::exactly_one(&v21, v23, v23 + 16LL * *((_QWORD *)&v23 + 1));
        if ( v21.m256i_i32[0] == 2 )
          uu_pr::pr(&v35, *(_QWORD *)v21.m256i_i64[1], *(_QWORD *)(v21.m256i_i64[1] + 8), dest);
        else
          uu_pr::mpr(&v35, v23, *((_QWORD *)&v23 + 1), dest);
        if ( v35.m256i_i64[0] != 0x8000000000000005LL )
        {
          v21 = v35;
          ((void (__fastcall *)(_OWORD *, __m256i *, __int64, __int64, __int64, __int64))uu_pr::print_error)(
            v29,
            &v21,
            v9,
            v10,
            v11,
            v12);
          core::ptr::drop_in_place<uu_pr::PrError>(&v21);
          v2 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
          v4 = v14;
          core::ptr::drop_in_place<uu_pr::OutputOptions>(dest);
          goto LABEL_24;
        }
        core::ptr::drop_in_place<uu_pr::OutputOptions>(dest);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v22);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v22);
        v6 = v32;
        if ( v32 == v34 )
          goto LABEL_21;
      }
      v21 = *(__m256i *)((char *)src + 8);
      ((void (__fastcall *)(_OWORD *, __m256i *))uu_pr::print_error)(v29, &v21);
      v2 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
      v4 = v13;
      core::ptr::drop_in_place<uu_pr::PrError>(&v21);
LABEL_24:
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v22);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v22);
      <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v31);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v29);
      goto LABEL_25;
    }
LABEL_21:
    <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v31);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v29);
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v47);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v24);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v24);
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&dest[0] + 1));
  v4 = v3;
LABEL_25:
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v47);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v24);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v24);
  if ( !v2 )
    return (unsigned int)uucore::mods::error::get_exit_code();
  v21.m256i_i64[0] = v2;
  v21.m256i_i64[1] = v4;
  *(_QWORD *)&dest[0] = &v21;
  *((_QWORD *)&dest[0] + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v47 = (char **)&anon_ed1ebb40829bf58f514fb8171dd91230_55_llvm_9077216822178002531;
  v48 = 1LL;
  v51 = 0LL;
  v49 = dest;
  v50 = 1LL;
  alloc::fmt::format::format_inner(&v43, &v47);
  dest[0] = v43;
  *(_QWORD *)&dest[1] = v44;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v43 + 1), v44, 1LL, 0LL) )
  {
    *(_QWORD *)&v15 = uucore::util_name();
    src[0] = v15;
    *(_QWORD *)&v29[0] = src;
    *((_QWORD *)&v29[0] + 1) = <&T as core::fmt::Display>::fmt;
    v47 = (char **)&unk_28BEF8;
    v48 = 2LL;
    v51 = 0LL;
    v49 = v29;
    v50 = 1LL;
    std::io::stdio::_eprint(&v47);
    *(_QWORD *)&src[0] = dest;
    *((_QWORD *)&src[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v47 = (char **)&unk_28BF18;
    v48 = 2LL;
    v51 = 0LL;
    v49 = src;
    v50 = 1LL;
    std::io::stdio::_eprint(&v47);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v21.m256i_i64[1] + 104))(v21.m256i_i64[0]) )
  {
    *(_QWORD *)&v16 = uucore::execution_phrase();
    src[0] = v16;
    *(_QWORD *)&v29[0] = src;
    *((_QWORD *)&v29[0] + 1) = <&T as core::fmt::Display>::fmt;
    v47 = &off_28BF38;
    v48 = 2LL;
    v51 = 0LL;
    v49 = v29;
    v50 = 1LL;
    std::io::stdio::_eprint(&v47);
  }
  v17 = (*(__int64 (__fastcall **)(__int64))(v21.m256i_i64[1] + 96))(v21.m256i_i64[0]);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(dest);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(dest);
  v18 = *(_OWORD *)v21.m256i_i8;
  if ( *(_QWORD *)v21.m256i_i64[1] )
    (*(void (__fastcall **)(__int64))v21.m256i_i64[1])(v21.m256i_i64[0]);
  v19 = *(_QWORD *)(*((_QWORD *)&v18 + 1) + 8LL);
  if ( v19 )
    _rust_dealloc(v18, v19, *(_QWORD *)(*((_QWORD *)&v18 + 1) + 16LL));
  return v17;
}
