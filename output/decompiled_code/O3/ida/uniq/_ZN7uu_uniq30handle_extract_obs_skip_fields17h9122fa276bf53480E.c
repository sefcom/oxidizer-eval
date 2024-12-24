__int64 __fastcall uu_uniq::handle_extract_obs_skip_fields(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 slice; // rax
  char v8; // [rsp+Eh] [rbp-CAh] BYREF
  char v9; // [rsp+Fh] [rbp-C9h] BYREF
  __int128 v10; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+20h] [rbp-B8h]
  __int64 v12; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+38h] [rbp-A0h]
  __int64 v14; // [rsp+40h] [rbp-98h]
  _BYTE v15[8]; // [rsp+48h] [rbp-90h] BYREF
  __int64 v16; // [rsp+50h] [rbp-88h]
  unsigned __int64 v17; // [rsp+58h] [rbp-80h]
  __int128 v18; // [rsp+60h] [rbp-78h] BYREF
  __int64 v19; // [rsp+70h] [rbp-68h]
  _QWORD v20[5]; // [rsp+78h] [rbp-60h] BYREF
  __int128 v21; // [rsp+A0h] [rbp-38h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-28h]

  v12 = 0LL;
  v13 = 4LL;
  v14 = 0LL;
  v9 = 0;
  v8 = 0;
  v20[0] = a2;
  v20[1] = a2 + a3;
  v20[2] = &v8;
  v20[3] = &v9;
  v20[4] = &v12;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v15, v20);
  if ( v14 )
  {
    if ( v8 )
    {
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a4);
      *a4 = 0x8000000000000000LL;
    }
    else
    {
      <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(&v18, v13, v13 + 4 * v14);
      if ( *a4 != 0x8000000000000000LL )
      {
        slice = core::slice::iter::Iter<T>::make_slice(a4[1], a4[1] + a4[2]);
        alloc::vec::Vec<T,A>::append_elements(&v18, slice);
      }
      v11 = v19;
      v10 = v18;
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a4);
      a4[2] = v11;
      *(_OWORD *)a4 = v10;
    }
    if ( v17 <= 1 )
    {
      *a1 = 0x8000000000000000LL;
    }
    else
    {
      <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(&v21, v16, v16 + 4 * v17);
      a1[2] = v22;
      *(_OWORD *)a1 = v21;
    }
  }
  else
  {
    std::sys::os_str::bytes::Slice::to_owned(&v10, a2, a3);
    a1[2] = v11;
    *(_OWORD *)a1 = v10;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<char>>(v15);
  return core::ptr::drop_in_place<alloc::vec::Vec<char>>(&v12);
}
