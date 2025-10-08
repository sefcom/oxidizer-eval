_OWORD *__fastcall alacritty::config::load_imports(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  _OWORD *result; // rax
  char v8; // al
  __int128 v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  _BYTE v16[24]; // [rsp+0h] [rbp-248h] BYREF
  __int64 v17; // [rsp+18h] [rbp-230h]
  __int64 v18; // [rsp+20h] [rbp-228h]
  __int128 v19; // [rsp+30h] [rbp-218h] BYREF
  const char *v20; // [rsp+40h] [rbp-208h]
  __int64 v21; // [rsp+48h] [rbp-200h]
  __int64 v22; // [rsp+50h] [rbp-1F8h]
  __int64 v23; // [rsp+60h] [rbp-1E8h]
  __int64 v24; // [rsp+68h] [rbp-1E0h] BYREF
  __int128 *v25; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+78h] [rbp-1D0h]
  __int128 *v27; // [rsp+80h] [rbp-1C8h]
  __int64 (__fastcall *v28)(); // [rsp+88h] [rbp-1C0h]
  __int128 v29; // [rsp+90h] [rbp-1B8h] BYREF
  __int128 v30; // [rsp+A0h] [rbp-1A8h]
  __int128 v31; // [rsp+B0h] [rbp-198h]
  __int128 v32; // [rsp+C0h] [rbp-188h]
  __int128 v33; // [rsp+D0h] [rbp-178h]
  __int64 v34; // [rsp+E0h] [rbp-168h]
  _BYTE v35[24]; // [rsp+F0h] [rbp-158h] BYREF
  _BYTE v36[48]; // [rsp+108h] [rbp-140h] BYREF
  __int128 v37; // [rsp+138h] [rbp-110h]
  __int128 v38; // [rsp+148h] [rbp-100h]
  __int64 v39; // [rsp+158h] [rbp-F0h]
  __int128 v40; // [rsp+160h] [rbp-E8h] BYREF
  __int128 v41; // [rsp+170h] [rbp-D8h]
  _OWORD *v42; // [rsp+180h] [rbp-C8h]
  __int64 v43; // [rsp+188h] [rbp-C0h]
  __int64 v44; // [rsp+190h] [rbp-B8h] BYREF
  __int128 v45; // [rsp+198h] [rbp-B0h]
  __int64 v46; // [rsp+1A8h] [rbp-A0h]
  __int128 v47; // [rsp+1B0h] [rbp-98h] BYREF
  __int64 v48; // [rsp+1C0h] [rbp-88h]
  _BYTE v49[32]; // [rsp+1D0h] [rbp-78h] BYREF
  _OWORD v50[5]; // [rsp+1F0h] [rbp-58h] BYREF

  v43 = a5;
  v23 = a6;
  alacritty::config::imports(v16, a2, a3, a4, a6);
  if ( *(_DWORD *)v16 == 1 )
  {
    v20 = (const char *)v17;
    v19 = *(_OWORD *)&v16[8];
    if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) )
    {
      v25 = &v19;
      v26 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v29 = &xmmword_E8B60;
      *((_QWORD *)&v29 + 1) = 1LL;
      *(_QWORD *)&v31 = 0LL;
      *(_QWORD *)&v30 = &v25;
      *((_QWORD *)&v30 + 1) = 1LL;
      v6 = log::__private_api::loc(&off_881F18);
      *(_QWORD *)v36 = "alacritty_config_derivealacritty::config::ui_config(ipfs:|ipns:|magnet:|mailto:|gemini://|gopher:"
                       "//|https://|http://|news:|file:|git://|ssh:|ftp://)[^";
      *(_QWORD *)&v36[8] = 23LL;
      *(_QWORD *)&v36[16] = aAlacrittyConfi_3;
      *(_QWORD *)&v36[24] = 17LL;
      *(_QWORD *)&v36[32] = v6;
      log::__private_api::log(&v29, 1LL, v36);
    }
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 23) = 0;
    return (_OWORD *)core::ptr::drop_in_place<alloc::string::String>(&v19);
  }
  else
  {
    v42 = (_OWORD *)a1;
    v48 = v17;
    v47 = *(_OWORD *)&v16[8];
    *(_QWORD *)&v40 = 0LL;
    *(_QWORD *)&v41 = 0LL;
    *(_DWORD *)((char *)&v41 + 7) = 0;
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v49, &v47);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v44, v49);
    v8 = v44;
    if ( v44 != 2 )
    {
      --v23;
      do
      {
        if ( (v8 & 1) != 0 )
        {
          *(_QWORD *)&v16[16] = v46;
          *(_OWORD *)v16 = v45;
          if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) )
          {
            *(_QWORD *)&v19 = v16;
            *((_QWORD *)&v19 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)&v29 = &xmmword_E8B60;
            *((_QWORD *)&v29 + 1) = 1LL;
            *(_QWORD *)&v31 = 0LL;
            *(_QWORD *)&v30 = &v19;
            *((_QWORD *)&v30 + 1) = 1LL;
            v10 = log::__private_api::loc(&off_881F00);
            *(_QWORD *)v36 = "alacritty_config_derivealacritty::config::ui_config(ipfs:|ipns:|magnet:|mailto:|gemini://|g"
                             "opher://|https://|http://|news:|file:|git://|ssh:|ftp://)[^";
            *(_QWORD *)&v36[8] = 23LL;
            *(_QWORD *)&v36[16] = aAlacrittyConfi_3;
            *(_QWORD *)&v36[24] = 17LL;
            *(_QWORD *)&v36[32] = v10;
            log::__private_api::log(&v29, 1LL, v36);
          }
          core::ptr::drop_in_place<alloc::string::String>(v16);
        }
        else
        {
          *(_QWORD *)&v35[16] = v46;
          *(_OWORD *)v35 = v45;
          alacritty::config::parse_config((__int64)v36, *((__int64 *)&v45 + 1), v46, v43, v23);
          if ( *(_QWORD *)v36 == 7LL )
          {
            v50[1] = *(_OWORD *)&v36[24];
            v50[0] = *(_OWORD *)&v36[8];
            alacritty::config::serde_utils::merge((__int64)&v29, &v40, v50, v11, v12, v13);
            v41 = v30;
            v40 = v29;
          }
          else if ( *(_DWORD *)v36 == 3 && !(unsigned __int8)std::io::error::Error::kind(*(_QWORD *)&v36[8]) )
          {
            v24 = *(_QWORD *)&v36[8];
            if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
            {
              v19 = *(_OWORD *)&v35[8];
              v25 = &v19;
              v26 = <std::path::Display as core::fmt::Debug>::fmt;
              *(_QWORD *)&v29 = &off_881EA0;
              *((_QWORD *)&v29 + 1) = 1LL;
              *(_QWORD *)&v31 = 0LL;
              *(_QWORD *)&v30 = &v25;
              *((_QWORD *)&v30 + 1) = 1LL;
              v15 = log::__private_api::loc(&off_881ED0);
              *(_QWORD *)v16 = "alacritty_config_derivealacritty::config::ui_config(ipfs:|ipns:|magnet:|mailto:|gemini://"
                               "|gopher://|https://|http://|news:|file:|git://|ssh:|ftp://)[^";
              *(_QWORD *)&v16[8] = 23LL;
              *(_QWORD *)&v16[16] = aAlacrittyConfi_3;
              v17 = 17LL;
              v18 = v15;
              log::__private_api::log(&v29, 3LL, v16);
            }
            core::ptr::drop_in_place<std::io::error::Error>(&v24);
            if ( *(_QWORD *)v36 != 7LL && *(_DWORD *)v36 != 3 )
              core::ptr::drop_in_place<alacritty::config::Error>(v36);
          }
          else
          {
            v34 = v39;
            v33 = v38;
            v32 = v37;
            v31 = *(_OWORD *)&v36[32];
            v30 = *(_OWORD *)&v36[16];
            v29 = *(_OWORD *)v36;
            if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) )
            {
              v25 = (__int128 *)v35;
              v26 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
              v27 = &v29;
              v28 = <alacritty::config::Error as core::fmt::Display>::fmt;
              *(_QWORD *)v16 = &off_881EB0;
              *(_QWORD *)&v16[8] = 2LL;
              v18 = 0LL;
              *(_QWORD *)&v16[16] = &v25;
              v17 = 2LL;
              v14 = log::__private_api::loc(&off_881EE8);
              *(_QWORD *)&v19 = "alacritty_config_derivealacritty::config::ui_config(ipfs:|ipns:|magnet:|mailto:|gemini:/"
                                "/|gopher://|https://|http://|news:|file:|git://|ssh:|ftp://)[^";
              *((_QWORD *)&v19 + 1) = 23LL;
              v20 = aAlacrittyConfi_3;
              v21 = 17LL;
              v22 = v14;
              log::__private_api::log(v16, 1LL, &v19);
            }
            core::ptr::drop_in_place<alacritty::config::Error>(&v29);
          }
          core::mem::drop(v35);
        }
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v44, v49);
        v8 = v44;
      }
      while ( v44 != 2 );
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<core::result::Result<std::path::PathBuf,alloc::string::String>>>(v49);
    v9 = v40;
    result = v42;
    v42[1] = v41;
    *result = v9;
  }
  return result;
}