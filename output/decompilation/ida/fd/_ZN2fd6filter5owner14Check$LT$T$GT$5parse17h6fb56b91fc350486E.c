__int64 __fastcall fd::filter::owner::Check<T>::parse(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int8 v8; // bp
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  _DWORD v12[2]; // [rsp+8h] [rbp-30h] BYREF
  __int64 v13; // [rsp+10h] [rbp-28h]

  if ( a2 && (v3 = a3, v4 = a2, !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, 1LL, 0LL)) )
  {
    v12[0] = 0;
    v6 = core::char::methods::encode_utf8_raw(33LL, v12);
    v8 = core::slice::<impl [T]>::starts_with(a2, v3, v6, v7);
    if ( v8 )
    {
      v9 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
             1LL,
             a2,
             v3);
      if ( !v9 )
        core::str::slice_error_fail(a2, v3, 1LL, v3, &off_402368);
      v4 = v9;
      v3 = v10;
    }
    fd::filter::owner::OwnerFilter::from_string::{{closure}}(v12, v4, v3);
    if ( (v12[0] & 1) != 0 )
    {
      *(_QWORD *)(a1 + 8) = v13;
      result = 1LL;
    }
    else
    {
      v11 = v12[1];
      *(_DWORD *)(a1 + 4) = v8;
      *(_DWORD *)(a1 + 8) = v11;
      result = 0LL;
    }
    *(_DWORD *)a1 = result;
  }
  else
  {
    result = 0x200000000LL;
    *(_QWORD *)a1 = 0x200000000LL;
  }
  return result;
}