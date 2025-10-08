__int64 __fastcall uu_stty::print_control_chars(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  __int64 v4; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE v5[12]; // [rsp+8h] [rbp-B0h]
  int v6; // [rsp+14h] [rbp-A4h]
  char ***v7; // [rsp+18h] [rbp-A0h] BYREF
  __int64 (__fastcall *v8)(); // [rsp+20h] [rbp-98h]
  __int64 *v9; // [rsp+28h] [rbp-90h]
  __int64 (__fastcall *v10)(); // [rsp+30h] [rbp-88h]
  char **v11; // [rsp+38h] [rbp-80h] BYREF
  char **v12; // [rsp+40h] [rbp-78h] BYREF
  __int64 v13; // [rsp+48h] [rbp-70h]
  char ****v14; // [rsp+50h] [rbp-68h]
  __int64 v15; // [rsp+58h] [rbp-60h]
  __int64 v16; // [rsp+60h] [rbp-58h]
  __int64 v17; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+78h] [rbp-40h]
  __int64 v19; // [rsp+7Ch] [rbp-3Ch]
  int v20; // [rsp+84h] [rbp-34h]

  result = 134LL;
  if ( (a2 & 1) != 0 )
  {
    v3 = 0LL;
    while ( 1 )
    {
      v11 = &(&off_E2E00)[v3];
      uu_stty::control_char_to_string((__int64)&v17, (&off_E2E00)[v3 + 2][a1]);
      if ( __OFSUB__(-v17, 1LL) )
        break;
      v6 = v20;
      *(_QWORD *)&v5[4] = v19;
      v4 = v17;
      *(_DWORD *)v5 = v18;
      v7 = &v11;
      v8 = <&T as core::fmt::Display>::fmt;
      v9 = &v4;
      v10 = <alloc::string::String as core::fmt::Display>::fmt;
      v12 = (char **)&unk_E2DA0;
      v13 = 3LL;
      v16 = 0LL;
      v14 = &v7;
      v15 = 2LL;
      std::io::stdio::_print(&v12);
      v3 += 3LL;
      core::ptr::drop_in_place<alloc::string::String>(v4, *(_QWORD *)v5);
      if ( v3 == 45 )
      {
        v7 = (char ***)(a1 + 6);
        v8 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
        v9 = (__int64 *)(a1 + 5);
        v10 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
        v12 = &off_E2DD0;
        v13 = 3LL;
        v16 = 0LL;
        v14 = &v7;
        v15 = 2LL;
        std::io::stdio::_print(&v12);
        return 134LL;
      }
    }
    return v18;
  }
  return result;
}