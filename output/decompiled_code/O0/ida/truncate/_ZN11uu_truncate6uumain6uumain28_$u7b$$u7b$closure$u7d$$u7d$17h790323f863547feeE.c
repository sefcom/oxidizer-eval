_BOOL8 __fastcall uu_truncate::uumain::uumain::{{closure}}(__int64 a1)
{
  __int64 v2; // [rsp+10h] [rbp-28h]
  __int64 v3; // [rsp+18h] [rbp-20h] BYREF
  _BOOL4 v4; // [rsp+20h] [rbp-18h]
  unsigned __int8 v5; // [rsp+27h] [rbp-11h]

  v3 = a1;
  v2 = clap_builder::error::Error<F>::print(&v3);
  core::result::Result<T,E>::expect(v2, aErrorWritingCl, 25LL, &off_103CD0);
  v5 = clap_builder::error::Error<F>::kind(&v3);
  v4 = (v5 | 2) != 14;
  core::ptr::drop_in_place<clap_builder::error::Error>(&v3);
  return v4;
}
