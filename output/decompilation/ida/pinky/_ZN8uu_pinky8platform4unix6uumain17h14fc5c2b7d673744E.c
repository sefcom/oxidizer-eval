// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall uu_pinky::platform::unix::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  char flag; // bl
  char v5; // bp
  char v6; // r14
  char v7; // r15
  char v8; // r13
  char v9; // r12
  char v10; // al
  char v11; // r12
  __int64 v12; // rax
  __int64 v13; // rbx
  char v14; // [rsp+Fh] [rbp-659h]
  _OWORD v15[3]; // [rsp+10h] [rbp-658h] BYREF
  __int64 v16; // [rsp+40h] [rbp-628h]
  _BYTE v17[24]; // [rsp+48h] [rbp-620h] BYREF
  _QWORD v18[8]; // [rsp+60h] [rbp-608h] BYREF
  _BYTE src[24]; // [rsp+A0h] [rbp-5C8h] BYREF
  char v20; // [rsp+B8h] [rbp-5B0h]
  char v21; // [rsp+B9h] [rbp-5AFh]
  char v22; // [rsp+BAh] [rbp-5AEh]
  char v23; // [rsp+BBh] [rbp-5ADh]
  char v24; // [rsp+BCh] [rbp-5ACh]
  char v25; // [rsp+BDh] [rbp-5ABh]
  char v26; // [rsp+BEh] [rbp-5AAh]
  _OWORD dest[3]; // [rsp+370h] [rbp-2F8h] BYREF
  __int64 v28; // [rsp+3A0h] [rbp-2C8h]

  uu_pinky::uu_app(src);
  uu_pinky::platform::unix::get_long_usage(v17);
  clap_builder::builder::command::Command::after_help(dest, src);
  clap_builder::builder::command::Command::try_get_matches_from(v15, dest, a1, a2);
  if ( __OFSUB__(-*(_QWORD *)&v15[0], 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *((_QWORD *)&v15[0] + 1),
             dest,
             v2,
             -*(_QWORD *)&v15[0]);
  v28 = v16;
  dest[2] = v15[2];
  dest[1] = v15[1];
  dest[0] = v15[0];
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, dest);
  clap_builder::parser::error::MatchesError::unwrap(v18, src);
  if ( v18[0] )
  {
    core::iter::traits::iterator::Iterator::collect(src, v18);
    *(_OWORD *)((char *)v15 + 8) = *(_OWORD *)&src[8];
    *(_QWORD *)&v15[0] = *(_QWORD *)src;
  }
  else
  {
    *(_QWORD *)&v15[0] = 0LL;
    *(_OWORD *)((char *)v15 + 8) = 8uLL;
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aOmitHeadings, 13LL);
  v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aOmitProjectFil, 17LL);
  v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aOmitPlanFile, 14LL);
  v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aOmitHomeDir, 13LL);
  v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aLongFormat, 11LL);
  v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aOmitName, 9LL);
  v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aOmitNameHost, 14LL);
  v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aOmitNameHostTi, 19LL);
  v11 = v10 | v9;
  *(_QWORD *)&src[16] = *(_QWORD *)&v15[1];
  *(_OWORD *)src = v15[0];
  v20 = v10 ^ 1;
  v21 = flag ^ 1;
  v22 = (v8 | v11) ^ 1;
  v23 = v5 ^ 1;
  v24 = v6 ^ 1;
  v25 = v11 ^ 1;
  v26 = v7 ^ 1;
  if ( v14 )
  {
    uu_pinky::platform::unix::Pinky::long_pinky(src);
LABEL_10:
    v13 = 0LL;
    goto LABEL_11;
  }
  v12 = uu_pinky::platform::unix::Pinky::short_pinky(src);
  if ( !v12 )
    goto LABEL_10;
  v13 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v12);
LABEL_11:
  core::ptr::drop_in_place<uu_pinky::platform::unix::Pinky>(src);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(dest);
  return v13;
}