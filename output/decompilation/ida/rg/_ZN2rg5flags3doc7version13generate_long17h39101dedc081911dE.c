__int64 __fastcall rg::flags::doc::version::generate_long(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int8 v3; // al
  unsigned __int8 v4; // al
  unsigned __int8 v5; // al
  unsigned __int8 v6; // al
  unsigned __int8 v7; // al
  unsigned __int8 v8; // al
  __int128 v10; // [rsp+0h] [rbp-108h] BYREF
  __int128 *v11; // [rsp+10h] [rbp-F8h]
  __int128 v12; // [rsp+18h] [rbp-F0h]
  __int128 v13; // [rsp+30h] [rbp-D8h] BYREF
  __int128 *v14; // [rsp+40h] [rbp-C8h]
  __int128 v15; // [rsp+50h] [rbp-B8h] BYREF
  __int128 *v16; // [rsp+60h] [rbp-A8h]
  __int128 v17; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+78h] [rbp-90h]
  __int128 v19; // [rsp+80h] [rbp-88h] BYREF
  __int128 *v20; // [rsp+90h] [rbp-78h]
  __int128 v21; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-58h]
  _QWORD v23[2]; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v24; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v25; // [rsp+E0h] [rbp-28h]

  rg::flags::doc::version::compile_cpu_features(&v10);
  rg::flags::doc::version::runtime_cpu_features(&v24);
  v20 = v11;
  v19 = v10;
  v22 = v25;
  v21 = v24;
  *(_QWORD *)&v17 = 0LL;
  *((_QWORD *)&v17 + 1) = 1LL;
  v18 = 0LL;
  rg::flags::doc::version::generate_short((__int64)&v13, a2, v2);
  *(_QWORD *)&v15 = &v13;
  *((_QWORD *)&v15 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v10 = &unk_3EA800;
  *((_QWORD *)&v10 + 1) = 2LL;
  v11 = &v15;
  v12 = 1uLL;
  v3 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v17, &v10);
  core::result::Result<T,E>::unwrap(v3, &off_3EAB48);
  core::ptr::drop_in_place<alloc::string::String>(&v13);
  *(_QWORD *)&v10 = &off_3EA358;
  *((_QWORD *)&v10 + 1) = 1LL;
  v11 = (_OWORD *)&byte_8;
  v12 = 0LL;
  v4 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v17, &v10);
  core::result::Result<T,E>::unwrap(v4, &off_3EAB60);
  rg::flags::doc::version::features(&v13);
  alloc::str::join_generic_copy(&v10, *((_QWORD *)&v13 + 1), v14, asc_6671A, 1LL);
  v16 = v11;
  v15 = v10;
  v23[0] = &v15;
  v23[1] = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v10 = &off_3EAAC8;
  *((_QWORD *)&v10 + 1) = 2LL;
  v11 = (__int128 *)v23;
  v12 = 1uLL;
  v5 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v17, &v10);
  core::result::Result<T,E>::unwrap(v5, &off_3EAB78);
  core::ptr::drop_in_place<alloc::string::String>(&v15);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v13);
  if ( v20 )
  {
    alloc::str::join_generic_copy(&v10, *((_QWORD *)&v19 + 1), v20, asc_6671A, 1LL);
    v14 = v11;
    v13 = v10;
    *(_QWORD *)&v15 = &v13;
    *((_QWORD *)&v15 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v10 = &off_3EAAE8;
    *((_QWORD *)&v10 + 1) = 2LL;
    v11 = &v15;
    v12 = 1uLL;
    v6 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v17, &v10);
    core::result::Result<T,E>::unwrap(v6, &off_3EAB90);
    core::ptr::drop_in_place<alloc::string::String>(&v13);
  }
  if ( v22 )
  {
    alloc::str::join_generic_copy(&v10, *((_QWORD *)&v21 + 1), v22, asc_6671A, 1LL);
    v14 = v11;
    v13 = v10;
    *(_QWORD *)&v15 = &v13;
    *((_QWORD *)&v15 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v10 = &off_3EAB08;
    *((_QWORD *)&v10 + 1) = 2LL;
    v11 = &v15;
    v12 = 1uLL;
    v7 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v17, &v10);
    core::result::Result<T,E>::unwrap(v7, &off_3EABA8);
    core::ptr::drop_in_place<alloc::string::String>(&v13);
  }
  rg::flags::doc::version::generate_pcre2(&v10);
  v14 = v11;
  v13 = v10;
  *(_QWORD *)&v15 = &v13;
  *((_QWORD *)&v15 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v10 = &off_3EAB28;
  *((_QWORD *)&v10 + 1) = 2LL;
  v11 = &v15;
  v12 = 1uLL;
  v8 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v17, &v10);
  core::result::Result<T,E>::unwrap(v8, &off_3EABC0);
  *(_QWORD *)(a1 + 16) = v18;
  *(_OWORD *)a1 = v17;
  core::ptr::drop_in_place<alloc::string::String>(&v13);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v21);
  return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v19);
}