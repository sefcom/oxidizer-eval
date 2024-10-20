__int64 __fastcall uu_cksum::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 (__fastcall **v3)(); // rdx
  __int64 (__fastcall **v4)(); // r13
  unsigned __int8 flag; // bp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // r14
  __int64 v10; // r14
  unsigned __int8 v11; // r12
  unsigned __int8 v12; // r15
  char v13; // al
  __int128 v14; // rax
  __int128 v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // r14
  __int64 (__fastcall **v18)(); // r15
  __int64 (__fastcall *v19)(); // rsi
  char v20; // bp
  __int64 v21; // r15
  __int64 v22; // r12
  __int64 v23; // r15
  char v24; // bp
  __int128 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 (__fastcall **v28)(); // rdx
  __int64 (__fastcall **v29)(); // rdx
  unsigned __int8 v31; // [rsp+6h] [rbp-412h]
  __int16 v32; // [rsp+6h] [rbp-412h]
  unsigned __int8 v33; // [rsp+7h] [rbp-411h]
  __int128 v34; // [rsp+8h] [rbp-410h] BYREF
  __int64 v35; // [rsp+18h] [rbp-400h] BYREF
  __int64 (__fastcall **v36)(); // [rsp+20h] [rbp-3F8h]
  __int64 v37; // [rsp+28h] [rbp-3F0h]
  __int128 v38; // [rsp+30h] [rbp-3E8h]
  __int64 v39; // [rsp+40h] [rbp-3D8h]
  __int128 v40; // [rsp+48h] [rbp-3D0h] BYREF
  __m256i v41; // [rsp+58h] [rbp-3C0h]
  __int64 v42; // [rsp+78h] [rbp-3A0h]
  __int128 v43; // [rsp+80h] [rbp-398h] BYREF
  __m256i v44; // [rsp+90h] [rbp-388h] BYREF
  __int128 v45; // [rsp+B0h] [rbp-368h]
  __m128i v46; // [rsp+C0h] [rbp-358h] BYREF
  __int64 v47; // [rsp+D0h] [rbp-348h]
  __m128i v48; // [rsp+108h] [rbp-310h] BYREF
  __int64 v49; // [rsp+118h] [rbp-300h]
  __int128 v50; // [rsp+120h] [rbp-2F8h] BYREF
  __m256i v51; // [rsp+130h] [rbp-2E8h]
  __int128 v52; // [rsp+150h] [rbp-2C8h]

  uu_cksum::uu_app(&v50);
  clap_builder::builder::command::Command::try_get_matches_from(&v43, &v50, a1, a2);
  if ( (_QWORD)v43 != 0x8000000000000000LL )
  {
    v42 = v45;
    v41 = v44;
    v40 = v43;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v40, aCheck, 5LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v50, &v40, aAlgorithm, 9LL);
    v6 = clap_builder::parser::error::MatchesError::unwrap(aAlgorithm, 9LL, &v50);
    if ( v6 )
    {
      v34 = *(_OWORD *)(v6 + 8);
      if ( ((unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(&v34, &off_2C7A18, 3LL) & flag) == 0 )
      {
LABEL_12:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v50, &v40, aLength, 6LL);
        v8 = clap_builder::parser::error::MatchesError::unwrap(aLength, 6LL, &v50);
        v9 = (_QWORD *)v8;
        if ( v8 )
        {
          if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                   v34,
                                   *((_QWORD *)&v34 + 1),
                                   aBlake2b_0,
                                   7LL) )
          {
            *(_QWORD *)&v50 = 0x800000000000000ALL;
            v7 = _rust_alloc(24LL, 8LL);
            if ( !v7 )
              alloc::alloc::handle_alloc_error(8LL, 24LL);
            goto LABEL_22;
          }
          uucore::features::checksum::calculate_blake2b_length(&v50, *v9);
          v10 = *((_QWORD *)&v50 + 1);
          v8 = v51.m256i_i64[0];
          if ( (_QWORD)v50 )
          {
            v4 = (__int64 (__fastcall **)())v51.m256i_i64[0];
            v2 = *((_QWORD *)&v50 + 1);
            goto LABEL_23;
          }
        }
        else
        {
          v10 = 0LL;
        }
        v39 = v8;
        if ( flag )
        {
          v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v40, aText, 4LL);
          v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v40, aBinary, 6LL);
          v33 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v40, aStrict, 6LL);
          v31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v40, aStatus, 6LL);
          BYTE8(v38) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v40, aWarn, 4LL);
          LOBYTE(v38) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v40, aIgnoreMissing, 14LL);
          v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v40, aQuiet, 5LL);
          if ( (v12 | v11) == 1 )
          {
            *(_QWORD *)&v50 = 0x800000000000000BLL;
            v7 = _rust_alloc(24LL, 8LL);
            if ( !v7 )
              alloc::alloc::handle_alloc_error(8LL, 24LL);
LABEL_22:
            v2 = v7;
            *(_QWORD *)(v7 + 16) = v51.m256i_i64[0];
            *(_OWORD *)v7 = v50;
            v4 = &off_2C7600;
            goto LABEL_23;
          }
          v20 = v13;
          v21 = *((_QWORD *)&v34 + 1);
          v22 = *((_QWORD *)&v34 + 1);
          if ( *((_QWORD *)&v34 + 1) )
            v22 = v34;
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v50, &v40, "filemode{", 4LL);
          clap_builder::parser::error::MatchesError::unwrap(&v43, "filemode{", 4LL, &v50);
          if ( (_QWORD)v43 )
          {
            v52 = v45;
            v51 = v44;
            v50 = v43;
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v35);
          }
          else
          {
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v35, asc_60DC0, 1LL);
          }
          v2 = uucore::features::checksum::perform_checksum_validation(
                 (_DWORD)v36,
                 (int)v36 + 16 * (int)v37,
                 v33,
                 v31,
                 BYTE8(v38),
                 0,
                 v38,
                 v20,
                 v22,
                 v21,
                 v10,
                 v39);
          v4 = v29;
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v35);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v35);
        }
        else
        {
          uu_cksum::handle_tag_text_binary_flags(&v50, &v40);
          v2 = v50;
          if ( (_QWORD)v50 )
          {
            v4 = (__int64 (__fastcall **)())*((_QWORD *)&v50 + 1);
          }
          else
          {
            v32 = WORD4(v50);
            uucore::features::checksum::detect_algo(&v50, v34, *((_QWORD *)&v34 + 1), v10, v39);
            v2 = *((_QWORD *)&v50 + 1);
            v23 = v50;
            v4 = (__int64 (__fastcall **)())v51.m256i_i64[0];
            if ( (_QWORD)v50 )
            {
              *(_OWORD *)&v44.m256i_u64[1] = *(_OWORD *)&v51.m256i_u64[1];
              v43 = v50;
              v44.m256i_i64[0] = v51.m256i_i64[0];
              v24 = 1;
              if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v40, aRaw, 3LL) )
                v24 = 2 * clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v40, aBase64, 6LL);
              *(_QWORD *)&v25 = <alloc::boxed::Box<F,A> as core::ops::function::Fn<Args>>::call(&v44);
              v38 = v25;
              v26 = v44.m256i_i64[2];
              clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v50, &v40, "filemode{", 4LL);
              clap_builder::parser::error::MatchesError::unwrap(&v46, "filemode{", 4LL, &v50);
              *(_QWORD *)&v50 = v10;
              *((_QWORD *)&v50 + 1) = v39;
              v51.m256i_i64[0] = v23;
              v51.m256i_i64[1] = v2;
              *(_OWORD *)&v51.m256i_u64[2] = v38;
              *(_QWORD *)&v52 = v26;
              WORD4(v52) = v32;
              BYTE10(v52) = v24;
              if ( v46.m128i_i64[0] )
                v27 = uu_cksum::cksum((__int64)&v50, &v46);
              else
                v27 = uu_cksum::cksum((__int64)&v50);
              v2 = v27;
              if ( !v27 )
              {
                core::ptr::drop_in_place<uu_cksum::Options>(v44.m256i_i64[0], v44.m256i_i64[1]);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v40);
                return (unsigned int)uucore::mods::error::get_exit_code();
              }
              v4 = v28;
              core::ptr::drop_in_place<uu_cksum::Options>(v44.m256i_i64[0], v44.m256i_i64[1]);
            }
          }
        }
LABEL_23:
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v40);
        if ( v2 )
          goto LABEL_24;
        return (unsigned int)uucore::mods::error::get_exit_code();
      }
    }
    else
    {
      if ( !flag )
      {
        *(_QWORD *)&v34 = aCrc;
        *((_QWORD *)&v34 + 1) = 3LL;
        <T as core::slice::cmp::SliceContains>::slice_contains(&v34, &off_2C7A18, 3LL);
        goto LABEL_12;
      }
      v34 = 1uLL;
      if ( !(unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(&v34, &off_2C7A18, 3LL) )
        goto LABEL_12;
    }
    *(_QWORD *)&v50 = 0x800000000000000CLL;
    v7 = _rust_alloc(24LL, 8LL);
    if ( !v7 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    goto LABEL_22;
  }
  v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v43 + 1));
  v4 = v3;
  if ( !v2 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_24:
  v35 = v2;
  v36 = v4;
  v46.m128i_i64[0] = (__int64)&v35;
  v46.m128i_i64[1] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&v50 = &anon_ed1ebb40829bf58f514fb8171dd91230_55_llvm_9077216822178002531;
  *((_QWORD *)&v50 + 1) = 1LL;
  v51.m256i_i64[0] = (__int64)&v46;
  *(_OWORD *)&v51.m256i_u64[1] = 1uLL;
  alloc::fmt::format::format_inner(&v48, &v50);
  v46 = v48;
  v47 = v49;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v48.m128i_i64[1], v49, 1LL, 0LL) )
  {
    *(_QWORD *)&v14 = uucore::util_name();
    v43 = v14;
    *(_QWORD *)&v40 = &v43;
    *((_QWORD *)&v40 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v50 = &unk_2C79D8;
    *((_QWORD *)&v50 + 1) = 2LL;
    v51.m256i_i64[0] = (__int64)&v40;
    *(_OWORD *)&v51.m256i_u64[1] = 1uLL;
    std::io::stdio::_eprint(&v50);
    *(_QWORD *)&v43 = &v46;
    *((_QWORD *)&v43 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v50 = &unk_2C78F0;
    *((_QWORD *)&v50 + 1) = 2LL;
    v51.m256i_i64[0] = (__int64)&v43;
    *(_OWORD *)&v51.m256i_u64[1] = 1uLL;
    std::io::stdio::_eprint(&v50);
  }
  if ( ((unsigned __int8 (__fastcall *)(__int64))v36[13])(v35) )
  {
    *(_QWORD *)&v15 = uucore::execution_phrase();
    v43 = v15;
    *(_QWORD *)&v40 = &v43;
    *((_QWORD *)&v40 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v50 = &off_2C79F8;
    *((_QWORD *)&v50 + 1) = 2LL;
    v51.m256i_i64[0] = (__int64)&v40;
    *(_OWORD *)&v51.m256i_u64[1] = 1uLL;
    std::io::stdio::_eprint(&v50);
  }
  v16 = ((__int64 (__fastcall *)(__int64))v36[12])(v35);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v46);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v46);
  v17 = v35;
  v18 = v36;
  if ( *v36 )
    ((void (__fastcall *)(__int64))*v36)(v35);
  v19 = v18[1];
  if ( v19 )
    _rust_dealloc(v17, v19, v18[2]);
  return v16;
}
