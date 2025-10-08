void *__fastcall alacritty::event::Processor::new(__int64 a1, __int64 a2, const void *a3, __int64 a4)
{
  int v6; // eax
  __int64 v7; // r12
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  __int128 v17; // xmm0
  void *result; // rax
  __int128 v19; // [rsp+0h] [rbp-888h] BYREF
  __int128 v20; // [rsp+10h] [rbp-878h]
  __int128 v21; // [rsp+20h] [rbp-868h]
  __int64 v22; // [rsp+30h] [rbp-858h]
  __int128 v23; // [rsp+40h] [rbp-848h] BYREF
  __int128 v24; // [rsp+50h] [rbp-838h]
  __int64 v25; // [rsp+68h] [rbp-820h]
  __int128 v26; // [rsp+70h] [rbp-818h]
  __int128 v27; // [rsp+80h] [rbp-808h]
  __int128 v28; // [rsp+90h] [rbp-7F8h]
  __int128 v29; // [rsp+A0h] [rbp-7E8h]
  _OWORD v30[2]; // [rsp+B0h] [rbp-7D8h] BYREF
  __int128 v31[4]; // [rsp+D0h] [rbp-7B8h] BYREF
  __int128 v32; // [rsp+110h] [rbp-778h]
  __int128 v33; // [rsp+120h] [rbp-768h]
  __int128 v34; // [rsp+130h] [rbp-758h]
  __int128 v35; // [rsp+140h] [rbp-748h]
  __int64 v36; // [rsp+150h] [rbp-738h]
  __int128 v37; // [rsp+160h] [rbp-728h]
  __int128 v38; // [rsp+170h] [rbp-718h]
  _BYTE dest[176]; // [rsp+180h] [rbp-708h] BYREF
  _BYTE src[1072]; // [rsp+230h] [rbp-658h] BYREF
  _OWORD v41[34]; // [rsp+660h] [rbp-228h] BYREF

  winit::platform_impl::linux::EventLoop<T>::create_proxy(src, a4);
  v24 = *(_OWORD *)&src[16];
  v23 = *(_OWORD *)src;
  <winit::platform_impl::linux::EventLoopProxy<T> as core::clone::Clone>::clone(src, &v23);
  v27 = *(_OWORD *)&src[16];
  v26 = *(_OWORD *)src;
  *(_QWORD *)&v28 = 0LL;
  *((_QWORD *)&v28 + 1) = 16LL;
  v29 = 0LL;
  <alacritty::cli::WindowOptions as core::clone::Clone>::clone(src, a3);
  memcpy(dest, src, sizeof(dest));
  winit::event_loop::EventLoop<T>::listen_device_events(a4);
  <winit::event_loop::EventLoop<T> as raw_window_handle::borrowed::HasDisplayHandle>::display_handle(src, a4);
  core::result::Result<T,E>::unwrap(v41, src, &off_882878);
  alacritty::clipboard::Clipboard::new((__int64 *)v30, v41[0], *((__int64 *)&v41[0] + 1));
  *(_QWORD *)&v19 = 2LL;
  v6 = *(_DWORD *)(a2 + 1048);
  if ( (_BYTE)v6 == 2 )
    v6 = *(_DWORD *)(a2 + 64);
  if ( (v6 & 1) != 0 )
  {
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v31, *(_QWORD *)(a2 + 672), *(_QWORD *)(a2 + 680));
    winit::platform_impl::linux::EventLoop<T>::create_proxy(src, a4);
    v41[1] = *(_OWORD *)&src[16];
    v41[0] = *(_OWORD *)src;
    alacritty::config::monitor::ConfigMonitor::new((__int64)src, v31, v41);
    core::ptr::drop_in_place<core::option::Option<alacritty::config::monitor::ConfigMonitor>>(&v19);
    v22 = *(_QWORD *)&src[48];
    v21 = *(_OWORD *)&src[32];
    v20 = *(_OWORD *)&src[16];
    v19 = *(_OWORD *)src;
  }
  memcpy(v41, a3, 0x1F0uLL);
  v38 = v24;
  v37 = v23;
  v31[3] = v29;
  v31[2] = v28;
  v31[1] = v27;
  v31[0] = v26;
  v36 = 2LL;
  *(_QWORD *)src = 1LL;
  *(_QWORD *)&src[8] = 1LL;
  memcpy(&src[16], (const void *)a2, 0x420uLL);
  v7 = alloc::boxed::Box<T>::new(src);
  v25 = v7;
  ahash::random_state::RandomState::new(src);
  v35 = *(_OWORD *)&src[16];
  v34 = *(_OWORD *)src;
  v32 = *(_OWORD *)&off_875358;
  v33 = xmmword_875368;
  *(_QWORD *)(a1 + 944) = v22;
  v8 = v19;
  v9 = v20;
  *(_OWORD *)(a1 + 928) = v21;
  *(_OWORD *)(a1 + 912) = v9;
  *(_OWORD *)(a1 + 896) = v8;
  v10 = v30[0];
  *(_OWORD *)(a1 + 800) = v30[1];
  *(_OWORD *)(a1 + 784) = v10;
  v11 = v26;
  v12 = v27;
  v13 = v28;
  *(_OWORD *)(a1 + 48) = v29;
  *(_OWORD *)(a1 + 32) = v13;
  *(_OWORD *)(a1 + 16) = v12;
  *(_OWORD *)a1 = v11;
  memcpy((void *)(a1 + 608), dest, 0xB0uLL);
  *(_QWORD *)(a1 + 880) = 0LL;
  v14 = v33;
  v15 = v34;
  v16 = v35;
  *(_OWORD *)(a1 + 816) = v32;
  *(_OWORD *)(a1 + 832) = v14;
  *(_OWORD *)(a1 + 848) = v15;
  *(_OWORD *)(a1 + 864) = v16;
  v17 = v23;
  *(_OWORD *)(a1 + 80) = v24;
  *(_OWORD *)(a1 + 64) = v17;
  *(_QWORD *)(a1 + 96) = 2LL;
  *(_QWORD *)(a1 + 952) = 0LL;
  *(_QWORD *)(a1 + 960) = 8LL;
  *(_QWORD *)(a1 + 968) = 0LL;
  result = memcpy((void *)(a1 + 112), v41, 0x1F0uLL);
  *(_QWORD *)(a1 + 976) = v7;
  return result;
}