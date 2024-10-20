__int64 __fastcall uu_cp::context_for(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD v6[4]; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v7[3]; // [rsp+28h] [rbp-90h] BYREF
  char v8; // [rsp+40h] [rbp-78h]
  _QWORD v9[3]; // [rsp+48h] [rbp-70h] BYREF
  char v10; // [rsp+60h] [rbp-58h]
  __int128 v11; // [rsp+68h] [rbp-50h] BYREF
  __int64 v12; // [rsp+78h] [rbp-40h]
  _QWORD v13[7]; // [rsp+80h] [rbp-38h] BYREF

  v7[0] = 1LL;
  v7[1] = a2;
  v7[2] = a3;
  v8 = 1;
  v9[0] = 1LL;
  v9[1] = a4;
  v9[2] = a5;
  v10 = 1;
  v6[0] = v7;
  v6[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  v6[2] = v9;
  v6[3] = <os_display::Quoted as core::fmt::Display>::fmt;
  v13[0] = &anon_edd0bd9b3106a806526586a6c9f9e2d7_208_llvm_17885426612345091974;
  v13[1] = 2LL;
  v13[2] = v6;
  v13[3] = 2LL;
  v13[4] = 0LL;
  alloc::fmt::format::format_inner(&v11, v13);
  *(_QWORD *)(a1 + 16) = v12;
  *(_OWORD *)a1 = v11;
  return a1;
}
