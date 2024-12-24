__int64 __fastcall uu_mv::mv(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r14
  unsigned __int64 v6; // r15
  __int64 v7; // rbx
  _BYTE v9[8]; // [rsp+8h] [rbp-60h] BYREF
  __int64 v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+18h] [rbp-50h]
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int128 *v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+38h] [rbp-30h] BYREF
  __int128 *v15; // [rsp+48h] [rbp-20h]

  uu_mv::parse_paths((__int64)v9, a1, a2, *(_BYTE *)(a3 + 50));
  if ( *(_QWORD *)(a3 + 24) == 0x8000000000000000LL )
  {
    if ( v11 == 2 )
      v4 = uu_mv::handle_two_paths(
             *(char ***)(v10 + 8),
             *(__int128 **)(v10 + 16),
             *(__int64 (__fastcall **)())(v10 + 32),
             *(__int128 **)(v10 + 40),
             a3);
    else
      v4 = uu_mv::handle_multiple_paths(v10, v11, a3);
    v7 = v4;
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v9);
  }
  else
  {
    v5 = v10;
    v6 = v11;
    std::sys::os_str::bytes::Slice::to_owned(&v14, *(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 40));
    v13 = v15;
    v12 = v14;
    v7 = uu_mv::move_files_into_dir(v5, v6, *((__int64 *)&v14 + 1), v15, a3);
    core::ptr::drop_in_place<std::path::PathBuf>(&v12);
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v9);
  }
  return v7;
}
