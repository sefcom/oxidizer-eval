__int64 __fastcall uu_sort::month_parse(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char *v3; // rdx
  char *v4; // r14
  __int64 i; // rbp
  char *v6; // r8
  int v8; // [rsp+0h] [rbp-78h]
  int v9; // [rsp+8h] [rbp-70h]
  char v10; // [rsp+Fh] [rbp-69h] BYREF
  int v11[12]; // [rsp+10h] [rbp-68h] BYREF
  struct _Unwind_Exception *v12; // [rsp+40h] [rbp-38h]
  int v13; // [rsp+48h] [rbp-30h]

  v2 = core::str::<impl str>::trim_matches(a1, a2);
  v4 = v3;
  for ( i = 2LL; i != 38; i += 3LL )
  {
    v6 = (&off_1D3370)[i - 1];
    if ( v6 )
    {
      if ( v6 >= v4 )
      {
        if ( v6 != v4 )
          continue;
      }
      else
      {
        if ( v6[v2] <= -65 )
          continue;
        if ( v6[v2] < -64 )
          goto LABEL_14;
      }
    }
    if ( v6 > v4 )
      core::panicking::panic_nounwind(anon_ff765ffa8c564fe4079308b568cc8f06_8_llvm_17873003023693898768, 102LL);
    if ( !v2 )
LABEL_14:
      core::str::slice_error_fail(v2, v4, 0LL, (&off_1D3370)[i - 1], &off_1D3490);
    <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::new(
      (int)v11,
      v2,
      v8,
      v9,
      v11[0],
      v11[2],
      v11[4],
      v11[6],
      v11[8],
      v11[10],
      v12,
      v13);
    v10 = core::iter::traits::iterator::Iterator::try_fold(v11);
    if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(
                            &v10,
                            &anon_ff3add0fc2121d489142e144a6a370f6_26_llvm_5182399808099546885) )
      return LOBYTE((&off_1D3370)[i]);
  }
  return 0LL;
}
