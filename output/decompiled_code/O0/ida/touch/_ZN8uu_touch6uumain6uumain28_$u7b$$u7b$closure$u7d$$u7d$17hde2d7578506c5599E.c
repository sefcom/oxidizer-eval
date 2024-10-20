_QWORD *__fastcall uu_touch::uumain::uumain::{{closure}}(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+18h] [rbp-20h] BYREF
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  if ( (core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(&v4, &off_2C7090) & 1) != 0 )
  {
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    <std::path::PathBuf as core::convert::From<&T>>::from(v5, v4);
    *a1 = v5[0];
    a1[1] = v5[1];
    a1[2] = v5[2];
  }
  return a1;
}
