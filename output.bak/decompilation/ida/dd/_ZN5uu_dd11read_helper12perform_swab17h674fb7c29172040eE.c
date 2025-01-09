__int64 __fastcall uu_dd::read_helper::perform_swab(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  __int64 v7; // [rsp+8h] [rbp-40h]
  __int64 v8; // [rsp+10h] [rbp-38h]

  result = core::iter::adapters::step_by::StepBy<I>::new(&v6);
  v3 = v7;
  if ( v7 )
  {
    v4 = v6;
    v5 = v8 + 1;
    do
    {
      result = core::slice::<impl [T]>::swap(a1, a2, v4, v4 - 1);
      v4 += v5;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
