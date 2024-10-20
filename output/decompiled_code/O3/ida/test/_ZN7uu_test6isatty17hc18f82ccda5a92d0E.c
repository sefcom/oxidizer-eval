int __fastcall uu_test::isatty(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int result; // eax
  char v6; // al
  _BYTE v7[24]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v8[3]; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v10; // [rsp+40h] [rbp-48h]
  _BYTE *v11; // [rsp+50h] [rbp-38h]
  __int64 (__fastcall **v12)(); // [rsp+58h] [rbp-30h]
  __int64 v13; // [rsp+60h] [rbp-28h]
  char v14; // [rsp+68h] [rbp-20h]

  std::sys::os_str::bytes::Slice::to_str(v9, a2, a3);
  if ( v9[0] || (v4 = core::num::<impl core::str::traits::FromStr for i32>::from_str(v9[1], v10), (v4 & 1) != 0) )
  {
    *(_QWORD *)v7 = 0LL;
    *(_QWORD *)&v7[8] = 1LL;
    *(_QWORD *)&v7[16] = 0LL;
    v13 = 32LL;
    v14 = 3;
    v9[0] = 0LL;
    v10 = 0LL;
    v11 = v7;
    v12 = &off_E1CB0;
    std::sys::os_str::bytes::Slice::to_str(v8, a2, a3);
    if ( v8[0] )
      v6 = os_display::unix::write_escaped(v9, a2, a3);
    else
      v6 = os_display::unix::write(v9, v8[1], v8[2], 1LL);
    if ( v6 )
      core::result::unwrap_failed(aADisplayImplem, 55LL, v8, &unk_E1CF8, &off_E1CE0);
    result = *(_DWORD *)v7;
    *(_DWORD *)(a1 + 28) = *(_DWORD *)&v7[20];
    *(_OWORD *)(a1 + 12) = *(_OWORD *)&v7[4];
    *(_QWORD *)a1 = 5LL;
    *(_DWORD *)(a1 + 8) = result;
  }
  else
  {
    result = isatty(SHIDWORD(v4));
    *(_BYTE *)(a1 + 8) = result == 1;
    *(_QWORD *)a1 = 7LL;
  }
  return result;
}
