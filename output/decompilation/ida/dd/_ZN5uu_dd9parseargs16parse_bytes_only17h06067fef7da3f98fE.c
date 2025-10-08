__int64 __fastcall uu_dd::parseargs::parse_bytes_only(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  char v8[8]; // [rsp+8h] [rbp-30h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h]

  v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(a4);
  if ( !v6 )
    core::str::slice_error_fail(a2, a3, 0LL, a4, &off_13D948);
  core::num::<impl u64>::from_ascii_radix(v8, v6);
  if ( v8[0] )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 1, a2, a3);
    result = 7LL;
  }
  else
  {
    a1[1] = v9;
    result = 14LL;
  }
  *a1 = result;
  return result;
}