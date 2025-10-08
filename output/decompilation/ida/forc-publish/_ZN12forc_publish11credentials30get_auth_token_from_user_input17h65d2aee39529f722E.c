__int64 __fastcall forc_publish::credentials::get_auth_token_from_user_input(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5)
{
  unsigned __int8 v6; // al
  char *v7; // r12
  __int64 v8; // rax
  void *v9; // r15
  __int128 v10; // xmm0
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r13
  char *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int128 **v20; // r12
  __int64 (__fastcall *v21)(); // r15
  __int64 v22; // rax
  _OWORD *v23; // rdx
  __int64 dir_all; // rax
  __int128 v25; // kr00_16
  __int64 v26; // rax
  unsigned __int8 v27; // al
  char *v28; // r13
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  void *v34; // r14
  __int128 v35; // xmm0
  __int64 v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rbp
  char *v39; // r14
  __int64 v40; // rax
  _BYTE v42[40]; // [rsp+0h] [rbp-1C8h] BYREF
  __int128 v43; // [rsp+30h] [rbp-198h] BYREF
  __int128 v44; // [rsp+40h] [rbp-188h]
  __int64 v45; // [rsp+50h] [rbp-178h]
  __int64 v46; // [rsp+58h] [rbp-170h]
  __int128 *v47; // [rsp+60h] [rbp-168h] BYREF
  _BYTE *v48; // [rsp+68h] [rbp-160h]
  void *v49; // [rsp+70h] [rbp-158h]
  __int128 **v50; // [rsp+78h] [rbp-150h] BYREF
  __int64 v51; // [rsp+80h] [rbp-148h]
  char *v52; // [rsp+88h] [rbp-140h]
  __int64 v53; // [rsp+90h] [rbp-138h] BYREF
  unsigned int v54; // [rsp+98h] [rbp-130h]
  __int128 v55; // [rsp+A0h] [rbp-128h] BYREF
  __int128 v56; // [rsp+B0h] [rbp-118h]
  __int64 v57; // [rsp+C0h] [rbp-108h]
  __int64 v58; // [rsp+C8h] [rbp-100h] BYREF
  __int64 v59; // [rsp+D0h] [rbp-F8h]
  __int64 v60; // [rsp+D8h] [rbp-F0h]
  __int128 ***v61; // [rsp+E0h] [rbp-E8h] BYREF
  __int64 (__fastcall *v62)(); // [rsp+E8h] [rbp-E0h]
  __int128 v63; // [rsp+F0h] [rbp-D8h] BYREF
  __int64 v64; // [rsp+100h] [rbp-C8h]
  __int128 v65; // [rsp+110h] [rbp-B8h] BYREF
  __int64 v66; // [rsp+120h] [rbp-A8h]
  void *v67; // [rsp+130h] [rbp-98h]
  __int64 v68; // [rsp+138h] [rbp-90h] BYREF
  __int128 v69; // [rsp+140h] [rbp-88h] BYREF
  __int64 v70; // [rsp+150h] [rbp-78h]
  _BYTE v71[24]; // [rsp+158h] [rbp-70h] BYREF
  _BYTE v72[24]; // [rsp+170h] [rbp-58h] BYREF
  _QWORD v73[8]; // [rsp+188h] [rbp-40h] BYREF

  v53 = a3;
  LOBYTE(v54) = a4;
  v68 = a5;
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&tracing_core::metadata::MAX_LEVEL, 0LL) <= 2 )
  {
    v6 = tracing_core::callsite::DefaultCallsite::interest(&forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE);
    if ( v6 )
    {
      if ( (unsigned __int8)tracing::__macro_support::__is_enabled(
                              forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE,
                              v6) )
      {
        v7 = (char *)forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE;
        v8 = *((_QWORD *)forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE + 7);
        v43 = *((_OWORD *)forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE + 3);
        v44 = *((_OWORD *)forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE + 4);
        v45 = 0LL;
        v46 = v8;
        <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(v42, &v43);
        if ( *(_QWORD *)v42 )
        {
          v57 = *(_QWORD *)&v42[32];
          v56 = *(_OWORD *)&v42[16];
          v55 = *(_OWORD *)v42;
          *(_QWORD *)v42 = &off_E53E70;
          *(_QWORD *)&v42[8] = 1LL;
          *(_QWORD *)&v42[16] = 8LL;
          *(_OWORD *)&v42[24] = 0LL;
          v47 = &v55;
          v48 = v42;
          v49 = &unk_E53EA8;
          *(_QWORD *)&v43 = &v47;
          *((_QWORD *)&v43 + 1) = 1LL;
          *(_QWORD *)&v44 = v7 + 48;
          forc_publish::credentials::get_auth_token_from_user_input::{{closure}}(&v43);
          goto LABEL_11;
        }
LABEL_38:
        core::option::expect_failed(aFieldsetCorrup_0, 34LL, &off_E53E90);
      }
    }
  }
  if ( !(unsigned __int8)core::sync::atomic::atomic_load(&tracing_core::dispatcher::EXISTS)
    && (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
  {
    v9 = forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE;
    v10 = *((_OWORD *)forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE + 2);
    *(_QWORD *)v71 = 3LL;
    *(_OWORD *)&v71[8] = v10;
    v11 = log::logger();
    v13 = v12;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *))(v12 + 24))(v11, v71) )
    {
      v14 = (char *)forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE;
      v15 = *((_QWORD *)forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE + 7);
      v43 = *((_OWORD *)forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE + 3);
      v44 = *((_OWORD *)forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE + 4);
      v45 = 0LL;
      v46 = v15;
      <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(v42, &v43);
      if ( !*(_QWORD *)v42 )
        goto LABEL_38;
      v57 = *(_QWORD *)&v42[32];
      v56 = *(_OWORD *)&v42[16];
      v55 = *(_OWORD *)v42;
      *(_QWORD *)v42 = &off_E53E70;
      *(_QWORD *)&v42[8] = 1LL;
      *(_QWORD *)&v42[16] = 8LL;
      *(_OWORD *)&v42[24] = 0LL;
      v47 = &v55;
      v48 = v42;
      v49 = &unk_E53EA8;
      v50 = &v47;
      v51 = 1LL;
      v52 = v14 + 48;
      *(_QWORD *)&v44 = *(_QWORD *)&v71[16];
      v43 = *(_OWORD *)v71;
      tracing::__macro_support::__tracing_log(v9, v11, v13, &v43, &v50);
    }
  }
LABEL_11:
  v16 = <std::io::stdio::Stdout as std::io::Write>::flush(&v68);
  if ( !v16 )
  {
    v58 = 0LL;
    v59 = 1LL;
    v60 = 0LL;
    v17 = (__int64)&v58;
    if ( (<std::io::stdio::StdinLock as std::io::BufRead>::read_line(&v53, &v58) & 1) != 0 )
    {
      *(_BYTE *)a1 = 0;
      *(_QWORD *)(a1 + 8) = v18;
LABEL_36:
      core::ptr::drop_in_place<alloc::string::String>(&v58, v17);
      return core::ptr::drop_in_place<std::sync::poison::PoisonError<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<alloc::boxed::Box<regex_automata::meta::regex::Cache>>>>>(
               v53,
               v54);
    }
    v19 = core::str::<impl str>::trim_matches(v59, v60);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v42, v19);
    v64 = *(_QWORD *)&v42[16];
    v63 = *(_OWORD *)v42;
    v20 = *(__int128 ***)(a2 + 8);
    v21 = *(__int64 (__fastcall **)())(a2 + 16);
    v17 = (__int64)v21;
    v22 = std::path::Path::parent(v20, v21);
    if ( !v22 )
    {
LABEL_35:
      *(_QWORD *)(a1 + 24) = v64;
      *(_OWORD *)(a1 + 8) = v63;
      *(_BYTE *)a1 = 14;
      goto LABEL_36;
    }
    v17 = (__int64)v23;
    dir_all = std::fs::create_dir_all(v22, v23);
    if ( dir_all )
    {
      *(_BYTE *)a1 = 0;
      *(_QWORD *)(a1 + 8) = dir_all;
LABEL_23:
      core::ptr::drop_in_place<alloc::string::String>(&v63, v17);
      goto LABEL_36;
    }
    <alloc::string::String as core::clone::Clone>::clone(v42, &v63);
    v66 = *(_QWORD *)&v42[16];
    v65 = *(_OWORD *)v42;
    v17 = *(_QWORD *)&v42[8];
    toml::ser::to_string(v42, *(_QWORD *)&v42[8]);
    v69 = *(_OWORD *)&v42[8];
    v70 = *(_QWORD *)&v42[24];
    if ( *(_DWORD *)v42 == 1 )
    {
      *(_QWORD *)&v42[23] = v70;
      *(_OWORD *)&v42[7] = v69;
      *(_BYTE *)a1 = 3;
      v25 = *(_OWORD *)&v42[15];
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v42;
      *(_OWORD *)(a1 + 16) = v25;
LABEL_22:
      core::ptr::drop_in_place<forc_publish::credentials::Credentials>(&v65);
      goto LABEL_23;
    }
    v17 = (__int64)&v69;
    v26 = std::fs::write(a2, &v69);
    if ( v26 )
    {
      *(_BYTE *)a1 = 0;
      *(_QWORD *)(a1 + 8) = v26;
      goto LABEL_22;
    }
    v17 = 0LL;
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&tracing_core::metadata::MAX_LEVEL, 0LL) <= 2
      && (v27 = tracing_core::callsite::DefaultCallsite::interest(&forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE)) != 0
      && (v17 = v27,
          (unsigned __int8)tracing::__macro_support::__is_enabled(
                             forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE,
                             v27)) )
    {
      v28 = (char *)forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE;
      v29 = *((_QWORD *)forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE + 7);
      v43 = *((_OWORD *)forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE + 3);
      v44 = *((_OWORD *)forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE + 4);
      v45 = 0LL;
      v46 = v29;
      v17 = (__int64)&v43;
      <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(v42, &v43);
      if ( *(_QWORD *)v42 )
      {
        v57 = *(_QWORD *)&v42[32];
        v56 = *(_OWORD *)&v42[16];
        v55 = *(_OWORD *)v42;
        v50 = v20;
        v51 = (__int64)v21;
        v61 = &v50;
        v62 = <std::path::Display as core::fmt::Display>::fmt;
        v47 = &v55;
        v48 = v42;
        v49 = &unk_E53EA8;
        *(_QWORD *)&v43 = &v47;
        *((_QWORD *)&v43 + 1) = 1LL;
        *(_QWORD *)&v44 = v28 + 48;
        forc_publish::credentials::get_auth_token_from_user_input::{{closure}}(
          &v43,
          &v43,
          v30,
          v31,
          v32,
          v33,
          &off_E53E80,
          1LL,
          &v61,
          1LL,
          0LL);
LABEL_34:
        core::ptr::drop_in_place<forc_publish::credentials::Credentials>(&v65);
        goto LABEL_35;
      }
    }
    else
    {
      if ( (unsigned __int8)core::sync::atomic::atomic_load(&tracing_core::dispatcher::EXISTS) )
        goto LABEL_34;
      v17 = 0LL;
      if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) < 3 )
        goto LABEL_34;
      v34 = forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE;
      v35 = *((_OWORD *)forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE + 2);
      *(_QWORD *)v72 = 3LL;
      *(_OWORD *)&v72[8] = v35;
      v36 = log::logger();
      v38 = v37;
      v17 = (__int64)v72;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, _BYTE *))(v37 + 24))(v36, v72) )
        goto LABEL_34;
      v67 = v34;
      v39 = (char *)forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE;
      v40 = *((_QWORD *)forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE + 7);
      v43 = *((_OWORD *)forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE + 3);
      v44 = *((_OWORD *)forc_publish::credentials::get_auth_token_from_user_input::__CALLSITE + 4);
      v45 = 0LL;
      v46 = v40;
      <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(v42, &v43);
      if ( *(_QWORD *)v42 )
      {
        v57 = *(_QWORD *)&v42[32];
        v56 = *(_OWORD *)&v42[16];
        v55 = *(_OWORD *)v42;
        v61 = (__int128 ***)v20;
        v62 = v21;
        v73[0] = &v61;
        v73[1] = <std::path::Display as core::fmt::Display>::fmt;
        *(_QWORD *)v42 = &off_E53E80;
        *(_QWORD *)&v42[8] = 1LL;
        *(_QWORD *)&v42[32] = 0LL;
        *(_QWORD *)&v42[16] = v73;
        *(_QWORD *)&v42[24] = 1LL;
        v47 = &v55;
        v48 = v42;
        v49 = &unk_E53EA8;
        v50 = &v47;
        v51 = 1LL;
        v52 = v39 + 48;
        *(_QWORD *)&v44 = *(_QWORD *)&v72[16];
        v43 = *(_OWORD *)v72;
        v17 = v36;
        tracing::__macro_support::__tracing_log(v67, v36, v38, &v43, &v50);
        goto LABEL_34;
      }
    }
    core::option::expect_failed(aFieldsetCorrup_0, 34LL, &off_E53EC8);
  }
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = v16;
  return core::ptr::drop_in_place<std::sync::poison::PoisonError<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<alloc::boxed::Box<regex_automata::meta::regex::Cache>>>>>(
           v53,
           v54);
}