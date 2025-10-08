__int64 __fastcall alacritty::display::Display::validate_hint_highlights(__int64 a1, int a2)
{
  __int64 result; // rax
  char v3; // bl
  __int64 v4; // r12
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // r15
  int v8; // r14d
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // rbp
  bool v14; // sf
  unsigned int v15; // r14d
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // [rsp+10h] [rbp-D8h]
  _BYTE v21[8]; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-C0h]
  __int64 v23; // [rsp+30h] [rbp-B8h]
  __int64 v24; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+40h] [rbp-A8h]
  __int64 v26; // [rsp+48h] [rbp-A0h]
  __int64 v27; // [rsp+50h] [rbp-98h] BYREF
  _QWORD *v28; // [rsp+58h] [rbp-90h]
  char v29; // [rsp+60h] [rbp-88h]
  unsigned __int64 v30; // [rsp+68h] [rbp-80h]
  __int64 v31; // [rsp+70h] [rbp-78h]
  _QWORD v32[4]; // [rsp+78h] [rbp-70h] BYREF
  char v33; // [rsp+98h] [rbp-50h]
  __int64 v34; // [rsp+A0h] [rbp-48h]
  __int64 v35; // [rsp+A8h] [rbp-40h]
  char v36; // [rsp+B0h] [rbp-38h]

  v19 = *(_QWORD *)(a1 + 1944);
  v32[0] = 0LL;
  v32[1] = 2LL;
  v32[2] = a1 + 1832;
  v32[3] = a1 + 1984;
  v33 = 1;
  v34 = a1 + 1888;
  v35 = a1 + 1992;
  v36 = 0;
  result = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v27, v32);
  v3 = v29;
  if ( v29 != 2 )
  {
    v31 = a1 + 24;
    v30 = v19 - 1;
    do
    {
      v4 = v27;
      if ( *(_BYTE *)(v27 + 48) != 2 )
      {
        v5 = *(_QWORD *)(v27 + 16);
        v6 = *(_DWORD *)(v27 + 24);
        v7 = *(_QWORD *)(v27 + 32);
        v8 = *(_DWORD *)(v27 + 40);
        if ( (*v28)++ )
        {
          v10 = a2 + v6;
          if ( v10 < 0 )
          {
            v11 = 0LL;
          }
          else
          {
            v25 = (unsigned int)v10;
            v26 = v5;
            v11 = 1LL;
          }
          v24 = v11;
          core::option::Option<T>::filter(v21, &v24, v19);
          v12 = 0LL;
          v13 = 0LL;
          if ( v21[0] )
          {
            v12 = v23;
            v13 = v22;
          }
          v14 = a2 + v8 < 0;
          v15 = a2 + v8;
          v16 = 0LL;
          if ( !v14 )
          {
            v25 = v15;
            v26 = v7;
            v16 = 1LL;
          }
          v24 = v16;
          core::option::Option<T>::filter(v21, &v24, v19);
          if ( v21[0] )
          {
            v17 = v22;
            v18 = v23;
          }
          else
          {
            v18 = *(_QWORD *)(a1 + 1952) - 1LL;
            v17 = v30;
          }
          if ( (unsigned __int8)alacritty::display::damage::FrameDamage::intersects(v31, v13, v12, v17, v18) )
          {
            if ( (v3 & 1) != 0 )
            {
              if ( *(_BYTE *)(a1 + 1045) )
              {
                *(_BYTE *)(a1 + 1045) = 0;
                winit::window::Window::set_cursor(*(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 840), 0LL);
              }
            }
            *(_BYTE *)(a1 + 72) = 1;
            core::ptr::drop_in_place<core::option::Option<alacritty::display::hint::HintMatch>>(v4);
            *(_BYTE *)(v4 + 48) = 2;
          }
        }
      }
      result = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(
                 &v27,
                 v32);
      v3 = v29;
    }
    while ( v29 != 2 );
  }
  return result;
}