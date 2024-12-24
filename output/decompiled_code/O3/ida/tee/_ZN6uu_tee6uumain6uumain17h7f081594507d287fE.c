__int64 __fastcall uu_tee::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  char flag; // bl
  char v4; // bp
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r15
  char v11; // al
  char v12; // al
  char v13; // al
  __int64 v14; // rbx
  __int128 v16; // [rsp+0h] [rbp-398h]
  __int64 v17; // [rsp+10h] [rbp-388h]
  _OWORD v18[3]; // [rsp+20h] [rbp-378h] BYREF
  __int64 v19; // [rsp+50h] [rbp-348h]
  __int128 v20; // [rsp+58h] [rbp-340h] BYREF
  __int128 v21; // [rsp+68h] [rbp-330h]
  __int128 v22; // [rsp+78h] [rbp-320h]
  __int128 v23; // [rsp+88h] [rbp-310h]
  __int128 v24; // [rsp+98h] [rbp-300h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-2F0h]
  __int128 v26; // [rsp+B0h] [rbp-2E8h] BYREF
  __int128 v27; // [rsp+C0h] [rbp-2D8h]
  __int128 v28; // [rsp+D0h] [rbp-2C8h]
  __int128 v29; // [rsp+E0h] [rbp-2B8h]

  uu_tee::uu_app(&v26);
  clap_builder::builder::command::Command::try_get_matches_from(&v20, &v26, a1, a2);
  if ( (_QWORD)v20 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v20 + 1));
  v19 = v23;
  v18[2] = v22;
  v18[1] = v21;
  v18[0] = v20;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v18, aAppend, 6LL);
  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v18, aIgnoreInterrup, 17LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v26, v18);
  clap_builder::parser::error::MatchesError::unwrap(&v20, aFile, 4LL, &v26);
  if ( (_QWORD)v20 )
  {
    v29 = v23;
    v28 = v22;
    v27 = v21;
    v26 = v20;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v24, &v26);
    v16 = v24;
    v17 = v25;
  }
  else
  {
    *(_QWORD *)&v16 = 0LL;
    *((_QWORD *)&v16 + 1) = 8LL;
    v17 = 0LL;
  }
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v18, aIgnorePipeErro, 18LL) )
  {
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v18, aOutputError, 12LL);
    LOBYTE(v5) = 4;
    if ( !v6 )
      goto LABEL_15;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v26, v18, v7, v5);
    v8 = clap_builder::parser::error::MatchesError::unwrap(aOutputError, 12LL, &v26);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 8);
      v10 = *(_QWORD *)(v8 + 16);
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, aWarn, 4LL) )
      {
        LOBYTE(v5) = 0;
      }
      else
      {
        v11 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, aWarnNopipe, 11LL);
        LOBYTE(v5) = 1;
        if ( !v11 )
        {
          v12 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, aExit_0, 4LL);
          LOBYTE(v5) = 2;
          if ( !v12 )
          {
            v13 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, aExitNopipe, 11LL);
            LOBYTE(v5) = 3;
            if ( !v13 )
              core::panicking::panic(aInternalErrorE_0, 40LL, &off_11DAD0, v5);
          }
        }
      }
      goto LABEL_15;
    }
  }
  LOBYTE(v5) = 1;
LABEL_15:
  BYTE8(v27) = flag;
  BYTE9(v27) = v4;
  v26 = v16;
  *(_QWORD *)&v27 = v17;
  BYTE10(v27) = v5;
  v14 = uu_tee::tee((__int64)&v26);
  if ( v14 )
    v2 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
  else
    v2 = 0LL;
  core::ptr::drop_in_place<uu_tee::Options>(&v26);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v18);
  core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v14);
  return v2;
}
