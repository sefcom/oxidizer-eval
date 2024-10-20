__int64 __fastcall uu_join::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rax
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // edx
  int v14; // eax
  int v15; // edx
  __int64 v17; // [rsp+0h] [rbp-C00h]
  int v18; // [rsp+8h] [rbp-BF8h]
  struct _Unwind_Exception *v19; // [rsp+10h] [rbp-BF0h]
  int v20; // [rsp+18h] [rbp-BE8h]
  int v21; // [rsp+20h] [rbp-BE0h]
  int v22; // [rsp+28h] [rbp-BD8h]
  int v23; // [rsp+50h] [rbp-BB0h]
  int v24; // [rsp+58h] [rbp-BA8h]
  int v25; // [rsp+88h] [rbp-B78h]
  int v26; // [rsp+90h] [rbp-B70h]
  int v27; // [rsp+98h] [rbp-B68h]
  int v28; // [rsp+A0h] [rbp-B60h]
  int v29; // [rsp+C8h] [rbp-B38h]
  int v30; // [rsp+D0h] [rbp-B30h]
  char v31; // [rsp+11Fh] [rbp-AE1h]
  __int64 one; // [rsp+178h] [rbp-A88h]
  __int64 v33; // [rsp+1A0h] [rbp-A60h]
  _OWORD v34[6]; // [rsp+1B0h] [rbp-A50h] BYREF
  __int64 v35; // [rsp+210h] [rbp-9F0h]
  __int128 v36; // [rsp+218h] [rbp-9E8h] BYREF
  __int128 v37; // [rsp+228h] [rbp-9D8h]
  __int128 v38; // [rsp+238h] [rbp-9C8h]
  __int128 v39; // [rsp+248h] [rbp-9B8h]
  __int128 v40; // [rsp+258h] [rbp-9A8h]
  __int128 v41; // [rsp+268h] [rbp-998h]
  __int64 v42; // [rsp+278h] [rbp-988h]
  int v43[26]; // [rsp+280h] [rbp-980h] BYREF
  int v44[178]; // [rsp+2E8h] [rbp-918h] BYREF
  __int128 v45; // [rsp+5B0h] [rbp-650h]
  __int128 v46; // [rsp+5C0h] [rbp-640h]
  __int128 v47; // [rsp+5D0h] [rbp-630h]
  __int128 v48; // [rsp+5E0h] [rbp-620h]
  __int128 v49; // [rsp+5F0h] [rbp-610h]
  __int128 v50; // [rsp+600h] [rbp-600h]
  __int64 v51; // [rsp+610h] [rbp-5F0h]
  __int128 v52; // [rsp+620h] [rbp-5E0h] BYREF
  __int128 v53; // [rsp+630h] [rbp-5D0h]
  __int128 v54; // [rsp+640h] [rbp-5C0h]
  __int128 v55; // [rsp+650h] [rbp-5B0h] BYREF
  __int128 v56; // [rsp+660h] [rbp-5A0h]
  __int128 v57; // [rsp+670h] [rbp-590h]
  __int128 v58; // [rsp+680h] [rbp-580h] BYREF
  __int128 v59; // [rsp+690h] [rbp-570h]
  __int128 v60; // [rsp+6A0h] [rbp-560h]
  __int128 v61; // [rsp+6B0h] [rbp-550h]
  __int128 v62; // [rsp+6C0h] [rbp-540h]
  __int128 v63; // [rsp+6D0h] [rbp-530h]
  _BYTE v64[96]; // [rsp+6E0h] [rbp-520h] BYREF
  __int128 v65; // [rsp+740h] [rbp-4C0h]
  __int128 v66; // [rsp+750h] [rbp-4B0h]
  __int128 v67; // [rsp+760h] [rbp-4A0h]
  __int128 v68; // [rsp+770h] [rbp-490h]
  __int128 v69; // [rsp+780h] [rbp-480h]
  __int128 v70; // [rsp+790h] [rbp-470h]
  __int64 v71; // [rsp+7A8h] [rbp-458h] BYREF
  __int64 v72; // [rsp+7B0h] [rbp-450h] BYREF
  __int128 v73; // [rsp+7B8h] [rbp-448h] BYREF
  __int64 v74; // [rsp+7C8h] [rbp-438h]
  __int128 v75[6]; // [rsp+7D0h] [rbp-430h] BYREF
  char v76; // [rsp+83Eh] [rbp-3C2h]
  char v77; // [rsp+83Fh] [rbp-3C1h]
  __int128 v78; // [rsp+840h] [rbp-3C0h] BYREF
  __int64 v79; // [rsp+850h] [rbp-3B0h]
  __int128 v80[6]; // [rsp+860h] [rbp-3A0h] BYREF
  _BYTE dest[288]; // [rsp+8C0h] [rbp-340h] BYREF
  _BYTE src[288]; // [rsp+9E0h] [rbp-220h] BYREF
  _OWORD v83[6]; // [rsp+B00h] [rbp-100h] BYREF
  _OWORD v84[6]; // [rsp+B60h] [rbp-A0h] BYREF
  char v85; // [rsp+BC5h] [rbp-3Bh]
  char v86; // [rsp+BC6h] [rbp-3Ah]
  char v87; // [rsp+BC7h] [rbp-39h]
  char v88; // [rsp+BDFh] [rbp-21h]
  __int64 v89; // [rsp+BE0h] [rbp-20h]
  __int64 v90; // [rsp+BE8h] [rbp-18h]

  v86 = 0;
  v85 = 0;
  v87 = 1;
  uu_join::uu_app(v44);
  v87 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v43, (int)v44, a1, a2, v2, v3, v17, v18, v19, v20);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v36, v43);
  if ( (_QWORD)v36 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v36 + 1),
             &off_12E5B8);
  v51 = v42;
  v50 = v41;
  v49 = v40;
  v48 = v39;
  v47 = v38;
  v46 = v37;
  v45 = v36;
  v35 = v42;
  v34[5] = v41;
  v34[4] = v40;
  v34[3] = v39;
  v34[2] = v38;
  v34[1] = v37;
  v34[0] = v36;
  uu_join::parse_settings(v64, v34);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v58, v64);
  if ( (_QWORD)v58 == 0x8000000000000000LL )
  {
    v33 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v58 + 1),
            v59,
            &off_12E5A0);
  }
  else
  {
    v70 = v63;
    v69 = v62;
    v68 = v61;
    v67 = v60;
    v66 = v59;
    v65 = v58;
    v86 = 1;
    v57 = v63;
    v56 = v62;
    v55 = v61;
    v54 = v60;
    v53 = v59;
    v52 = v58;
    one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v34, aFile1, 5LL, &off_12E530);
    v90 = one;
    if ( !one )
      core::option::unwrap_failed(&off_12E548);
    v71 = v90;
    v89 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v34, aFile2, 5LL, &off_12E560);
    if ( !v89 )
      core::option::unwrap_failed(&off_12E578);
    v72 = v89;
    if ( (core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(&v71, &off_12E590) & 1) != 0
      && (core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(&v72, &off_12E590) & 1) != 0 )
    {
      v33 = uucore::mods::error::USimpleError::new(1LL, aBothFilesCanno, 35LL);
      core::ptr::drop_in_place<uu_join::Settings>(&v52);
    }
    else
    {
      <uu_join::SepSetting as core::clone::Clone>::clone(&v73, &v55);
      v4 = 1LL;
      if ( (unsigned __int64)v73 + 0x8000000000000000LL < 4 )
        v4 = v73 + 0x8000000000000000LL;
      switch ( v4 )
      {
        case 0LL:
          v31 = BYTE8(v73);
          v29 = <alloc::string::String as core::ops::deref::Deref>::deref(v71);
          v30 = v5;
          v6 = <alloc::string::String as core::ops::deref::Deref>::deref(v72);
          v86 = 0;
          v75[5] = v57;
          v75[4] = v56;
          v75[3] = v55;
          v75[2] = v54;
          v75[1] = v53;
          v75[0] = v52;
          v77 = v31;
          v76 = v31;
          v88 = v31;
          v33 = uu_join::exec(v29, v30, v6, v7, v75, v31);
          break;
        case 1LL:
          v79 = v74;
          v78 = v73;
          v27 = <alloc::string::String as core::ops::deref::Deref>::deref(v71);
          v28 = v8;
          v25 = <alloc::string::String as core::ops::deref::Deref>::deref(v72);
          v26 = v9;
          v86 = 0;
          v85 = 1;
          v80[5] = v57;
          v80[4] = v56;
          v80[3] = v55;
          v80[2] = v54;
          v80[1] = v53;
          v80[0] = v52;
          memchr::memmem::Finder::new(src);
          memcpy(dest, src, sizeof(dest));
          v85 = 0;
          v33 = uu_join::exec(v27, v28, v25, v26, v80, dest);
          v85 = 0;
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v78);
          break;
        case 2LL:
          v23 = <alloc::string::String as core::ops::deref::Deref>::deref(v71);
          v24 = v10;
          v11 = <alloc::string::String as core::ops::deref::Deref>::deref(v72);
          v86 = 0;
          v84[5] = v57;
          v84[4] = v56;
          v84[3] = v55;
          v84[2] = v54;
          v84[1] = v53;
          v84[0] = v52;
          v33 = uu_join::exec(v23, v24, v11, v12, (__int64)v84);
          break;
        case 3LL:
          v21 = <alloc::string::String as core::ops::deref::Deref>::deref(v71);
          v22 = v13;
          v14 = <alloc::string::String as core::ops::deref::Deref>::deref(v72);
          v86 = 0;
          v83[5] = v57;
          v83[4] = v56;
          v83[3] = v55;
          v83[2] = v54;
          v83[1] = v53;
          v83[0] = v52;
          v33 = uu_join::exec(v21, v22, v14, v15, (__int64)v83);
          break;
      }
    }
  }
  v86 = 0;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v34);
  return v33;
}
