__int64 __fastcall uu_dd::read_helper::perform_swab(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r12
  unsigned __int64 v5; // r15
  __int64 v6; // r13
  unsigned __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+8h] [rbp-40h]
  __int64 v9; // [rsp+10h] [rbp-38h]

  result = core::iter::adapters::step_by::StepBy<I>::new(&v7);
  v4 = v8;
  if ( v8 )
  {
    v5 = v7;
    v6 = v9 + 1;
    do
    {
      if ( v5 >= a2 )
        core::panicking::panic_bounds_check(v5, a2, &off_13DED0, v3);
      if ( v5 - 1 >= a2 )
        core::panicking::panic_bounds_check(v5 - 1, a2, &off_13DED0, v3);
      --v4;
      result = core::ptr::swap(a1 + v5, a1 + v5 - 1);
      v5 += v6;
    }
    while ( v4 );
  }
  return result;
}