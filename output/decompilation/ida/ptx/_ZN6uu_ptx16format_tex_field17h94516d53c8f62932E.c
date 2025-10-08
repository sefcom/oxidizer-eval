__int64 __fastcall uu_ptx::format_tex_field(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[3]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+18h] [rbp-20h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  core::iter::traits::iterator::Iterator::collect(v4, a2, a2 + a3);
  alloc::str::join_generic_copy(&v5, v4[1], v4[2]);
  *(_QWORD *)(a1 + 16) = v6;
  *(_OWORD *)a1 = v5;
  return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v4);
}