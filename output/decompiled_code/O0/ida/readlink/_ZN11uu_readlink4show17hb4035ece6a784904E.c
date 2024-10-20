__int64 __fastcall uu_readlink::show(__int64 a1, __int64 a2, char a3)
{
  char v5; // [rsp+7h] [rbp-C1h] BYREF
  __int64 v6; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v7[2]; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD v8[2]; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v10; // [rsp+40h] [rbp-88h] BYREF
  __int64 v11; // [rsp+48h] [rbp-80h]
  __int64 v12; // [rsp+50h] [rbp-78h]
  _QWORD v13[6]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD v14[8]; // [rsp+88h] [rbp-40h] BYREF

  std::sys::os_str::bytes::Slice::to_str(&v10, a1, a2);
  if ( v10 || !v11 )
    core::option::unwrap_failed(&off_113B60);
  v7[0] = v11;
  v7[1] = v12;
  v8[0] = v7;
  v8[1] = <&T as core::fmt::Display>::fmt;
  v13[0] = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
  v13[1] = 1LL;
  v13[4] = 0LL;
  v13[2] = v8;
  v13[3] = 1LL;
  std::io::stdio::_print(v13);
  if ( a3 != 11 )
  {
    v5 = a3;
    v9[0] = &v5;
    v9[1] = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v14[0] = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
    v14[1] = 1LL;
    v14[4] = 0LL;
    v14[2] = v9;
    v14[3] = 1LL;
    std::io::stdio::_print(v14);
  }
  v6 = std::io::stdio::stdout();
  return <std::io::stdio::Stdout as std::io::Write>::flush(&v6);
}
