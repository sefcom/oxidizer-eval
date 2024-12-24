__int64 __fastcall uu_fmt::extract_width(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 (__fastcall **v7)(); // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  char **v16; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+8h] [rbp-B0h]
  _QWORD *v18; // [rsp+10h] [rbp-A8h]
  __int64 v19; // [rsp+18h] [rbp-A0h]
  __int64 v20; // [rsp+20h] [rbp-98h]
  _BYTE v21[8]; // [rsp+30h] [rbp-88h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+38h] [rbp-80h]
  _QWORD v23[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v24[3]; // [rsp+50h] [rbp-68h] BYREF
  char v25; // [rsp+68h] [rbp-50h]
  _BYTE v26[24]; // [rsp+70h] [rbp-48h] BYREF
  int v27; // [rsp+88h] [rbp-30h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v16, a2, aWidth, 5LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(aWidth, 5LL, &v16);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    v4 = *(_QWORD *)(v2 + 16);
    core::num::<impl core::str::traits::FromStr for usize>::from_str(v21, v3, v4);
    if ( v21[0] )
    {
      v24[0] = 0LL;
      v24[1] = v3;
      v24[2] = v4;
      v25 = 1;
      v23[0] = v24;
      v23[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v16 = &off_127810;
      v17 = 1LL;
      v20 = 0LL;
      v18 = v23;
      v19 = 1LL;
      core::option::Option<T>::map_or_else(v26, &v16);
      v27 = 1;
      result = alloc::boxed::Box<T>::new(v26);
      v6 = 1LL;
      v7 = &off_1276B0;
    }
    else
    {
      v7 = v22;
      result = 1LL;
      v6 = 0LL;
    }
    a1[1] = result;
    a1[2] = (__int64)v7;
    *a1 = v6;
  }
  else
  {
    result = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a2, aFiles, 5LL);
    v9 = 0LL;
    v10 = 1LL;
    if ( result == 1 && v8 == 1 )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v16, a2, aFiles, 5LL);
      v11 = clap_builder::parser::error::MatchesError::unwrap(aFiles, 5LL, &v16);
      if ( !v11 )
        core::option::unwrap_failed(&off_127820);
      v12 = *(_QWORD *)(v11 + 8);
      v13 = *(_QWORD *)(v11 + 16);
      LODWORD(v16) = 0;
      v14 = core::char::methods::encode_utf8_raw(&v16);
      result = <&str as core::str::pattern::Pattern>::strip_prefix_of(v14, v12, v13);
      if ( result )
      {
        core::num::<impl core::str::traits::FromStr for usize>::from_str(&v16, result, v15);
        v9 = v17;
        result = (unsigned __int8)v16 ^ 1LL;
        a1[1] = result;
        v10 = 2LL;
      }
      else
      {
        v9 = 0LL;
      }
    }
    a1[v10] = v9;
    *a1 = 0LL;
  }
  return result;
}
