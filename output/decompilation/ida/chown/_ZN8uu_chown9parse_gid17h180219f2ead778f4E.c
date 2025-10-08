void __fastcall uu_chown::parse_gid(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  int v16; // eax
  __int128 v17; // [rsp+0h] [rbp-C8h] BYREF
  _QWORD *v18; // [rsp+10h] [rbp-B8h]
  __int64 v19; // [rsp+18h] [rbp-B0h]
  __int64 v20; // [rsp+20h] [rbp-A8h]
  __int64 v21; // [rsp+38h] [rbp-90h] BYREF
  __int64 v22; // [rsp+40h] [rbp-88h]
  int v23; // [rsp+50h] [rbp-78h]
  _QWORD v24[2]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD v25[3]; // [rsp+68h] [rbp-60h] BYREF
  char v26; // [rsp+80h] [rbp-48h]
  __int128 v27; // [rsp+88h] [rbp-40h] BYREF
  _QWORD *v28; // [rsp+98h] [rbp-30h]

  if ( a3 )
  {
    <uucore::features::entries::Group as uucore::features::entries::Locate<&str>>::locate(&v21);
    v9 = v21;
    if ( __OFSUB__(-v21, 1LL) )
    {
      v10 = core::num::<impl u32>::from_ascii_radix(a2, a3);
      if ( (v10 & 1) != 0 )
      {
        v25[0] = 0LL;
        v25[1] = a4;
        v25[2] = a5;
        v26 = 1;
        v24[0] = v25;
        v24[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v17 = &off_F5FA0;
        *((_QWORD *)&v17 + 1) = 1LL;
        v20 = 0LL;
        v18 = v24;
        v19 = 1LL;
        core::option::Option<T>::map_or_else(&v27, &v17);
        LODWORD(v19) = 1;
        v17 = v27;
        v18 = v28;
        *(_QWORD *)a1 = ((__int64 (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))alloc::boxed::Box<T>::new)(
                          &v17,
                          &v17,
                          v11,
                          v12,
                          v13,
                          v14);
        *(_QWORD *)(a1 + 8) = &off_F5F38;
      }
      else
      {
        *(_DWORD *)(a1 + 8) = 1;
        *(_DWORD *)(a1 + 12) = HIDWORD(v10);
        *(_QWORD *)a1 = 0LL;
      }
      core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Group,std::io::error::Error>>(
        0x8000000000000000LL,
        v22);
    }
    else
    {
      v15 = v22;
      v16 = v23;
      *(_DWORD *)(a1 + 8) = 1;
      *(_DWORD *)(a1 + 12) = v16;
      *(_QWORD *)a1 = 0LL;
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(v9, v15);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0LL;
  }
}