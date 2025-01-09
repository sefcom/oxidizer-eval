_DWORD *__fastcall uu_ls::display_dir_entry_size(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *result; // rax
  _DWORD *v6; // r14
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r12
  char v10; // bp
  __int64 v11; // r15
  __int64 v12; // rax
  __int128 v13; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+10h] [rbp-98h]
  __int64 v15; // [rsp+20h] [rbp-88h]
  __int64 v16; // [rsp+28h] [rbp-80h]
  __int128 v17; // [rsp+30h] [rbp-78h] BYREF
  __int64 v18; // [rsp+40h] [rbp-68h]
  __int128 v19; // [rsp+48h] [rbp-60h] BYREF
  __int64 v20; // [rsp+58h] [rbp-50h]
  __int128 v21; // [rsp+60h] [rbp-48h]
  __int64 v22; // [rsp+70h] [rbp-38h]

  result = uu_ls::PathData::get_metadata(a2, a4);
  if ( result )
  {
    v6 = result;
    uu_ls::display_len_or_rdev((__int64)&v19, (__int64)result, *(_QWORD *)(a3 + 208), *(_BYTE *)(a3 + 241));
    if ( (_QWORD)v21 == 0x8000000000000000LL )
    {
      v13 = v19;
      v15 = v20;
      v14 = v20;
      core::ptr::drop_in_place<alloc::string::String>(&v13);
      v16 = 0LL;
      v7 = 0LL;
    }
    else
    {
      v7 = v20;
      v18 = v20;
      v17 = v19;
      v8 = v22;
      v14 = v22;
      v13 = v21;
      core::ptr::drop_in_place<alloc::string::String>(&v13);
      v16 = v8;
      v15 = v8 + v7 + 2;
      core::ptr::drop_in_place<alloc::string::String>(&v17);
    }
    uu_ls::display_symlink_count((__int64)&v17, *((_QWORD *)v6 + 6));
    v9 = v18;
    v10 = *(_BYTE *)(a3 + 227);
    uu_ls::display_uname((__int64)&v13, v6[15], v10);
    v11 = v14;
    uu_ls::display_group((__int64)&v19, v6[16], v10);
    v12 = v20;
    *a1 = v9;
    a1[1] = v11;
    a1[2] = v12;
    a1[3] = v15;
    a1[4] = v7;
    a1[5] = v16;
    core::ptr::drop_in_place<alloc::string::String>(&v19);
    core::ptr::drop_in_place<alloc::string::String>(&v13);
    return (_DWORD *)core::ptr::drop_in_place<alloc::string::String>(&v17);
  }
  else
  {
    *((_OWORD *)a1 + 2) = 0LL;
    *((_OWORD *)a1 + 1) = 0LL;
    *(_OWORD *)a1 = 0LL;
  }
  return result;
}
