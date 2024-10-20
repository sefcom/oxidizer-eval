__int64 __fastcall uu_sort::uumain::uumain::{{closure}}(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  int v8; // [rsp+0h] [rbp-D8h]
  int v9[4]; // [rsp+20h] [rbp-B8h] BYREF
  int v10[4]; // [rsp+38h] [rbp-A0h] BYREF
  int v11[2]; // [rsp+48h] [rbp-90h]
  int v12[12]; // [rsp+50h] [rbp-88h] BYREF
  _OWORD v13[2]; // [rsp+80h] [rbp-58h] BYREF
  char v14[32]; // [rsp+A8h] [rbp-30h] BYREF
  __int128 v15; // [rsp+C8h] [rbp-10h]

  v1 = <std::ffi::os_str::OsString as core::ops::deref::Deref>::deref(a1);
  <std::ffi::os_str::OsStr as os_display::native::Quotable>::quote(v14, v1, v2);
  *(_QWORD *)&v15 = v14;
  *((_QWORD *)&v15 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
  v13[1] = v15;
  v13[0] = v15;
  core::fmt::Arguments::new_v1(v12, &off_1CF520, v13);
  alloc::fmt::format(v10, v12);
  return uucore::mods::error::UUsageError::new(
           2,
           (int)v9,
           v3,
           v4,
           v5,
           v6,
           v8,
           (char)v14,
           (int)v12,
           a1,
           v10[0],
           v10[2],
           v11[0],
           v10[0],
           *(struct _Unwind_Exception **)&v10[2],
           v11[0]);
}
