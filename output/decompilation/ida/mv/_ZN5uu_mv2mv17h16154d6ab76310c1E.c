__int64 __fastcall uu_mv::mv(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r12
  unsigned __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v12; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+8h] [rbp-50h]
  unsigned __int64 v14; // [rsp+10h] [rbp-48h]
  __int64 v15; // [rsp+18h] [rbp-40h] BYREF
  __int64 v16; // [rsp+20h] [rbp-38h]
  __int64 v17; // [rsp+28h] [rbp-30h]

  uu_mv::parse_paths((__int64)&v12, a1, a2, *(_BYTE *)(a3 + 50));
  if ( __OFSUB__(0LL, *(_QWORD *)(a3 + 24)) )
  {
    if ( v14 == 2 )
      v5 = uu_mv::handle_two_paths(
             *(__int64 (__fastcall **)())(v13 + 8),
             *(__int128 **)(v13 + 16),
             *(__int64 (__fastcall **)())(v13 + 32),
             *(__int128 **)(v13 + 40),
             a3);
    else
      v5 = uu_mv::handle_multiple_paths(v13, v14, a3);
    v10 = v5;
  }
  else
  {
    v6 = v13;
    v7 = v14;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v15, *(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 40), v4);
    v8 = v15;
    v9 = v16;
    v10 = uu_mv::move_files_into_dir(v6, v7, v16, v17, a3);
    core::ptr::drop_in_place<std::path::PathBuf>(v8, v9);
  }
  core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v12);
  return v10;
}