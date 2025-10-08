__int64 __fastcall uu_uniq::handle_extract_obs_skip_chars(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // edx
  __int64 v7; // r15
  __int64 v9; // [rsp+10h] [rbp-88h] BYREF
  __int64 v10; // [rsp+18h] [rbp-80h]
  __int64 v11; // [rsp+20h] [rbp-78h]
  __int128 v12; // [rsp+28h] [rbp-70h] BYREF
  __int64 v13; // [rsp+38h] [rbp-60h]
  __int128 v14; // [rsp+40h] [rbp-58h] BYREF
  __int128 v15; // [rsp+50h] [rbp-48h] BYREF
  __int64 v16; // [rsp+60h] [rbp-38h]

  v9 = 0LL;
  v10 = 4LL;
  v11 = 0LL;
  *(_QWORD *)&v14 = a2;
  *((_QWORD *)&v14 + 1) = a2 + a3;
  core::str::validations::next_code_point(&v14);
  v15 = v14;
  while ( (core::str::validations::next_code_point(&v15) & 1) != 0 )
  {
    if ( v6 - 48 >= 0xA )
    {
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a4);
      *a4 = 0x8000000000000000LL;
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v12, a2, a3);
      *(_QWORD *)(a1 + 16) = v13;
      *(_OWORD *)a1 = v12;
      return core::ptr::drop_in_place<alloc::vec::Vec<char>>(v9, v10);
    }
    alloc::vec::Vec<T,A>::push(&v9, v6, &off_F5928);
  }
  if ( v11 )
  {
    v7 = v10;
    core::iter::traits::iterator::Iterator::collect(&v12, v10, v10 + 4 * v11);
    v16 = v13;
    v15 = v12;
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a4);
    a4[2] = v16;
    *(_OWORD *)a4 = v15;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v12, a2, a3);
    *(_QWORD *)(a1 + 16) = v13;
    *(_OWORD *)a1 = v12;
    v7 = v10;
  }
  return core::ptr::drop_in_place<alloc::vec::Vec<char>>(v9, v7);
}