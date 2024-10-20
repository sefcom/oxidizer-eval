__int64 __fastcall uu_mktemp::uumain::uumain(__int64 a1, __int64 a2)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  char **v8; // rsi
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  int v13; // edx
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // edx
  int v21; // r8d
  int v22; // r9d
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // [rsp+0h] [rbp-928h]
  struct _Unwind_Exception *v28; // [rsp+0h] [rbp-928h]
  int v29; // [rsp+0h] [rbp-928h]
  int v30; // [rsp+8h] [rbp-920h]
  int v31; // [rsp+8h] [rbp-920h]
  int v32; // [rsp+8h] [rbp-920h]
  struct _Unwind_Exception *v33; // [rsp+10h] [rbp-918h]
  int v34; // [rsp+10h] [rbp-918h]
  int v35; // [rsp+18h] [rbp-910h]
  int v36; // [rsp+18h] [rbp-910h]
  int v37; // [rsp+20h] [rbp-908h]
  int v38; // [rsp+28h] [rbp-900h]
  int v39; // [rsp+30h] [rbp-8F8h]
  int v40; // [rsp+38h] [rbp-8F0h]
  struct _Unwind_Exception *v41; // [rsp+40h] [rbp-8E8h]
  int v42; // [rsp+48h] [rbp-8E0h]
  char v43; // [rsp+4Fh] [rbp-8D9h]
  int v44; // [rsp+50h] [rbp-8D8h]
  __int64 v45; // [rsp+58h] [rbp-8D0h]
  int v46; // [rsp+60h] [rbp-8C8h]
  int v47; // [rsp+68h] [rbp-8C0h]
  int v48; // [rsp+70h] [rbp-8B8h]
  __int64 v49; // [rsp+70h] [rbp-8B8h]
  __int64 v50; // [rsp+78h] [rbp-8B0h]
  __int64 v51; // [rsp+80h] [rbp-8A8h]
  int v52; // [rsp+88h] [rbp-8A0h]
  struct _Unwind_Exception *v53; // [rsp+90h] [rbp-898h]
  __int64 v54; // [rsp+98h] [rbp-890h]
  __int64 v55; // [rsp+A0h] [rbp-888h]
  int v56; // [rsp+B8h] [rbp-870h]
  int v57; // [rsp+C0h] [rbp-868h]
  int v58; // [rsp+D8h] [rbp-850h]
  int v59; // [rsp+E0h] [rbp-848h]
  __int64 v60; // [rsp+128h] [rbp-800h]
  void *dest; // [rsp+130h] [rbp-7F8h]
  char v62; // [rsp+173h] [rbp-7B5h]
  __int16 v63; // [rsp+174h] [rbp-7B4h]
  char v64; // [rsp+176h] [rbp-7B2h]
  char is_ok; // [rsp+177h] [rbp-7B1h]
  __int64 v66; // [rsp+188h] [rbp-7A0h]
  int v67[6]; // [rsp+198h] [rbp-790h] BYREF
  _OWORD v68[6]; // [rsp+1B0h] [rbp-778h] BYREF
  __int64 v69; // [rsp+210h] [rbp-718h]
  int v70[4]; // [rsp+220h] [rbp-708h] BYREF
  __int128 v71; // [rsp+230h] [rbp-6F8h]
  __int128 v72; // [rsp+240h] [rbp-6E8h]
  __int128 v73; // [rsp+250h] [rbp-6D8h]
  __int128 v74; // [rsp+260h] [rbp-6C8h]
  __int128 v75; // [rsp+270h] [rbp-6B8h]
  __int64 v76; // [rsp+280h] [rbp-6A8h]
  int v77[178]; // [rsp+288h] [rbp-6A0h] BYREF
  __int128 v78; // [rsp+550h] [rbp-3D8h]
  __int128 v79; // [rsp+560h] [rbp-3C8h]
  __int128 v80; // [rsp+570h] [rbp-3B8h]
  __int128 v81; // [rsp+580h] [rbp-3A8h]
  __int128 v82; // [rsp+590h] [rbp-398h]
  __int128 v83; // [rsp+5A0h] [rbp-388h]
  __int64 v84; // [rsp+5B0h] [rbp-378h]
  __int64 v85; // [rsp+5C0h] [rbp-368h] BYREF
  char v86; // [rsp+5CFh] [rbp-359h] BYREF
  _BYTE v87[32]; // [rsp+5D0h] [rbp-358h] BYREF
  int v88[4]; // [rsp+5F0h] [rbp-338h] BYREF
  __int128 v89; // [rsp+600h] [rbp-328h]
  __int128 v90; // [rsp+610h] [rbp-318h]
  __int128 v91; // [rsp+620h] [rbp-308h]
  __int128 v92; // [rsp+630h] [rbp-2F8h]
  _BYTE v93[32]; // [rsp+640h] [rbp-2E8h] BYREF
  __int64 v94; // [rsp+660h] [rbp-2C8h] BYREF
  _QWORD v95[2]; // [rsp+668h] [rbp-2C0h] BYREF
  _BYTE src[24]; // [rsp+678h] [rbp-2B0h] BYREF
  unsigned __int64 v97; // [rsp+690h] [rbp-298h]
  _QWORD v98[3]; // [rsp+6A8h] [rbp-280h] BYREF
  _QWORD v99[3]; // [rsp+6C0h] [rbp-268h] BYREF
  _QWORD v100[3]; // [rsp+6D8h] [rbp-250h] BYREF
  __int64 v101; // [rsp+6F0h] [rbp-238h] BYREF
  __int128 v102; // [rsp+6F8h] [rbp-230h]
  __int128 v103; // [rsp+708h] [rbp-220h]
  __int128 v104; // [rsp+718h] [rbp-210h]
  _BYTE v105[80]; // [rsp+740h] [rbp-1E8h] BYREF
  _OWORD v106[5]; // [rsp+790h] [rbp-198h] BYREF
  _OWORD v107[3]; // [rsp+7E0h] [rbp-148h] BYREF
  _QWORD v108[10]; // [rsp+810h] [rbp-118h] BYREF
  __int128 v109; // [rsp+860h] [rbp-C8h] BYREF
  __int64 v110; // [rsp+870h] [rbp-B8h]
  __int128 v111; // [rsp+878h] [rbp-B0h] BYREF
  __int64 v112; // [rsp+888h] [rbp-A0h]
  __int128 v113; // [rsp+890h] [rbp-98h] BYREF
  __int64 v114; // [rsp+8A0h] [rbp-88h]
  __int128 v115; // [rsp+8A8h] [rbp-80h] BYREF
  __int64 v116; // [rsp+8B8h] [rbp-70h]
  __int128 v117; // [rsp+8C0h] [rbp-68h] BYREF
  __int64 v118; // [rsp+8D0h] [rbp-58h]
  int v119[4]; // [rsp+8E0h] [rbp-48h] BYREF
  __int64 v120; // [rsp+8F0h] [rbp-38h]
  char v121; // [rsp+8FEh] [rbp-2Ah]
  char v122; // [rsp+8FFh] [rbp-29h]
  __int64 v123; // [rsp+910h] [rbp-18h]

  v122 = 0;
  v121 = 0;
  core::iter::traits::iterator::Iterator::collect(v67, a1, a2);
  uu_mktemp::uu_app(v77);
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v70,
    (int)v77,
    (int)v67,
    v2,
    v3,
    v4,
    v27,
    v30,
    v33,
    v35);
  if ( *(_QWORD *)v70 == 0x8000000000000000LL )
  {
    v122 = 1;
    v85 = *(_QWORD *)&v70[2];
    v86 = clap_builder::error::Error<F>::kind(&v85);
    v43 = <clap_builder::error::kind::ErrorKind as core::cmp::PartialEq>::eq(&v86, &unk_187D9);
    if ( (v43 & 1) != 0
      && (clap_builder::error::Error<F>::context(v87, &v85), (core::iter::traits::iterator::Iterator::any(v87) & 1) != 0) )
    {
      v66 = uucore::mods::error::UUsageError::new(
              1,
              (int)aTooManyTemplat,
              18,
              v24,
              v25,
              v26,
              (int)v28,
              v31,
              v34,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42);
    }
    else
    {
      v122 = 0;
      v66 = <T as core::convert::Into<U>>::into(v85, &off_119098);
    }
    if ( (v122 & 1) != 0 )
      core::ptr::drop_in_place<clap_builder::error::Error>(&v85);
    v122 = 0;
    goto LABEL_29;
  }
  v84 = v76;
  v83 = v75;
  v82 = v74;
  v81 = v73;
  v80 = v72;
  v79 = v71;
  v78 = *(_OWORD *)v70;
  v69 = v76;
  v68[5] = v75;
  v68[4] = v74;
  v68[3] = v73;
  v68[2] = v72;
  v68[1] = v71;
  v68[0] = *(_OWORD *)v70;
  uu_mktemp::Options::from(v88, v68);
  v121 = 1;
  std::env::var(v93, aPosixlyCorrect, 15LL);
  is_ok = core::result::Result<T,E>::is_ok(v93);
  if ( (is_ok & 1) != 0 )
  {
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v93);
    v62 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
            v68,
            &unk_18388,
            *(&uu_mktemp::ARG_TEMPLATE + 1));
    if ( (v62 & 1) != 0 )
    {
      v5 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v67);
      v123 = core::slice::<impl [T]>::last(v5, v6);
      if ( !v123 )
        core::option::unwrap_failed(&off_118FA8);
      v94 = v123;
      v95[0] = std::ffi::os_str::OsStr::new(v88);
      v95[1] = v7;
      if ( (core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::ne(&v94, v95) & 1) != 0 )
      {
        v97 = 0x8000000000000006LL;
        dest = (void *)alloc::alloc::exchange_malloc(48LL, 8LL);
        v8 = (char **)src;
        memcpy(dest, src, 0x30uLL);
        v66 = (__int64)dest;
LABEL_26:
        if ( (v121 & 1) != 0 )
          core::ptr::drop_in_place<uu_mktemp::Options>((int)v88, (int)v8, v9, v10, v11, v12, v28, v31);
        v121 = 0;
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v68);
LABEL_29:
        core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v67);
        return v66;
      }
    }
  }
  else
  {
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v93);
  }
  v63 = WORD4(v92);
  v64 = BYTE10(v92);
  v121 = 0;
  v106[4] = v92;
  v106[3] = v91;
  v106[2] = v90;
  v106[1] = v89;
  v106[0] = *(_OWORD *)v88;
  uu_mktemp::Params::from(v105, v106);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v101, v105);
  if ( v101 == 0x8000000000000000LL )
  {
    v107[2] = v104;
    v107[1] = v103;
    v107[0] = v102;
    v8 = &off_118FD8;
    v10 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v107,
            &off_118FD8);
    v66 = v10;
    goto LABEL_26;
  }
  memcpy(v108, &v101, sizeof(v108));
  v98[0] = v108[0];
  v98[1] = v108[1];
  v98[2] = v108[2];
  v99[0] = v108[3];
  v99[1] = v108[4];
  v99[2] = v108[5];
  v60 = v108[9];
  v100[0] = v108[6];
  v100[1] = v108[7];
  v100[2] = v108[8];
  if ( (v63 & 0x100) != 0 )
  {
    v54 = <std::path::PathBuf as core::ops::deref::Deref>::deref(v98);
    v55 = v17;
    v50 = <alloc::string::String as core::ops::deref::Deref>::deref(v99);
    v51 = v18;
    v19 = <alloc::string::String as core::ops::deref::Deref>::deref(v100);
    v52 = v20;
    v53 = (struct _Unwind_Exception *)v19;
    v32 = v20;
    v29 = v19;
    uu_mktemp::dry_exec(&v109, v54, v55, v50, v51, v60);
  }
  else
  {
    v58 = <std::path::PathBuf as core::ops::deref::Deref>::deref(v98);
    v59 = v13;
    v56 = <alloc::string::String as core::ops::deref::Deref>::deref(v99);
    v57 = v14;
    v15 = <alloc::string::String as core::ops::deref::Deref>::deref(v100);
    uu_mktemp::exec((unsigned int)&v109, v58, v59, v56, v57, v60, v15, v16, v63 & 1);
  }
  if ( (v64 & 1) != 0 )
  {
    v114 = v110;
    v113 = v109;
    core::result::Result<T,E>::map_err((char)&v111, (unsigned int)&v113);
  }
  else
  {
    v111 = v109;
    v112 = v110;
  }
  v118 = v112;
  v117 = v111;
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v115, &v117);
  if ( (_QWORD)v115 == 0x8000000000000000LL )
  {
    v66 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v115 + 1),
            v116,
            &off_118FC0);
  }
  else
  {
    v120 = v116;
    *(_OWORD *)v119 = v115;
    v49 = uucore::mods::display::println_verbatim(
            (int)v119,
            (int)&v117,
            0,
            1,
            v21,
            v22,
            v29,
            v32,
            v34,
            v36,
            v37,
            v38,
            v39,
            v40,
            (int)v41,
            v42,
            v44,
            v45,
            v46,
            v47,
            v48,
            v50,
            v51,
            v52,
            v53,
            v54);
    v66 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v49);
  }
  core::ptr::drop_in_place<alloc::string::String>(v100);
  core::ptr::drop_in_place<alloc::string::String>(v99);
  core::ptr::drop_in_place<std::path::PathBuf>(v98);
  v121 = 0;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v68);
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v67);
  return v66;
}
