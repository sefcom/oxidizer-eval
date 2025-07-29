__int64 __fastcall flealib::commandprocessor::CommandProcessor::get_camera_frame(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // r14
  char v6; // dl
  unsigned __int8 v7; // bp
  __int64 v8; // rax
  char v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 v16; // [rsp+0h] [rbp-178h] BYREF
  const char **v17; // [rsp+10h] [rbp-168h]
  __int128 v18; // [rsp+18h] [rbp-160h]
  const char *v19; // [rsp+30h] [rbp-148h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+38h] [rbp-140h]
  const char *v21; // [rsp+40h] [rbp-138h]
  __int64 v22; // [rsp+48h] [rbp-130h]
  __int64 v23; // [rsp+50h] [rbp-128h]
  __int128 v24; // [rsp+58h] [rbp-120h] BYREF
  __int64 v25; // [rsp+68h] [rbp-110h]
  __int128 v26; // [rsp+70h] [rbp-108h] BYREF
  __int64 v27; // [rsp+80h] [rbp-F8h]
  __int64 v28; // [rsp+88h] [rbp-F0h] BYREF
  _BYTE v29[8]; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v30; // [rsp+98h] [rbp-E0h]
  __int64 v31; // [rsp+A0h] [rbp-D8h]
  __int128 v32; // [rsp+A8h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+B8h] [rbp-C0h]
  __int128 v34; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+D0h] [rbp-A8h]
  __int128 v36; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v37; // [rsp+F0h] [rbp-88h]
  __int128 v38; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v39; // [rsp+108h] [rbp-70h]
  _QWORD v40[2]; // [rsp+110h] [rbp-68h] BYREF
  __int128 v41; // [rsp+120h] [rbp-58h] BYREF
  __int64 v42; // [rsp+130h] [rbp-48h]
  _BYTE v43[64]; // [rsp+138h] [rbp-40h] BYREF

  std::env::temp_dir(v29);
  std::sys::os_str::bytes::Slice::to_str(&v16, v30, v31);
  if ( (_DWORD)v16 == 1 )
    core::option::unwrap_failed(&off_708848);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v16, *((_QWORD *)&v16 + 1), v17);
  v35 = (__int64)v17;
  v34 = v16;
  flealib::camera::save_camera_frames(&v41, 1u, *((__int64 *)&v16 + 1), (__int64)v17);
  if ( __OFSUB__(0LL, (_QWORD)v41) )
  {
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) >= 4 )
    {
      *(_QWORD *)&v16 = &off_7087E8;
      *((_QWORD *)&v16 + 1) = 1LL;
      v17 = (const char **)&byte_8;
      v18 = 0LL;
      v2 = log::__private_api::loc(&off_708860);
      v19 = aFlealibCommand;
      v20 = (__int64 (__fastcall *)())(&off_18 + 1);
      v21 = aFlealibCommand;
      v22 = 25LL;
      v23 = v2;
      log::__private_api::log(&v16, 4LL, &v19);
    }
    v3 = v30;
    v4 = v31;
    v19 = (const char *)&off_708878;
    v20 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v16 = &unk_7087F8;
    *((_QWORD *)&v16 + 1) = 2LL;
    v17 = &v19;
    v18 = 1uLL;
    core::option::Option<T>::map_or_else(v43, &v16);
    std::path::Path::join(&v32, v3, v4, v43);
    std::sync::mutex::Mutex<T>::lock(&v16, a2 + 16);
    v5 = core::result::Result<T,E>::unwrap(&v16, &off_708888);
    v7 = v6 & 1;
    flealib::fileserver::FileServer::read_binary_file_by_path(&v38, v5 + 8, &v32);
    if ( (_QWORD)v38 == 0x8000000000000000LL )
    {
      *(_QWORD *)&v24 = *((_QWORD *)&v38 + 1);
      if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) )
      {
        *(_QWORD *)&v26 = &v24;
        *((_QWORD *)&v26 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v16 = &off_708838;
        *((_QWORD *)&v16 + 1) = 1LL;
        v17 = (const char **)&v26;
        v18 = 1uLL;
        v8 = log::__private_api::loc(&off_7088D0);
        v19 = aFlealibCommand;
        v20 = (__int64 (__fastcall *)())(&off_18 + 1);
        v21 = aFlealibCommand;
        v22 = 25LL;
        v23 = v8;
        log::__private_api::log(&v16, 1LL, &v19);
      }
      <T as alloc::string::SpecToString>::spec_to_string(a1, &v24);
      core::ptr::drop_in_place<std::io::error::Error>(v24);
      v9 = 1;
    }
    else
    {
      v37 = v39;
      v36 = v38;
      flealib::commandprocessor::CommandProcessor::bytes_to_string((__int64)&v24, *((__int64 *)&v38 + 1), v39);
      v17 = (const char **)v33;
      v16 = v32;
      v11 = ((__int64 (__fastcall *)(__int128 *))std::fs::remove_file)(&v16);
      v12 = v11;
      if ( v11 )
      {
        v28 = v11;
        if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) )
        {
          <T as alloc::string::SpecToString>::spec_to_string(&v26, &v28);
          v40[0] = &v26;
          v40[1] = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v16 = &off_708818;
          *((_QWORD *)&v16 + 1) = 1LL;
          v17 = (const char **)v40;
          v18 = 1uLL;
          v13 = log::__private_api::loc(&off_7088A0);
          v19 = aFlealibCommand;
          v20 = (__int64 (__fastcall *)())(&off_18 + 1);
          v21 = aFlealibCommand;
          v22 = 25LL;
          v23 = v13;
          log::__private_api::log(&v16, 1LL, &v19);
          core::ptr::drop_in_place<alloc::string::String>(&v26);
          v12 = v28;
        }
        *(_QWORD *)(a1 + 16) = v25;
        *(_OWORD *)a1 = v24;
        core::ptr::drop_in_place<std::io::error::Error>(v12);
      }
      else
      {
        if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) >= 4 )
        {
          *(_QWORD *)&v16 = &off_708828;
          *((_QWORD *)&v16 + 1) = 1LL;
          v17 = (const char **)&byte_8;
          v18 = 0LL;
          v14 = log::__private_api::loc(&off_7088B8);
          v19 = aFlealibCommand;
          v20 = (__int64 (__fastcall *)())(&off_18 + 1);
          v21 = aFlealibCommand;
          v22 = 25LL;
          v23 = v14;
          log::__private_api::log(&v16, 4LL, &v19);
        }
        *(_QWORD *)(a1 + 16) = v25;
        *(_OWORD *)a1 = v24;
      }
      v9 = 0;
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v36);
    }
    core::ptr::drop_in_place<std::sync::mutex::MutexGuard<flealib::fileserver::FileServer>>(v5, v7);
    if ( v9 )
      core::ptr::drop_in_place<std::path::PathBuf>(&v32);
  }
  else
  {
    v27 = v42;
    v26 = v41;
    if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) )
    {
      *(_QWORD *)&v24 = &v26;
      *((_QWORD *)&v24 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v16 = &off_708638;
      *((_QWORD *)&v16 + 1) = 1LL;
      v17 = (const char **)&v24;
      v18 = 1uLL;
      v10 = log::__private_api::loc(&off_7088E8);
      v19 = aFlealibCommand;
      v20 = (__int64 (__fastcall *)())(&off_18 + 1);
      v21 = aFlealibCommand;
      v22 = 25LL;
      v23 = v10;
      log::__private_api::log(&v16, 1LL, &v19);
    }
    *(_QWORD *)(a1 + 16) = v27;
    *(_OWORD *)a1 = v26;
  }
  core::ptr::drop_in_place<std::path::PathBuf>(v29);
  return core::ptr::drop_in_place<alloc::string::String>(&v34);
}