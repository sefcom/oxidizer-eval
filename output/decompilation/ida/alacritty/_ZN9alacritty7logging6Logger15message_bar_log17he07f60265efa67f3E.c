__int64 __fastcall alacritty::logging::Logger::message_bar_log(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  char v5; // r12
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int8 v10; // [rsp+7h] [rbp-251h]
  __int64 v11; // [rsp+8h] [rbp-250h]
  __int128 v12; // [rsp+10h] [rbp-248h] BYREF
  __m256i v13; // [rsp+20h] [rbp-238h] BYREF
  __int64 v14; // [rsp+40h] [rbp-218h]
  __int64 v15; // [rsp+48h] [rbp-210h] BYREF
  __int128 v16; // [rsp+50h] [rbp-208h] BYREF
  __int64 v17; // [rsp+60h] [rbp-1F8h]
  _QWORD v18[2]; // [rsp+70h] [rbp-1E8h] BYREF
  __int128 v19; // [rsp+80h] [rbp-1D8h] BYREF
  __int128 *v20; // [rsp+90h] [rbp-1C8h]
  __int64 (__fastcall *v21)(); // [rsp+98h] [rbp-1C0h]
  _QWORD *v22; // [rsp+A0h] [rbp-1B8h]
  __int64 (__fastcall *v23)(); // [rsp+A8h] [rbp-1B0h]
  __int128 *v24; // [rsp+B0h] [rbp-1A8h]
  __int64 (__fastcall *v25)(); // [rsp+B8h] [rbp-1A0h]
  __int128 v26; // [rsp+148h] [rbp-110h] BYREF
  __int64 v27; // [rsp+158h] [rbp-100h]
  _BYTE v28[24]; // [rsp+160h] [rbp-F8h] BYREF
  __m256i v29; // [rsp+178h] [rbp-E0h]
  __int64 v30; // [rsp+198h] [rbp-C0h]

  v18[0] = a3;
  v18[1] = a4;
  v4 = *(_QWORD *)(a2 + 48);
  if ( v4 == 1 )
  {
    v5 = 0;
  }
  else
  {
    if ( (_DWORD)v4 != 2 )
      return result;
    v5 = 1;
  }
  std::sync::poison::mutex::Mutex<T>::lock(&v19, a1 + 120);
  if ( (v19 & 1) != 0 )
    return core::ptr::drop_in_place<core::result::Result<std::sync::poison::mutex::MutexGuard<alacritty::logging::OnDemandLogFile>,std::sync::poison::PoisonError<std::sync::poison::mutex::MutexGuard<alacritty::logging::OnDemandLogFile>>>>(&v19);
  v11 = *((_QWORD *)&v19 + 1);
  v10 = (unsigned __int8)v20;
  *(_QWORD *)&v12 = &off_8830C0;
  *((_QWORD *)&v12 + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v19 = &off_883060;
  *((_QWORD *)&v19 + 1) = 1LL;
  v22 = 0LL;
  v20 = &v12;
  v21 = (__int64 (__fastcall *)())(&dword_0 + 1);
  core::option::Option<T>::map_or_else(v28, 0LL, v6, &v19);
  v16 = *(_OWORD *)v28;
  v17 = *(_QWORD *)&v28[16];
  v15 = v4;
  *(_QWORD *)&v12 = a2 + 80;
  *(_QWORD *)&v19 = &v15;
  *((_QWORD *)&v19 + 1) = <log::Level as core::fmt::Display>::fmt;
  v20 = &v12;
  v21 = <&T as core::fmt::Display>::fmt;
  v22 = v18;
  v23 = <&T as core::fmt::Display>::fmt;
  v24 = &v16;
  v25 = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)v28 = &off_883070;
  *(_QWORD *)&v28[8] = 5LL;
  *(_QWORD *)&v28[16] = &v19;
  *(_OWORD *)v29.m256i_i8 = 4uLL;
  core::option::Option<T>::map_or_else(&v26, 0LL, v8, v28);
  v13.m256i_i64[0] = v27;
  v12 = v26;
  LOBYTE(v14) = v5;
  v13.m256i_i64[1] = 0x8000000000000000LL;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v28, *(_QWORD *)(a2 + 56));
  v20 = *(__int128 **)&v28[16];
  v19 = *(_OWORD *)v28;
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v13.m256i_u64[1]);
  v13.m256i_i64[3] = (__int64)v20;
  *(_OWORD *)&v13.m256i_u64[1] = v19;
  v30 = v14;
  v29 = v13;
  *(_OWORD *)&v28[8] = v12;
  *(_QWORD *)v28 = 0x8000000000000002LL;
  alacritty::event::Event::new(&v19, v28, 0LL, v9);
  winit::event_loop::EventLoopProxy<T>::send_event(v28);
  core::ptr::drop_in_place<core::result::Result<(),winit::event_loop::EventLoopClosed<alacritty::event::Event>>>(
    v28,
    v11 + 8);
  core::ptr::drop_in_place<alloc::string::String>(&v16);
  return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alacritty::logging::OnDemandLogFile>>(v11, v10);
}