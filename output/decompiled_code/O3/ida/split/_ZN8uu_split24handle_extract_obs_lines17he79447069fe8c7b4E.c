__int64 __fastcall uu_split::handle_extract_obs_lines(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v7; // [rsp+Fh] [rbp-B9h] BYREF
  __int64 v8; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+18h] [rbp-B0h]
  __int64 v10; // [rsp+20h] [rbp-A8h]
  _BYTE v11[8]; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v12; // [rsp+30h] [rbp-98h]
  unsigned __int64 v13; // [rsp+38h] [rbp-90h]
  __int128 v14; // [rsp+40h] [rbp-88h] BYREF
  __int64 v15; // [rsp+50h] [rbp-78h]
  _QWORD v16[4]; // [rsp+58h] [rbp-70h] BYREF
  __int128 v17; // [rsp+78h] [rbp-50h] BYREF
  __int64 v18; // [rsp+88h] [rbp-40h]
  __int128 v19; // [rsp+90h] [rbp-38h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-28h]

  v8 = 0LL;
  v9 = 4LL;
  v10 = 0LL;
  v7 = 0;
  v16[0] = a2;
  v16[1] = a2 + a3;
  v16[2] = &v7;
  v16[3] = &v8;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v11, v16);
  if ( v10 )
  {
    <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(&v14, v9, v9 + 4 * v10);
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a4);
    *(_QWORD *)(a4 + 16) = v15;
    *(_OWORD *)a4 = v14;
    if ( v13 <= 1 )
    {
      *a1 = 0x8000000000000000LL;
    }
    else
    {
      <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(&v17, v12, v12 + 4 * v13);
      a1[2] = v18;
      *(_OWORD *)a1 = v17;
    }
  }
  else
  {
    std::sys::os_str::bytes::Slice::to_owned(&v19, a2, a3);
    a1[2] = v20;
    *(_OWORD *)a1 = v19;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<char>>(v11);
  return core::ptr::drop_in_place<alloc::vec::Vec<char>>(&v8);
}
