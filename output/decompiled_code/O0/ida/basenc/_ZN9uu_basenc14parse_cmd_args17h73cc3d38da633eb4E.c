__int64 __fastcall uu_basenc::parse_cmd_args(struct _Unwind_Exception *a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rdx
  int v7; // r8d
  int v8; // r9d
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v12; // [rsp+0h] [rbp-648h]
  int v13; // [rsp+0h] [rbp-648h]
  char v14; // [rsp+7h] [rbp-641h]
  int v15; // [rsp+8h] [rbp-640h]
  int v16; // [rsp+8h] [rbp-640h]
  __int64 v17; // [rsp+8h] [rbp-640h]
  struct _Unwind_Exception *v18; // [rsp+10h] [rbp-638h]
  int v19; // [rsp+18h] [rbp-630h]
  struct _Unwind_Exception *v21; // [rsp+30h] [rbp-618h]
  int v22[2]; // [rsp+38h] [rbp-610h]
  int v23[4]; // [rsp+40h] [rbp-608h] BYREF
  __int128 v24; // [rsp+50h] [rbp-5F8h]
  __int128 v25; // [rsp+60h] [rbp-5E8h]
  __int128 v26; // [rsp+70h] [rbp-5D8h]
  __int128 v27; // [rsp+80h] [rbp-5C8h]
  __int128 v28; // [rsp+90h] [rbp-5B8h]
  __int64 v29; // [rsp+A0h] [rbp-5A8h]
  __int128 v30; // [rsp+A8h] [rbp-5A0h] BYREF
  __int128 v31; // [rsp+B8h] [rbp-590h]
  __int128 v32; // [rsp+C8h] [rbp-580h]
  __int128 v33; // [rsp+D8h] [rbp-570h]
  __int128 v34; // [rsp+E8h] [rbp-560h]
  __int128 v35; // [rsp+F8h] [rbp-550h]
  __int64 v36; // [rsp+108h] [rbp-540h]
  _BYTE v37[104]; // [rsp+110h] [rbp-538h] BYREF
  int v38[26]; // [rsp+178h] [rbp-4D0h] BYREF
  int v39[178]; // [rsp+1E0h] [rbp-468h] BYREF
  int v40[6]; // [rsp+4A8h] [rbp-1A0h] BYREF
  __int128 v41; // [rsp+4C0h] [rbp-188h]
  __int128 v42; // [rsp+4D0h] [rbp-178h]
  __int128 v43; // [rsp+4E0h] [rbp-168h]
  __int128 v44; // [rsp+4F0h] [rbp-158h]
  __int128 v45; // [rsp+500h] [rbp-148h]
  __int128 v46; // [rsp+510h] [rbp-138h]
  __int64 v47; // [rsp+520h] [rbp-128h]
  __int64 v48; // [rsp+530h] [rbp-118h] BYREF
  __int64 v49; // [rsp+538h] [rbp-110h]
  _BYTE v50[16]; // [rsp+540h] [rbp-108h] BYREF
  int v51[2]; // [rsp+550h] [rbp-F8h] BYREF
  __int64 v52; // [rsp+558h] [rbp-F0h]
  __int128 v53; // [rsp+560h] [rbp-E8h] BYREF
  __int128 v54; // [rsp+570h] [rbp-D8h]
  __int128 v55; // [rsp+580h] [rbp-C8h]
  _BYTE v56[48]; // [rsp+590h] [rbp-B8h] BYREF
  __int128 v57; // [rsp+5C0h] [rbp-88h]
  __int128 v58; // [rsp+5D0h] [rbp-78h]
  __int128 v59; // [rsp+5E0h] [rbp-68h]
  __int128 v60; // [rsp+5F0h] [rbp-58h]
  __int128 v61; // [rsp+600h] [rbp-48h]
  __int128 v62; // [rsp+610h] [rbp-38h]
  __int64 v63; // [rsp+620h] [rbp-28h]
  char v64; // [rsp+636h] [rbp-12h]
  char v65; // [rsp+637h] [rbp-11h]

  *(_QWORD *)v22 = a1;
  v64 = 0;
  v65 = 1;
  uu_basenc::uu_app(v39);
  v64 = 1;
  v65 = 0;
  uucore::Args::collect_lossy(v40, a2, a3);
  v64 = 0;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v38,
    (int)v39,
    (int)v40,
    v3,
    v4,
    v5,
    v12,
    v15,
    v18,
    v19);
  v64 = 0;
  <core::result::Result<clap_builder::parser::matches::arg_matches::ArgMatches,clap_builder::error::Error> as uucore::mods::error::UClapError<core::result::Result<clap_builder::parser::matches::arg_matches::ArgMatches,uucore::mods::error::ClapErrorWrapper>>>::with_exit_code(
    v37,
    v38,
    1LL);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v30, v37);
  if ( (_QWORD)v30 != 0x8000000000000000LL )
  {
    v47 = v36;
    v46 = v35;
    v45 = v34;
    v44 = v33;
    v43 = v32;
    v42 = v31;
    v41 = v30;
    v29 = v36;
    v28 = v35;
    v27 = v34;
    v26 = v33;
    v25 = v32;
    v24 = v31;
    *(_OWORD *)v23 = v30;
    *(_QWORD *)v51 = core::slice::<impl [T]>::iter(&off_12D3D0, 8LL);
    v52 = v6;
    v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(
            (int)v51,
            (int)v23,
            v6,
            v51[0],
            v7,
            v8,
            v13,
            v16,
            v6,
            v51[0],
            a3,
            a2,
            a1,
            (int)a1);
    core::option::Option<T>::ok_or_else(v50, v17);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v48, v50);
    if ( v48 )
    {
      <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
        v21,
        v48,
        v49,
        &off_12D528);
    }
    else
    {
      v14 = *(_BYTE *)(v49 + 16);
      uu_base32::base_common::Config::from(v56, v23);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v53, v56);
      if ( (_QWORD)v53 != 2LL )
      {
        v59 = v55;
        v58 = v54;
        v57 = v53;
        v62 = v55;
        v61 = v54;
        v60 = v53;
        LOBYTE(v63) = v14;
        *(_QWORD *)&v21[1].private_1 = v63;
        v9 = v60;
        v10 = v61;
        *(_OWORD *)&v21[1].exception_class = v62;
        *(_OWORD *)&v21->private_1 = v10;
        *(_OWORD *)&v21->exception_class = v9;
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v23);
        return *(_QWORD *)v22;
      }
      <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
        v21,
        *((_QWORD *)&v53 + 1),
        v54,
        &off_12D510);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v23);
    return *(_QWORD *)v22;
  }
  <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
    (_DWORD)a1,
    DWORD2(v30));
  return *(_QWORD *)v22;
}
