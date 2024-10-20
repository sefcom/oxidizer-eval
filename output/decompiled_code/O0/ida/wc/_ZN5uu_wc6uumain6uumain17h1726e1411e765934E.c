__int64 __fastcall uu_wc::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v5; // [rsp+0h] [rbp-578h]
  int v6; // [rsp+8h] [rbp-570h]
  struct _Unwind_Exception *v7; // [rsp+10h] [rbp-568h]
  int v8; // [rsp+18h] [rbp-560h]
  __int64 v9; // [rsp+40h] [rbp-538h]
  _OWORD v10[6]; // [rsp+50h] [rbp-528h] BYREF
  __int64 v11; // [rsp+B0h] [rbp-4C8h]
  __int128 v12; // [rsp+B8h] [rbp-4C0h] BYREF
  __int128 v13; // [rsp+C8h] [rbp-4B0h]
  __int128 v14; // [rsp+D8h] [rbp-4A0h]
  __int128 v15; // [rsp+E8h] [rbp-490h]
  __int128 v16; // [rsp+F8h] [rbp-480h]
  __int128 v17; // [rsp+108h] [rbp-470h]
  __int64 v18; // [rsp+118h] [rbp-460h]
  int v19[26]; // [rsp+120h] [rbp-458h] BYREF
  int dest[178]; // [rsp+188h] [rbp-3F0h] BYREF
  __int128 v21; // [rsp+450h] [rbp-128h]
  __int128 v22; // [rsp+460h] [rbp-118h]
  __int128 v23; // [rsp+470h] [rbp-108h]
  __int128 v24; // [rsp+480h] [rbp-F8h]
  __int128 v25; // [rsp+490h] [rbp-E8h]
  __int128 v26; // [rsp+4A0h] [rbp-D8h]
  __int64 v27; // [rsp+4B0h] [rbp-C8h]
  _BYTE v28[32]; // [rsp+4C0h] [rbp-B8h] BYREF
  _OWORD v29[2]; // [rsp+4E0h] [rbp-98h] BYREF
  __int128 v30; // [rsp+500h] [rbp-78h] BYREF
  __int128 v31; // [rsp+510h] [rbp-68h]
  _BYTE v32[32]; // [rsp+520h] [rbp-58h] BYREF
  __int128 v33; // [rsp+540h] [rbp-38h]
  __int128 v34; // [rsp+550h] [rbp-28h]
  char v35; // [rsp+567h] [rbp-11h]

  v35 = 1;
  uu_wc::uu_app(dest);
  v35 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v19, (int)dest, a1, a2, v2, v3, v5, v6, v7, v8);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v12, v19);
  if ( (_QWORD)v12 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v12 + 1),
             &off_1162A8);
  v27 = v18;
  v26 = v17;
  v25 = v16;
  v24 = v15;
  v23 = v14;
  v22 = v13;
  v21 = v12;
  v11 = v18;
  v10[5] = v17;
  v10[4] = v16;
  v10[3] = v15;
  v10[2] = v14;
  v10[1] = v13;
  v10[0] = v12;
  uu_wc::Settings::new(v28, v10);
  uu_wc::Inputs::new(v32, v10);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v30, v32);
  if ( (_QWORD)v30 == 3LL )
  {
    v9 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           *((_QWORD *)&v30 + 1),
           v31,
           &off_116290);
  }
  else
  {
    v34 = v31;
    v33 = v30;
    v29[1] = v31;
    v29[0] = v30;
    v9 = uu_wc::wc(v29, v28);
    core::ptr::drop_in_place<uu_wc::Inputs>(v29);
  }
  core::ptr::drop_in_place<uu_wc::Settings>(v28);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v10);
  return v9;
}
