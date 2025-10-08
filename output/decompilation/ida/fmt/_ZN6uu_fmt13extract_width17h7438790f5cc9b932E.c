__int64 (__fastcall **__fastcall uu_fmt::extract_width(_QWORD *a1, __int64 a2))()
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 (__fastcall **result)(); // rax
  unsigned __int8 v6; // al
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  char **v15; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+8h] [rbp-A0h]
  _QWORD *v17; // [rsp+10h] [rbp-98h]
  __int64 v18; // [rsp+18h] [rbp-90h]
  __int64 v19; // [rsp+20h] [rbp-88h]
  _QWORD v20[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v21[3]; // [rsp+40h] [rbp-68h] BYREF
  char v22; // [rsp+58h] [rbp-50h]
  _BYTE v23[24]; // [rsp+60h] [rbp-48h] BYREF
  int v24; // [rsp+78h] [rbp-30h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v15, a2, &unk_19FF7, 5LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(&unk_19FF7, 5LL, &v15);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    v4 = *(_QWORD *)(v2 + 16);
    core::num::<impl usize>::from_ascii_radix(&v15, v3, v4);
    if ( (_BYTE)v15 )
    {
      v21[0] = 0LL;
      v21[1] = v3;
      v21[2] = v4;
      v22 = 1;
      v20[0] = v21;
      v20[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v15 = &off_F0928;
      v16 = 1LL;
      v19 = 0LL;
      v17 = v20;
      v18 = 1LL;
      core::option::Option<T>::map_or_else(v23, &v15);
      v24 = 1;
      a1[1] = alloc::boxed::Box<T>::new(v23);
      result = &off_F0720;
      a1[2] = &off_F0720;
      *a1 = 1LL;
      return result;
    }
    result = (__int64 (__fastcall **)())v16;
    a1[1] = 1LL;
    a1[2] = result;
  }
  else
  {
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a2, aFiles, 5LL);
    v8 = 1LL;
    if ( ((v7 == 1) & v6) == 0 )
      goto LABEL_9;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v15, a2, aFiles, 5LL);
    v9 = clap_builder::parser::error::MatchesError::unwrap(aFiles, 5LL, &v15);
    if ( !v9 )
      core::option::unwrap_failed(&off_F0938);
    v10 = *(_QWORD *)(v9 + 8);
    v11 = *(_QWORD *)(v9 + 16);
    LODWORD(v15) = 0;
    v12 = core::char::methods::encode_utf8_raw(45LL, &v15);
    v13 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v12, v10, v11);
    if ( v13 )
    {
      core::num::<impl usize>::from_ascii_radix(&v15, v13, v14);
      result = (__int64 (__fastcall **)())v16;
      a1[1] = (unsigned __int8)v15 ^ 1LL;
      v8 = 2LL;
    }
    else
    {
LABEL_9:
      result = 0LL;
    }
    a1[v8] = result;
  }
  *a1 = 0LL;
  return result;
}