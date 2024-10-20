__int64 __fastcall uu_du::uumain::uumain::{{closure}}(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v4[8]; // [rsp+18h] [rbp-20h] BYREF

  v2 = <alloc::string::String as core::ops::deref::Deref>::deref(a2);
  <uu_du::Threshold as core::str::traits::FromStr>::from_str(v4, v2);
  core::result::Result<T,E>::map_err(a1, (int)v4, a2);
  return a1;
}
