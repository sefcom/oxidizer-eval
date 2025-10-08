__int64 __fastcall uu_ls::TimeStyler::format(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  bool v6; // cc
  int v8; // [rsp+0h] [rbp-58h] BYREF
  __int64 v9; // [rsp+4h] [rbp-54h]
  int v10; // [rsp+Ch] [rbp-4Ch]

  if ( __OFSUB__(0LL, *(_QWORD *)(a2 + 24)) )
  {
    v4 = 16LL;
    v5 = 8LL;
  }
  else
  {
    if ( !*(_DWORD *)(a2 + 48) )
      core::option::unwrap_failed(&off_286758);
    v8 = *(_DWORD *)(a2 + 48);
    v9 = *(_QWORD *)(a2 + 52);
    v10 = *(_DWORD *)(a2 + 60);
    v6 = (char)<chrono::naive::datetime::NaiveDateTime as core::cmp::PartialOrd>::partial_cmp(a3, &v8) <= 0;
    v5 = 32LL;
    if ( v6 )
      v5 = 8LL;
    v4 = 40LL;
    if ( v6 )
      v4 = 16LL;
  }
  chrono::datetime::DateTime<Tz>::format_with_items(
    &v8,
    a3,
    *(_QWORD *)(a2 + v5),
    *(_QWORD *)(a2 + v5) + 24LL * *(_QWORD *)(a2 + v4));
  <T as alloc::string::SpecToString>::spec_to_string(a1, &v8);
  return core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<core::slice::iter::Iter<chrono::format::Item>>>(&v8);
}