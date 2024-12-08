__int64 __fastcall uu_sort::FieldSelector::split_key_options(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // edx
  __int64 v6; // r12
  __int128 v7; // xmm0
  _QWORD v8[3]; // [rsp+0h] [rbp-58h] BYREF
  _OWORD v9[4]; // [rsp+18h] [rbp-40h] BYREF

  v8[2] = 0LL;
  v8[0] = a2;
  v8[1] = a2 + a3;
  result = ((__int64 (__fastcall *)(_QWORD *))core::iter::traits::iterator::Iterator::try_fold)(v8);
  if ( v5 == (_DWORD)&loc_110000 )
  {
    *a1 = a2;
    a1[1] = a3;
    a1[2] = 1LL;
    a1[3] = 0LL;
  }
  else
  {
    v6 = result;
    result = core::str::<impl str>::split_at_checked(v9, a2, a3, result);
    if ( !*(_QWORD *)&v9[0] )
      core::str::slice_error_fail(a2, a3, 0LL, v6, &off_1FEF68);
    v7 = v9[0];
    *((_OWORD *)a1 + 1) = v9[1];
    *(_OWORD *)a1 = v7;
  }
  return result;
}
