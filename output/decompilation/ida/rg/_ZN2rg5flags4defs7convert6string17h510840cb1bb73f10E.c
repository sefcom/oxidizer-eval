__int64 __fastcall rg::flags::defs::convert::string(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _BYTE v8[24]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v9; // [rsp+18h] [rbp-60h]
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  __int128 v11; // [rsp+38h] [rbp-40h]
  __int64 v12; // [rsp+48h] [rbp-30h]

  alloc::string::String::from_utf8(v8);
  if ( __OFSUB__(0LL, *(_QWORD *)v8) )
  {
    result = v9;
    v3 = *(_OWORD *)&v8[8];
    v11 = *(_OWORD *)&v8[8];
    v12 = v9;
    *(_QWORD *)(a1 + 16) = v9;
    *(_OWORD *)a1 = v3;
  }
  else
  {
    v11 = *(_OWORD *)v8;
    v12 = *(_QWORD *)&v8[16];
    v10 = 1LL;
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::ffi::os_str::OsString>>(&v10);
    *(_QWORD *)v8 = &off_3EA250;
    *(_QWORD *)&v8[8] = 1LL;
    *(_QWORD *)&v8[16] = 8LL;
    v9 = 0LL;
    result = ((__int64 (__fastcall *)(_BYTE *, __int64, __int64, __int64, __int64, __int64))anyhow::__private::format_err)(
               v8,
               a2,
               v4,
               v5,
               v6,
               v7);
    *(_QWORD *)(a1 + 8) = result;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  return result;
}