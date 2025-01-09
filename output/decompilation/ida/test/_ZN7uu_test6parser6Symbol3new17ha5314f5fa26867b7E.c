__int64 __fastcall uu_test::parser::Symbol::new(__int64 a1, __int128 *a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r12
  __int128 v6; // [rsp+0h] [rbp-58h] BYREF
  __int64 v7; // [rsp+10h] [rbp-48h]
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-28h]

  if ( *(_QWORD *)a2 != 0x8000000000000000LL )
  {
    v6 = *a2;
    v7 = *((_QWORD *)a2 + 2);
    std::sys::os_str::bytes::Slice::to_str(&v8, *((_QWORD *)&v6 + 1));
    if ( v8 )
    {
LABEL_4:
      *(_QWORD *)(a1 + 24) = v7;
      *(_OWORD *)(a1 + 8) = v6;
      *(_QWORD *)a1 = 3LL;
      return a1;
    }
    v2 = v9;
    v3 = v10;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, asc_1D271, 1LL) )
    {
      v4 = 0LL;
    }
    else
    {
      v4 = 1LL;
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, asc_1D272, 1LL) )
      {
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aA, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aO_0, 2LL) )
        {
          *(_QWORD *)(a1 + 24) = v7;
          *(_OWORD *)(a1 + 8) = v6;
          *(_QWORD *)a1 = 2LL;
          return a1;
        }
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, asc_1D277, 1LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, asc_1D278, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, asc_1D27A, 2LL) )
        {
          *(_QWORD *)(a1 + 32) = v7;
          *(_OWORD *)(a1 + 16) = v6;
          *(_QWORD *)(a1 + 8) = 0LL;
          *(_QWORD *)a1 = 4LL;
          return a1;
        }
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aEq_0, 3LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aGe_0, 3LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aGt_0, 3LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aLe_0, 3LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aLt_0, 3LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aNe_0, 3LL) )
        {
          *(_QWORD *)(a1 + 32) = v7;
          *(_OWORD *)(a1 + 16) = v6;
          *(_QWORD *)(a1 + 8) = 1LL;
          *(_QWORD *)a1 = 4LL;
          return a1;
        }
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aEf_0, 3LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aNt_0, 3LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aOt_0, 3LL) )
        {
          *(_QWORD *)(a1 + 32) = v7;
          *(_OWORD *)(a1 + 16) = v6;
          *(_QWORD *)(a1 + 8) = 2LL;
          *(_QWORD *)a1 = 4LL;
          return a1;
        }
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aN_0, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aZ, 2LL) )
        {
          *(_QWORD *)(a1 + 32) = v7;
          *(_OWORD *)(a1 + 16) = v6;
          *(_QWORD *)(a1 + 8) = 0LL;
          *(_QWORD *)a1 = 5LL;
          return a1;
        }
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aB_0, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aC_0, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aD_1, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aE_0, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, asc_1D2A3, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aG_1, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aG_2, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, asc_1D2A9, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aK_0, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, asc_1D2AD, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aN_1, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aO_1, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aP_0, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aR_0, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aS_1, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aS_2, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aT_0, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aU_0, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aW_0, 2LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, asc_1D2C1, 2LL) )
        {
          *(_QWORD *)(a1 + 32) = v7;
          *(_OWORD *)(a1 + 16) = v6;
          *(_QWORD *)(a1 + 8) = 1LL;
          *(_QWORD *)a1 = 5LL;
          return a1;
        }
        goto LABEL_4;
      }
    }
    *(_QWORD *)a1 = v4;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v6);
    return a1;
  }
  *(_QWORD *)a1 = 6LL;
  return a1;
}
