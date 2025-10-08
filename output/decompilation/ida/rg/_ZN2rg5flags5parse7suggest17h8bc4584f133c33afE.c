__int64 __fastcall rg::flags::parse::suggest(__int64 a1)
{
  __int64 v1; // rdx
  __int128 *v3; // [rsp+8h] [rbp-A0h] BYREF
  __int64 (__fastcall *v4)(); // [rsp+10h] [rbp-98h]
  __int64 v5; // [rsp+18h] [rbp-90h]
  __int128 v6; // [rsp+20h] [rbp-88h] BYREF
  __int128 **v7; // [rsp+30h] [rbp-78h]
  _QWORD v8[3]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v9; // [rsp+50h] [rbp-58h] BYREF
  __int128 **v10; // [rsp+60h] [rbp-48h]
  __int64 v11; // [rsp+68h] [rbp-40h]
  __int64 v12; // [rsp+70h] [rbp-38h]
  __int128 v13; // [rsp+80h] [rbp-28h] BYREF
  __int64 v14; // [rsp+90h] [rbp-18h]

  rg::flags::parse::find_similar_names(v8);
  if ( v8[2] )
  {
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v9, v8);
    core::iter::traits::iterator::Iterator::collect(&v3, &v9);
    alloc::str::join_generic_copy(&v9, v4, v5, asc_78D33, 2LL);
    v7 = v10;
    v6 = v9;
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v3);
    v3 = &v6;
    v4 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v9 = &off_3EB640;
    *((_QWORD *)&v9 + 1) = 1LL;
    v12 = 0LL;
    v10 = &v3;
    v11 = 1LL;
    core::option::Option<T>::map_or_else(&v13, 0LL, v1, &v9);
    *(_QWORD *)(a1 + 16) = v14;
    *(_OWORD *)a1 = v13;
    return core::ptr::drop_in_place<alloc::string::String>(&v6);
  }
  else
  {
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v8[0], v8[1]);
  }
}