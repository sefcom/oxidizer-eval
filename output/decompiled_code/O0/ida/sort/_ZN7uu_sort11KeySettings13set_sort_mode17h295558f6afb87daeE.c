__int64 __fastcall uu_sort::KeySettings::set_sort_mode(__int64 a1, _BYTE *a2, unsigned __int8 a3)
{
  __int64 v4; // rax
  int v5; // eax
  int v7; // [rsp+0h] [rbp-A8h] BYREF
  int v8; // [rsp+4h] [rbp-A4h] BYREF
  _QWORD v9[4]; // [rsp+8h] [rbp-A0h] BYREF
  __int128 v10; // [rsp+28h] [rbp-80h] BYREF
  __int64 v11; // [rsp+38h] [rbp-70h]
  __int64 v12; // [rsp+40h] [rbp-68h] BYREF
  __int128 v13; // [rsp+48h] [rbp-60h]
  _QWORD v14[10]; // [rsp+58h] [rbp-50h] BYREF

  v4 = (char)a2[5];
  if ( v4 == 6 || (_BYTE)v4 == a3 )
  {
    uu_sort::KeySettings::check_compatibility(&v12, a3, a2[3] & 1, a2[2] & 1);
    if ( v12 == 0x8000000000000000LL )
    {
      a2[5] = a3;
      *(_QWORD *)a1 = 0x8000000000000000LL;
    }
    else
    {
      *(_QWORD *)a1 = v12;
      *(_OWORD *)(a1 + 8) = v13;
    }
  }
  else
  {
    v7 = *(_DWORD *)&aN[4 * v4];
    switch ( a3 )
    {
      case 0u:
        v5 = 110;
        break;
      case 1u:
        v5 = 104;
        break;
      case 2u:
        v5 = 103;
        break;
      case 3u:
        v5 = 77;
        break;
      case 4u:
        v5 = 86;
        break;
      case 5u:
        v5 = 82;
        break;
      case 6u:
        core::option::unwrap_failed(&off_1D2BA0);
    }
    v8 = v5;
    v9[0] = &v7;
    v9[1] = <char as core::fmt::Display>::fmt;
    v9[2] = &v8;
    v9[3] = <char as core::fmt::Display>::fmt;
    v14[0] = &off_1D2B70;
    v14[1] = 3LL;
    v14[2] = v9;
    v14[3] = 2LL;
    v14[4] = 0LL;
    alloc::fmt::format::format_inner(&v10, v14);
    *(_QWORD *)(a1 + 16) = v11;
    *(_OWORD *)a1 = v10;
  }
  return a1;
}
