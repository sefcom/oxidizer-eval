__int64 __fastcall uu_truncate::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rbp
  __int128 v6; // rax
  __int128 v7; // kr00_16
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int8 flag; // bp
  unsigned __int8 v12; // r12
  __int64 v13; // r14
  __int8 v14; // cl
  __int128 v15; // xmm0
  __int64 v16; // rbx
  _BOOL4 v17; // ebx
  __int64 v18; // r15
  __int64 (__fastcall **v19)(); // rdx
  __int64 (__fastcall **v20)(); // r12
  __int128 v21; // rax
  __int128 v22; // rax
  unsigned int v23; // ebx
  __int128 v24; // kr10_16
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rax
  _OWORD *v28; // rax
  __int128 v29; // xmm0
  __int64 v30; // r14
  __int64 (__fastcall **v31)(); // rdx
  __int128 v33; // [rsp+0h] [rbp-6C8h] BYREF
  __m256i *p_dest; // [rsp+10h] [rbp-6B8h]
  __int64 (__fastcall *v35)(); // [rsp+18h] [rbp-6B0h]
  __int128 v36; // [rsp+20h] [rbp-6A8h] BYREF
  __int64 v37; // [rsp+30h] [rbp-698h]
  __int128 v38; // [rsp+40h] [rbp-688h] BYREF
  __int64 v39; // [rsp+50h] [rbp-678h]
  _BYTE v40[56]; // [rsp+60h] [rbp-668h] BYREF
  unsigned __int64 v41; // [rsp+A0h] [rbp-628h]
  _BYTE *v42; // [rsp+A8h] [rbp-620h] BYREF
  _BYTE v43[20]; // [rsp+B0h] [rbp-618h]
  _BYTE v44[28]; // [rsp+C4h] [rbp-604h]
  _QWORD v45[2]; // [rsp+E0h] [rbp-5E8h] BYREF
  __int128 v46; // [rsp+F0h] [rbp-5D8h] BYREF
  __int64 v47; // [rsp+100h] [rbp-5C8h]
  __m256i src; // [rsp+108h] [rbp-5C0h] BYREF
  unsigned __int64 v49; // [rsp+128h] [rbp-5A0h]
  __int64 v50; // [rsp+130h] [rbp-598h]
  __int64 v51; // [rsp+140h] [rbp-588h]
  __m256i dest; // [rsp+3D0h] [rbp-2F8h] BYREF
  unsigned __int64 v53; // [rsp+3F0h] [rbp-2D8h]

  uu_truncate::uu_app(&src);
  clap_builder::builder::command::Command::after_help(&dest, &src);
  clap_builder::builder::command::Command::try_get_matches_from(v40, &dest, a1, a2);
  if ( *(_QWORD *)v40 == 0x8000000000000000LL )
  {
    v2 = *(_QWORD *)&v40[8];
    *(_QWORD *)&v36 = *(_QWORD *)&v40[8];
    if ( **(_DWORD **)&v40[8] == 2 )
      <clap_builder::error::format::RichFormatter as clap_builder::error::format::ErrorFormatter>::format_error(
        &v38,
        &v36);
    else
      clap_builder::error::Message::formatted(&v38, *(_QWORD *)&v40[8], *(_QWORD *)&v40[8] + 112LL);
    v14 = *(_BYTE *)(((*(_BYTE *)(v2 + 213) & 0x1E) == 12) + v2 + 211);
    src.m256i_i8[24] = (*(_BYTE *)(v2 + 213) & 0x1D) != 12;
    src.m256i_i8[25] = v14;
    src.m256i_i64[0] = 0LL;
    *(_OWORD *)&src.m256i_u64[1] = 1uLL;
    if ( (_QWORD)v38 == 0x8000000000000000LL )
    {
      <alloc::string::String as core::clone::Clone>::clone(&dest);
      p_dest = (__m256i *)dest.m256i_i64[2];
      v15 = *(_OWORD *)dest.m256i_i8;
    }
    else
    {
      p_dest = (__m256i *)v39;
      v15 = v38;
    }
    v33 = v15;
    ((void (__fastcall *)(__m256i *, __m256i *, __int128 *))clap_builder::output::fmt::Colorizer::with_content)(
      &dest,
      &src,
      &v33);
    v16 = clap_builder::output::fmt::Colorizer::print(&dest);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&dest);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&dest);
    if ( v16 )
    {
      src.m256i_i64[0] = v16;
      core::result::unwrap_failed(aErrorWritingCl, 25LL, &src, &off_DDFA0, &off_DDF20);
    }
    v17 = (*(_BYTE *)(v36 + 213) & 0x1D) != 12;
    core::ptr::drop_in_place<clap_builder::error::Error>();
    v18 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
    v20 = v19;
    if ( v18 )
      goto LABEL_16;
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  v41 = 0x8000000000000000LL;
  *(_OWORD *)&v43[4] = *(_OWORD *)&v40[12];
  *(_OWORD *)v44 = *(_OWORD *)&v40[28];
  *(_OWORD *)&v44[12] = *(_OWORD *)&v40[40];
  v42 = *(_BYTE **)v40;
  *(_DWORD *)v43 = *(_DWORD *)&v40[8];
  v3 = (__int64)*(&uu_truncate::options::ARG_FILES + 1);
  v4 = clap_builder::util::flat_map::FlatMap<K,V>::get(
         &v42,
         anon_ebe00b04e89979ab4e585c1b16fe1422_16_llvm_10932335356487094860,
         v3);
  v5 = v4;
  if ( v4 )
  {
    dest.m256i_i64[0] = 0x838CBAD8DA52F225LL;
    dest.m256i_i64[1] = 0xD5B29837CF1E5FA5LL;
    *(_QWORD *)&v6 = clap_builder::parser::matches::matched_arg::MatchedArg::infer_type_id(
                       v4,
                       0x838CBAD8DA52F225LL,
                       0xD5B29837CF1E5FA5LL);
    v7 = v6;
    *(_OWORD *)src.m256i_i8 = v6;
    if ( !(unsigned __int8)<clap_builder::util::any_value::AnyValueId as core::cmp::PartialEq>::eq(&dest, &src) )
    {
      *(_QWORD *)&v33 = anon_ebe00b04e89979ab4e585c1b16fe1422_16_llvm_10932335356487094860;
      *((_QWORD *)&v33 + 1) = v3;
      dest.m256i_i64[0] = 0LL;
      *(_OWORD *)&dest.m256i_u64[1] = v7;
      dest.m256i_i64[3] = 0x838CBAD8DA52F225LL;
      v53 = 0xD5B29837CF1E5FA5LL;
      *(_QWORD *)v40 = &v33;
      *(_QWORD *)&v40[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v40[16] = &dest;
      *(_QWORD *)&v40[24] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      src.m256i_i64[0] = (__int64)&off_DDF38;
      src.m256i_i64[1] = 2LL;
      v49 = 0LL;
      src.m256i_i64[2] = (__int64)v40;
      src.m256i_i64[3] = 2LL;
      core::panicking::panic_fmt(&src, &off_DDF58);
    }
    v8 = clap_builder::parser::matches::matched_arg::MatchedArg::num_vals(v5);
    v9 = *(_QWORD *)(v5 + 56);
    v10 = v9 + 24LL * *(_QWORD *)(v5 + 64);
    src.m256i_i64[0] = (__int64)clap_builder::parser::matches::arg_matches::unwrap_downcast_ref{{reify.shim}};
    src.m256i_i64[1] = v9;
    *(_OWORD *)&src.m256i_u64[2] = (unsigned __int64)v10;
    v49 = 0xD5B29837CF1E5FA5LL;
    v50 = 0LL;
    v51 = v8;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&dest, &src);
    v36 = *(_OWORD *)dest.m256i_i8;
    v37 = dest.m256i_i64[2];
    if ( dest.m256i_i64[2] )
    {
      flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               &v42,
               anon_ebe00b04e89979ab4e585c1b16fe1422_12_llvm_10932335356487094860,
               *(&uu_truncate::options::IO_BLOCKS + 1));
      v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
              &v42,
              anon_ebe00b04e89979ab4e585c1b16fe1422_13_llvm_10932335356487094860,
              *(&uu_truncate::options::NO_CREATE + 1));
      v13 = (__int64)*(&uu_truncate::options::REFERENCE + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
        v40,
        &v42,
        anon_ebe00b04e89979ab4e585c1b16fe1422_14_llvm_10932335356487094860,
        v13);
      *(_QWORD *)&v38 = anon_ebe00b04e89979ab4e585c1b16fe1422_14_llvm_10932335356487094860;
      *((_QWORD *)&v38 + 1) = v13;
      if ( *(_DWORD *)v40 != 2 )
      {
        v53 = *(_QWORD *)&v40[32];
        dest = *(__m256i *)v40;
        *(_QWORD *)&v33 = &v38;
        *((_QWORD *)&v33 + 1) = <&T as core::fmt::Display>::fmt;
        p_dest = &dest;
        v35 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        src.m256i_i64[0] = (__int64)&off_DDF38;
        src.m256i_i64[1] = 2LL;
        v49 = 0LL;
        src.m256i_i64[2] = (__int64)&v33;
        src.m256i_i64[3] = 2LL;
        core::panicking::panic_fmt(&src, &off_DDF58);
      }
      if ( *(_QWORD *)&v40[8] )
      {
        <alloc::string::String as core::clone::Clone>::clone(&src);
        v39 = src.m256i_i64[2];
        v38 = *(_OWORD *)src.m256i_i8;
      }
      else
      {
        *(_QWORD *)&v38 = 0x8000000000000000LL;
      }
      v30 = (__int64)*(&uu_truncate::options::SIZE + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
        v40,
        &v42,
        anon_ebe00b04e89979ab4e585c1b16fe1422_15_llvm_10932335356487094860,
        v30);
      v45[0] = anon_ebe00b04e89979ab4e585c1b16fe1422_15_llvm_10932335356487094860;
      v45[1] = v30;
      if ( *(_DWORD *)v40 != 2 )
      {
        v53 = *(_QWORD *)&v40[32];
        dest = *(__m256i *)v40;
        *(_QWORD *)&v33 = v45;
        *((_QWORD *)&v33 + 1) = <&T as core::fmt::Display>::fmt;
        p_dest = &dest;
        v35 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        src.m256i_i64[0] = (__int64)&off_DDF38;
        src.m256i_i64[1] = 2LL;
        v49 = 0LL;
        src.m256i_i64[2] = (__int64)&v33;
        src.m256i_i64[3] = 2LL;
        core::panicking::panic_fmt(&src, &off_DDF58);
      }
      if ( *(_QWORD *)&v40[8] )
      {
        <alloc::string::String as core::clone::Clone>::clone(&src);
        v41 = src.m256i_i64[0];
        *(_OWORD *)v40 = *(_OWORD *)&src.m256i_u64[1];
      }
      dest.m256i_i64[2] = v39;
      *(_OWORD *)dest.m256i_i8 = v38;
      src.m256i_i64[0] = v41;
      *(_OWORD *)&src.m256i_u64[1] = *(_OWORD *)v40;
      v18 = uu_truncate::truncate(v12, flag, &dest, &src, *((_QWORD *)&v36 + 1), v37);
      v20 = v31;
      goto LABEL_33;
    }
  }
  else
  {
    *(_QWORD *)&v36 = 0LL;
    *((_QWORD *)&v36 + 1) = 8LL;
    v37 = 0LL;
  }
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&src, 20LL, 0LL);
  v26 = src.m256i_i64[1];
  if ( src.m256i_i64[0] )
    alloc::raw_vec::handle_error(src.m256i_i64[1], src.m256i_i64[2]);
  v27 = src.m256i_i64[2];
  *(_OWORD *)src.m256i_i64[2] = *(_OWORD *)aMissingFileOpe;
  *(_DWORD *)(v27 + 16) = 1684955506;
  src.m256i_i32[6] = 1;
  src.m256i_i64[0] = v26;
  src.m256i_i64[1] = v27;
  src.m256i_i64[2] = 20LL;
  v28 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v28 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v18 = (__int64)v28;
  v29 = *(_OWORD *)src.m256i_i8;
  v28[1] = *(_OWORD *)&src.m256i_u64[2];
  *v28 = v29;
  v20 = &off_DDEB0;
LABEL_33:
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v36);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v36);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v42);
  if ( !v18 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_16:
  *(_QWORD *)&v33 = v18;
  *((_QWORD *)&v33 + 1) = v20;
  dest.m256i_i64[0] = (__int64)&v33;
  dest.m256i_i64[1] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  src.m256i_i64[0] = (__int64)&unk_10020;
  src.m256i_i64[1] = 1LL;
  v49 = 0LL;
  src.m256i_i64[2] = (__int64)&dest;
  src.m256i_i64[3] = 1LL;
  alloc::fmt::format::format_inner(&v46, &src);
  *(_OWORD *)dest.m256i_i8 = v46;
  dest.m256i_i64[2] = v47;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v46 + 1), v47, 1LL, 0LL) )
  {
    *(_QWORD *)&v21 = uucore::util_name();
    *(_OWORD *)v40 = v21;
    v42 = v40;
    *(_QWORD *)v43 = <&T as core::fmt::Display>::fmt;
    src.m256i_i64[0] = (__int64)&unk_DDE18;
    src.m256i_i64[1] = 2LL;
    v49 = 0LL;
    src.m256i_i64[2] = (__int64)&v42;
    src.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&src);
    *(_QWORD *)v40 = &dest;
    *(_QWORD *)&v40[8] = <alloc::string::String as core::fmt::Display>::fmt;
    src.m256i_i64[0] = (__int64)&unk_DDE38;
    src.m256i_i64[1] = 2LL;
    v49 = 0LL;
    src.m256i_i64[2] = (__int64)v40;
    src.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&src);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v33 + 1) + 104LL))(v33) )
  {
    *(_QWORD *)&v22 = uucore::execution_phrase();
    *(_OWORD *)v40 = v22;
    v42 = v40;
    *(_QWORD *)v43 = <&T as core::fmt::Display>::fmt;
    src.m256i_i64[0] = (__int64)&off_DDE58;
    src.m256i_i64[1] = 2LL;
    v49 = 0LL;
    src.m256i_i64[2] = (__int64)&v42;
    src.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&src);
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v33 + 1) + 96LL))(v33);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&dest);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&dest);
  v24 = v33;
  if ( **((_QWORD **)&v33 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v33 + 1))(v33);
  v25 = *(_QWORD *)(*((_QWORD *)&v24 + 1) + 8LL);
  if ( v25 )
    _rust_dealloc(v24, v25, *(_QWORD *)(*((_QWORD *)&v24 + 1) + 16LL));
  return v23;
}
