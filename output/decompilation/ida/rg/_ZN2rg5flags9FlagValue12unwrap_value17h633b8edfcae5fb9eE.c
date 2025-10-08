__int64 __fastcall rg::flags::FlagValue::unwrap_value(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp-8h] [rbp-38h] BYREF
  _QWORD v4[3]; // [rsp+0h] [rbp-30h] BYREF
  __int128 v5; // [rsp+18h] [rbp-18h]

  if ( __OFSUB__(0LL, *a2) )
  {
    v4[0] = &off_3EB6F0;
    v4[1] = 1LL;
    v4[2] = &v3;
    v5 = 0LL;
    core::panicking::panic_fmt(v4, &off_3EB700);
  }
  result = a2[2];
  *(_QWORD *)(a1 + 16) = result;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  return result;
}