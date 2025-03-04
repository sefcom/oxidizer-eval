__int64 __fastcall uu_uniq::handle_extract_obs_skip_chars(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // edx
  __int64 v8; // [rsp+0h] [rbp-98h] BYREF
  __int64 v9; // [rsp+8h] [rbp-90h]
  __int64 v10; // [rsp+10h] [rbp-88h]
  __int128 v11; // [rsp+18h] [rbp-80h] BYREF
  __int64 v12; // [rsp+28h] [rbp-70h]
  __int128 v13; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+40h] [rbp-58h]
  __int128 v15; // [rsp+50h] [rbp-48h] BYREF

  v8 = 0LL;
  v9 = 4LL;
  v10 = 0LL;
  *(_QWORD *)&v15 = a2;
  *((_QWORD *)&v15 + 1) = a2 + a3;
  core::str::validations::next_code_point(&v15);
  v13 = v15;
  while ( (unsigned int)core::str::validations::next_code_point(&v13) )
  {
    if ( v6 - 48 >= 0xA )
    {
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a4);
      *a4 = 0x8000000000000000LL;
      std::sys::os_str::bytes::Slice::to_owned(&v11, a2, a3);
      goto LABEL_9;
    }
    alloc::vec::Vec<T,A>::push(&v8, v6);
  }
  if ( v10 )
  {
    <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(&v11, v9, v9 + 4 * v10);
    v14 = v12;
    v13 = v11;
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a4);
    a4[2] = v14;
    *(_OWORD *)a4 = v13;
    *a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<alloc::vec::Vec<char>>(&v8);
  }
  std::sys::os_str::bytes::Slice::to_owned(&v11, a2, a3);
LABEL_9:
  a1[2] = v12;
  *(_OWORD *)a1 = v11;
  return core::ptr::drop_in_place<alloc::vec::Vec<char>>(&v8);
}
