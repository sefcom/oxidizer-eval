// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall uu_tee::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // bp
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // r14
  __int64 v13; // rax
  char v14; // r13
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbx
  _QWORD v22[2]; // [rsp+0h] [rbp-3A8h] BYREF
  __int128 v23; // [rsp+10h] [rbp-398h]
  __int128 v24; // [rsp+20h] [rbp-388h]
  __int64 v25; // [rsp+30h] [rbp-378h]
  __int64 v26; // [rsp+38h] [rbp-370h] BYREF
  __int64 v27; // [rsp+40h] [rbp-368h]
  __int128 v28; // [rsp+48h] [rbp-360h]
  __int128 v29; // [rsp+58h] [rbp-350h]
  __int64 v30; // [rsp+68h] [rbp-340h]
  _QWORD v31[8]; // [rsp+70h] [rbp-338h] BYREF
  __int64 dest; // [rsp+B0h] [rbp-2F8h] BYREF
  __int64 v33; // [rsp+B8h] [rbp-2F0h]
  __int64 v34; // [rsp+C0h] [rbp-2E8h]
  char v35; // [rsp+C8h] [rbp-2E0h]
  char v36; // [rsp+C9h] [rbp-2DFh]
  char v37; // [rsp+CAh] [rbp-2DEh]
  char v38; // [rsp+CBh] [rbp-2DDh]

  uu_tee::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v26, &dest, a1, a2);
  if ( __OFSUB__(-v26, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v27,
             &dest,
             v2,
             -v26);
  v25 = v30;
  v24 = v29;
  v23 = v28;
  v22[0] = v26;
  v22[1] = v27;
  v4 = ((__int64 (__fastcall *)(_QWORD *, const char *, __int64))clap_builder::parser::matches::arg_matches::ArgMatches::get_flag)(
         v22,
         "appendignore-interruptsignore-pipe-errorsoutput-error/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_6"
         "4-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: \v",
         6LL);
  v8 = ((__int64 (__fastcall *)(_QWORD *, const char *, __int64, __int64, __int64, __int64))clap_builder::parser::matches::arg_matches::ArgMatches::get_flag)(
         v22,
         "ignore-interruptsignore-pipe-errorsoutput-error/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unkn"
         "own-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: \v",
         17LL,
         v5,
         v6,
         v7);
  v12 = ((__int64 (__fastcall *)(_QWORD *, const char *, __int64, __int64, __int64, __int64))clap_builder::parser::matches::arg_matches::ArgMatches::get_flag)(
          v22,
          "ignore-pipe-errorsoutput-error/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/li"
          "b/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: \v",
          18LL,
          v9,
          v10,
          v11);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          v22,
                          "output-error/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/"
                          "rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: \v",
                          12LL) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v22);
    v13 = clap_builder::parser::error::MatchesError::unwrap(&dest);
    v14 = 1;
    if ( v13 )
    {
      v15 = *(_QWORD *)(v13 + 8);
      v16 = *(_QWORD *)(v13 + 16);
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v15, v16, aWarn, 4LL) )
      {
        v14 = 0;
      }
      else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                    v15,
                                    v16,
                                    "warn-nopipeexit-nopipeappendignore-interruptsignore-pipe-errorsoutput-error/home/34r"
                                    "7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src"
                                    "/rust/library/alloc/src/slice.rsError flushing stdout: \v",
                                    11LL) )
      {
        v14 = 2;
        if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v15, v16, aExit_0, 4LL) )
        {
          v14 = 3;
          if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                   v15,
                                   v16,
                                   "exit-nopipeappendignore-interruptsignore-pipe-errorsoutput-error/home/34r7hm4n/.rustu"
                                   "p/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library"
                                   "/alloc/src/slice.rsError flushing stdout: \v",
                                   11LL) )
            core::panicking::panic(aInternalErrorE, 40LL, &off_E9958);
        }
      }
    }
  }
  else
  {
    v14 = 3 * (v12 == 0) + 1;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v22);
  clap_builder::parser::error::MatchesError::unwrap(v31, &dest);
  if ( v31[0] )
  {
    core::iter::traits::iterator::Iterator::collect(&dest, v31);
    v17 = dest;
    v18 = v33;
    v19 = v34;
  }
  else
  {
    v18 = 8LL;
    v17 = 0LL;
    v19 = 0LL;
  }
  v35 = v4;
  v36 = v8;
  v37 = v12;
  dest = v17;
  v33 = v18;
  v34 = v19;
  v38 = v14;
  v20 = uu_tee::tee(&dest);
  if ( v20 )
    v21 = uu_tee::uumain::uumain::{{closure}}(v20);
  else
    v21 = 0LL;
  core::ptr::drop_in_place<uu_tee::Options>(&dest);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v22);
  return v21;
}