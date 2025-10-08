__int64 __fastcall sniffnet::utils::formatted_strings::get_formatted_num_seconds(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  __int64 **v3; // rcx
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  __int128 v7; // rt0
  unsigned __int64 v8; // r14
  __int64 v10; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v12; // [rsp+10h] [rbp-98h] BYREF
  __int64 v13; // [rsp+18h] [rbp-90h]
  _QWORD *v14; // [rsp+20h] [rbp-88h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+28h] [rbp-80h]
  __int64 *v16; // [rsp+30h] [rbp-78h]
  __int64 (__fastcall *v17)(); // [rsp+38h] [rbp-70h]
  unsigned __int64 *v18; // [rsp+40h] [rbp-68h]
  __int64 (__fastcall *v19)(); // [rsp+48h] [rbp-60h]
  __int64 *v20; // [rsp+50h] [rbp-58h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+58h] [rbp-50h]
  unsigned __int64 *v22; // [rsp+60h] [rbp-48h]
  __int64 (__fastcall *v23)(); // [rsp+68h] [rbp-40h]
  void *v24; // [rsp+70h] [rbp-38h]
  __int64 v25; // [rsp+78h] [rbp-30h]
  _QWORD v26[5]; // [rsp+80h] [rbp-28h] BYREF

  if ( __PAIR128__(a3, a2) >= 0xE10 )
  {
    v4 = a3;
    v5 = _udivti3(a2, a3, 3600LL);
    v26[1] = v6;
    v26[0] = v5;
    v10 = (unsigned int)(34953 * (a2 - 3600 * v5)) >> 21;
    v11 = 0LL;
    *(_QWORD *)&v7 = a2;
    *((_QWORD *)&v7 + 1) = v4;
    v8 = __CFADD__((unsigned __int64)(v7 >> 2), v4 >> 2) + (v7 >> 2) + (v4 >> 2);
    a3 = v8 / 0xF;
    v12 = (a2 & 3) + 4 * (v8 % 0xF);
    v13 = 0LL;
    v14 = v26;
    v15 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
    v16 = &v10;
    v17 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
    v18 = &v12;
    v19 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
    v20 = (__int64 *)&unk_2E01140;
    v21 = (__int64 (__fastcall *)())(&dword_0 + 3);
    v24 = &unk_1838028;
    v25 = 3LL;
    v22 = (unsigned __int64 *)&v14;
    v23 = (__int64 (__fastcall *)())(&dword_0 + 3);
    v3 = &v20;
  }
  else
  {
    v10 = (unsigned __int16)a2 / 0x3Cu;
    v11 = 0LL;
    v12 = (unsigned __int16)a2 % 0x3Cu;
    v13 = 0LL;
    v20 = &v10;
    v21 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
    v22 = &v12;
    v23 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
    v14 = &unk_2DFEF58;
    v15 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v18 = (unsigned __int64 *)&unk_184B0F8;
    v19 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v16 = (__int64 *)&v20;
    v17 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v3 = &v14;
  }
  return core::option::Option<T>::map_or_else(a1, 0LL, a3, v3);
}