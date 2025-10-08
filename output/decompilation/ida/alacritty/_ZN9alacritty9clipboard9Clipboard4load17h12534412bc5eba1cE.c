__int64 __fastcall alacritty::clipboard::Clipboard::load(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  unsigned __int8 v4; // cl
  __int64 v5; // rax
  __int64 result; // rax
  __int128 v7; // [rsp+0h] [rbp-98h] BYREF
  _BYTE v8[24]; // [rsp+10h] [rbp-88h] BYREF
  _QWORD v9[2]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v10[5]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v11[7]; // [rsp+60h] [rbp-38h] BYREF

  v3 = a2 + 16;
  v4 = a3 & (*(_QWORD *)(a2 + 16) != 0LL);
  if ( !v4 )
    v3 = a2;
  (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)(v3 + 8) + 24LL))(v8, *(_QWORD *)(a2 + 16 * (unsigned int)v4));
  if ( __OFSUB__(0LL, *(_QWORD *)v8) )
  {
    v7 = *(_OWORD *)&v8[8];
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
    {
      v9[0] = &v7;
      v9[1] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v11[0] = &off_8817F8;
      v11[1] = 1LL;
      v11[4] = 0LL;
      v11[2] = v9;
      v11[3] = 1LL;
      v5 = log::__private_api::loc(&off_881808);
      v10[0] = aAlacrittyClipb;
      v10[1] = 20LL;
      v10[2] = aAlacrittyClipb;
      v10[3] = 20LL;
      v10[4] = v5;
      log::__private_api::log(v11, 4LL, v10);
    }
    *a1 = 0LL;
    a1[1] = 1LL;
    a1[2] = 0LL;
    return core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(&v7);
  }
  else
  {
    result = *(_QWORD *)&v8[16];
    a1[2] = *(_QWORD *)&v8[16];
    *(_OWORD *)a1 = *(_OWORD *)v8;
  }
  return result;
}