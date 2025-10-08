__int64 __fastcall uu_touch::prepend_century(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax
  int v7; // [rsp+Ch] [rbp-7Ch] BYREF
  _QWORD v8[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v9[4]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v10[9]; // [rsp+40h] [rbp-48h] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v4 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(a2, a3);
  if ( !v4 )
    core::str::slice_error_fail(a2, a3, 0LL, 2LL, &off_279ED8);
  v5 = core::num::<impl u32>::from_ascii_radix(v4);
  if ( (v5 & 1) != 0 )
  {
    a1[1] = uu_touch::prepend_century::{{closure}}(a2, a3);
    a1[2] = &off_279E10;
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    v7 = (HIDWORD(v5) < 0x45) + 19;
    v9[0] = &v7;
    v9[1] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v9[2] = v8;
    v9[3] = <&T as core::fmt::Display>::fmt;
    v10[0] = "\x01";
    v10[1] = 2LL;
    v10[4] = 0LL;
    v10[2] = v9;
    v10[3] = 2LL;
    return core::option::Option<T>::map_or_else(a1, v10);
  }
  return result;
}