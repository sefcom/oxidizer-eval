_BOOL8 __fastcall uu_df::get_named_filesystems::{{closure}}(__int64 a1, __int64 a2)
{
  return (<alloc::string::String as core::cmp::PartialEq<&str>>::ne(a2 + 48, &off_128878) & 1) != 0
      && (*(_BYTE *)(a2 + 145) & 1) == 0;
}
