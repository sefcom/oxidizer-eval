__int64 __fastcall uu_ls::display_dir_entry_size(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v10; // r13
  unsigned int v11; // ebp
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-78h]
  __int64 v15; // [rsp+8h] [rbp-70h]
  __int64 v16; // [rsp+10h] [rbp-68h]
  __int64 v17; // [rsp+18h] [rbp-60h] BYREF
  _BYTE v18[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+28h] [rbp-50h]
  _QWORD v20[9]; // [rsp+30h] [rbp-48h] BYREF

  result = uu_ls::PathData::get_metadata(a2, a4);
  if ( result )
  {
    v7 = result;
    uu_ls::display_len_or_rdev(&v17, result, *(_QWORD *)(a3 + 208), *(unsigned __int8 *)(a3 + 249));
    if ( __OFSUB__(0LL, v17) )
    {
      v14 = v20[0];
      core::ptr::drop_in_place<alloc::string::String>(v18);
      v16 = 0LL;
      v15 = 0LL;
    }
    else
    {
      v8 = v19;
      v9 = v20[2];
      core::ptr::drop_in_place<alloc::string::String>(v20);
      v16 = v9;
      v15 = v8;
      v14 = v8 + v9 + 2;
      core::ptr::drop_in_place<alloc::string::String>(&v17);
    }
    uu_ls::display_symlink_count(&v17, *(_QWORD *)(v7 + 48));
    v10 = v19;
    v11 = *(unsigned __int8 *)(a3 + 235);
    v12 = *(_QWORD *)(uu_ls::display_uname(*(unsigned int *)(v7 + 60), *(unsigned __int8 *)(a3 + 235), a4) + 16);
    v13 = *(_QWORD *)(uu_ls::display_group(*(unsigned int *)(v7 + 64), v11, a4) + 16);
    *a1 = v10;
    a1[1] = v12;
    a1[2] = v13;
    a1[3] = v14;
    a1[4] = v15;
    a1[5] = v16;
    return core::ptr::drop_in_place<alloc::string::String>(&v17);
  }
  else
  {
    *((_OWORD *)a1 + 2) = 0LL;
    *((_OWORD *)a1 + 1) = 0LL;
    *(_OWORD *)a1 = 0LL;
  }
  return result;
}