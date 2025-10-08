__int64 __fastcall rg::flags::hiargs::current_dir(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax
  _QWORD *v7; // rax
  __int64 v8; // [rsp+0h] [rbp-58h] BYREF
  __int128 v9; // [rsp+8h] [rbp-50h] BYREF
  _QWORD *v10; // [rsp+18h] [rbp-40h]
  __int64 v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+28h] [rbp-30h]
  _QWORD v13[4]; // [rsp+38h] [rbp-20h] BYREF

  std::env::current_dir(&v9);
  if ( !__OFSUB__(0LL, (_QWORD)v9) )
  {
    result = (__int64)v10;
    *(_QWORD *)(a1 + 16) = v10;
    *(_OWORD *)a1 = v9;
    return result;
  }
  v8 = *((_QWORD *)&v9 + 1);
  std::env::var_os(&v9, aPwd, 3LL);
  v1 = *((_QWORD *)&v9 + 1);
  if ( (_QWORD)v9 == 0x8000000000000000LL )
  {
    core::ptr::drop_in_place<rg::flags::FlagValue>(0x8000000000000000LL, *((_QWORD *)&v9 + 1));
LABEL_8:
    v13[0] = &v8;
    v13[1] = <std::io::error::Error as core::fmt::Display>::fmt;
    *(_QWORD *)&v9 = &off_3EB280;
    *((_QWORD *)&v9 + 1) = 2LL;
    v12 = 0LL;
    v10 = v13;
    v11 = 1LL;
    *(_QWORD *)(a1 + 8) = anyhow::__private::format_err(&v9, v1, v2, v3, v4, v5);
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<std::io::error::Error>(&v8);
  }
  v7 = v10;
  if ( !v10 )
  {
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v9, *((_QWORD *)&v9 + 1));
    goto LABEL_8;
  }
  *(_OWORD *)a1 = v9;
  *(_QWORD *)(a1 + 16) = v7;
  return core::ptr::drop_in_place<std::io::error::Error>(&v8);
}