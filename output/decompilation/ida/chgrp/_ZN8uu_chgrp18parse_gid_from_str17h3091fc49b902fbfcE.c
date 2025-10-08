__int64 __fastcall uu_chgrp::parse_gid_from_str(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  __int64 v13; // r14
  __int64 v14; // rax
  int v15; // ebp
  __int64 v16; // rdi
  char **v17; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+8h] [rbp-A0h]
  __int128 *v19; // [rsp+10h] [rbp-98h]
  __int64 v20; // [rsp+18h] [rbp-90h]
  __int64 v21; // [rsp+20h] [rbp-88h]
  __int128 v22; // [rsp+30h] [rbp-78h] BYREF
  __int64 v23; // [rsp+40h] [rbp-68h]
  _QWORD v24[2]; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v25[2]; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v26[8]; // [rsp+68h] [rbp-40h] BYREF

  v24[0] = a2;
  v24[1] = a3;
  LODWORD(v17) = 0;
  v4 = core::char::methods::encode_utf8_raw(&v17);
  v5 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v4, a2, a3);
  if ( v5 )
  {
    v25[0] = v5;
    v25[1] = v6;
    v7 = core::num::<impl u32>::from_ascii_radix(v5, v6);
    if ( (v7 & 1) != 0 )
    {
      *(_QWORD *)&v22 = v25;
      *((_QWORD *)&v22 + 1) = <&T as core::fmt::Display>::fmt;
      v17 = &off_F4838;
      v18 = 2LL;
      v21 = 0LL;
      v19 = &v22;
      v20 = 1LL;
      return ((__int64 (__fastcall *)(__int64, char ***, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
               a1,
               &v17,
               v8,
               v9,
               v10,
               v11);
    }
    else
    {
      *(_DWORD *)(a1 + 8) = HIDWORD(v7);
      result = 0x8000000000000000LL;
      *(_QWORD *)a1 = 0x8000000000000000LL;
    }
  }
  else
  {
    <uucore::features::entries::Group as uucore::features::entries::Locate<&str>>::locate(&v17, a2, a3);
    v13 = v18;
    if ( __OFSUB__(-(__int64)v17, 1LL) )
    {
      v14 = core::num::<impl u32>::from_ascii_radix(a2, a3);
      if ( (v14 & 1) != 0 )
      {
        v26[0] = v24;
        v26[1] = <&T as core::fmt::Display>::fmt;
        v17 = &off_F4858;
        v18 = 2LL;
        v21 = 0LL;
        v19 = (__int128 *)v26;
        v20 = 1LL;
        ((void (__fastcall *)(__int128 *, char ***))core::option::Option<T>::map_or_else)(&v22, &v17);
        *(_QWORD *)(a1 + 16) = v23;
        *(_OWORD *)a1 = v22;
      }
      else
      {
        *(_DWORD *)(a1 + 8) = HIDWORD(v14);
        *(_QWORD *)a1 = 0x8000000000000000LL;
      }
      v16 = 1LL;
    }
    else
    {
      v15 = v20;
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(v17, v18);
      *(_DWORD *)(a1 + 8) = v15;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      v16 = 0LL;
    }
    return core::ptr::drop_in_place<core::result::Result<u32,std::io::error::Error>>(v16, v13);
  }
  return result;
}