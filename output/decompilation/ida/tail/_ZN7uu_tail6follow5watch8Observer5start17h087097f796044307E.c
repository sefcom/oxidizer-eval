__int64 __fastcall uu_tail::follow::watch::Observer::start(__int64 a1, __int64 a2)
{
  __int128 v3; // kr00_16
  int v4; // ecx
  __int64 (__fastcall **v5)(); // rbp
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(); // rdx
  __int128 v11; // kr10_16
  __int64 result; // rax
  __int64 v13; // rbx
  __m256i v14; // [rsp+10h] [rbp-1A8h] BYREF
  __int128 v15; // [rsp+30h] [rbp-188h]
  __int64 v16; // [rsp+40h] [rbp-178h]
  __int64 v17; // [rsp+50h] [rbp-168h]
  __int64 v18; // [rsp+58h] [rbp-160h] BYREF
  __int64 v19; // [rsp+60h] [rbp-158h]
  __m256i v20; // [rsp+68h] [rbp-150h] BYREF
  __m256i v21; // [rsp+88h] [rbp-130h] BYREF
  __int128 v22; // [rsp+A8h] [rbp-110h]
  __int64 v23; // [rsp+B8h] [rbp-100h]
  __m256i v24; // [rsp+C0h] [rbp-F8h] BYREF
  __int128 v25; // [rsp+E0h] [rbp-D8h]
  __int64 v26; // [rsp+F0h] [rbp-C8h]
  __int64 v27; // [rsp+100h] [rbp-B8h] BYREF
  int v28; // [rsp+108h] [rbp-B0h]
  char v29; // [rsp+110h] [rbp-A8h]
  _QWORD v30[2]; // [rsp+118h] [rbp-A0h] BYREF
  char **v31; // [rsp+128h] [rbp-90h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+130h] [rbp-88h]
  __int128 v33; // [rsp+150h] [rbp-68h] BYREF
  __int64 v34; // [rsp+160h] [rbp-58h]
  __int128 v35; // [rsp+170h] [rbp-48h] BYREF
  __int64 v36; // [rsp+180h] [rbp-38h]

  if ( *(_BYTE *)(a2 + 76) == 2 )
    return 0LL;
  std::sync::mpmc::channel(&v14);
  v3 = *(_OWORD *)v14.m256i_i8;
  v20 = v14;
  v4 = *(_DWORD *)(a2 + 56);
  v27 = *(_QWORD *)(a2 + 48);
  v28 = v4;
  v29 = 1;
  if ( *(_BYTE *)(a1 + 141) )
  {
    *(_BYTE *)(a1 + 141) = 1;
    notify::poll::PollWatcher::new(&v14, v3, *((_QWORD *)&v3 + 1), &v27);
    core::result::Result<T,E>::unwrap(&v24, &v14, &off_1BBF08);
    v5 = &off_1BBED8;
    v6 = alloc::boxed::Box<T>::new(&v24);
  }
  else
  {
    v18 = <std::sync::mpmc::Sender<T> as core::clone::Clone>::clone(&v20);
    v19 = v7;
    v8 = alloc::boxed::Box<T>::new(v20.m256i_i64[0], v20.m256i_i64[1]);
    notify::inotify::INotifyWatcher::from_event_handler(&v21, v8, &off_1BBE60);
    if ( v21.m256i_i32[0] == 6 )
    {
      v34 = v21.m256i_i64[3];
      v33 = *(_OWORD *)&v21.m256i_u64[1];
      v5 = &off_1BBE80;
      v6 = alloc::boxed::Box<T>::new(&v33);
      core::ptr::drop_in_place<std::sync::mpsc::Sender<core::result::Result<notify::event::Event,notify::error::Error>>>(&v18);
    }
    else
    {
      <T as alloc::string::ToString>::to_string(&v14, &v21);
      v9 = v14.m256i_i64[2];
      if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(
                               v14.m256i_i64[1],
                               v14.m256i_i64[2],
                               aTooManyOpenFil,
                               19LL) )
      {
        core::ptr::drop_in_place<alloc::string::String>(&v14);
        v16 = v23;
        v15 = v22;
        v14 = v21;
        <T as alloc::string::ToString>::to_string(&v35, &v14);
        v24.m256i_i32[6] = 1;
        *(_OWORD *)v24.m256i_i8 = v35;
        v24.m256i_i64[2] = v36;
        v13 = alloc::boxed::Box<T>::new(&v24);
        core::ptr::drop_in_place<notify::error::Error>(&v14);
        core::ptr::drop_in_place<std::sync::mpsc::Sender<core::result::Result<notify::event::Event,notify::error::Error>>>(&v18);
        core::ptr::drop_in_place<std::sync::mpsc::Receiver<core::result::Result<notify::event::Event,notify::error::Error>>>(&v20.m256i_u64[2]);
        return v13;
      }
      core::ptr::drop_in_place<alloc::string::String>(&v14);
      v26 = v23;
      v25 = v22;
      v24 = v21;
      v31 = (char **)uucore::util_name(&v14, v9);
      v32 = v10;
      v30[0] = &v31;
      v30[1] = <&T as core::fmt::Display>::fmt;
      v14.m256i_i64[0] = (__int64)&unk_1BBE20;
      v14.m256i_i64[1] = 2LL;
      *(_QWORD *)&v15 = 0LL;
      v14.m256i_i64[2] = (__int64)v30;
      v14.m256i_i64[3] = 1LL;
      std::io::stdio::_eprint(&v14);
      v31 = &off_1BBEB0;
      v32 = <&T as core::fmt::Display>::fmt;
      v14.m256i_i64[0] = (__int64)&unk_1BBE40;
      v14.m256i_i64[1] = 2LL;
      *(_QWORD *)&v15 = 0LL;
      v14.m256i_i64[2] = (__int64)&v31;
      v14.m256i_i64[3] = 1LL;
      std::io::stdio::_eprint(&v14);
      uucore::mods::error::set_exit_code(1LL);
      *(_BYTE *)(a1 + 141) = 1;
      notify::poll::PollWatcher::new(&v14, v18, v19, &v27);
      core::result::Result<T,E>::unwrap(&v31, &v14, &off_1BBEC0);
      v17 = alloc::boxed::Box<T>::new(&v31);
      core::ptr::drop_in_place<notify::error::Error>(&v24);
      v5 = &off_1BBED8;
      v6 = v17;
    }
  }
  v11 = *(_OWORD *)&v20.m256i_u64[2];
  core::ptr::drop_in_place<core::option::Option<uu_tail::follow::watch::WatcherRx>>(a1);
  *(_OWORD *)a1 = v11;
  *(_QWORD *)(a1 + 16) = v6;
  *(_QWORD *)(a1 + 24) = v5;
  result = uu_tail::follow::watch::Observer::init_files(a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
  if ( !result )
    return 0LL;
  return result;
}
