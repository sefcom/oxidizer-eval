__int64 __fastcall forc_fmt::format_manifest(__int64 a1, char a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rax
  _BYTE *v7; // rcx
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rbp
  __int64 v12; // rdx
  unsigned __int8 v13; // al
  char *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  char *v21; // rcx
  char v22; // al
  char v23; // r14
  void *v24; // r15
  __int128 v25; // xmm0
  __int64 v26; // r12
  __int64 v27; // rdx
  __int64 v28; // r13
  char *v29; // r14
  __int64 v30; // rax
  __int64 v31; // r9
  __int128 v33; // [rsp+0h] [rbp-198h] BYREF
  __int128 v34; // [rsp+10h] [rbp-188h]
  __int64 v35; // [rsp+20h] [rbp-178h]
  __int64 v36; // [rsp+38h] [rbp-160h]
  __int128 v37; // [rsp+40h] [rbp-158h] BYREF
  __int128 v38; // [rsp+50h] [rbp-148h]
  __int64 v39; // [rsp+60h] [rbp-138h]
  __int64 v40; // [rsp+68h] [rbp-130h]
  __int128 *v41; // [rsp+78h] [rbp-120h] BYREF
  __int64 (__fastcall *v42)(); // [rsp+80h] [rbp-118h]
  void *v43; // [rsp+88h] [rbp-110h]
  __int128 v44; // [rsp+90h] [rbp-108h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-F8h]
  __int128 v46; // [rsp+A8h] [rbp-F0h] BYREF
  _BYTE v47[8]; // [rsp+B8h] [rbp-E0h] BYREF
  __int64 v48; // [rsp+C0h] [rbp-D8h]
  __int64 v49; // [rsp+C8h] [rbp-D0h]
  __int128 v50; // [rsp+D0h] [rbp-C8h] BYREF
  __int128 v51; // [rsp+E0h] [rbp-B8h]
  __int64 v52; // [rsp+F0h] [rbp-A8h]
  __int128 v53; // [rsp+F8h] [rbp-A0h] BYREF
  char *v54; // [rsp+108h] [rbp-90h]
  __int128 v55; // [rsp+110h] [rbp-88h] BYREF
  __int64 v56; // [rsp+120h] [rbp-78h]
  _BYTE v57[24]; // [rsp+128h] [rbp-70h] BYREF
  _QWORD v58[2]; // [rsp+140h] [rbp-58h] BYREF
  _BYTE v59[72]; // [rsp+150h] [rbp-48h] BYREF

  v36 = a1;
  std::fs::read_to_string(&v44, a3);
  v4 = v44;
  if ( __OFSUB__(-(__int64)v44, 1LL) )
  {
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v44);
    *(_QWORD *)&v37 = a3;
    *((_QWORD *)&v37 + 1) = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
    *(_QWORD *)&v33 = &off_80A428;
    *((_QWORD *)&v33 + 1) = 1LL;
    v35 = 0LL;
    *(_QWORD *)&v34 = &v37;
    *((_QWORD *)&v34 + 1) = 1LL;
    core::option::Option<T>::map_or_else(v59, 0LL, v5, &v33);
    v6 = anyhow::error::<impl anyhow::Error>::msg(v59);
    v7 = (_BYTE *)v36;
    *(_QWORD *)(v36 + 8) = v6;
    *v7 = 1;
    return core::ptr::drop_in_place<std::path::PathBuf>(a3);
  }
  v8 = v45;
  v56 = v45;
  v55 = v44;
  v9 = *((_QWORD *)&v44 + 1);
  <taplo::formatter::Options as core::default::Default>::default(&v33);
  taplo::formatter::format(v47, v9, v8, &v33);
  if ( (a2 & 1) == 0 )
  {
    v20 = forc_fmt::write_file_formatted(*(_QWORD *)(a3 + 8), *(_QWORD *)(a3 + 16), v48, v49);
    if ( v20 )
    {
      v21 = (char *)v36;
      *(_QWORD *)(v36 + 8) = v20;
      v22 = 1;
      goto LABEL_20;
    }
    goto LABEL_18;
  }
  v10 = v48;
  v11 = v49;
  if ( (unsigned __int8)alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                          v48,
                          v49,
                          v9,
                          v8) )
  {
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&tracing_core::metadata::MAX_LEVEL) <= 2
      && (v13 = tracing_core::callsite::DefaultCallsite::interest(&forc_fmt::format_manifest::__CALLSITE)) != 0
      && (unsigned __int8)tracing::__macro_support::__is_enabled(forc_fmt::format_manifest::__CALLSITE, v13) )
    {
      v14 = (char *)forc_fmt::format_manifest::__CALLSITE;
      v15 = *((_QWORD *)forc_fmt::format_manifest::__CALLSITE + 7);
      v37 = *((_OWORD *)forc_fmt::format_manifest::__CALLSITE + 3);
      v38 = *((_OWORD *)forc_fmt::format_manifest::__CALLSITE + 4);
      v39 = 0LL;
      v40 = v15;
      <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v33, &v37);
      if ( (_QWORD)v33 )
      {
        v52 = v35;
        v51 = v34;
        v50 = v33;
        v53 = *(_OWORD *)(a3 + 8);
        *(_QWORD *)&v46 = &v53;
        *((_QWORD *)&v46 + 1) = <std::path::Display as core::fmt::Display>::fmt;
        v41 = &v50;
        v42 = (__int64 (__fastcall *)())&v33;
        v43 = &unk_80A3A8;
        *(_QWORD *)&v37 = &v41;
        *((_QWORD *)&v37 + 1) = 1LL;
        *(_QWORD *)&v38 = v14 + 48;
        forc_fmt::format_manifest::{{closure}}(&v37, &v37, v16, v17, v18, v19, &off_80A418, 1LL, &v46, 1LL, 0LL);
LABEL_18:
        v23 = 0;
        goto LABEL_19;
      }
    }
    else
    {
      if ( (unsigned __int8)core::sync::atomic::atomic_load(&tracing_core::dispatcher::EXISTS) )
        goto LABEL_18;
      if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) < 3 )
        goto LABEL_18;
      v24 = forc_fmt::format_manifest::__CALLSITE;
      v25 = *((_OWORD *)forc_fmt::format_manifest::__CALLSITE + 2);
      *(_QWORD *)v57 = 3LL;
      *(_OWORD *)&v57[8] = v25;
      v26 = log::logger();
      v28 = v27;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, _BYTE *))(v27 + 24))(v26, v57) )
        goto LABEL_18;
      v29 = (char *)forc_fmt::format_manifest::__CALLSITE;
      v30 = *((_QWORD *)forc_fmt::format_manifest::__CALLSITE + 7);
      v37 = *((_OWORD *)forc_fmt::format_manifest::__CALLSITE + 3);
      v38 = *((_OWORD *)forc_fmt::format_manifest::__CALLSITE + 4);
      v39 = 0LL;
      v40 = v30;
      <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v33, &v37);
      if ( (_QWORD)v33 )
      {
        v52 = v35;
        v51 = v34;
        v50 = v33;
        v46 = *(_OWORD *)(a3 + 8);
        v58[0] = &v46;
        v58[1] = <std::path::Display as core::fmt::Display>::fmt;
        v41 = &v50;
        v42 = (__int64 (__fastcall *)())&v33;
        v43 = &unk_80A3A8;
        *(_QWORD *)&v53 = &v41;
        *((_QWORD *)&v53 + 1) = 1LL;
        v54 = v29 + 48;
        *(_QWORD *)&v38 = *(_QWORD *)&v57[16];
        v37 = *(_OWORD *)v57;
        tracing::__macro_support::__tracing_log(v24, v26, v28, &v37, &v53, v31, &off_80A418, 1LL, v58, 1LL, 0LL);
        goto LABEL_18;
      }
    }
    core::option::expect_failed(aFieldsetCorrup, 34LL, &off_80A438);
  }
  v50 = *(_OWORD *)(a3 + 8);
  v41 = &v50;
  v42 = <std::path::Display as core::fmt::Display>::fmt;
  *(_QWORD *)&v33 = &off_80A408;
  *((_QWORD *)&v33 + 1) = 1LL;
  v35 = 0LL;
  *(_QWORD *)&v34 = &v41;
  *((_QWORD *)&v34 + 1) = 1LL;
  core::option::Option<T>::map_or_else(&v37, 0LL, v12, &v33);
  v33 = v37;
  *(_QWORD *)&v34 = v38;
  forc_tracing::println_error(*((_QWORD *)&v37 + 1), v38);
  core::ptr::drop_in_place<alloc::string::String>(&v33);
  v23 = 1;
  forc_fmt::display_file_diff(v9, v8, v10, v11);
LABEL_19:
  v21 = (char *)v36;
  *(_BYTE *)(v36 + 1) = v23;
  v22 = 0;
  v4 = v44;
LABEL_20:
  *v21 = v22;
  core::ptr::drop_in_place<alloc::string::String>(v47);
  core::ptr::drop_in_place<alloc::string::String>(&v55);
  if ( v4 == 0x8000000000000000LL )
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v44);
  return core::ptr::drop_in_place<std::path::PathBuf>(a3);
}