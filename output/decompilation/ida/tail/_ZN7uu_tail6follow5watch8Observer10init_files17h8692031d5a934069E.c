__int64 __fastcall uu_tail::follow::watch::Observer::init_files(_DWORD *a1, _QWORD *a2, __int64 a3)
{
  _DWORD *v3; // rbx
  _QWORD *v4; // r13
  _QWORD *v5; // rax
  _QWORD *v6; // r15
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // r12
  _DWORD *v13; // r13
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 (__fastcall **v19)(); // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v23; // [rsp+8h] [rbp-80h]
  __int64 v24; // [rsp+10h] [rbp-78h] BYREF
  __int64 v25; // [rsp+18h] [rbp-70h]
  __int64 v26; // [rsp+20h] [rbp-68h]
  __int64 (__fastcall **v27)(); // [rsp+28h] [rbp-60h]
  _DWORD *v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+38h] [rbp-50h]
  _QWORD v30[9]; // [rsp+40h] [rbp-48h] BYREF

  if ( *a1 == 3 || !a3 )
    return 0LL;
  v3 = a1;
  v4 = &a2[6 * a3];
  v5 = a2 + 6;
  v28 = a1 + 8;
  v23 = 0LL;
  v27 = &off_172F18;
  while ( 1 )
  {
    v6 = v5;
    if ( a2[3] == 0x8000000000000000LL )
      goto LABEL_16;
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v24, a2[4], a2[5]);
    v7 = v24;
    v8 = v25;
    v9 = v26;
    if ( !(unsigned __int8)std::path::Path::is_absolute(v25, v26) )
      break;
LABEL_8:
    if ( (unsigned __int8)<std::path::Path as uu_tail::paths::PathExtTail>::is_tailable(v8, v9) )
    {
      v18 = uu_tail::follow::watch::WatcherRx::watch_with_parent(*((_QWORD *)v3 + 2), *((_QWORD *)v3 + 3), v8, v9);
      if ( v18 )
        goto LABEL_22;
    }
    else
    {
      if ( (unsigned __int8)<std::path::Path as uu_tail::paths::PathExtTail>::is_orphan(v8, v9) )
      {
        v24 = v7;
        v25 = v8;
        v26 = v9;
        alloc::vec::Vec<T,A>::push(v28, &v24, &off_173598);
        goto LABEL_16;
      }
      v20 = std::path::Path::parent(v8, v9);
      if ( !v20 )
        core::option::unwrap_failed(&off_173580);
      v18 = uu_tail::follow::watch::WatcherRx::watch(*((_QWORD *)v3 + 2), *((_QWORD *)v3 + 3), v20, v21);
      if ( v18 )
        goto LABEL_23;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(v7, v8);
LABEL_16:
    v5 = v6 + 6;
    if ( v6 != v4 )
    {
      a2 = v6;
      if ( v6 )
        continue;
    }
    return v23;
  }
  std::env::current_dir(&v24);
  v10 = v7;
  v11 = v8;
  v12 = v4;
  v13 = v3;
  v14 = v24;
  v15 = v25;
  if ( v24 != 0x8000000000000000LL )
  {
    v16 = v26;
    v24 = v10;
    v25 = v11;
    v26 = v9;
    std::path::Path::join(v30, v15, v16, &v24);
    v29 = v30[1];
    v9 = v30[2];
    v17 = v14;
    v7 = v30[0];
    core::ptr::drop_in_place<std::path::PathBuf>(v17, v15);
    v3 = v13;
    v4 = v12;
    v8 = v29;
    goto LABEL_8;
  }
  v8 = v11;
  v7 = v10;
  v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25);
LABEL_22:
  v27 = v19;
LABEL_23:
  v23 = v18;
  core::ptr::drop_in_place<std::path::PathBuf>(v7, v8);
  return v23;
}