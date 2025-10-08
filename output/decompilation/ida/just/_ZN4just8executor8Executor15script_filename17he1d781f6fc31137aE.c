__int64 __fastcall just::executor::Executor::script_filename(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD v7[2]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v8[2]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v9[4]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v10[7]; // [rsp+40h] [rbp-38h] BYREF

  v7[0] = a3;
  v7[1] = a4;
  if ( !a5 )
  {
    a5 = just::executor::Executor::script_filename::{{closure}}(a2);
    a6 = a3;
  }
  v8[0] = a5;
  v8[1] = a6;
  v9[0] = v7;
  v9[1] = <&T as core::fmt::Display>::fmt;
  v9[2] = v8;
  v9[3] = <&T as core::fmt::Display>::fmt;
  v10[0] = "\x01";
  v10[1] = 2LL;
  v10[4] = 0LL;
  v10[2] = v9;
  v10[3] = 2LL;
  return core::option::Option<T>::map_or_else(a1, 0LL, a3, v10);
}