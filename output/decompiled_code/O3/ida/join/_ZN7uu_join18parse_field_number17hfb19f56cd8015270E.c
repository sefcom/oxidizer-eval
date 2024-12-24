__int64 (__fastcall **__fastcall uu_join::parse_field_number(_QWORD *a1, __int64 a2, __int64 a3))()
{
  __int64 (__fastcall **result)(); // rax
  _BYTE v5[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v6; // [rsp+8h] [rbp-A0h]
  _QWORD v7[2]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v8[3]; // [rsp+20h] [rbp-88h] BYREF
  char v9; // [rsp+38h] [rbp-70h]
  _QWORD v10[6]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v11[24]; // [rsp+70h] [rbp-38h] BYREF
  int v12; // [rsp+88h] [rbp-20h]

  result = (__int64 (__fastcall **)())core::num::<impl core::str::traits::FromStr for usize>::from_str(v5);
  if ( v5[0] )
  {
    if ( v5[1] == 2 )
    {
      a1[1] = -1LL;
      *a1 = 0LL;
      return result;
    }
  }
  else if ( v6 )
  {
    result = (__int64 (__fastcall **)())(v6 - 1);
    a1[1] = v6 - 1;
    *a1 = 0LL;
    return result;
  }
  v8[0] = 0LL;
  v8[1] = a2;
  v8[2] = a3;
  v9 = 1;
  v7[0] = v8;
  v7[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  v10[0] = &off_136050;
  v10[1] = 1LL;
  v10[4] = 0LL;
  v10[2] = v7;
  v10[3] = 1LL;
  core::option::Option<T>::map_or_else(v11, v10);
  v12 = 1;
  *a1 = alloc::boxed::Box<T>::new(v11);
  result = &off_135E48;
  a1[1] = &off_135E48;
  return result;
}
