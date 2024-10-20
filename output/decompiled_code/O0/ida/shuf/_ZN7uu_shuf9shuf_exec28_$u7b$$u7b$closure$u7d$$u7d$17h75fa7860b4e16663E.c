_QWORD *__fastcall uu_shuf::shuf_exec::{{closure}}(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *result; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v5[48]; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v6[4]; // [rsp+68h] [rbp-50h] BYREF
  _BYTE v7[32]; // [rsp+88h] [rbp-30h] BYREF
  _BYTE *v8; // [rsp+A8h] [rbp-10h]
  __int64 (__fastcall *v9)(); // [rsp+B0h] [rbp-8h]

  v2 = <alloc::string::String as core::ops::deref::Deref>::deref(a2);
  <str as os_display::native::Quotable>::quote(v7, v2);
  v8 = v7;
  v9 = <os_display::Quoted as core::fmt::Display>::fmt;
  v6[2] = v7;
  v6[3] = <os_display::Quoted as core::fmt::Display>::fmt;
  v6[0] = v7;
  v6[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  core::fmt::Arguments::new_v1(v5, &off_11F8D8, v6);
  alloc::fmt::format(v4, v5);
  result = a1;
  *a1 = v4[0];
  a1[1] = v4[1];
  a1[2] = v4[2];
  return result;
}
