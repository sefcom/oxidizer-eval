__int64 __fastcall bat::printer::InteractivePrinter::create_fake_panel(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int128 v7; // [rsp+0h] [rbp-C8h] BYREF
  __int128 *v8; // [rsp+10h] [rbp-B8h]
  __int128 v9; // [rsp+20h] [rbp-A8h] BYREF
  __int128 *v10; // [rsp+30h] [rbp-98h]
  __int64 v11; // [rsp+38h] [rbp-90h]
  __int64 v12; // [rsp+40h] [rbp-88h]
  __int128 v13; // [rsp+50h] [rbp-78h] BYREF
  __int128 *v14; // [rsp+60h] [rbp-68h]
  __int64 (__fastcall *v15)(); // [rsp+68h] [rbp-60h]
  __int128 v16; // [rsp+70h] [rbp-58h] BYREF
  __int128 *v17; // [rsp+80h] [rbp-48h]
  _BYTE v18[16]; // [rsp+88h] [rbp-40h] BYREF
  __int64 v19; // [rsp+98h] [rbp-30h]

  if ( !a3 )
    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1);
  *(_QWORD *)&v9 = &unk_81174;
  *((_QWORD *)&v9 + 1) = aTrue_1;
  v10 = (__int128 *)(a3 - 1);
  core::iter::traits::iterator::Iterator::collect(v18, &v9);
  alloc::slice::<impl [T]>::repeat(&v9, asc_9FF9F, 1LL, a3 + ~v19);
  v8 = v10;
  v7 = v9;
  *(_QWORD *)&v13 = v18;
  *((_QWORD *)&v13 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  v14 = &v7;
  v15 = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v9 = "\x01";
  *((_QWORD *)&v9 + 1) = 2LL;
  v12 = 0LL;
  v10 = &v13;
  v11 = 2LL;
  core::option::Option<T>::map_or_else(&v16, 0LL, v4, &v9);
  core::ptr::drop_in_place<alloc::string::String>(&v7);
  v7 = v16;
  v8 = v17;
  if ( (unsigned __int8)bat::style::StyleComponents::grid(a2 + 192) )
  {
    *(_QWORD *)&v16 = &v7;
    *((_QWORD *)&v16 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v9 = &unk_6CEAA0;
    *((_QWORD *)&v9 + 1) = 2LL;
    v12 = 0LL;
    v10 = &v16;
    v11 = 1LL;
    core::option::Option<T>::map_or_else(&v13, 0LL, v5, &v9);
    *(_QWORD *)(a1 + 16) = v14;
    *(_OWORD *)a1 = v13;
    core::ptr::drop_in_place<alloc::string::String>(&v7);
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v8;
    *(_OWORD *)a1 = v7;
  }
  return core::ptr::drop_in_place<alloc::string::String>(v18);
}