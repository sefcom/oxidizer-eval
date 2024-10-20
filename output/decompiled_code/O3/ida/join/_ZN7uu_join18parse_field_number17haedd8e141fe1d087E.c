__int64 (__fastcall **__fastcall uu_join::parse_field_number(_QWORD *a1, __int64 a2, __int64 a3))()
{
  __int64 (__fastcall **result)(); // rax
  _OWORD *v5; // rax
  __int128 v6; // xmm0
  _BYTE v7[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v8; // [rsp+8h] [rbp-A0h]
  _QWORD v9[2]; // [rsp+10h] [rbp-98h] BYREF
  __int128 v10; // [rsp+20h] [rbp-88h] BYREF
  __int128 v11; // [rsp+30h] [rbp-78h]
  _QWORD v12[3]; // [rsp+40h] [rbp-68h] BYREF
  char v13; // [rsp+58h] [rbp-50h]
  _QWORD v14[9]; // [rsp+60h] [rbp-48h] BYREF

  result = (__int64 (__fastcall **)())core::num::<impl core::str::traits::FromStr for usize>::from_str(v7);
  if ( v7[0] )
  {
    if ( v7[1] == 2 )
    {
      a1[1] = -1LL;
      *a1 = 0LL;
      return result;
    }
  }
  else if ( v8 )
  {
    result = (__int64 (__fastcall **)())(v8 - 1);
    a1[1] = v8 - 1;
    *a1 = 0LL;
    return result;
  }
  v12[0] = 0LL;
  v12[1] = a2;
  v12[2] = a3;
  v13 = 1;
  v9[0] = v12;
  v9[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  v14[0] = &off_FDD90;
  v14[1] = 1LL;
  v14[4] = 0LL;
  v14[2] = v9;
  v14[3] = 1LL;
  alloc::fmt::format::format_inner(&v10, v14);
  DWORD2(v11) = 1;
  v5 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v5 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v6 = v10;
  v5[1] = v11;
  *v5 = v6;
  *a1 = v5;
  result = &off_FDB88;
  a1[1] = &off_FDB88;
  return result;
}
