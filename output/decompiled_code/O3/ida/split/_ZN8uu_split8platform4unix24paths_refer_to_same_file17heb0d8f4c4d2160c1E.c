__int64 __fastcall uu_split::platform::unix::paths_refer_to_same_file(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v7[152]; // [rsp+8h] [rbp-150h] BYREF
  _QWORD v8[23]; // [rsp+A0h] [rbp-B8h] BYREF

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, asc_22207, 1LL) )
  {
    v8[0] = std::io::stdio::stdin();
    uucore::features::fs::FileInformation::from_file(v7, v8);
  }
  else
  {
    uucore::features::fs::FileInformation::from_path(v7, a1, a2, 1LL);
  }
  uucore::features::fs::FileInformation::from_path(v8, a3, a4, 1LL);
  return uucore::features::fs::infos_refer_to_same_file(v7, v8);
}
