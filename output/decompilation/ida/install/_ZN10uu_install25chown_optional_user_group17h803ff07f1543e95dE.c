__int64 __fastcall uu_install::chown_optional_user_group(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebp
  int v5; // r12d
  __uid_t v6; // ecx
  __int64 result; // rax
  int v8; // r13d
  __int128 *v9; // rdi
  int v10; // [rsp+0h] [rbp-158h]
  int v11; // [rsp+8h] [rbp-150h]
  __int128 v12; // [rsp+10h] [rbp-148h] BYREF
  __int64 v13; // [rsp+20h] [rbp-138h]
  _QWORD v14[2]; // [rsp+28h] [rbp-130h] BYREF
  __int64 v15; // [rsp+38h] [rbp-120h] BYREF
  __int128 v16; // [rsp+40h] [rbp-118h] BYREF
  __int64 v17; // [rsp+50h] [rbp-108h]
  char **dest; // [rsp+78h] [rbp-E0h] BYREF
  __int128 v19; // [rsp+80h] [rbp-D8h]
  __int64 v20; // [rsp+90h] [rbp-C8h]
  __int128 v21; // [rsp+98h] [rbp-C0h]
  __int64 v22; // [rsp+A8h] [rbp-B0h]
  int v23; // [rsp+B4h] [rbp-A4h]
  int v24; // [rsp+B8h] [rbp-A0h]

  v4 = *(_DWORD *)(a3 + 80);
  v5 = *(_DWORD *)(a3 + 88);
  if ( v5 | v4 )
  {
    v11 = *(_DWORD *)(a3 + 84);
    v10 = *(_DWORD *)(a3 + 92);
    v8 = *(_DWORD *)(a3 + 80);
  }
  else
  {
    v6 = uucore::features::process::geteuid();
    result = 0LL;
    if ( v6 )
      return result;
    v11 = 0;
    v8 = 1;
    LOBYTE(v5) = 1;
    v10 = 0;
  }
  std::fs::metadata(&dest);
  if ( (_DWORD)dest == 2 )
  {
    *(_QWORD *)&v16 = v19;
    v15 = 10LL;
    return alloc::boxed::Box<T>::new(&v15);
  }
  else
  {
    uucore::features::perms::wrap_chown((unsigned int)&v15, a1, a2, v23, v24, v8, v11, v5, v10, v4 == 0);
    if ( v15 == 1 )
    {
      std::path::Path::to_path_buf(&v12, a1, a2);
      v22 = v17;
      v21 = v16;
      v19 = v12;
      v20 = v13;
      dest = (char **)&byte_4;
      return alloc::boxed::Box<T>::new(&dest);
    }
    else
    {
      if ( *(_BYTE *)(a3 + 97) == 1 && v17 )
      {
        v13 = v17;
        v12 = v16;
        v14[0] = &v12;
        v14[1] = <alloc::string::String as core::fmt::Display>::fmt;
        dest = &off_102478;
        *(_QWORD *)&v19 = 2LL;
        *(_QWORD *)&v21 = 0LL;
        *((_QWORD *)&v19 + 1) = v14;
        v20 = 1LL;
        std::io::stdio::_print(&dest);
        v9 = &v12;
      }
      else
      {
        v9 = &v16;
      }
      core::ptr::drop_in_place<alloc::string::String>(v9);
      return 0LL;
    }
  }
}