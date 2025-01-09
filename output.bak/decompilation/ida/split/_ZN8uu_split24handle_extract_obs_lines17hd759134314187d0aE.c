__int64 __fastcall uu_split::handle_extract_obs_lines(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v6; // xmm0
  char v8; // [rsp+Fh] [rbp-B9h] BYREF
  __int64 v9; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+18h] [rbp-B0h]
  __int64 v11; // [rsp+20h] [rbp-A8h]
  _BYTE v12[8]; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+30h] [rbp-98h]
  unsigned __int64 v14; // [rsp+38h] [rbp-90h]
  __int128 v15; // [rsp+40h] [rbp-88h] BYREF
  __int64 v16; // [rsp+50h] [rbp-78h]
  _QWORD v17[4]; // [rsp+58h] [rbp-70h] BYREF
  __int128 v18; // [rsp+78h] [rbp-50h] BYREF
  __int64 v19; // [rsp+88h] [rbp-40h]
  __int128 v20; // [rsp+90h] [rbp-38h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-28h]

  v9 = 0LL;
  v10 = 4LL;
  v11 = 0LL;
  v8 = 0;
  v17[0] = a2;
  v17[1] = a2 + a3;
  v17[2] = &v8;
  v17[3] = &v9;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v12, v17);
  if ( !v11 )
  {
    std::sys::os_str::bytes::Slice::to_owned(&v20, a2, a3);
    *(_QWORD *)(a1 + 16) = v21;
    v6 = v20;
LABEL_6:
    *(_OWORD *)a1 = v6;
    goto LABEL_7;
  }
  <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(&v15, v10, v10 + 4 * v11);
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a4);
  *(_QWORD *)(a4 + 16) = v16;
  *(_OWORD *)a4 = v15;
  if ( v14 >= 2 )
  {
    <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(&v18, v13, v13 + 4 * v14);
    *(_QWORD *)(a1 + 16) = v19;
    v6 = v18;
    goto LABEL_6;
  }
  *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_7:
  core::ptr::drop_in_place<alloc::vec::Vec<char>>(v12);
  return core::ptr::drop_in_place<alloc::vec::Vec<char>>(&v9);
}
