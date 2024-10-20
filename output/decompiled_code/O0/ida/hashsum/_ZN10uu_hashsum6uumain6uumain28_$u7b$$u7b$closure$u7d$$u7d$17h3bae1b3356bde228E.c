__int64 __fastcall uu_hashsum::uumain::uumain::{{closure}}(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rax

  v1 = std::ffi::os_str::OsStr::new(asc_59F04, 1LL);
  v3 = core::iter::sources::once::once(v1, v2);
  core::iter::traits::iterator::Iterator::collect(a1, v3);
  return a1;
}
