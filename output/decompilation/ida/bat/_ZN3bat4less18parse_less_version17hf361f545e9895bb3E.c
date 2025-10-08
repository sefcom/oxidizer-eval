__int64 __fastcall bat::less::parse_less_version(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  _BYTE v9[8]; // [rsp+8h] [rbp-30h] BYREF
  __int64 v10; // [rsp+10h] [rbp-28h]
  __int64 v11; // [rsp+18h] [rbp-20h]

  v2 = 2LL;
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, aLess_1, 5LL) )
  {
    if ( a2 < 5 )
      core::slice::index::slice_start_index_len_fail(5LL, a2, &off_6CE768);
    core::str::converts::from_utf8(v9, a1 + 5, a2 - 5);
    if ( (v9[0] & 1) == 0 )
    {
      v4 = v10;
      v5 = v11;
      if ( (core::str::<impl str>::find(v10, v11) & 1) != 0 )
      {
        v7 = v6;
        v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
               v6,
               v4,
               v5);
        if ( !v8 )
          core::str::slice_error_fail(v4, v5, 0LL, v7, &off_6CE750);
        core::num::<impl usize>::from_ascii_radix(v9, v8);
        return 2 * (unsigned int)v9[0];
      }
    }
  }
  return v2;
}