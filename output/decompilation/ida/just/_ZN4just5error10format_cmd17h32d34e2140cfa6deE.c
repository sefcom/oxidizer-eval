__int64 __fastcall just::error::format_cmd(__int64 a1)
{
  _QWORD v2[3]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v3; // [rsp+18h] [rbp-30h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h]

  core::iter::traits::iterator::Iterator::chain(&v3);
  core::iter::traits::iterator::Iterator::collect(v2, &v3);
  alloc::str::join_generic_copy(&v3, v2[1], v2[2], asc_6E4F0, 1LL);
  *(_QWORD *)(a1 + 16) = v4;
  *(_OWORD *)a1 = v3;
  return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v2);
}