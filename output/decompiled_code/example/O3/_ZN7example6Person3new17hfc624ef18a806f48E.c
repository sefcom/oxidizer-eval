__int64 __fastcall example::Person::new(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rdx
  char v9; // [rsp+Fh] [rbp-69h] BYREF
  __int64 v10; // [rsp+10h] [rbp-68h] BYREF
  __int64 v11; // [rsp+18h] [rbp-60h]
  __int64 v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+28h] [rbp-50h] BYREF
  __int64 v14; // [rsp+30h] [rbp-48h]
  __int64 v15; // [rsp+38h] [rbp-40h]
  __int64 v16; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v17[8]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]

  v16 = std::io::stdio::stdin();
  v13 = 0LL;
  v14 = 1LL;
  v15 = 0LL;
  if ( std::io::stdio::Stdin::read_line(&v16, &v13) )
  {
    a1[1] = v1;
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
    v3 = v13;
    if ( !v13 )
      return result;
    v4 = v14;
    return _rust_dealloc(v4, v3, 1LL);
  }
  v5 = v13;
  v6 = v14;
  v7 = v15;
  v10 = 0LL;
  v11 = 1LL;
  v12 = 0LL;
  if ( std::io::stdio::Stdin::read_line(&v16, &v10) )
  {
    a1[1] = v8;
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
    if ( v10 )
      result = _rust_dealloc(v11, v10, 1LL);
    if ( v5 )
    {
      v4 = v6;
      v3 = v5;
      return _rust_dealloc(v4, v3, 1LL);
    }
  }
  else
  {
    core::num::<impl core::str::traits::FromStr for i64>::from_str(v17, v11, v12);
    if ( v17[0] )
    {
      v9 = v17[1];
      core::result::unwrap_failed(aCalledResultUn, 43LL, &v9, &unk_567B8, &off_56838);
    }
    result = v18;
    *a1 = v5;
    a1[1] = v6;
    a1[2] = v7;
    a1[3] = result;
    v3 = v10;
    if ( v10 )
    {
      v4 = v11;
      return _rust_dealloc(v4, v3, 1LL);
    }
  }
  return result;
}
