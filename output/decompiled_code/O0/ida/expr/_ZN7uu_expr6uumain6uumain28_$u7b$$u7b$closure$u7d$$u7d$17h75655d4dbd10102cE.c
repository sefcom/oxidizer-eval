__int64 __fastcall uu_expr::uumain::uumain::{{closure}}(__int64 a1)
{
  _BYTE v2[64]; // [rsp+18h] [rbp-80h] BYREF
  _BYTE v3[64]; // [rsp+58h] [rbp-40h] BYREF

  <I as core::iter::traits::collect::IntoIterator>::into_iter(v3);
  core::iter::traits::iterator::Iterator::map(v2, v3);
  core::iter::traits::iterator::Iterator::collect(a1, v2);
  return a1;
}
