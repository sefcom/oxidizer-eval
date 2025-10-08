__int64 __fastcall check_docs::validate_md_files(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  _QWORD v6[3]; // [rsp+8h] [rbp-70h] BYREF
  _BYTE v7[48]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v8; // [rsp+50h] [rbp-28h]

  v4 = *(_QWORD *)(a3 + 16);
  <char as core::str::pattern::Pattern>::into_searcher(v7, *(_QWORD *)(a3 + 8), v4);
  v6[1] = 0LL;
  v6[2] = v4;
  v8 = 0;
  v6[0] = a2;
  core::iter::traits::iterator::Iterator::collect(a1, v6);
  core::ptr::drop_in_place<alloc::string::String>(a3);
  core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(a2);
  return a1;
}