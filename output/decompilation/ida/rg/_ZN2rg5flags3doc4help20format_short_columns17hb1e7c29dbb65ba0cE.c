__int64 __fastcall rg::flags::doc::help::format_short_columns(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  unsigned __int8 v7; // al
  __int64 v8; // rbx
  unsigned __int8 v9; // al
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  __int64 result; // rax
  _OWORD *v14; // rcx
  __int128 v15; // [rsp+0h] [rbp-128h] BYREF
  __int128 *v16; // [rsp+10h] [rbp-118h]
  __int128 v17; // [rsp+18h] [rbp-110h]
  __int64 v18; // [rsp+30h] [rbp-F8h]
  __int64 v19; // [rsp+38h] [rbp-F0h] BYREF
  __int128 v20; // [rsp+40h] [rbp-E8h] BYREF
  __int128 *v21; // [rsp+50h] [rbp-D8h]
  __int128 v22; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-C0h]
  __int64 v24; // [rsp+70h] [rbp-B8h]
  __int64 v25; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+90h] [rbp-98h]
  __int64 v29; // [rsp+98h] [rbp-90h]
  __int64 v30; // [rsp+A0h] [rbp-88h] BYREF
  _QWORD v31[2]; // [rsp+A8h] [rbp-80h] BYREF
  _QWORD v32[3]; // [rsp+B8h] [rbp-70h] BYREF
  __int128 v33; // [rsp+D0h] [rbp-58h]
  __int64 v34; // [rsp+F0h] [rbp-38h]

  v18 = a6;
  v25 = a3;
  v26 = a5;
  if ( a3 != a5 )
  {
    v32[0] = &off_3EA348;
    v32[1] = 1LL;
    v32[2] = 8LL;
    v33 = 0LL;
    core::panicking::assert_failed(0LL, &v25, &v26, v32, &off_3EA378);
  }
  v24 = a1;
  *(_QWORD *)&v22 = 0LL;
  *((_QWORD *)&v22 + 1) = 1LL;
  v23 = 0LL;
  core::iter::traits::iterator::Iterator::zip(v32, a2, a2 + 24 * a3, a4, a4 + 24 * a3);
  v34 = 0LL;
  <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v27, v32);
  v6 = v28;
  if ( v28 )
  {
    v18 += 2LL;
    do
    {
      v19 = v6;
      v30 = v29;
      if ( v27 )
      {
        *(_QWORD *)&v15 = &off_3EA358;
        *((_QWORD *)&v15 + 1) = 1LL;
        v16 = (_OWORD *)&byte_8;
        v17 = 0LL;
        v7 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v22, &v15);
        core::result::Result<T,E>::unwrap(v7, &off_3EA390);
        v6 = v19;
      }
      v8 = v18 - *(_QWORD *)(v6 + 16);
      *(_QWORD *)&v15 = &off_3EA368;
      *((_QWORD *)&v15 + 1) = 1LL;
      v16 = (_OWORD *)&byte_8;
      v17 = 0LL;
      v9 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v22, &v15);
      core::result::Result<T,E>::unwrap(v9, &off_3EA3A8);
      *(_QWORD *)&v20 = &v19;
      *((_QWORD *)&v20 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v15 = asc_62330;
      *((_QWORD *)&v15 + 1) = 1LL;
      v16 = &v20;
      v17 = 1uLL;
      v10 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v22, &v15);
      core::result::Result<T,E>::unwrap(v10, &off_3EA3C0);
      alloc::slice::<impl [T]>::repeat(&v15, asc_69B32, v8);
      v21 = v16;
      v20 = v15;
      v31[0] = &v20;
      v31[1] = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v15 = asc_62330;
      *((_QWORD *)&v15 + 1) = 1LL;
      v16 = (__int128 *)v31;
      v17 = 1uLL;
      v11 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v22, &v15);
      core::result::Result<T,E>::unwrap(v11, &off_3EA3D8);
      core::ptr::drop_in_place<alloc::string::String>(&v20);
      *(_QWORD *)&v20 = &v30;
      *((_QWORD *)&v20 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v15 = asc_62330;
      *((_QWORD *)&v15 + 1) = 1LL;
      v16 = &v20;
      v17 = 1uLL;
      v12 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v22, &v15);
      core::result::Result<T,E>::unwrap(v12, &off_3EA3F0);
      <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v27, v32);
      v6 = v28;
    }
    while ( v28 );
  }
  result = v23;
  v14 = (_OWORD *)v24;
  *(_QWORD *)(v24 + 16) = v23;
  *v14 = v22;
  return result;
}