_QWORD *__fastcall uu_link::uumain::uumain::{{closure}}(_QWORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v4[48]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v5[6]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v6[32]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE *v7; // [rsp+B8h] [rbp-50h]
  __int64 (__fastcall *v8)(); // [rsp+C0h] [rbp-48h]
  _BYTE v9[32]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE *v10; // [rsp+E8h] [rbp-20h]
  __int64 (__fastcall *v11)(); // [rsp+F0h] [rbp-18h]
  _BYTE *v12; // [rsp+F8h] [rbp-10h]
  __int64 (__fastcall *v13)(); // [rsp+100h] [rbp-8h]

  <std::path::Path as os_display::native::Quotable>::quote(v6, *a2, a2[1]);
  v12 = v6;
  v13 = <os_display::Quoted as core::fmt::Display>::fmt;
  v5[4] = v6;
  v5[5] = <os_display::Quoted as core::fmt::Display>::fmt;
  <std::path::Path as os_display::native::Quotable>::quote(v9, a2[2], a2[3]);
  v10 = v9;
  v11 = <os_display::Quoted as core::fmt::Display>::fmt;
  v7 = v9;
  v8 = <os_display::Quoted as core::fmt::Display>::fmt;
  v5[0] = v6;
  v5[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  v5[2] = v9;
  v5[3] = <os_display::Quoted as core::fmt::Display>::fmt;
  core::fmt::Arguments::new_v1(v4, &off_FDC78, v5);
  alloc::fmt::format(v3, v4);
  result = a1;
  *a1 = v3[0];
  a1[1] = v3[1];
  a1[2] = v3[2];
  return result;
}
