__int64 __fastcall example::example_dividing_by_zero()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  _BYTE v7[48]; // [rsp+58h] [rbp-110h] BYREF
  _BYTE v8[24]; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v9; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+A8h] [rbp-C0h]
  _BYTE v11[48]; // [rsp+B0h] [rbp-B8h] BYREF
  _BYTE v12[48]; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v13; // [rsp+110h] [rbp-58h] BYREF
  __int128 v14; // [rsp+128h] [rbp-40h]
  _DWORD v15[5]; // [rsp+13Ch] [rbp-2Ch] BYREF
  __int64 v16; // [rsp+150h] [rbp-18h]
  _DWORD *v17; // [rsp+158h] [rbp-10h]
  __int64 (__fastcall *v18)(); // [rsp+160h] [rbp-8h]

  core::fmt::Arguments::new_const(v7, &off_5B090);
  std::io::stdio::_print(v7);
  alloc::string::String::new(v8);
  v9 = std::io::stdio::stdin();
  v0 = std::io::stdio::Stdin::read_line(&v9, v8);
  core::result::Result<T,E>::expect(v0, v1, aFailedToReadLi, 19LL, &off_5B0A0);
  v2 = <alloc::string::String as core::ops::deref::Deref>::deref(v8);
  v4 = core::str::<impl str>::trim(v2, v3);
  v16 = core::str::<impl str>::parse(v4, v5);
  v10 = v16;
  if ( (v16 & 1) != 0 )
  {
    core::fmt::Arguments::new_const(v11, &off_5B0F0);
    std::io::stdio::_print(v11);
    return core::ptr::drop_in_place<alloc::string::String>(v8);
  }
  else
  {
    if ( !HIDWORD(v10) )
      core::panicking::panic_const::panic_const_div_by_zero(&off_5B0D8);
    v15[0] = 10 / SHIDWORD(v10);
    v17 = v15;
    v18 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    *(_QWORD *)&v14 = v15;
    *((_QWORD *)&v14 + 1) = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v13 = v14;
    core::fmt::Arguments::new_v1(v12, &off_5B0B8, &v13);
    std::io::stdio::_print(v12);
    return core::ptr::drop_in_place<alloc::string::String>(v8);
  }
}
