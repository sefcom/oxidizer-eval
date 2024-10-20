_QWORD *__fastcall uu_join::Line::new(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *result; // rax
  _QWORD v9[3]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+58h] [rbp-20h]
  __int64 v12; // [rsp+60h] [rbp-18h]

  v4 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(a2);
  <uu_join::MultiByteSep as uu_join::Separator>::field_ranges(v9, a3, v4, v5, a4);
  result = a1;
  v10 = *a2;
  v11 = a2[1];
  v12 = a2[2];
  *a1 = v9[0];
  a1[1] = v9[1];
  a1[2] = v9[2];
  a1[3] = v10;
  a1[4] = v11;
  a1[5] = v12;
  return result;
}
