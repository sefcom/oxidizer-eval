__int64 __fastcall uu_tail::follow::watch::Observer::init_files(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int128 v10; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+10h] [rbp-A8h]
  __int128 v12; // [rsp+20h] [rbp-98h] BYREF
  __int64 v13; // [rsp+30h] [rbp-88h]
  __int64 v14; // [rsp+40h] [rbp-78h]
  __int128 v15; // [rsp+48h] [rbp-70h] BYREF
  __int64 v16; // [rsp+58h] [rbp-60h]
  _QWORD v17[2]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v18; // [rsp+70h] [rbp-48h] BYREF
  __int64 v19; // [rsp+80h] [rbp-38h]

  if ( *(_DWORD *)a1 != 3 )
  {
    v17[0] = a2;
    v17[1] = a2 + 48 * a3;
    v14 = a1 + 32;
    while ( 1 )
    {
      do
      {
        v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v17);
        if ( !v5 )
          return 0LL;
      }
      while ( *(_QWORD *)(v5 + 24) == 0x8000000000000000LL );
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v12, v5 + 24);
      v11 = v13;
      v10 = v12;
      if ( !(unsigned __int8)std::path::Path::is_absolute(*((_QWORD *)&v12 + 1), v13) )
      {
        std::env::current_dir(&v12);
        v6 = *((_QWORD *)&v12 + 1);
        if ( (_QWORD)v12 == 0x8000000000000000LL )
        {
          v3 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v12 + 1));
LABEL_19:
          core::ptr::drop_in_place<std::path::PathBuf>(&v10);
          return v3;
        }
        v7 = v13;
        v15 = v12;
        v16 = v13;
        v13 = v11;
        v12 = v10;
        std::path::Path::join(&v18, v6, v7, &v12);
        v10 = v18;
        v11 = v19;
        core::ptr::drop_in_place<std::path::PathBuf>(&v15);
      }
      if ( (unsigned __int8)<std::path::Path as uu_tail::paths::PathExtTail>::is_tailable(*((_QWORD *)&v10 + 1), v11) )
        break;
      if ( (unsigned __int8)<std::path::Path as uu_tail::paths::PathExtTail>::is_orphan(*((_QWORD *)&v10 + 1), v11) )
      {
        v13 = v11;
        v12 = v10;
        alloc::vec::Vec<T,A>::push(v14, &v12);
      }
      else
      {
        v8 = std::path::Path::parent(*((_QWORD *)&v10 + 1), v11);
        if ( !v8 )
          core::option::unwrap_failed(&off_1BBF20);
        v3 = uu_tail::follow::watch::WatcherRx::watch(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), v8, v9);
        if ( v3 )
          goto LABEL_19;
LABEL_17:
        core::ptr::drop_in_place<std::path::PathBuf>(&v10);
      }
    }
    v3 = uu_tail::follow::watch::WatcherRx::watch_with_parent(
           *(_QWORD *)(a1 + 16),
           *(_QWORD *)(a1 + 24),
           *((__int64 *)&v10 + 1),
           v11);
    if ( v3 )
      goto LABEL_19;
    goto LABEL_17;
  }
  return 0LL;
}
