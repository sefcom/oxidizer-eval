__int64 __fastcall alacritty::event::Processor::create_window(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r12
  __int64 v5; // r14
  __int128 v7; // [rsp+10h] [rbp-5B38h] BYREF
  __int64 v8; // [rsp+20h] [rbp-5B28h]
  __int64 v9; // [rsp+28h] [rbp-5B20h]
  __int64 v10[2]; // [rsp+30h] [rbp-5B18h] BYREF
  __int64 v11; // [rsp+40h] [rbp-5B08h]
  _OWORD v12[484]; // [rsp+50h] [rbp-5AF8h] BYREF
  __m128i v13[484]; // [rsp+1E90h] [rbp-3CB8h] BYREF
  _OWORD dest[228]; // [rsp+3CD0h] [rbp-1E78h] BYREF
  __int64 v15; // [rsp+4B18h] [rbp-1030h]

  v15 = 0LL;
  v13[456].m128i_i64[1] = 0LL;
  v13[200].m128i_i64[1] = 0LL;
  *((_QWORD *)&v12[428] + 1) = 0LL;
  *((_QWORD *)&v12[172] + 1) = 0LL;
  if ( *(_DWORD *)(a1 + 96) == 2 )
    core::option::unwrap_failed(&off_882890);
  alacritty::cli::WindowOptions::config_overrides((__int64)&v7, a3[8], a3[9]);
  alloc::vec::Vec<T,A>::extend_trusted(
    &v7,
    *(_QWORD *)(a1 + 960),
    *(_QWORD *)(a1 + 960) + 56LL * *(_QWORD *)(a1 + 968),
    &off_8828A8);
  v4 = *(_QWORD *)(a1 + 976);
  alloc::rc::RcInnerPtr::inc_strong(v4);
  v9 = alacritty::cli::ParsedOptions::override_config_rc((__int64)&v7, v4);
  <winit::platform_impl::linux::EventLoopProxy<T> as core::clone::Clone>::clone(dest, a1 + 64);
  v12[1] = dest[1];
  v12[0] = dest[0];
  memcpy(dest, a3, 0xB0uLL);
  v11 = v8;
  *(_OWORD *)v10 = v7;
  alacritty::window_context::WindowContext::additional(v13, (__int64)v10);
  v5 = v13[1].m128i_i64[0];
  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v13), (__m128i)xmmword_E9660)) != 0xFFFF )
  {
    memcpy(&v12[2], &v13[2], 0x1E20uLL);
    v12[0] = v13[0];
    v12[1] = v13[1];
    alacritty::window_context::WindowContext::id(v12);
    memcpy(v13, v12, sizeof(v13));
    hashbrown::map::HashMap<K,V,S,A>::insert(dest);
    core::ptr::drop_in_place<core::option::Option<alacritty::window_context::WindowContext>>(dest, a1 + 816);
    return 0LL;
  }
  return v5;
}