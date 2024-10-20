__int64 __fastcall uu_split::uumain::uumain(__int64 a1, __int64 a2)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v10; // [rsp+0h] [rbp-838h]
  int v11; // [rsp+0h] [rbp-838h]
  int v12; // [rsp+8h] [rbp-830h]
  char v13; // [rsp+8h] [rbp-830h]
  struct _Unwind_Exception *v14; // [rsp+10h] [rbp-828h]
  int v15; // [rsp+10h] [rbp-828h]
  int v16; // [rsp+18h] [rbp-820h]
  int v17; // [rsp+18h] [rbp-820h]
  int v18; // [rsp+20h] [rbp-818h]
  char v19; // [rsp+27h] [rbp-811h]
  int v20; // [rsp+28h] [rbp-810h]
  int v21; // [rsp+30h] [rbp-808h]
  int v22; // [rsp+38h] [rbp-800h]
  struct _Unwind_Exception *v23; // [rsp+40h] [rbp-7F8h]
  int v24; // [rsp+48h] [rbp-7F0h]
  __int64 v25; // [rsp+50h] [rbp-7E8h]
  __int128 v26; // [rsp+60h] [rbp-7D8h]
  __int64 v27; // [rsp+70h] [rbp-7C8h]
  __int128 v28; // [rsp+80h] [rbp-7B8h] BYREF
  __int64 v29; // [rsp+90h] [rbp-7A8h]
  int v30[4]; // [rsp+A0h] [rbp-798h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-788h]
  __int128 v32; // [rsp+B8h] [rbp-780h]
  __int64 v33; // [rsp+C8h] [rbp-770h]
  _OWORD v34[6]; // [rsp+D0h] [rbp-768h] BYREF
  __int64 v35; // [rsp+130h] [rbp-708h]
  __int128 v36; // [rsp+138h] [rbp-700h] BYREF
  __int128 v37; // [rsp+148h] [rbp-6F0h]
  __int128 v38; // [rsp+158h] [rbp-6E0h]
  __int128 v39; // [rsp+168h] [rbp-6D0h]
  __int128 v40; // [rsp+178h] [rbp-6C0h]
  __int128 v41; // [rsp+188h] [rbp-6B0h]
  __int64 v42; // [rsp+198h] [rbp-6A0h]
  int v43[26]; // [rsp+1A0h] [rbp-698h] BYREF
  int v44[178]; // [rsp+208h] [rbp-630h] BYREF
  int v45[4]; // [rsp+4D0h] [rbp-368h] BYREF
  __int64 v46; // [rsp+4E0h] [rbp-358h]
  __int128 v47; // [rsp+4F0h] [rbp-348h]
  __int128 v48; // [rsp+500h] [rbp-338h]
  __int128 v49; // [rsp+510h] [rbp-328h]
  __int128 v50; // [rsp+520h] [rbp-318h]
  __int128 v51; // [rsp+530h] [rbp-308h]
  __int128 v52; // [rsp+540h] [rbp-2F8h]
  __int64 v53; // [rsp+550h] [rbp-2E8h]
  _QWORD src[21]; // [rsp+558h] [rbp-2E0h] BYREF
  _BYTE dest[168]; // [rsp+600h] [rbp-238h] BYREF
  _BYTE v56[40]; // [rsp+6A8h] [rbp-190h] BYREF
  int v57[2]; // [rsp+6D0h] [rbp-168h] BYREF
  __int64 v58; // [rsp+6D8h] [rbp-160h]
  __int64 v59; // [rsp+6E0h] [rbp-158h]
  _QWORD v60[3]; // [rsp+6E8h] [rbp-150h] BYREF
  _BYTE v61[48]; // [rsp+700h] [rbp-138h] BYREF
  __int128 v62; // [rsp+730h] [rbp-108h] BYREF
  __int128 v63; // [rsp+748h] [rbp-F0h]
  _BYTE v64[40]; // [rsp+758h] [rbp-E0h] BYREF
  _QWORD v65[3]; // [rsp+780h] [rbp-B8h] BYREF
  _QWORD v66[3]; // [rsp+798h] [rbp-A0h] BYREF
  _BYTE v67[48]; // [rsp+7B0h] [rbp-88h] BYREF
  __int128 v68; // [rsp+7E0h] [rbp-58h] BYREF
  __int128 v69; // [rsp+7F0h] [rbp-48h]
  char v70; // [rsp+806h] [rbp-32h]
  char v71; // [rsp+807h] [rbp-31h]
  _BYTE *v72; // [rsp+818h] [rbp-20h]
  __int64 (__fastcall *v73)(); // [rsp+820h] [rbp-18h]
  _BYTE *v74; // [rsp+828h] [rbp-10h]
  __int64 (__fastcall *v75)(); // [rsp+830h] [rbp-8h]

  v71 = 0;
  v70 = 0;
  uu_split::handle_obsolete(v30, a1, a2);
  v71 = 1;
  v27 = v31;
  v26 = *(_OWORD *)v30;
  v29 = v33;
  v28 = v32;
  uu_split::uu_app(v44);
  v71 = 0;
  v46 = v27;
  *(_OWORD *)v45 = v26;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v43,
    (int)v44,
    (int)v45,
    v2,
    v3,
    v4,
    v10,
    v12,
    v14,
    v16);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v36, v43);
  if ( (_QWORD)v36 == 0x8000000000000000LL )
  {
    v25 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v36 + 1),
            &off_132818);
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v28);
    v71 = 0;
  }
  else
  {
    v53 = v42;
    v52 = v41;
    v51 = v40;
    v50 = v39;
    v49 = v38;
    v48 = v37;
    v47 = v36;
    v35 = v42;
    v34[5] = v41;
    v34[4] = v40;
    v34[3] = v39;
    v34[2] = v38;
    v34[1] = v37;
    v34[0] = v36;
    uu_split::Settings::from(src);
    v70 = 1;
    if ( src[0] == 2LL )
    {
      v19 = uu_split::SettingsError::requires_usage(&src[1], v34);
      v70 = 0;
      if ( (v19 & 1) != 0 )
      {
        memcpy(v56, &src[1], sizeof(v56));
        v72 = v56;
        v73 = <uu_split::SettingsError as core::fmt::Display>::fmt;
        *(_QWORD *)&v63 = v56;
        *((_QWORD *)&v63 + 1) = <uu_split::SettingsError as core::fmt::Display>::fmt;
        v62 = v63;
        core::fmt::Arguments::new_v1(v61, &anon_f907210316a4f48a9c7de5c93e2a79ff_193_llvm_5503381581801417789, &v62);
        alloc::fmt::format(v60, v61);
        *(_QWORD *)v57 = v60[0];
        v58 = v60[1];
        v59 = v60[2];
        v25 = uucore::mods::error::UUsageError::new(
                1,
                (int)v57,
                v5,
                v6,
                v7,
                v8,
                v11,
                v13,
                v15,
                v17,
                v18,
                v20,
                v21,
                v22,
                v23,
                v24);
        core::ptr::drop_in_place<uu_split::SettingsError>(v56);
      }
      else
      {
        memcpy(v64, &src[1], sizeof(v64));
        v74 = v64;
        v75 = <uu_split::SettingsError as core::fmt::Display>::fmt;
        *(_QWORD *)&v69 = v64;
        *((_QWORD *)&v69 + 1) = <uu_split::SettingsError as core::fmt::Display>::fmt;
        v68 = v69;
        core::fmt::Arguments::new_v1(v67, &anon_f907210316a4f48a9c7de5c93e2a79ff_193_llvm_5503381581801417789, &v68);
        alloc::fmt::format(v66, v67);
        v65[0] = v66[0];
        v65[1] = v66[1];
        v65[2] = v66[2];
        v25 = uucore::mods::error::USimpleError::new(1LL, v65);
        core::ptr::drop_in_place<uu_split::SettingsError>(v64);
      }
    }
    else
    {
      memcpy(dest, src, sizeof(dest));
      v25 = uu_split::split(dest);
      core::ptr::drop_in_place<uu_split::Settings>(dest);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v34);
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v28);
    v71 = 0;
    v70 = 0;
  }
  return v25;
}
