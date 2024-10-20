__int64 __fastcall uu_echo::parse_code(__int64 a1, unsigned __int8 a2)
{
  int v2; // edx
  __int64 result; // rax
  unsigned int v4; // r14d
  int v5; // ecx
  bool v6; // cf
  unsigned int v7; // ecx
  char v8; // r12
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // ecx
  _QWORD v12[3]; // [rsp+8h] [rbp-60h] BYREF
  __int128 v13; // [rsp+20h] [rbp-48h]

  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 == 1114113 )
  {
    if ( !(unsigned int)core::str::validations::next_code_point(a1) )
    {
      *(_DWORD *)(a1 + 16) = 1114112;
      return 1114112LL;
    }
    if ( (v2 ^ 0xD800u) - 2048 >= 0x10F800 )
LABEL_29:
      core::panicking::panic_nounwind(aUnsafePrecondi_5, 57LL);
    *(_DWORD *)(a1 + 16) = v2;
    if ( v2 == 1114113 )
LABEL_33:
      core::hint::unreachable_unchecked::precondition_check();
  }
  result = 1114112LL;
  if ( v2 != 1114112 )
  {
    v4 = v2 - 48;
    if ( a2 >= 0xBu )
    {
      if ( a2 >= 0x25u )
      {
        v12[0] = &off_FAC38;
        v12[1] = 1LL;
        v12[2] = 8LL;
        v13 = 0LL;
        core::panicking::panic_fmt(v12, &off_FAC48);
      }
      if ( v4 <= 9 )
      {
        *(_DWORD *)(a1 + 16) = 1114113;
LABEL_15:
        v8 = (a2 == 8) + 1;
        while ( 1 )
        {
          v9 = *(_DWORD *)(a1 + 16);
          if ( v9 == 1114113 )
          {
            if ( !(unsigned int)core::str::validations::next_code_point(a1) )
            {
              *(_DWORD *)(a1 + 16) = 1114112;
              return (unsigned __int8)v4;
            }
            if ( (v9 ^ 0xD800u) - 2048 >= 0x10F800 )
              goto LABEL_29;
            *(_DWORD *)(a1 + 16) = v9;
            if ( v9 == 1114113 )
              goto LABEL_33;
          }
          if ( v9 == 1114112 )
            return (unsigned __int8)v4;
          v10 = v9 - 48;
          if ( a2 >= 0xBu )
          {
            if ( v10 <= 9 )
            {
              *(_DWORD *)(a1 + 16) = 1114113;
              LOBYTE(v4) = a2 * v4 + v10;
              goto LABEL_17;
            }
            v11 = (v9 | 0x20) - 97;
            v6 = __CFADD__(v11, 10);
            v10 = v11 + 10;
            if ( v6 )
              v10 = -1;
          }
          if ( v10 >= a2 )
            return (unsigned __int8)v4;
          LOBYTE(v4) = a2 * v4 + v10;
          *(_DWORD *)(a1 + 16) = 1114113;
LABEL_17:
          if ( !--v8 )
            return (unsigned __int8)v4;
        }
      }
      v5 = (v2 | 0x20) - 97;
      v6 = __CFADD__(v5, 10);
      v7 = v5 + 10;
      v4 = -1;
      if ( !v6 )
        v4 = v7;
    }
    if ( v4 >= a2 )
      return result;
    *(_DWORD *)(a1 + 16) = 1114113;
    goto LABEL_15;
  }
  return result;
}
