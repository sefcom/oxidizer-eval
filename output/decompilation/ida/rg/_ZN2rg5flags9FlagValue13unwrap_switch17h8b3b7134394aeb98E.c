__int64 __fastcall rg::flags::FlagValue::unwrap_switch(__int64 a1)
{
  unsigned int v1; // ebx
  char v3; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v4[3]; // [rsp+10h] [rbp-48h] BYREF
  __int128 v5; // [rsp+28h] [rbp-30h]

  if ( !__OFSUB__(-*(_QWORD *)a1, 1LL) )
  {
    v4[0] = &off_3EB6C8;
    v4[1] = 1LL;
    v4[2] = &v3;
    v5 = 0LL;
    core::panicking::panic_fmt(v4, &off_3EB6D8);
  }
  v1 = *(unsigned __int8 *)(a1 + 8);
  core::ptr::drop_in_place<rg::flags::FlagValue>(0x8000000000000000LL, *(_QWORD *)(a1 + 8));
  return v1;
}