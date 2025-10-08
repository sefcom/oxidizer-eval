__int64 __fastcall alacritty::migrate::move_value(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v5; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 (__fastcall **v9)(); // rax
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // r12
  __int64 v14; // rax
  _QWORD *v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rsi
  _QWORD *v18; // r13
  __int64 (__fastcall **v19)(); // rbp
  void *v20; // r14
  __int64 result; // rax
  __int64 v22; // r14
  __int64 v23; // r15
  bool v24; // bl
  __int64 v25; // rax
  _OWORD *v26; // r14
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  _QWORD *v31; // [rsp+8h] [rbp-330h]
  _QWORD *v32; // [rsp+10h] [rbp-328h]
  _QWORD v33[3]; // [rsp+18h] [rbp-320h] BYREF
  __int128 v34; // [rsp+30h] [rbp-308h]
  __int128 v35; // [rsp+40h] [rbp-2F8h]
  __int128 v36; // [rsp+50h] [rbp-2E8h]
  __int128 v37; // [rsp+60h] [rbp-2D8h]
  __int128 v38; // [rsp+70h] [rbp-2C8h]
  __int128 v39; // [rsp+80h] [rbp-2B8h]
  _OWORD v40[3]; // [rsp+98h] [rbp-2A0h] BYREF
  _OWORD v41[3]; // [rsp+C8h] [rbp-270h] BYREF
  _QWORD src[22]; // [rsp+F8h] [rbp-240h] BYREF
  _BYTE dest[176]; // [rsp+1A8h] [rbp-190h] BYREF
  _BYTE v44[224]; // [rsp+258h] [rbp-E0h] BYREF

  v5 = a2;
  v7 = *a2 - 8LL;
  v8 = 1LL;
  if ( v7 < 4 )
    v8 = *a2 - 8LL;
  if ( v8 == 2 )
  {
    v10 = a2 + 1;
    v9 = &off_883620;
  }
  else
  {
    if ( v8 != 1 || v7 >= 0xFFFFFFFFFFFFFFFALL )
    {
      src[0] = &off_883540;
      src[1] = 1LL;
      src[2] = 8LL;
      *(_OWORD *)&src[3] = 0LL;
      core::panicking::panic_fmt(src, &off_8836E0);
    }
    v9 = &off_883560;
    v10 = a2;
  }
  v11 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD))v9[13])(v10, *a3, a3[1]);
  if ( !v11 )
  {
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
    return result;
  }
  v13 = (_QWORD *)v12;
  v31 = a1;
  if ( *(_DWORD *)v12 == 10 )
    *(_BYTE *)(v12 + 168) = 1;
  alacritty::migrate::move_value::{{closure}}(v40, v11);
  memcpy(dest, v13, sizeof(dest));
  *v13 = 8LL;
  memcpy(v13 + 1, src, 0xA8uLL);
  v33[0] = a4;
  v33[1] = a4 + 32;
  v33[2] = 0LL;
  v14 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v33);
  if ( !v15 )
  {
LABEL_20:
    *a1 = 0x8000000000000000LL;
    result = core::ptr::drop_in_place<toml_edit::item::Item>(dest);
LABEL_26:
    if ( *(_QWORD *)&v40[0] != 0x8000000000000004LL )
    {
      core::ptr::drop_in_place<toml_edit::repr::Decor>(v40);
      return core::ptr::drop_in_place<toml_edit::repr::Decor>(v41);
    }
    return result;
  }
  while ( 1 )
  {
    v16 = *v5 - 8LL;
    v17 = 1LL;
    if ( v16 < 4 )
      v17 = *v5 - 8LL;
    if ( v17 == 1 )
    {
      v18 = v5;
      v19 = &off_883560;
      if ( v16 >= 0xFFFFFFFFFFFFFFFALL )
      {
LABEL_30:
        src[0] = &off_883550;
        src[1] = 1LL;
        src[2] = 8LL;
        *(_OWORD *)&src[3] = 0LL;
        core::panicking::panic_fmt(src, &off_8836F8);
      }
    }
    else
    {
      if ( v17 != 2 )
        goto LABEL_30;
      v18 = v5 + 1;
      v19 = &off_883620;
    }
    if ( v14 == 1 )
      break;
    v20 = (void *)toml_edit::index::<impl core::ops::index::IndexMut<I> for toml_edit::item::Item>::index_mut(v5, v15);
    toml_edit::item::table(src);
    v5 = (_QWORD *)toml_edit::item::Item::or_insert(v20, src);
    v14 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v33);
    if ( !v15 )
      goto LABEL_20;
  }
  v22 = *v15;
  v32 = v15;
  v23 = v15[1];
  memcpy(src, dest, sizeof(src));
  ((void (__fastcall *)(_BYTE *, _QWORD *, __int64, __int64, _QWORD *))v19[15])(v44, v18, v22, v23, src);
  core::ptr::drop_in_place<core::option::Option<toml_edit::item::Item>>(v44);
  v24 = *(_QWORD *)&v40[0] != 0x8000000000000004LL;
  if ( *(_QWORD *)&v40[0] != 0x8000000000000004LL )
  {
    v36 = v40[2];
    v35 = v40[1];
    v34 = v40[0];
    v37 = v41[0];
    v38 = v41[1];
    v39 = v41[2];
    v25 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD))v19[23])(v18, *v32, v32[1]);
    v26 = (_OWORD *)v25;
    if ( !v25 )
      core::option::unwrap_failed(&off_883728);
    core::ptr::drop_in_place<toml_edit::repr::Decor>(v25 + 48);
    v27 = v34;
    v28 = v35;
    v26[5] = v36;
    v26[4] = v28;
    v26[3] = v27;
    core::ptr::drop_in_place<toml_edit::repr::Decor>(v26 + 6);
    v29 = v37;
    v30 = v38;
    v26[8] = v39;
    v26[7] = v30;
    v26[6] = v29;
  }
  result = (__int64)v31;
  *v31 = 0x8000000000000000LL;
  if ( !v24 )
    goto LABEL_26;
  return result;
}