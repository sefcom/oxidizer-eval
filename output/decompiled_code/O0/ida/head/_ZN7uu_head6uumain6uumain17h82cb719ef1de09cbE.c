__int64 __fastcall uu_head::uumain::uumain(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v5; // [rsp+0h] [rbp-5C8h]
  int v6; // [rsp+8h] [rbp-5C0h]
  struct _Unwind_Exception *v7; // [rsp+10h] [rbp-5B8h]
  int v8; // [rsp+18h] [rbp-5B0h]
  __int64 v9; // [rsp+50h] [rbp-578h]
  _OWORD v10[6]; // [rsp+60h] [rbp-568h] BYREF
  __int64 v11; // [rsp+C0h] [rbp-508h]
  __int128 v12; // [rsp+C8h] [rbp-500h] BYREF
  __int128 v13; // [rsp+D8h] [rbp-4F0h]
  __int128 v14; // [rsp+E8h] [rbp-4E0h]
  __int128 v15; // [rsp+F8h] [rbp-4D0h]
  __int128 v16; // [rsp+108h] [rbp-4C0h]
  __int128 v17; // [rsp+118h] [rbp-4B0h]
  __int64 v18; // [rsp+128h] [rbp-4A0h]
  int v19[26]; // [rsp+130h] [rbp-498h] BYREF
  int v20[178]; // [rsp+198h] [rbp-430h] BYREF
  __int64 v21; // [rsp+460h] [rbp-168h] BYREF
  int v22[2]; // [rsp+468h] [rbp-160h]
  int v23[2]; // [rsp+470h] [rbp-158h]
  _QWORD v24[3]; // [rsp+478h] [rbp-150h] BYREF
  __int128 v25; // [rsp+490h] [rbp-138h]
  __int128 v26; // [rsp+4A0h] [rbp-128h]
  __int128 v27; // [rsp+4B0h] [rbp-118h]
  __int128 v28; // [rsp+4C0h] [rbp-108h]
  __int128 v29; // [rsp+4D0h] [rbp-F8h]
  __int128 v30; // [rsp+4E0h] [rbp-E8h]
  __int64 v31; // [rsp+4F0h] [rbp-D8h]
  __m256i v32; // [rsp+500h] [rbp-C8h] BYREF
  __int128 v33; // [rsp+520h] [rbp-A8h]
  __m256i v34; // [rsp+530h] [rbp-98h] BYREF
  __int128 v35; // [rsp+550h] [rbp-78h]
  __m256i v36; // [rsp+560h] [rbp-68h]
  __int128 v37; // [rsp+580h] [rbp-48h]
  __int128 v38; // [rsp+590h] [rbp-38h] BYREF
  __int64 v39; // [rsp+5A0h] [rbp-28h]
  char v40; // [rsp+5B6h] [rbp-12h]
  char v41; // [rsp+5B7h] [rbp-11h]

  v40 = 0;
  v41 = 1;
  uu_head::uu_app(v20);
  v40 = 1;
  v41 = 0;
  uu_head::arg_iterate(v24, a1, a2);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v21, v24);
  if ( v21 )
  {
    v9 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           *(_QWORD *)v22,
           *(_QWORD *)v23,
           &off_115310);
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(v20);
    v40 = 0;
  }
  else
  {
    v40 = 0;
    clap_builder::builder::command::Command::try_get_matches_from(
      (int)v19,
      (int)v20,
      v22[0],
      v23[0],
      v2,
      v3,
      v5,
      v6,
      v7,
      v8);
    v40 = 0;
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v12, v19);
    if ( (_QWORD)v12 == 0x8000000000000000LL )
    {
      return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
               *((_QWORD *)&v12 + 1),
               &off_1152F8);
    }
    else
    {
      v31 = v18;
      v30 = v17;
      v29 = v16;
      v28 = v15;
      v27 = v14;
      v26 = v13;
      v25 = v12;
      v11 = v18;
      v10[5] = v17;
      v10[4] = v16;
      v10[3] = v15;
      v10[2] = v14;
      v10[1] = v13;
      v10[0] = v12;
      uu_head::HeadOptions::get_from(&v34, v10);
      if ( v34.m256i_i64[0] == 4 )
      {
        v39 = v34.m256i_i64[3];
        v38 = *(_OWORD *)&v34.m256i_u64[1];
        v9 = uucore::mods::error::USimpleError::new(1LL, &v38);
      }
      else
      {
        v37 = v35;
        v36 = v34;
        v33 = v35;
        v32 = v34;
        v9 = uu_head::uu_head(&v32);
        core::ptr::drop_in_place<uu_head::HeadOptions>(&v32);
      }
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v10);
    }
  }
  return v9;
}
