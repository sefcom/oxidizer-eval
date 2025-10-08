__int64 __fastcall sniffnet::utils::formatted_strings::get_path_termination_string(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rax
  __int64 v8; // r12
  const char *v9; // r13
  bool v10; // bp
  unsigned __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v14; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v16; // [rsp+10h] [rbp-98h]
  _BYTE v17[8]; // [rsp+18h] [rbp-90h] BYREF
  __int128 v18; // [rsp+20h] [rbp-88h]
  _QWORD v19[2]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v20; // [rsp+40h] [rbp-68h]
  const char *v21; // [rsp+50h] [rbp-58h]
  __int64 v22; // [rsp+58h] [rbp-50h]
  __int128 v23; // [rsp+60h] [rbp-48h] BYREF
  __int64 v24; // [rsp+70h] [rbp-38h]

  core::iter::traits::iterator::Iterator::collect(&v14, a2, a2 + a3);
  v6 = v16;
  if ( v16 )
  {
    v7 = core::cmp::Ord::min(a4, v16);
    v8 = 0LL;
    v9 = (_BYTE *)(&dword_0 + 1);
    if ( v6 > a4 )
      v9 = asc_497A9B;
    v10 = v6 > a4;
    v11 = v6 - v7;
    if ( v6 < v7 )
      core::slice::index::slice_start_index_len_fail(v11, v6, &off_2E01128);
    v12 = v15;
    core::iter::traits::iterator::Iterator::collect(v17, v15 + 4 * v11, v15 + 4 * v6);
    LOBYTE(v8) = v10;
    v19[0] = v9;
    v19[1] = 3 * v8;
    v20 = v18;
    v21 = asc_497933;
    v22 = 1LL;
    alloc::str::join_generic_copy(&v23, v19, 3LL);
    *(_QWORD *)(a1 + 16) = v24;
    *(_OWORD *)a1 = v23;
    core::ptr::drop_in_place<alloc::string::String>(v17);
    return core::ptr::drop_in_place<alloc::vec::Vec<f32>>(v14, v12);
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 1LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    return core::ptr::drop_in_place<alloc::vec::Vec<f32>>(v14, v15);
  }
}