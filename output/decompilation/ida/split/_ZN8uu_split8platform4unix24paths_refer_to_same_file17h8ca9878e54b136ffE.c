__int64 __fastcall uu_split::platform::unix::paths_refer_to_same_file(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v7[152]; // [rsp+8h] [rbp-150h] BYREF
  _BYTE v8[184]; // [rsp+A0h] [rbp-B8h] BYREF

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, asc_1CA61, 1LL) )
  {
    std::io::stdio::stdin();
    uucore::features::fs::FileInformation::from_file(v7);
  }
  else
  {
    uucore::features::fs::FileInformation::from_path(v7, a1, a2);
  }
  uucore::features::fs::FileInformation::from_path(v8, a3, a4);
  return uucore::features::fs::infos_refer_to_same_file(v7, v8);
}