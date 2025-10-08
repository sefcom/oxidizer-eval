__int64 __fastcall alacritty::window_context::WindowContext::write_ref_test_results(_QWORD *a1)
{
  __int64 v1; // r15
  unsigned __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  unsigned __int128 v9; // [rsp+0h] [rbp-168h] BYREF
  _QWORD *v10; // [rsp+10h] [rbp-158h]
  unsigned __int128 v11; // [rsp+20h] [rbp-148h] BYREF
  _QWORD *v12; // [rsp+30h] [rbp-138h]
  __int64 v13; // [rsp+38h] [rbp-130h]
  __int64 v14; // [rsp+40h] [rbp-128h]
  unsigned __int64 v15; // [rsp+58h] [rbp-110h] BYREF
  _BYTE v16[8]; // [rsp+60h] [rbp-108h] BYREF
  __int64 v17; // [rsp+68h] [rbp-100h]
  __int64 v18; // [rsp+70h] [rbp-F8h]
  _BYTE v19[8]; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v20; // [rsp+80h] [rbp-E8h]
  __int64 v21; // [rsp+88h] [rbp-E0h]
  _QWORD v22[2]; // [rsp+90h] [rbp-D8h] BYREF
  _QWORD v23[5]; // [rsp+A0h] [rbp-C8h] BYREF
  unsigned __int64 v24; // [rsp+C8h] [rbp-A0h]
  __int64 v25; // [rsp+130h] [rbp-38h]
  unsigned __int64 v26; // [rsp+138h] [rbp-30h]
  __int64 v27; // [rsp+148h] [rbp-20h]

  v1 = a1[963];
  alacritty_terminal::sync::FairMutex<T>::lock(v1 + 16);
  <alacritty_terminal::grid::Grid<T> as core::clone::Clone>::clone(v23, v1 + 64);
  core::ptr::drop_in_place<lock_api::mutex::MutexGuard<parking_lot::raw_mutex::RawMutex,alacritty_terminal::term::Term<alacritty::event::EventProxy>>>(v1 + 16);
  alacritty_terminal::grid::storage::Storage<T>::truncate(v23);
  v2 = 0LL;
  if ( v24 >= v26 )
    v2 = v24 - v26;
  alacritty_terminal::grid::storage::Storage<T>::initialize(v23, v27 - v2, v25);
  alacritty_terminal::grid::storage::Storage<T>::truncate(v23);
  serde_json::ser::to_vec(&v11, v23);
  if ( __OFSUB__(0LL, (_QWORD)v11) )
  {
    *((_QWORD *)&v9 + 1) = *((_QWORD *)&v11 + 1);
    *(_QWORD *)&v9 = 0x8000000000000000LL;
  }
  else
  {
    v10 = v12;
    v9 = v11;
  }
  core::result::Result<T,E>::expect(v16, &v9, &unk_106CFD, &off_8843E8);
  serde_json::ser::to_vec(&v11, a1[802], a1[801]);
  if ( (_QWORD)v11 == 0x8000000000000000LL )
  {
    v9 = __PAIR128__(*((unsigned __int64 *)&v11 + 1), 0x8000000000000000LL);
  }
  else
  {
    v10 = v12;
    v9 = v11;
  }
  core::result::Result<T,E>::expect(v19, &v9, &unk_106D0B, &off_884400);
  v4 = v24 - v26;
  if ( v24 < v26 )
    v4 = 0LL;
  v15 = v4;
  v22[0] = &v15;
  v22[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  *(_QWORD *)&v11 = &off_8843C8;
  *((_QWORD *)&v11 + 1) = 2LL;
  v14 = 0LL;
  v12 = v22;
  v13 = 1LL;
  core::option::Option<T>::map_or_else(&v9, 0LL, v3, &v11);
  v11 = v9;
  v12 = v10;
  std::fs::File::create(&v9, aGridJson, 11LL);
  if ( (_DWORD)v9 == 1 )
    v5 = *((_QWORD *)&v9 + 1);
  else
    v5 = alacritty::window_context::WindowContext::write_ref_test_results::{{closure}}(v17, v18, DWORD1(v9));
  core::result::Result<T,E>::expect(v5, aWriteGridJson, 15LL, &off_884418);
  std::fs::File::create(&v9, aSizeJson, 11LL);
  if ( (_DWORD)v9 == 1 )
    v6 = *((_QWORD *)&v9 + 1);
  else
    v6 = alacritty::window_context::WindowContext::write_ref_test_results::{{closure}}(v20, v21, DWORD1(v9));
  core::result::Result<T,E>::expect(v6, aWriteSizeJson, 15LL, &off_884430);
  std::fs::File::create(&v9, aConfigJson, 13LL);
  if ( (_DWORD)v9 == 1 )
    v7 = *((_QWORD *)&v9 + 1);
  else
    v7 = alacritty::window_context::WindowContext::write_ref_test_results::{{closure}}(
           *((_QWORD *)&v11 + 1),
           v12,
           DWORD1(v9));
  core::result::Result<T,E>::expect(v7, aWriteConfigJso, 17LL, &off_884448);
  core::ptr::drop_in_place<alloc::string::String>(&v11);
  core::ptr::drop_in_place<alloc::string::String>(v19);
  core::ptr::drop_in_place<alloc::string::String>(v16);
  return core::ptr::drop_in_place<alacritty_terminal::grid::Grid<alacritty_terminal::term::cell::Cell>>(v23);
}