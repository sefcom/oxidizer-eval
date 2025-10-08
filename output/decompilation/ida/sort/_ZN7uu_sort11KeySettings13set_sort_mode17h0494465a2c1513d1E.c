__int64 __fastcall uu_sort::KeySettings::set_sort_mode(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  int v6; // [rsp+8h] [rbp-70h] BYREF
  int v7; // [rsp+Ch] [rbp-6Ch] BYREF
  __int128 v8; // [rsp+10h] [rbp-68h] BYREF
  _QWORD *v9; // [rsp+20h] [rbp-58h]
  __int64 v10; // [rsp+28h] [rbp-50h]
  __int64 v11; // [rsp+30h] [rbp-48h]
  _QWORD v12[7]; // [rsp+40h] [rbp-38h] BYREF

  v4 = *(unsigned __int8 *)(a2 + 5);
  if ( (_BYTE)v4 != a3 && (_BYTE)v4 != 6 )
  {
    v6 = dword_2C2A0[v4];
    v7 = dword_2C2A0[a3];
    v12[0] = &v6;
    v12[1] = <char as core::fmt::Display>::fmt;
    v12[2] = &v7;
    v12[3] = <char as core::fmt::Display>::fmt;
    *(_QWORD *)&v8 = &off_18CDC0;
    *((_QWORD *)&v8 + 1) = 3LL;
    v11 = 0LL;
    v9 = v12;
    v10 = 2LL;
    return core::option::Option<T>::map_or_else(a1, &v8);
  }
  else
  {
    uu_sort::KeySettings::check_compatibility(&v8, a3, *(_BYTE *)(a2 + 3), *(_BYTE *)(a2 + 2));
    if ( __OFSUB__(0LL, (_QWORD)v8) )
    {
      result = 0x8000000000000000LL;
      *(_BYTE *)(a2 + 5) = a3;
      *a1 = 0x8000000000000000LL;
    }
    else
    {
      result = (__int64)v9;
      a1[2] = v9;
      *(_OWORD *)a1 = v8;
    }
  }
  return result;
}