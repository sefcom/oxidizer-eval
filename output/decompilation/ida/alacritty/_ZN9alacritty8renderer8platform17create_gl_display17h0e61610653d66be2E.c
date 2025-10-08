unsigned __int64 __fastcall alacritty::renderer::platform::create_gl_display(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // r14
  _QWORD *v5; // r15
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int64 v8; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD *v9; // [rsp+10h] [rbp-B8h]
  const char *v10; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+20h] [rbp-A8h]
  const char *v12; // [rsp+28h] [rbp-A0h]
  __int64 v13; // [rsp+30h] [rbp-98h]
  __int64 v14; // [rsp+38h] [rbp-90h]
  char **v15; // [rsp+40h] [rbp-88h] BYREF
  __int64 v16; // [rsp+48h] [rbp-80h]
  _QWORD *v17; // [rsp+50h] [rbp-78h]
  __int128 v18; // [rsp+58h] [rbp-70h]
  __int128 v19; // [rsp+68h] [rbp-60h]
  __int64 v20; // [rsp+78h] [rbp-50h]
  _QWORD v21[2]; // [rsp+80h] [rbp-48h] BYREF
  _BYTE v22[56]; // [rsp+90h] [rbp-38h] BYREF

  v10 = (const char *)(a3 ^ 3LL);
  v11 = alloc::boxed::Box<T>::new();
  v12 = (const char *)&unk_883838;
  glutin::display::Display::new(&v15, a2, &v10);
  result = (unsigned __int64)v15;
  v4 = v16;
  v5 = v17;
  if ( v15 == (char **)((char *)&dword_0 + 2) )
  {
    v8 = v16;
    v9 = v17;
    result = core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL);
    if ( result >= 3 )
    {
      <glutin::display::Display as glutin::display::GlDisplay>::version_string(v22, &v8);
      v21[0] = v22;
      v21[1] = <alloc::string::String as core::fmt::Display>::fmt;
      v15 = &off_883828;
      v16 = 1LL;
      v17 = v21;
      v18 = 1uLL;
      v6 = log::__private_api::loc(&off_883868);
      v10 = aAlacrittyRende_1;
      v11 = 29LL;
      v12 = aAlacrittyRende_1;
      v13 = 29LL;
      v14 = v6;
      log::__private_api::log(&v15, 3LL, &v10);
      result = core::ptr::drop_in_place<alloc::string::String>(v22);
      v4 = v8;
      v5 = v9;
    }
    *(_QWORD *)(a1 + 8) = v4;
    *(_QWORD *)(a1 + 16) = v5;
    *(_QWORD *)a1 = 2LL;
  }
  else
  {
    *(_QWORD *)(a1 + 56) = v20;
    v7 = v18;
    *(_OWORD *)(a1 + 40) = v19;
    *(_OWORD *)(a1 + 24) = v7;
    *(_QWORD *)a1 = result;
    *(_QWORD *)(a1 + 8) = v4;
    *(_QWORD *)(a1 + 16) = v5;
  }
  return result;
}