__int64 __fastcall uu_stat::print_str(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // r14
  unsigned __int64 v9; // r12
  __int64 v11; // rax
  __int64 v12; // rdx

  v7 = a2;
  v8 = a1;
  if ( a5 == 2 && a6 < a2 )
  {
    v9 = a4;
    v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
            a6,
            a1,
            a2);
    if ( !v11 )
      core::str::slice_error_fail(a1, a2, 0LL, a6, &off_119BB0);
    v7 = v12;
    v8 = v11;
    a4 = v9;
  }
  return uu_stat::pad_and_print(v8, v7, a3, a4, 1);
}