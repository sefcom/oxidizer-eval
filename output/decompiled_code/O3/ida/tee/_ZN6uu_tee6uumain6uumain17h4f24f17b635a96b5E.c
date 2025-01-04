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
  _BYTE v16[24]; // [rsp+8h] [rbp-390h]
  _OWORD v17[3]; // [rsp+20h] [rbp-378h] BYREF
  __int64 v18; // [rsp+50h] [rbp-348h]
  __int128 v19; // [rsp+58h] [rbp-340h] BYREF
  __int128 v20; // [rsp+68h] [rbp-330h]
  __int128 v21; // [rsp+78h] [rbp-320h]
  __int128 v22; // [rsp+88h] [rbp-310h]
  __int64 v23; // [rsp+98h] [rbp-300h] BYREF
  __int128 v24; // [rsp+A0h] [rbp-2F8h]
  __int128 v25; // [rsp+B0h] [rbp-2E8h] BYREF
  __int128 v26; // [rsp+C0h] [rbp-2D8h]
  __int128 v27; // [rsp+D0h] [rbp-2C8h]
  __int128 v28; // [rsp+E0h] [rbp-2B8h]

  uu_tee::uu_app(&v25);
  clap_builder::builder::command::Command::try_get_matches_from(&v19, &v25, a1, a2);
  if ( (_QWORD)v19 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v19 + 1));
  v18 = v22;
  v17[2] = v21;
  v17[1] = v20;
  v17[0] = v19;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v17, aAppend, 6LL);
  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v17, aIgnoreInterrup, 17LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v25, v17);
  clap_builder::parser::error::MatchesError::unwrap(&v19, aFile, 4LL, &v25);
  if ( (_QWORD)v19 )
  {
    v28 = v22;
    v27 = v21;
    v26 = v20;
    v25 = v19;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v23, &v25);
    *(_OWORD *)&v16[8] = v24;
    *(_QWORD *)v16 = v23;
  }
  else
  {
    *(_QWORD *)v16 = 0LL;
    *(_QWORD *)&v16[8] = 8LL;
    *(_QWORD *)&v16[16] = 0LL;
  }
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v17, aIgnorePipeErro, 18LL) )
  {
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v17, aOutputError, 12LL);
    LOBYTE(v5) = 4;
    if ( !v6 )
      goto LABEL_15;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, v17, v7, v5);
    v8 = clap_builder::parser::error::MatchesError::unwrap(aOutputError, 12LL, &v25);
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
              core::panicking::panic(aInternalErrorE_0, 40LL, &off_11D090, v5);
          }
        }
      }
      goto LABEL_15;
    }
  }
  LOBYTE(v5) = 1;
LABEL_15:
  BYTE8(v26) = flag;
  BYTE9(v26) = v4;
  v25 = *(_OWORD *)v16;
  *(_QWORD *)&v26 = *(_QWORD *)&v16[16];
  BYTE10(v26) = v5;
  v14 = uu_tee::tee(&v25);
  if ( v14 )
    v2 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
  else
    v2 = 0LL;
  core::ptr::drop_in_place<uu_tee::Options>(&v25);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v17);
  core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v14);
  return v2;
}
