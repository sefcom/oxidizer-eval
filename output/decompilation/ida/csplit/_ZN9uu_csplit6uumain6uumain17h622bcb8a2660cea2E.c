__int64 __fastcall uu_csplit::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rax
  char v9; // dl
  __int64 v10; // rbx
  __int64 v11; // r14
  char **v12; // rdi
  _OWORD v13[2]; // [rsp+8h] [rbp-400h] BYREF
  __int64 v14; // [rsp+28h] [rbp-3E0h]
  char v15[8]; // [rsp+30h] [rbp-3D8h] BYREF
  __int64 v16; // [rsp+38h] [rbp-3D0h]
  __int64 v17; // [rsp+40h] [rbp-3C8h]
  __int64 v18; // [rsp+48h] [rbp-3C0h] BYREF
  _BYTE v19[48]; // [rsp+50h] [rbp-3B8h] BYREF
  __int128 v20; // [rsp+80h] [rbp-388h]
  __int128 v21; // [rsp+90h] [rbp-378h]
  __int128 v22; // [rsp+A0h] [rbp-368h]
  __int64 v23; // [rsp+B0h] [rbp-358h]
  _OWORD v24[3]; // [rsp+B8h] [rbp-350h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-320h]
  __int128 v26; // [rsp+F0h] [rbp-318h] BYREF
  __int128 v27; // [rsp+100h] [rbp-308h]
  __int64 v28; // [rsp+110h] [rbp-2F8h]
  _BYTE dest[48]; // [rsp+120h] [rbp-2E8h] BYREF
  __int128 v30; // [rsp+150h] [rbp-2B8h]
  __int128 v31; // [rsp+160h] [rbp-2A8h]
  __int128 v32; // [rsp+170h] [rbp-298h]
  __int64 v33; // [rsp+180h] [rbp-288h]

  uu_csplit::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(v19, dest, a1, a2);
  if ( __OFSUB__(-*(_QWORD *)v19, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *(_QWORD *)&v19[8],
             dest,
             v2,
             -*(_QWORD *)v19);
  v25 = v20;
  v24[2] = *(_OWORD *)&v19[32];
  v24[1] = *(_OWORD *)&v19[16];
  v24[0] = *(_OWORD *)v19;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v24);
  v4 = clap_builder::parser::error::MatchesError::unwrap(dest);
  if ( !v4 )
  {
    v12 = &off_241D90;
    goto LABEL_18;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v24);
  clap_builder::parser::error::MatchesError::unwrap(v19, dest);
  if ( !*(_QWORD *)v19 )
  {
    v12 = &off_241DA8;
LABEL_18:
    core::option::unwrap_failed(v12);
  }
  v30 = v20;
  *(_OWORD *)&dest[32] = *(_OWORD *)&v19[32];
  *(_OWORD *)&dest[16] = *(_OWORD *)&v19[16];
  *(_OWORD *)dest = *(_OWORD *)v19;
  core::iter::traits::iterator::Iterator::collect(v15, dest);
  uu_csplit::CsplitOptions::new(dest, v24);
  v28 = *(_QWORD *)&dest[40];
  v26 = *(_OWORD *)&dest[8];
  v27 = *(_OWORD *)&dest[24];
  if ( *(_QWORD *)dest != 0x8000000000000000LL )
  {
    v23 = v33;
    v22 = v32;
    v21 = v31;
    v20 = v30;
    *(_OWORD *)&v19[8] = v26;
    *(_OWORD *)&v19[24] = v27;
    *(_QWORD *)&v19[40] = v28;
    *(_QWORD *)v19 = *(_QWORD *)dest;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(v4 + 8),
                            *(_QWORD *)(v4 + 16),
                            asc_53B65,
                            1LL) )
    {
      v18 = std::io::stdio::stdin();
      v6 = v16;
      v7 = v17;
      v8 = std::io::stdio::Stdin::lock(&v18);
      uu_csplit::csplit(v13, v19, v6, v7, v8, v9 & 1);
      if ( LODWORD(v13[0]) != 13 )
        goto LABEL_13;
    }
    else
    {
      std::fs::File::open(dest, v4);
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        v13,
        dest,
        *(_QWORD *)(v4 + 8),
        *(_QWORD *)(v4 + 16));
      v5 = *(_QWORD *)&v13[0];
      if ( *(_QWORD *)&v13[0] )
      {
LABEL_14:
        core::ptr::drop_in_place<uu_csplit::CsplitOptions>(v19);
        goto LABEL_15;
      }
      v10 = v16;
      v11 = v17;
      std::io::buffered::bufreader::BufReader<R>::with_capacity(dest, DWORD2(v13[0]));
      uu_csplit::csplit((__int64)v13, (__int64)v19, v10, v11, (__int128 *)dest);
      if ( LODWORD(v13[0]) != 13 )
      {
LABEL_13:
        *(_QWORD *)&dest[32] = v14;
        *(_OWORD *)&dest[16] = v13[1];
        *(_OWORD *)dest = v13[0];
        v5 = alloc::boxed::Box<T>::new(dest);
        goto LABEL_14;
      }
    }
    core::ptr::drop_in_place<uu_csplit::CsplitOptions>(v19);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v15);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v24);
    return 0LL;
  }
  v5 = alloc::boxed::Box<T>::new(&v26);
LABEL_15:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v15);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v24);
  return v5;
}