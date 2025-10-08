__int64 __fastcall rg::flags::doc::help::generate_short_flag(__int64 a1, __int64 a2, __int64 (__fastcall **a3)(_QWORD))
{
  __int64 v4; // rax
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // al
  unsigned __int8 v7; // al
  __int64 (__fastcall *v8)(); // rdx
  unsigned __int8 v9; // al
  unsigned __int8 v10; // al
  __int64 (__fastcall *v11)(); // rdx
  unsigned __int8 v12; // al
  __int128 v14; // [rsp+8h] [rbp-D0h] BYREF
  __int128 **v15; // [rsp+18h] [rbp-C0h]
  __int128 v16; // [rsp+20h] [rbp-B8h]
  __int128 *v17; // [rsp+38h] [rbp-A0h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+40h] [rbp-98h]
  __int128 **v19; // [rsp+48h] [rbp-90h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+50h] [rbp-88h]
  __int128 v21; // [rsp+58h] [rbp-80h] BYREF
  __int64 v22; // [rsp+68h] [rbp-70h]
  __int128 v23; // [rsp+70h] [rbp-68h] BYREF
  __int128 **v24; // [rsp+80h] [rbp-58h]
  __int128 v25; // [rsp+90h] [rbp-48h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-38h]

  *(_QWORD *)&v21 = 0LL;
  *((_QWORD *)&v21 + 1) = 1LL;
  v22 = 0LL;
  *(_QWORD *)&v25 = 0LL;
  *((_QWORD *)&v25 + 1) = 1LL;
  v26 = 0LL;
  v4 = a3[9](a2);
  if ( v4 )
  {
    rg::flags::doc::help::generate_short_flag::{{closure}}(&v14, v4);
    v24 = v15;
    v23 = v14;
  }
  else
  {
    *(_QWORD *)&v23 = 0x8000000000000000LL;
  }
  if ( (a3[5](a2) & 1) != 0 )
  {
    LODWORD(v17) = v5;
    v19 = &v17;
    v20 = <char as core::fmt::Display>::fmt;
    *(_QWORD *)&v14 = &off_3E5EF8;
    *((_QWORD *)&v14 + 1) = 1LL;
    v15 = (__int128 **)&v19;
    v16 = 1uLL;
    v6 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v21, &v14);
    core::result::Result<T,E>::unwrap(v6, &off_3EA2D0);
    *(_QWORD *)&v14 = &off_3EA2B0;
    *((_QWORD *)&v14 + 1) = 1LL;
    v15 = (__int128 **)&byte_8;
    v16 = 0LL;
    v7 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v21, &v14);
    core::result::Result<T,E>::unwrap(v7, &off_3EA2E8);
  }
  v19 = (__int128 **)a3[6](a2);
  v20 = v8;
  v17 = (__int128 *)&v19;
  v18 = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v14 = &off_3E5EE8;
  *((_QWORD *)&v14 + 1) = 1LL;
  v15 = &v17;
  v16 = 1uLL;
  v9 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v21, &v14);
  core::result::Result<T,E>::unwrap(v9, &off_3EA300);
  if ( (_QWORD)v23 != 0x8000000000000000LL )
  {
    v17 = &v23;
    v19 = &v17;
    v20 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v14 = &off_3EA2C0;
    *((_QWORD *)&v14 + 1) = 1LL;
    v15 = (__int128 **)&v19;
    v16 = 1uLL;
    v10 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v21, &v14);
    core::result::Result<T,E>::unwrap(v10, &off_3EA318);
  }
  v19 = (__int128 **)a3[11](a2);
  v20 = v11;
  v17 = (__int128 *)&v19;
  v18 = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v14 = asc_62330;
  *((_QWORD *)&v14 + 1) = 1LL;
  v15 = &v17;
  v16 = 1uLL;
  v12 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v25, &v14);
  core::result::Result<T,E>::unwrap(v12, &off_3EA330);
  *(_QWORD *)(a1 + 16) = v22;
  *(_OWORD *)a1 = v21;
  *(_OWORD *)(a1 + 24) = v25;
  *(_QWORD *)(a1 + 40) = v26;
  return core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v23);
}