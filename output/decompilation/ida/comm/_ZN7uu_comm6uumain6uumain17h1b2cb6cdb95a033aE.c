// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall uu_comm::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int8 v4; // bp
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // r15
  char v11; // al
  const char *v12; // rbx
  __int64 v13; // r14
  __int64 v14; // r15
  char v15; // al
  const char *v16; // rdx
  char **v17; // rdi
  __int128 v18; // [rsp+0h] [rbp-3E8h] BYREF
  __int128 v19; // [rsp+10h] [rbp-3D8h]
  __int128 v20; // [rsp+20h] [rbp-3C8h]
  __int128 v21; // [rsp+30h] [rbp-3B8h]
  _BYTE v22[8]; // [rsp+40h] [rbp-3A8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-3A0h]
  __int64 v24; // [rsp+50h] [rbp-398h]
  _OWORD v25[3]; // [rsp+58h] [rbp-390h] BYREF
  __int64 v26; // [rsp+88h] [rbp-360h]
  _OWORD v27[3]; // [rsp+90h] [rbp-358h] BYREF
  char v28; // [rsp+C0h] [rbp-328h]
  _BYTE v29[7]; // [rsp+C1h] [rbp-327h]
  _OWORD v30[3]; // [rsp+C8h] [rbp-320h] BYREF
  char v31; // [rsp+F8h] [rbp-2F0h]
  _BYTE v32[7]; // [rsp+F9h] [rbp-2EFh]
  __int128 dest; // [rsp+100h] [rbp-2E8h] BYREF
  __int128 v34; // [rsp+110h] [rbp-2D8h]
  __int128 v35; // [rsp+120h] [rbp-2C8h]
  __int128 v36; // [rsp+130h] [rbp-2B8h]

  uu_comm::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v18, &dest, a1, a2);
  if ( __OFSUB__(-(__int64)v18, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *((_QWORD *)&v18 + 1),
             &dest,
             v2,
             -(__int64)v18);
  v26 = v21;
  v25[2] = v20;
  v25[1] = v19;
  v25[0] = v18;
  v4 = 10;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v25,
                          "zero-terminatedFILE1FILE2",
                          15LL) )
    v4 = 0;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v25, "FILE1FILE2");
  v5 = clap_builder::parser::error::MatchesError::unwrap("FILE1FILE2", &dest);
  if ( !v5 )
  {
    v17 = &off_E00A0;
    goto LABEL_22;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v25, "FILE2");
  v6 = clap_builder::parser::error::MatchesError::unwrap("FILE2", &dest);
  if ( !v6 )
  {
    v17 = &off_E00B8;
LABEL_22:
    core::option::unwrap_failed(v17);
  }
  uu_comm::open_file(&dest, *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16), v4);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v18,
    &dest,
    v5);
  v7 = v18;
  if ( (_BYTE)v21 != 11 )
  {
    v27[2] = v20;
    v27[1] = v19;
    *(_DWORD *)v29 = *(_DWORD *)((char *)&v21 + 1);
    *(_DWORD *)&v29[3] = DWORD1(v21);
    v27[0] = v18;
    v28 = v21;
    uu_comm::open_file(&dest, *(_QWORD *)(v6 + 8), *(_QWORD *)(v6 + 16), v4);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v18,
      &dest,
      v6);
    v7 = v18;
    if ( (_BYTE)v21 != 11 )
    {
      v30[2] = v20;
      v30[1] = v19;
      *(_DWORD *)v32 = *(_DWORD *)((char *)&v21 + 1);
      *(_DWORD *)&v32[3] = DWORD1(v21);
      v30[0] = v18;
      v31 = v21;
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v25);
      clap_builder::parser::error::MatchesError::unwrap(&v18, &dest);
      if ( !(_QWORD)v18 )
        core::option::unwrap_failed(&off_E00D0);
      v36 = v21;
      v35 = v20;
      v34 = v19;
      dest = v18;
      core::iter::traits::iterator::Iterator::collect(v22, &dest);
      if ( !v24 )
        core::slice::index::slice_start_index_len_fail(1LL, 0LL, &off_E0170);
      v8 = v23;
      v9 = 24 * v24 - 24;
      v10 = 0LL;
      while ( v9 != v10 )
      {
        v11 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                *(_QWORD *)(v8 + v10 + 32),
                *(_QWORD *)(v8 + v10 + 40),
                *(_QWORD *)(v8 + 8),
                *(_QWORD *)(v8 + 16));
        v10 += 24LL;
        if ( !v11 )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
            &v18,
            "multiple conflicting output delimiters specifiedzero-terminatedFILE1FILE2",
            48LL);
          *(_QWORD *)&v34 = v19;
          dest = v18;
          DWORD2(v34) = 1;
          v7 = alloc::boxed::Box<T>::new(&dest);
          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v22);
          core::ptr::drop_in_place<uu_comm::LineReader>(v30);
          goto LABEL_18;
        }
      }
      v12 = *(const char **)(v8 + 8);
      v13 = *(_QWORD *)(v8 + 16);
      v14 = 1LL;
      v15 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v12, v13, 1LL, 0LL);
      v16 = "";
      if ( !v15 )
      {
        v16 = v12;
        v14 = v13;
      }
      v7 = uu_comm::comm(v27, v30, v16, v14, v25);
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v22);
      core::ptr::drop_in_place<uu_comm::LineReader>(v30);
    }
LABEL_18:
    core::ptr::drop_in_place<uu_comm::LineReader>(v27);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v25);
  return v7;
}