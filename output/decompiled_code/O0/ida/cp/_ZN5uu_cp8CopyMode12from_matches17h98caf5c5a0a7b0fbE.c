__int64 __fastcall uu_cp::CopyMode::from_matches(__int64 a1)
{
  unsigned int flag; // ebp
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  const char *v7; // [rsp+0h] [rbp-108h] BYREF
  __int64 v8; // [rsp+8h] [rbp-100h]
  _QWORD v9[4]; // [rsp+10h] [rbp-F8h] BYREF
  _QWORD v10[6]; // [rsp+30h] [rbp-D8h] BYREF
  _OWORD v11[4]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v13; // [rsp+B0h] [rbp-58h]
  __int128 v14; // [rsp+C0h] [rbp-48h]
  __int128 v15; // [rsp+D0h] [rbp-38h]
  __int128 v16; // [rsp+E0h] [rbp-28h]

  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a1,
                          &unk_210E0,
                          4LL,
                          &off_181D50) )
  {
    return 0;
  }
  else
  {
    LOBYTE(flag) = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             a1,
                             aSymbolicLink,
                             13LL,
                             &off_181D68) )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
        &v12,
        a1,
        anon_fe9d1cf8fd7ac9e4a312d14ad42d0810_31_llvm_7710048280991797506,
        6LL);
      v7 = anon_fe9d1cf8fd7ac9e4a312d14ad42d0810_31_llvm_7710048280991797506;
      v8 = 6LL;
      if ( v12 )
      {
        v11[3] = v16;
        v11[2] = v15;
        v11[1] = v14;
        v11[0] = v13;
        v9[0] = &v7;
        v9[1] = <&T as core::fmt::Display>::fmt;
        v9[2] = v11;
        v9[3] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v10[0] = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
        v10[1] = 2LL;
        v10[4] = 0LL;
        v10[2] = v9;
        v10[3] = 2LL;
        ((void (__fastcall __noreturn *)(_QWORD *, char **, __int64, __int64, __int64, __int64, const char *, __int64))core::panicking::panic_fmt)(
          v10,
          &off_181D80,
          v2,
          v3,
          v4,
          v5,
          v7,
          v8);
      }
      LOBYTE(flag) = 3;
      if ( !(_QWORD)v13
        && !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                               a1,
                               anon_fe9d1cf8fd7ac9e4a312d14ad42d0810_32_llvm_7710048280991797506,
                               1LL,
                               &off_181D98) )
      {
        LOBYTE(flag) = 2;
        if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                a1,
                                aAttributesOnly,
                                15LL,
                                &off_181DB0) )
        {
          flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                   a1,
                   aRemoveDestinat,
                   18LL,
                   &off_181DC8);
          LOBYTE(flag) = 2 * (flag ^ 1) + 2;
        }
      }
    }
  }
  return flag;
}
