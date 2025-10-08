__int64 __fastcall uu_tail::follow::watch::Observer::start(__int64 a1, __int64 a2)
{
  __int128 v3; // kr00_16
  __int64 v4; // r12
  int v5; // ecx
  __int64 v6; // r13
  __int64 (__fastcall **v7)(); // r15
  __int64 v8; // rbp
  __int64 v9; // rdx
  char v10; // bp
  __int128 v11; // rax
  unsigned __int128 v12; // kr10_16
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __m256i v18; // [rsp+10h] [rbp-1C8h] BYREF
  __int128 v19; // [rsp+30h] [rbp-1A8h]
  __int64 v20; // [rsp+40h] [rbp-198h]
  __int64 v21; // [rsp+50h] [rbp-188h]
  __int64 v22; // [rsp+58h] [rbp-180h]
  unsigned __int128 v23; // [rsp+60h] [rbp-178h] BYREF
  _QWORD v24[2]; // [rsp+70h] [rbp-168h] BYREF
  __m256i v25; // [rsp+80h] [rbp-158h] BYREF
  __int128 v26; // [rsp+A0h] [rbp-138h]
  __int64 v27; // [rsp+B0h] [rbp-128h]
  __int64 v28; // [rsp+B8h] [rbp-120h]
  __int64 v29; // [rsp+C0h] [rbp-118h]
  __int64 v30; // [rsp+C8h] [rbp-110h] BYREF
  int v31; // [rsp+D0h] [rbp-108h]
  __int16 v32; // [rsp+D8h] [rbp-100h]
  __int128 v33; // [rsp+E0h] [rbp-F8h] BYREF
  __int64 v34; // [rsp+F0h] [rbp-E8h]
  int v35; // [rsp+F8h] [rbp-E0h]
  __int128 v36; // [rsp+120h] [rbp-B8h]
  _QWORD v37[2]; // [rsp+130h] [rbp-A8h] BYREF
  __int128 v38; // [rsp+140h] [rbp-98h] BYREF
  __int64 v39; // [rsp+150h] [rbp-88h]
  __int128 v40; // [rsp+158h] [rbp-80h] BYREF
  __int64 v41; // [rsp+168h] [rbp-70h]
  __m256i v42; // [rsp+170h] [rbp-68h] BYREF
  __int128 v43; // [rsp+190h] [rbp-48h]
  __int64 v44; // [rsp+1A0h] [rbp-38h]

  if ( *(_BYTE *)(a2 + 76) == 2 )
    return 0LL;
  std::sync::mpmc::channel(&v18);
  v3 = *(_OWORD *)v18.m256i_i8;
  v4 = v18.m256i_i64[2];
  v36 = *(_OWORD *)v18.m256i_i8;
  v22 = v18.m256i_i64[3];
  v23 = *(_OWORD *)&v18.m256i_u64[2];
  v5 = *(_DWORD *)(a2 + 56);
  v30 = *(_QWORD *)(a2 + 48);
  v31 = v5;
  v32 = 257;
  if ( *(_BYTE *)(a1 + 141) )
  {
    *(_BYTE *)(a1 + 141) = 1;
    notify::poll::PollWatcher::with_opt(&v18, v3, *((_QWORD *)&v3 + 1), &v30);
    core::result::Result<T,E>::unwrap(&v33, &v18, &off_173568);
    v6 = alloc::boxed::Box<T>::new(&v33);
    v7 = &off_173538;
    v8 = v22;
LABEL_9:
    core::ptr::drop_in_place<core::option::Option<uu_tail::follow::watch::WatcherRx>>(a1);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(a1 + 8) = v8;
    *(_QWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 24) = v7;
    return uu_tail::follow::watch::Observer::init_files(a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
  }
  v29 = <std::sync::mpmc::Sender<T> as core::clone::Clone>::clone(v18.m256i_i64[0], v18.m256i_i64[1]);
  v24[0] = v29;
  v28 = v9;
  v24[1] = v9;
  <notify::inotify::INotifyWatcher as notify::Watcher>::new(&v25, v3, *((_QWORD *)&v3 + 1), 1LL);
  if ( v25.m256i_i32[0] == 6 )
  {
    v39 = v25.m256i_i64[3];
    v38 = *(_OWORD *)&v25.m256i_u64[1];
    v6 = alloc::boxed::Box<T>::new(&v38);
    core::ptr::drop_in_place<std::sync::mpsc::Sender<core::result::Result<notify_types::event::Event,notify::error::Error>>>(v24);
    v7 = &off_1734E0;
    v8 = v22;
    goto LABEL_9;
  }
  <T as alloc::string::SpecToString>::spec_to_string(&v18, &v25);
  v10 = core::slice::<impl [T]>::starts_with(v18.m256i_i64[1], v18.m256i_i64[2], aTooManyOpenFil, 19LL);
  core::ptr::drop_in_place<alloc::string::String>(&v18);
  if ( v10 )
  {
    v44 = v27;
    v43 = v26;
    v42 = v25;
    *(_QWORD *)&v11 = uucore::util_name();
    v33 = v11;
    v37[0] = &v33;
    v37[1] = <&T as core::fmt::Display>::fmt;
    v18.m256i_i64[0] = (__int64)&unk_1734A0;
    v18.m256i_i64[1] = 2LL;
    *(_QWORD *)&v19 = 0LL;
    v18.m256i_i64[2] = (__int64)v37;
    v18.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v18);
    *(_QWORD *)&v33 = &off_173510;
    *((_QWORD *)&v33 + 1) = <&T as core::fmt::Display>::fmt;
    v18.m256i_i64[0] = (__int64)&unk_1734C0;
    v18.m256i_i64[1] = 2LL;
    *(_QWORD *)&v19 = 0LL;
    v18.m256i_i64[2] = (__int64)&v33;
    v18.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v18);
    uucore::mods::error::set_exit_code(1LL);
    *(_BYTE *)(a1 + 141) = 1;
    notify::poll::PollWatcher::with_opt(&v18, v29, v28, &v30);
    core::result::Result<T,E>::unwrap(&v33, &v18, &off_173520);
    v21 = alloc::boxed::Box<T>::new(&v33);
    core::ptr::drop_in_place<notify::error::Error>(&v42);
    v12 = v23;
    v8 = v12 >> 64;
    v4 = v12;
    v7 = &off_173538;
    v6 = v21;
    goto LABEL_9;
  }
  v20 = v27;
  v19 = v26;
  v18 = v25;
  <T as alloc::string::SpecToString>::spec_to_string(&v40, &v18);
  v35 = 1;
  v33 = v40;
  v34 = v41;
  v17 = alloc::boxed::Box<T>::new(&v33, &v18, v13, v14, v15, v16);
  core::ptr::drop_in_place<notify::error::Error>(&v18);
  core::ptr::drop_in_place<std::sync::mpsc::Sender<core::result::Result<notify_types::event::Event,notify::error::Error>>>(v24);
  core::ptr::drop_in_place<std::sync::mpsc::Receiver<core::result::Result<notify_types::event::Event,notify::error::Error>>>(&v23);
  return v17;
}