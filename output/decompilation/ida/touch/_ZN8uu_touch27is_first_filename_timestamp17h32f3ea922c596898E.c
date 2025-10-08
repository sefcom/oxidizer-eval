char __fastcall uu_touch::is_first_filename_timestamp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        unsigned __int64 a7)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r14
  unsigned __int8 year; // al
  _BYTE v13[16]; // [rsp+8h] [rbp-30h] BYREF
  __int64 v14; // [rsp+18h] [rbp-20h]
  __int64 v15; // [rsp+20h] [rbp-18h]

  if ( a4 | a1 || a2 != 0 || a7 < 2 )
    return 0;
  std::env::var(v13);
  if ( (v13[0] & 1) != 0
    || !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v15, a199209, 6LL) )
  {
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v13);
    return 0;
  }
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v13);
  v8 = *a6;
  v9 = *(_QWORD *)(*a6 + 8);
  v10 = *(_QWORD *)(v8 + 16);
  if ( !(unsigned __int8)uu_touch::all_digits(v9, v10) )
    return 0;
  if ( v10 != 8 )
  {
    if ( v10 == 10 )
    {
      year = uu_touch::get_year(*(_BYTE *)(v9 + 8), *(_BYTE *)(v9 + 9));
      return core::ops::range::RangeBounds::contains(year);
    }
    return 0;
  }
  return 1;
}