__int64 __fastcall uu_uniq::handle_extract_obs_skip_fields(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int128 v6; // xmm0
  __int64 slice; // rax
  char v9; // [rsp+Eh] [rbp-CAh] BYREF
  char v10; // [rsp+Fh] [rbp-C9h] BYREF
  __int128 v11; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+20h] [rbp-B8h]
  __int64 v13; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+38h] [rbp-A0h]
  __int64 v15; // [rsp+40h] [rbp-98h]
  _BYTE v16[8]; // [rsp+48h] [rbp-90h] BYREF
  __int64 v17; // [rsp+50h] [rbp-88h]
  unsigned __int64 v18; // [rsp+58h] [rbp-80h]
  __int128 v19; // [rsp+60h] [rbp-78h] BYREF
  __int64 v20; // [rsp+70h] [rbp-68h]
  _QWORD v21[5]; // [rsp+78h] [rbp-60h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-38h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-28h]

  v13 = 0LL;
  v14 = 4LL;
  v15 = 0LL;
  v10 = 0;
  v9 = 0;
  v21[0] = a2;
  v21[1] = a2 + a3;
  v21[2] = &v9;
  v21[3] = &v10;
  v21[4] = &v13;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v16, v21);
  if ( !v15 )
  {
    std::sys::os_str::bytes::Slice::to_owned(&v11, a2, a3);
    *(_QWORD *)(a1 + 16) = v12;
    v6 = v11;
LABEL_11:
    *(_OWORD *)a1 = v6;
    goto LABEL_12;
  }
  if ( v9 )
  {
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a4);
    *a4 = 0x8000000000000000LL;
  }
  else
  {
    <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(&v19, v14, v14 + 4 * v15);
    if ( *a4 != 0x8000000000000000LL )
    {
      slice = core::slice::iter::Iter<T>::make_slice(a4[1], a4[1] + a4[2]);
      alloc::vec::Vec<T,A>::append_elements(&v19, slice);
    }
    v12 = v20;
    v11 = v19;
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a4);
    a4[2] = v12;
    *(_OWORD *)a4 = v11;
  }
  if ( v18 >= 2 )
  {
    <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(&v22, v17, v17 + 4 * v18);
    *(_QWORD *)(a1 + 16) = v23;
    v6 = v22;
    goto LABEL_11;
  }
  *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_12:
  core::ptr::drop_in_place<alloc::vec::Vec<char>>(v16);
  return core::ptr::drop_in_place<alloc::vec::Vec<char>>(&v13);
}
