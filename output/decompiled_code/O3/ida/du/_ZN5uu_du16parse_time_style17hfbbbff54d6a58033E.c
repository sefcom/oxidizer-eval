__int64 *__fastcall uu_du::parse_time_style(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v7[48]; // [rsp+8h] [rbp-30h] BYREF

  if ( !a2 )
    goto LABEL_5;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aFullIso, 8LL) )
  {
    a1[1] = (__int64)aYMDHMSFZ;
    a1[2] = 23LL;
    goto LABEL_6;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aLongIso, 8LL) )
  {
LABEL_5:
    a1[1] = (__int64)aYMDHM_0;
    a1[2] = 14LL;
    goto LABEL_6;
  }
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aIso, 3LL) )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(v7, a2, a3);
    v6 = 2LL;
    a1[1] = alloc::boxed::Box<T>::new(&v6);
    a1[2] = (__int64)&off_183FF8;
    v4 = 1LL;
    goto LABEL_7;
  }
  a1[1] = (__int64)aYMD;
  a1[2] = 8LL;
LABEL_6:
  v4 = 0LL;
LABEL_7:
  *a1 = v4;
  return a1;
}
