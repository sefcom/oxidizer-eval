__int64 __fastcall uu_stat::check_bound(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD v10[2]; // [rsp+8h] [rbp-A0h] BYREF
  _QWORD v11[3]; // [rsp+18h] [rbp-90h] BYREF
  char v12; // [rsp+30h] [rbp-78h]
  _QWORD v13[6]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v14[24]; // [rsp+68h] [rbp-40h] BYREF
  int v15; // [rsp+80h] [rbp-28h]

  if ( a5 < a3 )
    return 0LL;
  v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
         a4,
         a5,
         a1,
         a2);
  if ( !v8 )
    core::str::slice_error_fail(a1, a2, a4, a5, &off_119A00);
  v11[0] = 0LL;
  v11[1] = v8;
  v11[2] = v9;
  v12 = 1;
  v10[0] = v11;
  v10[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  v13[0] = &unk_1199E0;
  v13[1] = 2LL;
  v13[4] = 0LL;
  v13[2] = v10;
  v13[3] = 1LL;
  core::option::Option<T>::map_or_else(v14, v13);
  v15 = 1;
  return alloc::boxed::Box<T>::new(v14);
}