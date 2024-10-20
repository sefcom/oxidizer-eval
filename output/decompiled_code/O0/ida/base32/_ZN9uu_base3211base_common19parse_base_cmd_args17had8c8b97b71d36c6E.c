        __int64 a7)
{
  int v7; // r8d
  int v8; // r9d
  int v11; // [rsp+8h] [rbp-4C0h]
  int v13; // [rsp+18h] [rbp-4B0h]
  int v14[178]; // [rsp+38h] [rbp-490h] BYREF
  _OWORD v15[6]; // [rsp+300h] [rbp-1C8h] BYREF
  __int64 v16; // [rsp+360h] [rbp-168h]
  __int128 v17; // [rsp+370h] [rbp-158h] BYREF
  __int128 v18; // [rsp+380h] [rbp-148h]
  __int128 v19; // [rsp+390h] [rbp-138h]
  __int128 v20; // [rsp+3A0h] [rbp-128h]
  __int128 v21; // [rsp+3B0h] [rbp-118h]
  __int128 v22; // [rsp+3C0h] [rbp-108h]
  __int64 v23; // [rsp+3D0h] [rbp-F8h]
  int v24[26]; // [rsp+3D8h] [rbp-F0h] BYREF
  __int128 v25; // [rsp+440h] [rbp-88h]
  __int128 v26; // [rsp+450h] [rbp-78h]
  __int128 v27; // [rsp+460h] [rbp-68h]
  __int128 v28; // [rsp+470h] [rbp-58h]
  __int128 v29; // [rsp+480h] [rbp-48h]
  __int128 v30; // [rsp+490h] [rbp-38h]
  __int64 v31; // [rsp+4A0h] [rbp-28h]
  char v32; // [rsp+4B7h] [rbp-11h]

  v11 = a5;
  v13 = a4;
  v32 = 1;
  uu_base32::base_common::base_app(v14, a4, a5, a6, a7);
  v32 = 0;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v24,
    (int)v14,
    a2,
    (int)a3,
    v7,
    v8,
    a6,
    v11,
    a3,
    v13);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v17, v24);
  if ( (_QWORD)v17 == 0x8000000000000000LL )
  {
    <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
      a1,
      *((_QWORD *)&v17 + 1),
      &off_1299C8);
  }
  else
  {
    v31 = v23;
    v30 = v22;
    v29 = v21;
    v28 = v20;
    v27 = v19;
    v26 = v18;
    v25 = v17;
    v16 = v23;
    v15[5] = v22;
    v15[4] = v21;
    v15[3] = v20;
    v15[2] = v19;
    v15[1] = v18;
    v15[0] = v17;
    uu_base32::base_common::Config::from(a1, v15);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v15);
  }
  return a1;
}
