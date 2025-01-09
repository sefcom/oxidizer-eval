__int64 *__fastcall uu_uniq::opt_parsed(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v11[8]; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+10h] [rbp-C8h]
  _QWORD v13[2]; // [rsp+18h] [rbp-C0h] BYREF
  _QWORD v14[4]; // [rsp+28h] [rbp-B0h] BYREF
  _QWORD v15[3]; // [rsp+48h] [rbp-90h] BYREF
  char v16; // [rsp+60h] [rbp-78h]
  _QWORD v17[6]; // [rsp+68h] [rbp-70h] BYREF
  _BYTE v18[24]; // [rsp+98h] [rbp-40h] BYREF
  int v19; // [rsp+B0h] [rbp-28h]

  v13[0] = a2;
  v13[1] = a3;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v17, a4, a2, a3);
  v5 = clap_builder::parser::error::MatchesError::unwrap(a2, a3, v17);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 8);
    v7 = *(_QWORD *)(v5 + 16);
    core::num::<impl core::str::traits::FromStr for usize>::from_str(v11, v6, v7);
    if ( v11[0] )
    {
      if ( v11[1] != 2 )
      {
        v15[0] = 0LL;
        v15[1] = v6;
        v15[2] = v7;
        v16 = 0;
        v14[0] = v13;
        v14[1] = <&T as core::fmt::Display>::fmt;
        v14[2] = v15;
        v14[3] = <os_display::Quoted as core::fmt::Display>::fmt;
        v17[0] = &off_130468;
        v17[1] = 2LL;
        v17[4] = 0LL;
        v17[2] = v14;
        v17[3] = 2LL;
        core::option::Option<T>::map_or_else(v18, v17);
        v19 = 1;
        a1[1] = alloc::boxed::Box<T>::new(v18);
        a1[2] = (__int64)&off_1304C0;
        v9 = 1LL;
        goto LABEL_9;
      }
      a1[1] = 1LL;
      a1[2] = -1LL;
    }
    else
    {
      v8 = v12;
      a1[1] = 1LL;
      a1[2] = v8;
    }
    v9 = 0LL;
LABEL_9:
    *a1 = v9;
    return a1;
  }
  *(_OWORD *)a1 = 0LL;
  return a1;
}
