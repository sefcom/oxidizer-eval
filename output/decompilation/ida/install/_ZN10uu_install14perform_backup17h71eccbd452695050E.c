__int64 __fastcall uu_install::perform_backup(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebp
  __int64 result; // rax
  __int64 v8; // rax
  __int128 v9; // [rsp+8h] [rbp-150h] BYREF
  __int64 v10; // [rsp+18h] [rbp-140h]
  __int64 v11; // [rsp+20h] [rbp-138h] BYREF
  __int128 v12; // [rsp+28h] [rbp-130h]
  __int128 v13; // [rsp+38h] [rbp-120h]
  __int128 v14; // [rsp+48h] [rbp-110h]
  __int64 v15; // [rsp+58h] [rbp-100h]
  _QWORD v16[3]; // [rsp+60h] [rbp-F8h] BYREF
  char **dest; // [rsp+78h] [rbp-E0h] BYREF
  __int128 v18; // [rsp+80h] [rbp-D8h]
  __int128 v19; // [rsp+90h] [rbp-C8h]
  __int128 v20; // [rsp+A0h] [rbp-B8h]
  __int64 v21; // [rsp+B0h] [rbp-A8h]

  std::fs::metadata(&dest);
  v6 = (int)dest;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, a2);
  if ( v6 == 2 )
  {
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    if ( *(_BYTE *)(a4 + 97) )
    {
      v11 = 1LL;
      *(_QWORD *)&v12 = a2;
      *((_QWORD *)&v12 + 1) = a3;
      LOBYTE(v13) = 1;
      *(_QWORD *)&v9 = &v11;
      *((_QWORD *)&v9 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      dest = &off_102498;
      *(_QWORD *)&v18 = 2LL;
      *((_QWORD *)&v18 + 1) = &v9;
      v19 = 1uLL;
      std::io::stdio::_print(&dest);
    }
    uucore::features::backup_control::get_backup_path(
      &v9,
      *(unsigned __int8 *)(a4 + 103),
      a2,
      a3,
      *(_QWORD *)(a4 + 8),
      *(_QWORD *)(a4 + 16));
    if ( (_QWORD)v9 == 0x8000000000000000LL
      || (v8 = std::fs::rename(a2, a3, &v9), v16[0] = a2, v16[1] = a3, v16[2] = &v9, !v8) )
    {
      result = v10;
      a1[2] = v10;
      *(_OWORD *)a1 = v9;
    }
    else
    {
      uu_install::perform_backup::{{closure}}(&v11, v16, v8);
      v21 = v15;
      v20 = v14;
      v19 = v13;
      v18 = v12;
      dest = (char **)v11;
      a1[1] = alloc::boxed::Box<T>::new(&dest);
      a1[2] = &off_102208;
      *a1 = 0x8000000000000001LL;
      return core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v9);
    }
  }
  return result;
}