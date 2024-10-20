__int64 __fastcall uu_du::uumain::uumain::{{closure}}(struct _Unwind_Exception *a1)
{
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  __int64 v6; // [rsp+10h] [rbp-18h]

  v6 = uu_du::StatPrinter::print_stats(a1, &a1[2].private_1);
  core::ptr::drop_in_place<uu_du::uumain::uumain<core::iter::adapters::cloned::Cloned<core::slice::iter::Iter<std::ffi::os_str::OsString>>>::{{closure}}>(
    (int)a1,
    (_DWORD)a1 + 80,
    v1,
    v2,
    v3,
    v4,
    a1,
    v1);
  return v6;
}
