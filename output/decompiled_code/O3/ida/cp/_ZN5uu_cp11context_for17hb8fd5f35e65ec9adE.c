__int64 __fastcall uu_cp::context_for(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD v6[4]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v7[3]; // [rsp+20h] [rbp-78h] BYREF
  char v8; // [rsp+38h] [rbp-60h]
  _QWORD v9[3]; // [rsp+40h] [rbp-58h] BYREF
  char v10; // [rsp+58h] [rbp-40h]
  _QWORD v11[7]; // [rsp+60h] [rbp-38h] BYREF

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
  v11[0] = &anon_7947dff69a24cd925ba6dc87d49388a5_176_llvm_6903499209109998583;
  v11[1] = 2LL;
  v11[4] = 0LL;
  v11[2] = v6;
  v11[3] = 2LL;
  alloc::fmt::format::format_inner(a1, v11);
  return a1;
}
