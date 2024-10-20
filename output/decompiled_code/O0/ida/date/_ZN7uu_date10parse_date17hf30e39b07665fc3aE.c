__int64 __fastcall uu_date::parse_date(int a1, __int64 a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  int v8; // [rsp+0h] [rbp-58h]
  int v9[2]; // [rsp+8h] [rbp-50h]
  int v10; // [rsp+10h] [rbp-48h]
  int v11[2]; // [rsp+18h] [rbp-40h]
  int v12[10]; // [rsp+30h] [rbp-28h] BYREF

  v2 = <alloc::string::String as core::convert::AsRef<str>>::as_ref(a2);
  parse_datetime::parse_datetime(
    (int)v12,
    v2,
    v3,
    v4,
    v5,
    v6,
    v8,
    a2,
    a1,
    a1,
    v3,
    v2,
    *(struct _Unwind_Exception **)v12,
    v12[2]);
  core::result::Result<T,E>::map_err(v10, (int)v12, v9[0]);
  core::ptr::drop_in_place<alloc::string::String>(*(_QWORD *)v9);
  return *(_QWORD *)v11;
}
