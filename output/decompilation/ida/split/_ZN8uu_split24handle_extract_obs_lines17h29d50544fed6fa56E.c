__int64 __fastcall uu_split::handle_extract_obs_lines(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v7; // [rsp+7h] [rbp-A1h] BYREF
  __int64 v8; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v9; // [rsp+10h] [rbp-98h]
  __int64 v10; // [rsp+18h] [rbp-90h]
  __int64 v11; // [rsp+20h] [rbp-88h] BYREF
  __int64 v12; // [rsp+28h] [rbp-80h]
  unsigned __int64 v13; // [rsp+30h] [rbp-78h]
  __int128 v14; // [rsp+38h] [rbp-70h] BYREF
  char *v15; // [rsp+48h] [rbp-60h]
  __int64 *v16; // [rsp+50h] [rbp-58h]
  __int128 v17; // [rsp+58h] [rbp-50h] BYREF
  __int64 v18; // [rsp+68h] [rbp-40h]
  __int128 v19; // [rsp+70h] [rbp-38h] BYREF
  __int64 v20; // [rsp+80h] [rbp-28h]

  v8 = 0LL;
  v9 = 4LL;
  v10 = 0LL;
  v7 = 0;
  *(_QWORD *)&v14 = a2;
  *((_QWORD *)&v14 + 1) = a2 + a3;
  v15 = &v7;
  v16 = &v8;
  core::iter::traits::iterator::Iterator::collect(&v11, &v14);
  if ( v10 )
  {
    core::iter::traits::iterator::Iterator::collect(&v17, v9, v9 + 4 * v10);
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a4);
    *(_QWORD *)(a4 + 16) = v18;
    *(_OWORD *)a4 = v17;
    if ( v13 < 2 )
    {
      *a1 = 0x8000000000000000LL;
    }
    else
    {
      core::iter::traits::iterator::Iterator::collect(&v19, v12, v12 + 4 * v13);
      a1[2] = v20;
      *(_OWORD *)a1 = v19;
    }
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v14, a2, a3);
    a1[2] = v15;
    *(_OWORD *)a1 = v14;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<char>>(v11, v12);
  return core::ptr::drop_in_place<alloc::vec::Vec<char>>(v8, v9);
}