__int64 __fastcall uu_mkdir::uumain::uumain(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  int v8; // [rsp+0h] [rbp-898h]
  __int64 v9; // [rsp+0h] [rbp-898h]
  __int64 v10; // [rsp+8h] [rbp-890h]
  int v11; // [rsp+8h] [rbp-890h]
  int v12; // [rsp+10h] [rbp-888h]
  struct _Unwind_Exception *v13; // [rsp+10h] [rbp-888h]
  int v14; // [rsp+18h] [rbp-880h]
  int v15; // [rsp+18h] [rbp-880h]
  __int64 v16; // [rsp+20h] [rbp-878h]
  char v17; // [rsp+26h] [rbp-872h]
  char flag; // [rsp+27h] [rbp-871h]
  __int64 v19; // [rsp+28h] [rbp-870h]
  __int64 v20; // [rsp+30h] [rbp-868h]
  int v21; // [rsp+40h] [rbp-858h]
  char v22; // [rsp+47h] [rbp-851h]
  int v23; // [rsp+48h] [rbp-850h]
  __int64 v24; // [rsp+48h] [rbp-850h]
  struct _Unwind_Exception *v25; // [rsp+50h] [rbp-848h]
  int v26[4]; // [rsp+58h] [rbp-840h] BYREF
  __int64 v27; // [rsp+68h] [rbp-830h]
  _OWORD v28[6]; // [rsp+70h] [rbp-828h] BYREF
  __int64 v29; // [rsp+D0h] [rbp-7C8h]
  __int128 v30; // [rsp+E0h] [rbp-7B8h] BYREF
  __int128 v31; // [rsp+F0h] [rbp-7A8h]
  __int128 v32; // [rsp+100h] [rbp-798h]
  __int128 v33; // [rsp+110h] [rbp-788h]
  __int128 v34; // [rsp+120h] [rbp-778h]
  __int128 v35; // [rsp+130h] [rbp-768h]
  __int64 v36; // [rsp+140h] [rbp-758h]
  int v37[26]; // [rsp+148h] [rbp-750h] BYREF
  int v38[178]; // [rsp+1B0h] [rbp-6E8h] BYREF
  int dest[178]; // [rsp+478h] [rbp-420h] BYREF
  int v40[4]; // [rsp+740h] [rbp-158h] BYREF
  __int64 v41; // [rsp+750h] [rbp-148h]
  __int128 v42; // [rsp+760h] [rbp-138h]
  __int128 v43; // [rsp+770h] [rbp-128h]
  __int128 v44; // [rsp+780h] [rbp-118h]
  __int128 v45; // [rsp+790h] [rbp-108h]
  __int128 v46; // [rsp+7A0h] [rbp-F8h]
  __int128 v47; // [rsp+7B0h] [rbp-E8h]
  __int64 v48; // [rsp+7C0h] [rbp-D8h]
  _BYTE v49[64]; // [rsp+7C8h] [rbp-D0h] BYREF
  _BYTE v50[64]; // [rsp+808h] [rbp-90h] BYREF
  __int128 v51; // [rsp+848h] [rbp-50h] BYREF
  __int64 v52; // [rsp+858h] [rbp-40h]
  __int128 v53; // [rsp+860h] [rbp-38h] BYREF
  __int64 v54; // [rsp+870h] [rbp-28h]
  char v55; // [rsp+887h] [rbp-11h]

  v55 = 0;
  uucore::Args::collect_lossy(v26, a1, a2);
  v55 = 1;
  uu_mkdir::strip_minus_from_mode(v26);
  uu_mkdir::uu_app(dest);
  clap_builder::builder::command::Command::after_help(
    (int)v38,
    (int)dest,
    (int)aEachModeIsOfTh,
    73,
    v2,
    v3,
    v8,
    v10,
    v12,
    v14,
    v16,
    v19,
    v20,
    (int)v26,
    v21,
    v23,
    v25,
    v26[0]);
  v55 = 0;
  v41 = v27;
  *(_OWORD *)v40 = *(_OWORD *)v26;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v37,
    (int)v38,
    (int)v40,
    v4,
    v5,
    v6,
    v9,
    v11,
    v13,
    v15);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v30, v37);
  if ( (_QWORD)v30 == 0x8000000000000000LL )
  {
    v24 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v30 + 1),
            &off_10B018);
    v55 = 0;
  }
  else
  {
    v48 = v36;
    v47 = v35;
    v46 = v34;
    v45 = v33;
    v44 = v32;
    v43 = v31;
    v42 = v30;
    v29 = v36;
    v28[5] = v35;
    v28[4] = v34;
    v28[3] = v33;
    v28[2] = v32;
    v28[1] = v31;
    v28[0] = v30;
    clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v50, v28, aDirs, 4LL, &off_10AFD0);
    core::option::Option<T>::unwrap_or_default(v49, v50);
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v28, aVerbose, 7LL, &off_10AFE8);
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v28, aParents, 7LL, &off_10B000);
    uu_mkdir::get_mode(&v51, v28, v22 & 1);
    if ( (_QWORD)v51 == 0x8000000000000000LL )
    {
      v24 = uu_mkdir::exec(v49, v17 & 1, DWORD2(v51), flag & 1);
    }
    else
    {
      v54 = v52;
      v53 = v51;
      v24 = uucore::mods::error::USimpleError::new(1LL, &v53);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v28);
    v55 = 0;
  }
  return v24;
}
