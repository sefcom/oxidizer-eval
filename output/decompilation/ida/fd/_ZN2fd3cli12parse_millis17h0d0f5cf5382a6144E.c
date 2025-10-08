__int64 __fastcall fd::cli::parse_millis(__int64 a1)
{
  __int64 result; // rax
  _BYTE v2[8]; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]

  core::num::<impl u64>::from_ascii_radix(v2);
  if ( v2[0] == 1 )
  {
    *(_BYTE *)a1 = v2[1];
    result = 1000000000LL;
    *(_DWORD *)(a1 + 8) = 1000000000;
  }
  else
  {
    result = 1000000 * (unsigned int)(v3 % 0x3E8);
    *(_QWORD *)a1 = v3 / 0x3E8;
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}