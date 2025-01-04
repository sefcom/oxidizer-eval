__int64 __fastcall uu_readlink::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  char flag; // r14
  char v4; // r15
  char v5; // bp
  unsigned __int8 v6; // r12
  bool v8; // zf
  unsigned __int8 v9; // r15
  __int128 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  char v16; // [rsp+Ah] [rbp-3DEh]
  char v17; // [rsp+Bh] [rbp-3DDh]
  unsigned __int8 v18; // [rsp+Ch] [rbp-3DCh]
  _BYTE v19[24]; // [rsp+10h] [rbp-3D8h] BYREF
  __int64 v20; // [rsp+30h] [rbp-3B8h] BYREF
  __int64 v21; // [rsp+38h] [rbp-3B0h] BYREF
  __int128 v22; // [rsp+40h] [rbp-3A8h]
  __int128 v23; // [rsp+50h] [rbp-398h] BYREF
  __int128 v24; // [rsp+60h] [rbp-388h] BYREF
  __m256i v25; // [rsp+70h] [rbp-378h]
  __int128 v26; // [rsp+90h] [rbp-358h]
  __int128 v27; // [rsp+A0h] [rbp-348h] BYREF
  __m256i v28; // [rsp+B0h] [rbp-338h]
  __int64 v29; // [rsp+D0h] [rbp-318h]
  __int128 v30; // [rsp+D8h] [rbp-310h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-300h]
  __int128 dest; // [rsp+F0h] [rbp-2F8h] BYREF
  __m256i v33; // [rsp+100h] [rbp-2E8h]
  __int128 v34; // [rsp+120h] [rbp-2C8h]

  uu_readlink::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v24, &dest, a1, a2);
  if ( (_QWORD)v24 != 0x8000000000000000LL )
  {
    v29 = v26;
    v28 = v25;
    v27 = v24;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v27, aNoNewline, 10LL);
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v27, aZero_0, 4LL);
    v4 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v27, aSilent, 6LL) )
      v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v27, aQuiet, 5LL);
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v27, aVerbose, 7LL);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v27, aCanonicalize, 12LL)
      || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v27, aCanonicalizeEx, 21LL)
      || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v27, aCanonicalizeMi, 20LL) )
    {
      v18 = 2;
      v5 = 0;
    }
    else
    {
      v5 = 1;
      v18 = 0;
    }
    v6 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v27, aCanonicalizeEx, 21LL) )
      v6 = 2 * clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v27, aCanonicalizeMi, 20LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, &v27, aFiles, 5LL);
    clap_builder::parser::error::MatchesError::unwrap(&v24, aFiles, 5LL, &dest);
    if ( !(_QWORD)v24
      || (v34 = v26,
          v33 = v25,
          dest = v24,
          <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v19, &dest),
          v23 = *(_OWORD *)&v19[8],
          *(_QWORD *)v19 == 0x8000000000000000LL) )
    {
      v21 = 0LL;
      v22 = 8uLL;
LABEL_14:
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v24);
      v33.m256i_i64[0] = v25.m256i_i64[0];
      dest = v24;
      v33.m256i_i32[2] = 1;
      v2 = alloc::boxed::Box<T>::new(&dest);
LABEL_15:
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v21);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v27);
      return v2;
    }
    v22 = v23;
    v21 = *(_QWORD *)v19;
    if ( !*((_QWORD *)&v23 + 1) )
      goto LABEL_14;
    if ( flag )
    {
      v8 = ((*((_QWORD *)&v23 + 1) == 1LL) | (unsigned __int8)v4) == 0;
      v9 = 11;
      if ( !v8 )
      {
LABEL_23:
        *(_QWORD *)&v23 = v22;
        *((_QWORD *)&v23 + 1) = v22 + 24LL * *((_QWORD *)&v22 + 1);
        v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v23);
        if ( !v11 )
        {
LABEL_33:
          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v21);
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v27);
          return 0LL;
        }
        v12 = v11;
        if ( v5 )
        {
          while ( 1 )
          {
            std::sys::os_str::bytes::Slice::to_owned(&dest, *(_QWORD *)(v12 + 8), *(_QWORD *)(v12 + 16));
            *(_OWORD *)v19 = dest;
            *(_QWORD *)&v19[16] = v33.m256i_i64[0];
            std::fs::read_link(&v24, v19);
            if ( (_QWORD)v24 == 0x8000000000000000LL )
              break;
            dest = v24;
            v33.m256i_i64[0] = v25.m256i_i64[0];
            v13 = uu_readlink::show(*((_QWORD *)&v24 + 1), v25.m256i_i64[0], v9);
            v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v13);
            if ( v2 )
              goto LABEL_36;
            core::ptr::drop_in_place<std::path::PathBuf>(&dest);
            core::ptr::drop_in_place<std::path::PathBuf>(v19);
            v12 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v23);
            if ( !v12 )
              goto LABEL_33;
          }
        }
        else
        {
          while ( 1 )
          {
            std::sys::os_str::bytes::Slice::to_owned(&dest, *(_QWORD *)(v12 + 8), *(_QWORD *)(v12 + 16));
            *(_OWORD *)v19 = dest;
            *(_QWORD *)&v19[16] = v33.m256i_i64[0];
            uucore::features::fs::canonicalize(&v24, v19, v6, v18);
            if ( (_QWORD)v24 == 0x8000000000000000LL )
              break;
            dest = v24;
            v33.m256i_i64[0] = v25.m256i_i64[0];
            v14 = uu_readlink::show(*((_QWORD *)&v24 + 1), v25.m256i_i64[0], v9);
            v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v14);
            if ( v2 )
            {
LABEL_36:
              core::ptr::drop_in_place<std::path::PathBuf>(&dest);
              goto LABEL_38;
            }
            core::ptr::drop_in_place<std::path::PathBuf>(&dest);
            core::ptr::drop_in_place<std::path::PathBuf>(v19);
            v12 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v23);
            if ( !v12 )
              goto LABEL_33;
          }
        }
        v15 = *((_QWORD *)&v24 + 1);
        if ( v16 )
        {
          v20 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                  *((_QWORD *)&v24 + 1),
                  v12);
          <T as alloc::string::ToString>::to_string(&v30, &v20);
          v33.m256i_i32[2] = 1;
          dest = v30;
          v33.m256i_i64[0] = v31;
          v2 = alloc::boxed::Box<T>::new(&dest);
          core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v20);
        }
        else
        {
          v2 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
          core::ptr::drop_in_place<std::io::error::Error>(v15);
        }
LABEL_38:
        core::ptr::drop_in_place<std::path::PathBuf>(v19);
        goto LABEL_15;
      }
      *(_QWORD *)&v10 = uucore::util_name();
      v24 = v10;
      *(_QWORD *)v19 = &v24;
      *(_QWORD *)&v19[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &unk_117EC0;
      *((_QWORD *)&dest + 1) = 2LL;
      v33.m256i_i64[0] = (__int64)v19;
      *(_OWORD *)&v33.m256i_u64[1] = 1uLL;
      std::io::stdio::_eprint(&dest);
      *(_QWORD *)&dest = &off_117F38;
      *((_QWORD *)&dest + 1) = 1LL;
      v33.m256i_i64[0] = 8LL;
      *(_OWORD *)&v33.m256i_u64[1] = 0LL;
      std::io::stdio::_eprint(&dest);
    }
    v9 = 10;
    if ( v17 )
      v9 = 0;
    goto LABEL_23;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v24 + 1));
}
