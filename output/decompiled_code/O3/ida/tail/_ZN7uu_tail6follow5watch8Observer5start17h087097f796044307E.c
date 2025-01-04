__int64 __fastcall uu_tail::follow::watch::Observer::start(__int64 a1, __int64 a2)
{
  __int128 v2; // kr00_16
  int v3; // ecx
  __int64 (__fastcall **v4)(); // rbp
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(); // rdx
  __int128 v9; // kr10_16
  __int64 result; // rax
  __int64 v11; // rbx
  __m256i v12; // [rsp+10h] [rbp-1A8h] BYREF
  __int128 v13; // [rsp+30h] [rbp-188h]
  __int64 v14; // [rsp+40h] [rbp-178h]
  __int64 v15; // [rsp+50h] [rbp-168h]
  __int64 v16; // [rsp+58h] [rbp-160h] BYREF
  __int64 v17; // [rsp+60h] [rbp-158h]
  __m256i v18; // [rsp+68h] [rbp-150h] BYREF
  __m256i v19; // [rsp+88h] [rbp-130h] BYREF
  __int128 v20; // [rsp+A8h] [rbp-110h]
  __int64 v21; // [rsp+B8h] [rbp-100h]
  __m256i v22; // [rsp+C0h] [rbp-F8h] BYREF
  __int128 v23; // [rsp+E0h] [rbp-D8h]
  __int64 v24; // [rsp+F0h] [rbp-C8h]
  __int64 v25; // [rsp+100h] [rbp-B8h] BYREF
  int v26; // [rsp+108h] [rbp-B0h]
  char v27; // [rsp+110h] [rbp-A8h]
  _QWORD v28[2]; // [rsp+118h] [rbp-A0h] BYREF
  char **v29; // [rsp+128h] [rbp-90h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+130h] [rbp-88h]
  __int128 v31; // [rsp+150h] [rbp-68h] BYREF
  __int64 v32; // [rsp+160h] [rbp-58h]
  __int128 v33; // [rsp+170h] [rbp-48h] BYREF
  __int64 v34; // [rsp+180h] [rbp-38h]

  if ( *(_BYTE *)(a2 + 76) == 2 )
    return 0LL;
  std::sync::mpmc::channel(&v12);
  v2 = *(_OWORD *)v12.m256i_i8;
  v18 = v12;
  v3 = *(_DWORD *)(a2 + 56);
  v25 = *(_QWORD *)(a2 + 48);
  v26 = v3;
  v27 = 1;
  if ( *(_BYTE *)(a1 + 141) )
  {
    *(_BYTE *)(a1 + 141) = 1;
    notify::poll::PollWatcher::new(&v12, v2, *((_QWORD *)&v2 + 1), &v25);
    core::result::Result<T,E>::unwrap(&v22, &v12, &off_1BBF08);
    v4 = &off_1BBED8;
    v5 = alloc::boxed::Box<T>::new(&v22);
  }
  else
  {
    v16 = <std::sync::mpmc::Sender<T> as core::clone::Clone>::clone(&v18);
    v17 = v6;
    v7 = alloc::boxed::Box<T>::new(v18.m256i_i64[0], v18.m256i_i64[1]);
    notify::inotify::INotifyWatcher::from_event_handler(&v19, v7, &off_1BBE60);
    if ( v19.m256i_i32[0] == 6 )
    {
      v32 = v19.m256i_i64[3];
      v31 = *(_OWORD *)&v19.m256i_u64[1];
      v4 = &off_1BBE80;
      v5 = alloc::boxed::Box<T>::new(&v31);
      core::ptr::drop_in_place<std::sync::mpsc::Sender<core::result::Result<notify::event::Event,notify::error::Error>>>(&v16);
    }
    else
    {
      <T as alloc::string::ToString>::to_string(&v12, &v19);
      if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(
                               v12.m256i_i64[1],
                               v12.m256i_i64[2],
                               aTooManyOpenFil,
                               19LL) )
      {
        core::ptr::drop_in_place<alloc::string::String>(&v12);
        v14 = v21;
        v13 = v20;
        v12 = v19;
        <T as alloc::string::ToString>::to_string(&v33, &v12);
        v22.m256i_i32[6] = 1;
        *(_OWORD *)v22.m256i_i8 = v33;
        v22.m256i_i64[2] = v34;
        v11 = alloc::boxed::Box<T>::new(&v22);
        core::ptr::drop_in_place<notify::error::Error>(&v12);
        core::ptr::drop_in_place<std::sync::mpsc::Sender<core::result::Result<notify::event::Event,notify::error::Error>>>(&v16);
        core::ptr::drop_in_place<std::sync::mpsc::Receiver<core::result::Result<notify::event::Event,notify::error::Error>>>(&v18.m256i_u64[2]);
        return v11;
      }
      core::ptr::drop_in_place<alloc::string::String>(&v12);
      v24 = v21;
      v23 = v20;
      v22 = v19;
      v29 = (char **)uucore::util_name();
      v30 = v8;
      v28[0] = &v29;
      v28[1] = <&T as core::fmt::Display>::fmt;
      v12.m256i_i64[0] = (__int64)&unk_1BBE20;
      v12.m256i_i64[1] = 2LL;
      *(_QWORD *)&v13 = 0LL;
      v12.m256i_i64[2] = (__int64)v28;
      v12.m256i_i64[3] = 1LL;
      std::io::stdio::_eprint(&v12);
      v29 = &off_1BBEB0;
      v30 = <&T as core::fmt::Display>::fmt;
      v12.m256i_i64[0] = (__int64)&unk_1BBE40;
      v12.m256i_i64[1] = 2LL;
      *(_QWORD *)&v13 = 0LL;
      v12.m256i_i64[2] = (__int64)&v29;
      v12.m256i_i64[3] = 1LL;
      std::io::stdio::_eprint(&v12);
      uucore::mods::error::set_exit_code(1LL);
      *(_BYTE *)(a1 + 141) = 1;
      notify::poll::PollWatcher::new(&v12, v16, v17, &v25);
      core::result::Result<T,E>::unwrap(&v29, &v12, &off_1BBEC0);
      v15 = alloc::boxed::Box<T>::new(&v29);
      core::ptr::drop_in_place<notify::error::Error>(&v22);
      v4 = &off_1BBED8;
      v5 = v15;
    }
  }
  v9 = *(_OWORD *)&v18.m256i_u64[2];
  core::ptr::drop_in_place<core::option::Option<uu_tail::follow::watch::WatcherRx>>(a1);
  *(_OWORD *)a1 = v9;
  *(_QWORD *)(a1 + 16) = v5;
  *(_QWORD *)(a1 + 24) = v4;
  result = uu_tail::follow::watch::Observer::init_files(a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
  if ( !result )
    return 0LL;
  return result;
}
