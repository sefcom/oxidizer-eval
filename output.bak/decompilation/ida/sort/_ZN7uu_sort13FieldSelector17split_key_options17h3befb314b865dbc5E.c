__int64 __fastcall uu_sort::FieldSelector::split_key_options(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax
  int v8; // edx
  __int64 v9; // r12
  __int128 v10; // xmm0
  _QWORD v11[3]; // [rsp+0h] [rbp-58h] BYREF
  _OWORD v12[4]; // [rsp+18h] [rbp-40h] BYREF

  v11[2] = 0LL;
  v11[0] = a2;
  v11[1] = a2 + a3;
  result = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64, __int64, __int64, __int64))core::iter::traits::iterator::Iterator::try_fold)(
             v11,
             a2,
             a3,
             a4,
             a5,
             a6);
  if ( v8 == 1114112 )
  {
    *a1 = a2;
    a1[1] = a3;
    a1[2] = 1LL;
    a1[3] = 0LL;
  }
  else
  {
    v9 = result;
    result = core::str::<impl str>::split_at_checked(v12, a2, a3, result);
    if ( !*(_QWORD *)&v12[0] )
      core::str::slice_error_fail(a2, a3, 0LL, v9, &off_1FFA90);
    v10 = v12[0];
    *((_OWORD *)a1 + 1) = v12[1];
    *(_OWORD *)a1 = v10;
  }
  return result;
}
