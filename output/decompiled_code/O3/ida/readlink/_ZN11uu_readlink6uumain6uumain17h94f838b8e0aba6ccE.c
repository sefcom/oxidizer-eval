__int64 __fastcall uu_readlink::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int8 flag; // r14
  char v4; // r15
  char v5; // bp
  unsigned __int8 v6; // r12
  unsigned __int8 v8; // r15
  __int128 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  char v15; // [rsp+Ah] [rbp-3DEh]
  char v16; // [rsp+Bh] [rbp-3DDh]
  unsigned __int8 v17; // [rsp+Ch] [rbp-3DCh]
  _BYTE v18[24]; // [rsp+10h] [rbp-3D8h] BYREF
  __int64 v19; // [rsp+30h] [rbp-3B8h] BYREF
  __int64 v20; // [rsp+38h] [rbp-3B0h] BYREF
  __int128 v21; // [rsp+40h] [rbp-3A8h]
  __int128 v22; // [rsp+50h] [rbp-398h] BYREF
  __int128 v23; // [rsp+60h] [rbp-388h] BYREF
  __m256i v24; // [rsp+70h] [rbp-378h]
  __int128 v25; // [rsp+90h] [rbp-358h]
  __int128 v26; // [rsp+A0h] [rbp-348h] BYREF
  __m256i v27; // [rsp+B0h] [rbp-338h]
  __int64 v28; // [rsp+D0h] [rbp-318h]
  __int128 v29; // [rsp+D8h] [rbp-310h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-300h]
  __int128 dest; // [rsp+F0h] [rbp-2F8h] BYREF
  __m256i v32; // [rsp+100h] [rbp-2E8h]
  __int128 v33; // [rsp+120h] [rbp-2C8h]

  uu_readlink::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v23, &dest, a1, a2);
  if ( (_QWORD)v23 != 0x8000000000000000LL )
  {
    v28 = v25;
    v27 = v24;
    v26 = v23;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v26, aNoNewline, 10LL);
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v26, aZero_0, 4LL);
    v4 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v26, aSilent, 6LL) )
      v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v26, aQuiet, 5LL);
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v26, aVerbose, 7LL);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v26, aCanonicalize, 12LL)
      || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v26, aCanonicalizeEx, 21LL)
      || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v26, aCanonicalizeMi, 20LL) )
    {
      v17 = 2;
      v5 = 0;
    }
    else
    {
      v5 = 1;
      v17 = 0;
    }
    v6 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v26, aCanonicalizeEx, 21LL) )
      v6 = 2 * clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v26, aCanonicalizeMi, 20LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, &v26, aFiles, 5LL);
    clap_builder::parser::error::MatchesError::unwrap(&v23, aFiles, 5LL, &dest);
    if ( !(_QWORD)v23
      || (v33 = v25,
          v32 = v24,
          dest = v23,
          <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v18, &dest),
          v22 = *(_OWORD *)&v18[8],
          *(_QWORD *)v18 == 0x8000000000000000LL) )
    {
      v20 = 0LL;
      v21 = 8uLL;
LABEL_14:
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v23);
      v32.m256i_i64[0] = v24.m256i_i64[0];
      dest = v23;
      v32.m256i_i32[2] = 1;
      v2 = alloc::boxed::Box<T>::new(&dest);
LABEL_15:
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v20);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v26);
      return v2;
    }
    v21 = v22;
    v20 = *(_QWORD *)v18;
    if ( !*((_QWORD *)&v22 + 1) )
      goto LABEL_14;
    if ( (*((_QWORD *)&v22 + 1) == 1LL) | flag ^ 1 | (unsigned __int8)v4 )
    {
      v8 = 11;
      if ( flag )
      {
LABEL_25:
        *(_QWORD *)&v22 = v21;
        *((_QWORD *)&v22 + 1) = v21 + 24LL * *((_QWORD *)&v21 + 1);
        v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v22);
        if ( !v10 )
        {
LABEL_34:
          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v20);
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v26);
          return 0LL;
        }
        v11 = v10;
        if ( v5 )
        {
          while ( 1 )
          {
            std::sys::os_str::bytes::Slice::to_owned(&dest, *(_QWORD *)(v11 + 8), *(_QWORD *)(v11 + 16));
            *(_OWORD *)v18 = dest;
            *(_QWORD *)&v18[16] = v32.m256i_i64[0];
            std::fs::read_link(&v23, v18);
            if ( (_QWORD)v23 == 0x8000000000000000LL )
              break;
            dest = v23;
            v32.m256i_i64[0] = v24.m256i_i64[0];
            v12 = uu_readlink::show(*((_QWORD *)&v23 + 1), v24.m256i_i64[0], v8);
            v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v12);
            if ( v2 )
              goto LABEL_37;
            core::ptr::drop_in_place<std::path::PathBuf>(&dest);
            core::ptr::drop_in_place<std::path::PathBuf>(v18);
            v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v22);
            if ( !v11 )
              goto LABEL_34;
          }
        }
        else
        {
          while ( 1 )
          {
            std::sys::os_str::bytes::Slice::to_owned(&dest, *(_QWORD *)(v11 + 8), *(_QWORD *)(v11 + 16));
            *(_OWORD *)v18 = dest;
            *(_QWORD *)&v18[16] = v32.m256i_i64[0];
            uucore::features::fs::canonicalize(&v23, v18, v6, v17);
            if ( (_QWORD)v23 == 0x8000000000000000LL )
              break;
            dest = v23;
            v32.m256i_i64[0] = v24.m256i_i64[0];
            v13 = uu_readlink::show(*((_QWORD *)&v23 + 1), v24.m256i_i64[0], v8);
            v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v13);
            if ( v2 )
            {
LABEL_37:
              core::ptr::drop_in_place<std::path::PathBuf>(&dest);
              goto LABEL_39;
            }
            core::ptr::drop_in_place<std::path::PathBuf>(&dest);
            core::ptr::drop_in_place<std::path::PathBuf>(v18);
            v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v22);
            if ( !v11 )
              goto LABEL_34;
          }
        }
        v14 = *((_QWORD *)&v23 + 1);
        if ( v15 )
        {
          v19 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                  *((_QWORD *)&v23 + 1),
                  v11);
          <T as alloc::string::ToString>::to_string(&v29, &v19);
          v32.m256i_i32[2] = 1;
          dest = v29;
          v32.m256i_i64[0] = v30;
          v2 = alloc::boxed::Box<T>::new(&dest);
          core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v19);
        }
        else
        {
          v2 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
          core::ptr::drop_in_place<std::io::error::Error>(v14);
        }
LABEL_39:
        core::ptr::drop_in_place<std::path::PathBuf>(v18);
        goto LABEL_15;
      }
    }
    else
    {
      *(_QWORD *)&v9 = uucore::util_name();
      v23 = v9;
      *(_QWORD *)v18 = &v23;
      *(_QWORD *)&v18[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &unk_1190E8;
      *((_QWORD *)&dest + 1) = 2LL;
      v32.m256i_i64[0] = (__int64)v18;
      *(_OWORD *)&v32.m256i_u64[1] = 1uLL;
      std::io::stdio::_eprint(&dest);
      *(_QWORD *)&dest = &off_1191D8;
      *((_QWORD *)&dest + 1) = 1LL;
      v32.m256i_i64[0] = 8LL;
      *(_OWORD *)&v32.m256i_u64[1] = 0LL;
      std::io::stdio::_eprint(&dest);
    }
    v8 = 10;
    if ( v16 )
      v8 = 0;
    goto LABEL_25;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v23 + 1));
}
