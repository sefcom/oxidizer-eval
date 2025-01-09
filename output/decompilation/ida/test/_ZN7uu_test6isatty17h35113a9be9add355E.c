int __fastcall uu_test::isatty(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int result; // eax
  __int64 v6; // [rsp+8h] [rbp-50h] BYREF
  __int64 v7; // [rsp+10h] [rbp-48h]
  __int64 v8; // [rsp+18h] [rbp-40h]
  char v9; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+28h] [rbp-30h] BYREF
  __int128 v11; // [rsp+2Ch] [rbp-2Ch]
  int v12; // [rsp+3Ch] [rbp-1Ch]

  std::sys::os_str::bytes::Slice::to_str(&v6, a2);
  if ( v6 || (v4 = core::num::<impl core::str::traits::FromStr for i32>::from_str(v7, v8), (v4 & 1) != 0) )
  {
    v6 = 1LL;
    v7 = a2;
    v8 = a3;
    v9 = 1;
    <T as alloc::string::ToString>::to_string(&v10, &v6);
    result = v10;
    *(_DWORD *)(a1 + 28) = v12;
    *(_OWORD *)(a1 + 12) = v11;
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
