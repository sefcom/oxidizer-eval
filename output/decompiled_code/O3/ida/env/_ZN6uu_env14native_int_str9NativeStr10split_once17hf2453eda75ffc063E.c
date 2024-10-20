__int64 __fastcall uu_env::native_int_str::NativeStr::split_once(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r14
  __int128 v6; // [rsp+8h] [rbp-80h] BYREF
  __int64 v7; // [rsp+18h] [rbp-70h]
  __int128 v8; // [rsp+20h] [rbp-68h]
  __int64 v9; // [rsp+30h] [rbp-58h]
  __int128 v10; // [rsp+38h] [rbp-50h]
  __int64 v11; // [rsp+48h] [rbp-40h]
  __int128 v12; // [rsp+50h] [rbp-38h] BYREF
  __int64 v13; // [rsp+60h] [rbp-28h]

  if ( *a3 < 0x80u && (v3 = a2[2]) != 0 )
  {
    v4 = 0LL;
    while ( *(_BYTE *)(a2[1] + v4) != (unsigned __int8)*a3 )
    {
      if ( v3 == ++v4 )
        goto LABEL_6;
    }
    uu_env::native_int_str::NativeStr::slice((signed __int64 *)&v6, a2, 0LL, v4);
    uu_env::native_int_str::NativeStr::slice((signed __int64 *)&v12, a2, v4 + 1, v3);
    v9 = v7;
    v8 = v6;
    v11 = v13;
    v10 = v12;
    *(_OWORD *)a1 = v6;
    *(_QWORD *)(a1 + 32) = *((_QWORD *)&v10 + 1);
    *(_QWORD *)(a1 + 40) = v11;
    *(_QWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 24) = v10;
  }
  else
  {
LABEL_6:
    *(_QWORD *)a1 = 0x8000000000000001LL;
  }
  return a1;
}
