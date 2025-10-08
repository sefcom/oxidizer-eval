__int64 __fastcall bat::assets::clear_asset(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD *v4; // r14
  _QWORD *v6; // [rsp+8h] [rbp-80h] BYREF
  char **v7; // [rsp+10h] [rbp-78h] BYREF
  __int64 v8; // [rsp+18h] [rbp-70h]
  _QWORD **v9; // [rsp+20h] [rbp-68h]
  __int128 v10; // [rsp+28h] [rbp-60h]
  _QWORD *v11; // [rsp+40h] [rbp-48h] BYREF
  __int64 (__fastcall *v12)(); // [rsp+48h] [rbp-40h]
  _QWORD *v13; // [rsp+50h] [rbp-38h]
  __int64 (__fastcall *v14)(); // [rsp+58h] [rbp-30h]
  _QWORD v15[5]; // [rsp+60h] [rbp-28h] BYREF

  v15[0] = a2;
  v15[1] = a3;
  v11 = v15;
  v12 = <&T as core::fmt::Display>::fmt;
  v7 = &off_6C8540;
  v8 = 2LL;
  v9 = &v11;
  v10 = 1uLL;
  std::io::stdio::_print(&v7);
  v3 = std::fs::remove_file(a1);
  v4 = (_QWORD *)v3;
  if ( v3 )
  {
    if ( (unsigned __int8)std::io::error::Error::kind(v3) )
    {
      v6 = v4;
      v11 = a1;
      v12 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
      v13 = &v6;
      v14 = <std::io::error::Error as core::fmt::Display>::fmt;
      v7 = &off_6C8580;
      v8 = 3LL;
      v9 = &v11;
      v10 = 2uLL;
      std::io::stdio::_print(&v7);
      core::ptr::drop_in_place<std::io::error::Error>(&v6);
    }
    else
    {
      v11 = v4;
      v7 = &off_6C8570;
      v8 = 1LL;
      v9 = (_QWORD **)&byte_8;
      v10 = 0LL;
      std::io::stdio::_print(&v7);
      core::ptr::drop_in_place<std::io::error::Error>(&v11);
    }
  }
  else
  {
    v7 = &off_6C8560;
    v8 = 1LL;
    v9 = (_QWORD **)&byte_8;
    v10 = 0LL;
    std::io::stdio::_print(&v7);
  }
  return core::ptr::drop_in_place<std::path::PathBuf>(a1);
}