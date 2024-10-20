__int64 __fastcall uu_date::parse_date(int a1, __int64 a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  int v8; // [rsp+0h] [rbp-58h]
  int v9; // [rsp+8h] [rbp-50h]
  int v10[2]; // [rsp+10h] [rbp-48h]
  int v11[2]; // [rsp+28h] [rbp-30h] BYREF
  int v12[6]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)v11 = a2;
  v2 = <&T as core::convert::AsRef<U>>::as_ref(v11);
  parse_datetime::parse_datetime(
    (int)v12,
    v2,
    v3,
    v4,
    v5,
    v6,
    v8,
    a1,
    a1,
    v3,
    v2,
    v11[0],
    *(struct _Unwind_Exception **)v12,
    v12[2]);
  core::result::Result<T,E>::map_err(v9, (int)v12, (int)v11);
  return *(_QWORD *)v10;
}
