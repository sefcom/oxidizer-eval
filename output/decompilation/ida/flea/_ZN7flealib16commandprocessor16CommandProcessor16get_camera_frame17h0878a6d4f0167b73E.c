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
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rax
  __int128 v21; // [rsp+0h] [rbp-178h] BYREF
  const char **v22; // [rsp+10h] [rbp-168h]
  __int128 v23; // [rsp+18h] [rbp-160h]
  const char *v24; // [rsp+30h] [rbp-148h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+38h] [rbp-140h]
  const char *v26; // [rsp+40h] [rbp-138h]
  __int64 v27; // [rsp+48h] [rbp-130h]
  __int64 v28; // [rsp+50h] [rbp-128h]
  __int128 v29; // [rsp+58h] [rbp-120h] BYREF
  __int64 v30; // [rsp+68h] [rbp-110h]
  __int128 v31; // [rsp+70h] [rbp-108h] BYREF
  __int64 v32; // [rsp+80h] [rbp-F8h]
  __int64 v33; // [rsp+88h] [rbp-F0h] BYREF
  _BYTE v34[8]; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v35; // [rsp+98h] [rbp-E0h]
  __int64 v36; // [rsp+A0h] [rbp-D8h]
  __int128 v37; // [rsp+A8h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-C0h]
  __int128 v39; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-A8h]
  __int128 v41; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v42; // [rsp+F0h] [rbp-88h]
  __int128 v43; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v44; // [rsp+108h] [rbp-70h]
  _QWORD v45[2]; // [rsp+110h] [rbp-68h] BYREF
  __int128 v46; // [rsp+120h] [rbp-58h] BYREF
  __int64 v47; // [rsp+130h] [rbp-48h]
  _BYTE v48[64]; // [rsp+138h] [rbp-40h] BYREF

  std::env::temp_dir(v34);
  std::sys::os_str::bytes::Slice::to_str(&v21, v35, v36);
  if ( (_DWORD)v21 == 1 )
    core::option::unwrap_failed(&off_708848);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v21, *((_QWORD *)&v21 + 1), v22);
  v40 = (__int64)v22;
  v39 = v21;
  flealib::camera::save_camera_frames(&v46, 1u, *((__int64 *)&v21 + 1), (__int64)v22);
  if ( __OFSUB__(0LL, (_QWORD)v46) )
  {
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) >= 4 )
    {
      *(_QWORD *)&v21 = &off_7087E8;
      *((_QWORD *)&v21 + 1) = 1LL;
      v22 = (const char **)&byte_8;
      v23 = 0LL;
      v2 = log::__private_api::loc(&off_708860);
      v24 = aFlealibCommand;
      v25 = (__int64 (__fastcall *)())(&off_18 + 1);
      v26 = aFlealibCommand;
      v27 = 25LL;
      v28 = v2;
      log::__private_api::log(&v21, 4LL, &v24);
    }
    v3 = v35;
    v4 = v36;
    v24 = (const char *)&off_708878;
    v25 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v21 = &unk_7087F8;
    *((_QWORD *)&v21 + 1) = 2LL;
    v22 = &v24;
    v23 = 1uLL;
    core::option::Option<T>::map_or_else(v48, &v21);
    std::path::Path::join(&v37, v3, v4, v48);
    std::sync::mutex::Mutex<T>::lock(&v21, a2 + 16);
    v5 = core::result::Result<T,E>::unwrap(&v21, &off_708888);
    v7 = v6 & 1;
    flealib::fileserver::FileServer::read_binary_file_by_path(&v43, v5 + 8, (__int64)&v37);
    if ( (_QWORD)v43 == 0x8000000000000000LL )
    {
      *(_QWORD *)&v29 = *((_QWORD *)&v43 + 1);
      if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) )
      {
        *(_QWORD *)&v31 = &v29;
        *((_QWORD *)&v31 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v21 = &off_708838;
        *((_QWORD *)&v21 + 1) = 1LL;
        v22 = (const char **)&v31;
        v23 = 1uLL;
        v8 = log::__private_api::loc(&off_7088D0);
        v24 = aFlealibCommand;
        v25 = (__int64 (__fastcall *)())(&off_18 + 1);
        v26 = aFlealibCommand;
        v27 = 25LL;
        v28 = v8;
        log::__private_api::log(&v21, 1LL, &v24);
      }
      <T as alloc::string::SpecToString>::spec_to_string(a1, &v29);
      core::ptr::drop_in_place<std::io::error::Error>(v29);
      v9 = 1;
    }
    else
    {
      v42 = v44;
      v41 = v43;
      v11 = *((_QWORD *)&v43 + 1);
      flealib::commandprocessor::CommandProcessor::bytes_to_string((__int64)&v29, *((__int64 *)&v43 + 1), v44);
      v22 = (const char **)v38;
      v21 = v37;
      v16 = ((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))std::fs::remove_file)(
              &v21,
              v11,
              v12,
              v13,
              v14,
              v15);
      v17 = v16;
      if ( v16 )
      {
        v33 = v16;
        if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) )
        {
          <T as alloc::string::SpecToString>::spec_to_string(&v31, &v33);
          v45[0] = &v31;
          v45[1] = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v21 = &off_708818;
          *((_QWORD *)&v21 + 1) = 1LL;
          v22 = (const char **)v45;
          v23 = 1uLL;
          v18 = log::__private_api::loc(&off_7088A0);
          v24 = aFlealibCommand;
          v25 = (__int64 (__fastcall *)())(&off_18 + 1);
          v26 = aFlealibCommand;
          v27 = 25LL;
          v28 = v18;
          log::__private_api::log(&v21, 1LL, &v24);
          core::ptr::drop_in_place<alloc::string::String>(&v31);
          v17 = v33;
        }
        *(_QWORD *)(a1 + 16) = v30;
        *(_OWORD *)a1 = v29;
        core::ptr::drop_in_place<std::io::error::Error>(v17);
      }
      else
      {
        if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) >= 4 )
        {
          *(_QWORD *)&v21 = &off_708828;
          *((_QWORD *)&v21 + 1) = 1LL;
          v22 = (const char **)&byte_8;
          v23 = 0LL;
          v19 = log::__private_api::loc(&off_7088B8);
          v24 = aFlealibCommand;
          v25 = (__int64 (__fastcall *)())(&off_18 + 1);
          v26 = aFlealibCommand;
          v27 = 25LL;
          v28 = v19;
          log::__private_api::log(&v21, 4LL, &v24);
        }
        *(_QWORD *)(a1 + 16) = v30;
        *(_OWORD *)a1 = v29;
      }
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v41);
      v9 = 0;
    }
    core::ptr::drop_in_place<std::sync::mutex::MutexGuard<flealib::fileserver::FileServer>>(v5, v7);
    if ( v9 )
      core::ptr::drop_in_place<std::path::PathBuf>(&v37);
  }
  else
  {
    v32 = v47;
    v31 = v46;
    if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) )
    {
      *(_QWORD *)&v29 = &v31;
      *((_QWORD *)&v29 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v21 = &off_708638;
      *((_QWORD *)&v21 + 1) = 1LL;
      v22 = (const char **)&v29;
      v23 = 1uLL;
      v10 = log::__private_api::loc(&off_7088E8);
      v24 = aFlealibCommand;
      v25 = (__int64 (__fastcall *)())(&off_18 + 1);
      v26 = aFlealibCommand;
      v27 = 25LL;
      v28 = v10;
      log::__private_api::log(&v21, 1LL, &v24);
    }
    *(_QWORD *)(a1 + 16) = v32;
    *(_OWORD *)a1 = v31;
  }
  core::ptr::drop_in_place<std::path::PathBuf>(v34);
  return core::ptr::drop_in_place<alloc::string::String>(&v39);
}