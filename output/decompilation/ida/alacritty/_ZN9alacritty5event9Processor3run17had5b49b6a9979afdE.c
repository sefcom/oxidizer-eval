__int64 __fastcall alacritty::event::Processor::run(__int64 a1, const void *a2)
{
  __int64 v2; // r14
  __int64 v4; // [rsp+0h] [rbp-928h] BYREF
  __int128 v5; // [rsp+8h] [rbp-920h]
  __int128 v6; // [rsp+18h] [rbp-910h]
  __int128 v7; // [rsp+28h] [rbp-900h]
  __int64 v8; // [rsp+38h] [rbp-8F0h] BYREF
  __int128 v9; // [rsp+40h] [rbp-8E8h]
  __int128 v10; // [rsp+50h] [rbp-8D8h]
  __int128 v11; // [rsp+60h] [rbp-8C8h]
  _BYTE dest[2232]; // [rsp+70h] [rbp-8B8h] BYREF

  memcpy(dest, a2, 0x8A0uLL);
  winit::platform_impl::linux::EventLoop<T>::run(&v4, dest, a1);
  v2 = *(_QWORD *)(a1 + 880);
  *(_QWORD *)(a1 + 880) = 0LL;
  if ( v2 )
  {
    core::ptr::drop_in_place<core::result::Result<usize,winit::error::EventLoopError>>(&v4);
  }
  else if ( v4 == 0x800000000000000ALL )
  {
    return 0LL;
  }
  else
  {
    v8 = v4;
    v9 = v5;
    v10 = v6;
    v11 = v7;
    return alloc::boxed::Box<T>::new(&v8);
  }
  return v2;
}