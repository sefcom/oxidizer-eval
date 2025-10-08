__int64 __fastcall firecracker::api_server::parsed_request::describe_with_body(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rdx
  char v8; // [rsp+7h] [rbp-A1h] BYREF
  _QWORD v9[6]; // [rsp+8h] [rbp-A0h] BYREF
  _QWORD v10[2]; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v11[6]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v12[48]; // [rsp+78h] [rbp-30h] BYREF

  v8 = a2;
  v10[0] = a3;
  v10[1] = a4;
  core::str::converts::from_utf8(v9, a5, a6);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v12);
  v9[0] = &v8;
  v9[1] = <micro_http::common::Method as core::fmt::Debug>::fmt;
  v9[2] = v10;
  v9[3] = <&T as core::fmt::Debug>::fmt;
  v9[4] = v12;
  v9[5] = <alloc::string::String as core::fmt::Debug>::fmt;
  v11[0] = &unk_3A37E0;
  v11[1] = 3LL;
  v11[4] = 0LL;
  v11[2] = v9;
  v11[3] = 3LL;
  core::option::Option<T>::map_or_else(a1, 0LL, v6, v11);
  return core::ptr::drop_in_place<alloc::string::String>(v12);
}