_QWORD *__fastcall uu_date::parse_date::{{closure}}(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *result; // rax
  _QWORD v7[3]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v8; // [rsp+50h] [rbp-28h]
  __int64 v9; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+60h] [rbp-18h]

  v3 = <&T as core::convert::AsRef<U>>::as_ref(a2);
  <T as core::convert::Into<U>>::into(v7, v3, v4, &off_2CE438);
  result = a1;
  v8 = *a3;
  v9 = a3[1];
  v10 = a3[2];
  *a1 = v7[0];
  a1[1] = v7[1];
  a1[2] = v7[2];
  a1[3] = v8;
  a1[4] = v9;
  a1[5] = v10;
  return result;
}
