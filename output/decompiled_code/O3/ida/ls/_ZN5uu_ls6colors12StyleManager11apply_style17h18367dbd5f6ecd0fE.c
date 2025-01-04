        unsigned __int8 a6)
{
  __int64 normal_style; // rax
  char v9; // cl
  __int64 slice; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int8 v15; // al
  void *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE v21[24]; // [rsp+0h] [rbp-108h] BYREF
  _QWORD v22[3]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v23; // [rsp+60h] [rbp-A8h] BYREF
  int v24; // [rsp+70h] [rbp-98h]
  _BYTE v25[24]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  _QWORD v28[2]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v29[2]; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v30; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v31; // [rsp+E0h] [rbp-28h]

  v28[0] = a4;
  v28[1] = a5;
  v22[0] = 0LL;
  v22[1] = 1LL;
  v22[2] = 0LL;
  if ( *(_BYTE *)(a2 + 8) == 2 )
  {
    normal_style = uu_ls::colors::StyleManager::get_normal_style(a2);
    if ( normal_style )
    {
      v9 = *(_BYTE *)normal_style;
      v24 = *(_DWORD *)(normal_style + 17);
      v23 = *(_OWORD *)(normal_style + 1);
      if ( v9 != 2 )
      {
        v25[0] = v9;
        *(_OWORD *)&v25[1] = v23;
        *(_DWORD *)&v25[17] = v24;
        uu_ls::colors::StyleManager::get_style_code(v21, a2, v25);
        slice = core::slice::iter::Iter<T>::make_slice(*(_QWORD *)&v21[8], *(_QWORD *)&v21[8] + *(_QWORD *)&v21[16]);
        alloc::vec::Vec<T,A>::append_elements(v22, slice);
        core::ptr::drop_in_place<alloc::string::String>(v21);
      }
    }
  }
  if ( a3 )
  {
    if ( !(unsigned __int8)uu_ls::colors::StyleManager::is_current_style(a2, a3) )
    {
      uu_ls::colors::StyleManager::reset(v21, a2, *(_BYTE *)(a2 + 29) == 0);
      v11 = core::slice::iter::Iter<T>::make_slice(*(_QWORD *)&v21[8], *(_QWORD *)&v21[8] + *(_QWORD *)&v21[16]);
      alloc::vec::Vec<T,A>::append_elements(v22, v11);
      core::ptr::drop_in_place<alloc::string::String>(v21);
      uu_ls::colors::StyleManager::get_style_code(v21, a2, a3);
      v12 = core::slice::iter::Iter<T>::make_slice(*(_QWORD *)&v21[8], *(_QWORD *)&v21[8] + *(_QWORD *)&v21[16]);
      alloc::vec::Vec<T,A>::append_elements(v22, v12);
      core::ptr::drop_in_place<alloc::string::String>(v21);
    }
  }
  else
  {
    v13 = uu_ls::colors::StyleManager::get_normal_style(a2);
    if ( v13 )
    {
      *(_OWORD *)v21 = *(_OWORD *)v13;
      *(_QWORD *)&v21[13] = *(_QWORD *)(v13 + 13);
      if ( v21[0] != 2 )
      {
        if ( (unsigned __int8)uu_ls::colors::StyleManager::is_current_style(a2, v21) )
        {
          uu_ls::colors::StyleManager::reset(v21, a2, 0LL);
          v14 = core::slice::iter::Iter<T>::make_slice(*(_QWORD *)&v21[8], *(_QWORD *)&v21[8] + *(_QWORD *)&v21[16]);
          alloc::vec::Vec<T,A>::append_elements(v22, v14);
          core::ptr::drop_in_place<alloc::string::String>(v21);
          v15 = 1;
          goto LABEL_13;
        }
      }
    }
  }
  v15 = 0;
LABEL_13:
  v16 = &dword_0 + 1;
  if ( a6 )
    v16 = &unk_36D68;
  v29[0] = v16;
  v29[1] = 3LL * a6;
  uu_ls::colors::StyleManager::reset(&v23, a2, v15);
  *(_QWORD *)v25 = &unk_36D28;
  *(_QWORD *)&v25[8] = 4LL;
  v27 = 0LL;
  *(_QWORD *)&v25[16] = v21;
  v26 = 4LL;
  core::option::Option<T>::map_or_else(
    &v30,
    v25,
    v17,
    <&T as core::fmt::Display>::fmt,
    v18,
    v19,
    v22,
    <alloc::string::String as core::fmt::Display>::fmt,
    v28,
    <&T as core::fmt::Display>::fmt,
    &v23,
    <alloc::string::String as core::fmt::Display>::fmt,
    v29,
    <&T as core::fmt::Display>::fmt);
  core::ptr::drop_in_place<alloc::string::String>(&v23);
  *(_QWORD *)(a1 + 16) = v31;
  *(_OWORD *)a1 = v30;
  return core::ptr::drop_in_place<alloc::string::String>(v22);
}
