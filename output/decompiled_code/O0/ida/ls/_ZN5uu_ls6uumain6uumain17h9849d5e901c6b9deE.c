__int64 __fastcall uu_ls::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // [rsp+0h] [rbp-968h]
  struct _Unwind_Exception *v13; // [rsp+0h] [rbp-968h]
  int v14; // [rsp+8h] [rbp-960h]
  int v15; // [rsp+8h] [rbp-960h]
  struct _Unwind_Exception *v16; // [rsp+10h] [rbp-958h]
  int v17; // [rsp+10h] [rbp-958h]
  int v18; // [rsp+18h] [rbp-950h]
  char v19; // [rsp+18h] [rbp-950h]
  int v20; // [rsp+20h] [rbp-948h]
  char v21; // [rsp+26h] [rbp-942h]
  int v22; // [rsp+28h] [rbp-940h]
  int v23; // [rsp+30h] [rbp-938h]
  int v24; // [rsp+38h] [rbp-930h]
  int v25; // [rsp+40h] [rbp-928h]
  int v26; // [rsp+48h] [rbp-920h]
  int v27; // [rsp+50h] [rbp-918h]
  int v28; // [rsp+58h] [rbp-910h]
  int v29; // [rsp+60h] [rbp-908h]
  int v30; // [rsp+68h] [rbp-900h]
  int v31; // [rsp+70h] [rbp-8F8h]
  int v33; // [rsp+88h] [rbp-8E0h]
  __int64 v34; // [rsp+88h] [rbp-8E0h]
  struct _Unwind_Exception *v35; // [rsp+90h] [rbp-8D8h]
  int v36[178]; // [rsp+98h] [rbp-8D0h] BYREF
  _OWORD v37[6]; // [rsp+360h] [rbp-608h] BYREF
  __int64 v38; // [rsp+3C0h] [rbp-5A8h]
  int v39[4]; // [rsp+3C8h] [rbp-5A0h] BYREF
  __int128 v40; // [rsp+3D8h] [rbp-590h]
  __int128 v41; // [rsp+3E8h] [rbp-580h]
  __int128 v42; // [rsp+3F8h] [rbp-570h]
  __int128 v43; // [rsp+408h] [rbp-560h]
  __int128 v44; // [rsp+418h] [rbp-550h]
  __int64 v45; // [rsp+428h] [rbp-540h]
  __int128 v46; // [rsp+430h] [rbp-538h]
  __int128 v47; // [rsp+440h] [rbp-528h]
  __int128 v48; // [rsp+450h] [rbp-518h]
  __int128 v49; // [rsp+460h] [rbp-508h]
  __int128 v50; // [rsp+470h] [rbp-4F8h]
  __int128 v51; // [rsp+480h] [rbp-4E8h]
  __int64 v52; // [rsp+490h] [rbp-4D8h]
  int v53[2]; // [rsp+498h] [rbp-4D0h] BYREF
  char v54; // [rsp+4A7h] [rbp-4C1h] BYREF
  int v55[6]; // [rsp+4A8h] [rbp-4C0h] BYREF
  int v56[2]; // [rsp+4C0h] [rbp-4A8h] BYREF
  int v57[6]; // [rsp+4C8h] [rbp-4A0h] BYREF
  int v58[64]; // [rsp+4E0h] [rbp-488h] BYREF
  _QWORD src[32]; // [rsp+5E0h] [rbp-388h] BYREF
  _BYTE v60[256]; // [rsp+6E0h] [rbp-288h] BYREF
  _BYTE dest[256]; // [rsp+7E0h] [rbp-188h] BYREF
  _BYTE v62[24]; // [rsp+8E0h] [rbp-88h] BYREF
  _BYTE v63[24]; // [rsp+8F8h] [rbp-70h] BYREF
  _BYTE v64[70]; // [rsp+910h] [rbp-58h] BYREF
  char v65; // [rsp+956h] [rbp-12h]
  char v66; // [rsp+957h] [rbp-11h]

  v65 = 0;
  v66 = 1;
  uu_ls::uu_app(v36);
  v66 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v39, (int)v36, a1, a2, v2, v3, v12, v14, v16, v18);
  v65 = 1;
  if ( *(_QWORD *)v39 == 0x8000000000000000LL )
  {
    if ( (unsigned int)clap_builder::error::Error<F>::exit_code(&v39[2]) )
    {
      v54 = clap_builder::error::Error<F>::kind(&v39[2]);
      v21 = <clap_builder::error::kind::ErrorKind as core::cmp::PartialEq>::eq(&v54, &byte_292BC);
      v65 = 0;
      if ( (v21 & 1) != 0 )
      {
        *(_QWORD *)v53 = *(_QWORD *)&v39[2];
        <T as alloc::string::ToString>::to_string(
          (int)v55,
          (int)v53,
          v8,
          v9,
          v10,
          v11,
          (int)v13,
          v15,
          v17,
          v19,
          v20,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31,
          a1,
          a2,
          v33,
          v35,
          v36[0]);
        v34 = uucore::mods::error::USimpleError::new(1LL, v55);
        core::ptr::drop_in_place<clap_builder::error::Error>(v53);
      }
      else
      {
        *(_QWORD *)v56 = *(_QWORD *)&v39[2];
        <T as alloc::string::ToString>::to_string(
          (int)v57,
          (int)v56,
          v8,
          v9,
          v10,
          v11,
          (int)v13,
          v15,
          v17,
          v19,
          v20,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31,
          a1,
          a2,
          v33,
          v35,
          v36[0]);
        v34 = uucore::mods::error::USimpleError::new(2LL, v57);
        core::ptr::drop_in_place<clap_builder::error::Error>(v56);
      }
    }
    else
    {
      v65 = 0;
      v34 = <T as core::convert::Into<U>>::into(*(_QWORD *)&v39[2], &off_1FB738);
    }
    v65 = 0;
  }
  else
  {
    v52 = v45;
    v51 = v44;
    v50 = v43;
    v49 = v42;
    v48 = v41;
    v47 = v40;
    v46 = *(_OWORD *)v39;
    v38 = v45;
    v37[5] = v44;
    v37[4] = v43;
    v37[3] = v42;
    v37[2] = v41;
    v37[1] = v40;
    v37[0] = *(_OWORD *)v39;
    v65 = 0;
    uu_ls::Config::from(v60, v37);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(src, v60);
    if ( src[0] == 0x8000000000000000LL )
    {
      v34 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              src[1],
              src[2],
              &off_1FB720);
    }
    else
    {
      memcpy(dest, src, sizeof(dest));
      memcpy(v58, dest, sizeof(v58));
      clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
        v64,
        v37,
        anon_73fe86e94af803e79a7413c597bf8ca8_45_llvm_2470886751594806832,
        *(&uu_ls::options::PATHS + 1),
        &off_1FB6F0);
      core::option::Option<T>::map(v63, v64);
      core::option::Option<T>::unwrap_or_else((unsigned int)v62, (unsigned int)v63);
      v34 = uu_ls::list(v62, v58);
      core::ptr::drop_in_place<uu_ls::Config>((int)v58, (int)v58, v4, v34, v5, v6, v13, v15);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v37);
  }
  return v34;
}
