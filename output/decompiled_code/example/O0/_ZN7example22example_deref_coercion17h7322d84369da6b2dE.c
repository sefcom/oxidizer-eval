__int64 __fastcall example::example_deref_coercion()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rdx
  _BYTE v4[48]; // [rsp+30h] [rbp-98h] BYREF
  __int128 v5; // [rsp+60h] [rbp-68h] BYREF
  __int128 v6; // [rsp+70h] [rbp-58h]
  _QWORD v7[2]; // [rsp+80h] [rbp-48h] BYREF
  _BYTE v8[40]; // [rsp+90h] [rbp-38h] BYREF
  _QWORD *v9; // [rsp+B8h] [rbp-10h]
  __int64 (__fastcall *v10)(); // [rsp+C0h] [rbp-8h]

  <alloc::string::String as core::convert::From<&str>>::from(v8, aThisIsADerefCo, 32LL);
  v0 = <alloc::string::String as core::ops::deref::Deref>::deref(v8);
  v7[0] = core::str::<impl str>::get(v0, v1, 1LL);
  v7[1] = v2;
  v9 = v7;
  v10 = <core::option::Option<T> as core::fmt::Debug>::fmt;
  *(_QWORD *)&v6 = v7;
  *((_QWORD *)&v6 + 1) = <core::option::Option<T> as core::fmt::Debug>::fmt;
  v5 = v6;
  core::fmt::Arguments::new_v1(v4, &unk_592F0, &v5);
  std::io::stdio::_print(v4);
  return core::ptr::drop_in_place<alloc::string::String>(v8);
}
