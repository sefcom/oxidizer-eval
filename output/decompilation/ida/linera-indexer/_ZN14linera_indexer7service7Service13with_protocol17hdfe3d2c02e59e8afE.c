__int64 __fastcall linera_indexer::service::Service::with_protocol(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  void *v4; // rcx
  const char *v5; // r8
  __int64 v6; // r9
  void *v7; // rcx
  void *v9; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+8h] [rbp-B0h]
  __int64 v11; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v13[10]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v14[7]; // [rsp+80h] [rbp-38h] BYREF

  v3 = *(unsigned __int8 *)(a2 + 26);
  v4 = &unk_23B3AE;
  if ( !*(_BYTE *)(a2 + 26) )
    v4 = &dword_0 + 1;
  v9 = v4;
  v5 = "httpSend\x03";
  v6 = a3;
  if ( a3 )
    v5 = (const char *)&unk_23B3AF;
  v10 = v3;
  v7 = &unk_23B3B1;
  if ( !a3 )
    v7 = &dword_0 + 1;
  v13[0] = &v11;
  v13[1] = <&T as core::fmt::Display>::fmt;
  v13[2] = &v9;
  v13[3] = <&T as core::fmt::Display>::fmt;
  v13[4] = a2;
  v13[5] = <alloc::string::String as core::fmt::Display>::fmt;
  v13[6] = a2 + 24;
  v13[7] = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
  v13[8] = &v12;
  v13[9] = <&T as core::fmt::Display>::fmt;
  v14[0] = &unk_1479010;
  v14[1] = 5LL;
  v14[4] = 0LL;
  v14[2] = v13;
  v14[3] = 5LL;
  LOBYTE(v6) = a3 ^ 1;
  ((void (__fastcall *)(__int64, _QWORD, __int64, _QWORD *, const char *, __int64, void *, __int64, const char *, __int64, void *, __int64))core::option::Option<T>::map_or_else)(
    a1,
    0LL,
    3LL * a3,
    v14,
    v5,
    v6,
    v9,
    v10,
    v5,
    2LL * ((unsigned __int8)a3 ^ 1u) + 2,
    v7,
    3LL * a3);
  return a1;
}