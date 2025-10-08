__int64 __fastcall alacritty::renderer::platform::create_gl_surface(__int64 a1, __int64 a2, int a3, int a4, int *a5)
{
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // eax
  char **v12; // rdi
  _QWORD v13[2]; // [rsp+8h] [rbp-80h] BYREF
  _QWORD v14[2]; // [rsp+18h] [rbp-70h] BYREF
  _DWORD v15[5]; // [rsp+28h] [rbp-60h] BYREF
  __int128 v16; // [rsp+3Ch] [rbp-4Ch]
  int v17; // [rsp+4Ch] [rbp-3Ch]
  int v18; // [rsp+50h] [rbp-38h]
  int v19; // [rsp+54h] [rbp-34h]
  __int64 v20; // [rsp+58h] [rbp-30h]

  v13[0] = <glutin::context::PossiblyCurrentContext as glutin::display::GetGlDisplay>::display(a2);
  v13[1] = v8;
  v14[0] = <glutin::context::PossiblyCurrentContext as glutin::config::GetGlConfig>::config(a2);
  v14[1] = v9;
  if ( !a3 )
  {
    v12 = &off_883920;
    goto LABEL_6;
  }
  if ( !a4 )
  {
    v12 = &off_883938;
LABEL_6:
    core::option::unwrap_failed(v12);
  }
  v10 = *a5;
  v17 = a5[5];
  v16 = *(_OWORD *)(a5 + 1);
  v15[0] = 3;
  v15[4] = v10;
  v18 = a3;
  v19 = a4;
  v20 = 0LL;
  <glutin::display::Display as glutin::display::GlDisplay>::create_window_surface(a1, v13, v14, v15);
  core::ptr::drop_in_place<glutin::config::Config>(v14);
  return core::ptr::drop_in_place<glutin::display::Display>(v13);
}