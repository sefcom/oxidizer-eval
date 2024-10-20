__int64 __fastcall uu_nl::NumberFormat::format(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  char *v4; // r14
  void *v6; // [rsp+8h] [rbp-210h] BYREF
  __int64 v7; // [rsp+10h] [rbp-208h]
  _QWORD *v8; // [rsp+18h] [rbp-200h]
  __int64 v9; // [rsp+20h] [rbp-1F8h]
  _QWORD *v10; // [rsp+28h] [rbp-1F0h]
  __int64 v11; // [rsp+30h] [rbp-1E8h]
  __int64 v12; // [rsp+38h] [rbp-1E0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-1D8h] BYREF
  _QWORD v14[4]; // [rsp+48h] [rbp-1D0h] BYREF
  _QWORD v15[4]; // [rsp+68h] [rbp-1B0h] BYREF
  _QWORD v16[4]; // [rsp+88h] [rbp-190h] BYREF
  _QWORD v17[4]; // [rsp+A8h] [rbp-170h] BYREF
  _QWORD v18[6]; // [rsp+C8h] [rbp-150h] BYREF
  char v19; // [rsp+F8h] [rbp-120h]
  _QWORD v20[6]; // [rsp+100h] [rbp-118h] BYREF
  char v21; // [rsp+130h] [rbp-E8h]
  _QWORD v22[6]; // [rsp+138h] [rbp-E0h] BYREF
  char v23; // [rsp+168h] [rbp-B0h]
  _QWORD v24[6]; // [rsp+170h] [rbp-A8h] BYREF
  char v25; // [rsp+1A0h] [rbp-78h]
  char v26; // [rsp+1A8h] [rbp-70h] BYREF
  char v27; // [rsp+1C0h] [rbp-58h] BYREF
  char v28; // [rsp+1D8h] [rbp-40h] BYREF
  char v29; // [rsp+1F0h] [rbp-28h] BYREF

  v12 = a3;
  if ( *a2 )
  {
    if ( *a2 == 1 )
    {
      v15[0] = &v12;
      v15[1] = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
      v15[2] = a4;
      v15[3] = 0LL;
      v20[0] = 2LL;
      v20[2] = 1LL;
      v20[3] = 1LL;
      v20[4] = 0LL;
      v20[5] = 32LL;
      v21 = 1;
      v6 = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
      v7 = 1LL;
      v8 = v15;
      v9 = 2LL;
      v10 = v20;
      v11 = 1LL;
      v4 = &v27;
    }
    else if ( a3 < 0 )
    {
      if ( a3 == 0x8000000000000000LL )
        core::panicking::panic_const::panic_const_neg_overflow(&anon_f2fb85536fffd0a461a91483864f6ad6_26_llvm_13329461704207359836);
      v13 = -a3;
      if ( !a4 )
        core::panicking::panic_const::panic_const_sub_overflow(&off_299C00);
      v16[0] = &v13;
      v16[1] = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
      v16[2] = a4 - 1;
      v16[3] = 0LL;
      v22[0] = 2LL;
      v22[2] = 1LL;
      v22[3] = 1LL;
      v22[4] = 0LL;
      v22[5] = 48LL;
      v23 = 1;
      v6 = &off_299BF0;
      v7 = 1LL;
      v8 = v16;
      v9 = 2LL;
      v10 = v22;
      v11 = 1LL;
      v4 = &v28;
    }
    else
    {
      v17[0] = &v12;
      v17[1] = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
      v17[2] = a4;
      v17[3] = 0LL;
      v24[0] = 2LL;
      v24[2] = 1LL;
      v24[3] = 1LL;
      v24[4] = 0LL;
      v24[5] = 48LL;
      v25 = 1;
      v6 = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
      v7 = 1LL;
      v8 = v17;
      v9 = 2LL;
      v10 = v24;
      v11 = 1LL;
      v4 = &v29;
    }
  }
  else
  {
    v14[0] = &v12;
    v14[1] = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
    v14[2] = a4;
    v14[3] = 0LL;
    v18[0] = 2LL;
    v18[2] = 1LL;
    v18[3] = 1LL;
    v18[4] = 0LL;
    v18[5] = 32LL;
    v19 = 0;
    v6 = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
    v7 = 1LL;
    v8 = v14;
    v9 = 2LL;
    v10 = v18;
    v11 = 1LL;
    v4 = &v26;
  }
  alloc::fmt::format::format_inner(v4, &v6);
  *(_QWORD *)(a1 + 16) = *((_QWORD *)v4 + 2);
  *(_OWORD *)a1 = *(_OWORD *)v4;
  return a1;
}
