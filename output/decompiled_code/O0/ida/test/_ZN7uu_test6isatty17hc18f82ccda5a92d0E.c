__int64 __fastcall uu_test::isatty(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  char v5; // al
  int v6; // eax
  _BYTE v8[24]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v9; // [rsp+18h] [rbp-90h] BYREF
  __int64 v10; // [rsp+20h] [rbp-88h]
  __int64 v11; // [rsp+28h] [rbp-80h]
  __int128 v12; // [rsp+30h] [rbp-78h]
  int v13; // [rsp+40h] [rbp-68h]
  __int64 v14; // [rsp+50h] [rbp-58h] BYREF
  __int64 v15; // [rsp+58h] [rbp-50h]
  __int64 v16; // [rsp+60h] [rbp-48h]
  _BYTE *v17; // [rsp+70h] [rbp-38h]
  __int64 (__fastcall **v18)(); // [rsp+78h] [rbp-30h]
  __int64 v19; // [rsp+80h] [rbp-28h]
  char v20; // [rsp+88h] [rbp-20h]

  std::sys::os_str::bytes::Slice::to_str(&v14);
  if ( v14 || !v15 || (v4 = core::num::<impl core::str::traits::FromStr for i32>::from_str(v15, v16), (v4 & 1) != 0) )
  {
    *(_QWORD *)v8 = 0LL;
    *(_QWORD *)&v8[8] = 1LL;
    *(_QWORD *)&v8[16] = 0LL;
    v19 = 32LL;
    v20 = 3;
    v14 = 0LL;
    v16 = 0LL;
    v17 = v8;
    v18 = &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_35_llvm_17209501424320820274;
    std::sys::os_str::bytes::Slice::to_str(&v9);
    if ( v9 || !v10 )
      v5 = os_display::unix::write_escaped(&v14, a2, a3);
    else
      v5 = os_display::unix::write(&v14, v10, v11, 1LL);
    if ( v5 )
      core::result::unwrap_failed(
        anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_36_llvm_17209501424320820274,
        55LL,
        &v9,
        &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
        &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_38_llvm_17209501424320820274);
    v6 = *(_DWORD *)v8;
    v12 = *(_OWORD *)&v8[4];
    v13 = *(_DWORD *)&v8[20];
    *(_QWORD *)a1 = 5LL;
    *(_DWORD *)(a1 + 8) = v6;
    *(_OWORD *)(a1 + 12) = v12;
    *(_DWORD *)(a1 + 28) = v13;
  }
  else
  {
    *(_BYTE *)(a1 + 8) = isatty(SHIDWORD(v4)) == 1;
    *(_QWORD *)a1 = 7LL;
  }
  return a1;
}
