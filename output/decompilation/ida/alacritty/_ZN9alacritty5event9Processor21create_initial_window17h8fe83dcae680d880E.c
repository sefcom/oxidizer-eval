__int64 __fastcall alacritty::event::Processor::create_initial_window(_QWORD *a1, __int64 a2, const void *a3)
{
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r15
  _OWORD v9[484]; // [rsp+0h] [rbp-5AE8h] BYREF
  __m128i v10[484]; // [rsp+1E40h] [rbp-3CA8h] BYREF
  _OWORD dest[228]; // [rsp+3C80h] [rbp-1E68h] BYREF
  __int64 v12; // [rsp+4AC0h] [rbp-1028h]

  v12 = 0LL;
  v10[456].m128i_i64[0] = 0LL;
  v10[200].m128i_i64[0] = 0LL;
  *(_QWORD *)&v9[428] = 0LL;
  *(_QWORD *)&v9[172] = 0LL;
  <winit::platform_impl::linux::EventLoopProxy<T> as core::clone::Clone>::clone(dest, a1 + 8);
  v9[1] = dest[1];
  v9[0] = dest[0];
  alloc::rc::RcInnerPtr::inc_strong(a1[122]);
  memcpy(dest, a3, 0xB0uLL);
  alacritty::window_context::WindowContext::initial(v10);
  v4 = v10[1].m128i_i64[0];
  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v10), (__m128i)xmmword_E9660)) != 0xFFFF )
  {
    memcpy(&v9[2], &v10[2], 0x1E20uLL);
    v9[0] = v10[0];
    v9[1] = v10[1];
    v5 = <glutin::context::PossiblyCurrentContext as glutin::config::GetGlConfig>::config((char *)&v9[321] + 8);
    v7 = v6;
    core::ptr::drop_in_place<core::option::Option<glutin::config::Config>>(a1 + 12);
    a1[12] = v5;
    a1[13] = v7;
    alacritty::window_context::WindowContext::id(v9);
    memcpy(v10, v9, sizeof(v10));
    hashbrown::map::HashMap<K,V,S,A>::insert(dest);
    core::ptr::drop_in_place<core::option::Option<alacritty::window_context::WindowContext>>(dest, a1 + 102);
    return 0LL;
  }
  return v4;
}