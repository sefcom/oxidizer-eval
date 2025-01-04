        unsigned __int64 a4)
{
  __int64 result; // rax
  char v6[8]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v7; // [rsp+8h] [rbp-20h]

  if ( a4 )
  {
    if ( a4 >= a3 )
    {
      if ( a4 != a3 )
LABEL_4:
        core::str::slice_error_fail(a2, a3, 0LL, a4, &off_160EE8);
    }
    else if ( *(char *)(a2 + a4) <= -65 )
    {
      goto LABEL_4;
    }
  }
  core::num::<impl core::str::traits::FromStr for u64>::from_str(v6, a2, a4);
  if ( v6[0] )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(a1 + 1, a2, a3);
    result = 7LL;
  }
  else
  {
    a1[1] = v7;
    result = 14LL;
  }
  *a1 = result;
  return result;
}
