__int64 __fastcall uu_hostid::hostid(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v9[2]; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v10[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = gethostid();
  v9[0] = &v8;
  v9[1] = core::fmt::num::<impl core::fmt::LowerHex for usize>::fmt;
  v10[0] = &unk_D5270;
  v10[1] = 2LL;
  v10[4] = asc_17828;
  v10[5] = 1LL;
  v10[2] = v9;
  v10[3] = 1LL;
  return ((__int64 (__fastcall *)(_QWORD *, __int64, __int64, __int64, __int64, __int64, _QWORD))std::io::stdio::_print)(
           v10,
           a2,
           v3,
           v4,
           v5,
           v6,
           v2);
}