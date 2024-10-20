__int64 __fastcall uu_touch::determine_atime_mtime_change(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  char is_contained_in; // bp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r14
  void *v11; // rdx
  void *v12; // rdx
  void *v13; // rdx
  char v14; // r14
  __int64 result; // rax
  unsigned __int8 v16; // cl
  const char *v17; // [rsp+0h] [rbp-108h] BYREF
  __int64 v18; // [rsp+8h] [rbp-100h]
  const char **v19; // [rsp+10h] [rbp-F8h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+18h] [rbp-F0h]
  __int128 *v21; // [rsp+20h] [rbp-E8h]
  __int64 (__fastcall *v22)(); // [rsp+28h] [rbp-E0h]
  char **v23; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+38h] [rbp-D0h]
  const char ***v25; // [rsp+40h] [rbp-C8h]
  __int64 v26; // [rsp+48h] [rbp-C0h]
  __int64 v27; // [rsp+50h] [rbp-B8h]
  __int128 v28; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v29; // [rsp+70h] [rbp-98h]
  __int128 v30; // [rsp+80h] [rbp-88h]
  __int128 v31; // [rsp+90h] [rbp-78h]
  __int64 v32; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v33; // [rsp+A8h] [rbp-60h]
  __int128 v34; // [rsp+B8h] [rbp-50h]
  __int128 v35; // [rsp+C8h] [rbp-40h]
  __int128 v36; // [rsp+D8h] [rbp-30h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(
    &v32,
    a1,
    anon_3c49abdde3b3fdf25b1dcaa21df94cd5_105_llvm_2806096261713610274,
    4LL);
  v17 = anon_3c49abdde3b3fdf25b1dcaa21df94cd5_105_llvm_2806096261713610274;
  v18 = 4LL;
  if ( (v32 & 1) != 0 )
  {
    v31 = v36;
    v30 = v35;
    v29 = v34;
    v28 = v33;
    v19 = &v17;
    v20 = <&T as core::fmt::Display>::fmt;
    v21 = &v28;
    v22 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v23 = &anon_4999ac20243338206a266e5086c65117_158_llvm_11097290929893828502;
    v24 = 2LL;
    v27 = 0LL;
    v25 = &v19;
    v26 = 2LL;
    ((void (__fastcall __noreturn *)(char ***, char **, __int64, __int64, __int64, __int64, const char *, __int64))core::panicking::panic_fmt)(
      &v23,
      &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_413_llvm_13186119769495240950,
      v1,
      v2,
      v3,
      v4,
      v17,
      v18);
  }
  is_contained_in = 2;
  if ( (v32 & 0x100) != 0 )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
      &v32,
      a1,
      anon_3c49abdde3b3fdf25b1dcaa21df94cd5_105_llvm_2806096261713610274,
      4LL);
    v17 = anon_3c49abdde3b3fdf25b1dcaa21df94cd5_105_llvm_2806096261713610274;
    v18 = 4LL;
    if ( v32 )
    {
      v31 = v36;
      v30 = v35;
      v29 = v34;
      v28 = v33;
      v19 = &v17;
      v20 = <&T as core::fmt::Display>::fmt;
      v21 = &v28;
      v22 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      v23 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
      v24 = 2LL;
      v27 = 0LL;
      v25 = &v19;
      v26 = 2LL;
      ((void (__fastcall __noreturn *)(char ***, char **, __int64, __int64, __int64, __int64, const char *, __int64))core::panicking::panic_fmt)(
        &v23,
        &off_2C9C70,
        v6,
        v7,
        v8,
        v9,
        v17,
        v18);
    }
    v10 = v33;
    if ( (_QWORD)v33 )
    {
      v11 = *(void **)(v33 + 8);
      if ( !v11 || *(__int64 *)(v33 + 16) < 0 )
        goto LABEL_21;
      is_contained_in = 1;
      if ( (unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(aAccess, 6uLL, v11) )
        goto LABEL_14;
      v12 = *(void **)(v10 + 8);
      if ( !v12 || *(__int64 *)(v10 + 16) < 0 )
        goto LABEL_21;
      if ( (unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(aAtime, 5uLL, v12) )
        goto LABEL_14;
      v13 = *(void **)(v10 + 8);
      if ( !v13 || *(__int64 *)(v10 + 16) < 0 )
LABEL_21:
        core::panicking::panic_nounwind(anon_3c49abdde3b3fdf25b1dcaa21df94cd5_60_llvm_2806096261713610274, 162LL);
      is_contained_in = <&str as core::str::pattern::Pattern>::is_contained_in(aUse, 3uLL, v13);
    }
  }
LABEL_14:
  v14 = is_contained_in | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            a1,
                            anon_3c49abdde3b3fdf25b1dcaa21df94cd5_101_llvm_2806096261713610274,
                            6LL,
                            &off_2C9C88);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a1,
                          anon_3c49abdde3b3fdf25b1dcaa21df94cd5_102_llvm_2806096261713610274,
                          12LL,
                          &off_2C9CA0) )
  {
    LOBYTE(result) = 1;
    v16 = 2;
  }
  else
  {
    v16 = 2 * ((is_contained_in & 1 | (is_contained_in == 2)) == 0);
    LOBYTE(result) = (is_contained_in & 1 | (is_contained_in == 2)) + 1;
  }
  result = (unsigned __int8)result;
  if ( (v14 & 1) != 0 )
    return v16;
  return result;
}
