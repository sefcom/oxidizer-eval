__int64 __fastcall uu_stty::control_char_to_string(__int64 a1, char a2)
{
  unsigned __int8 v2; // al
  const char *v3; // rdx
  __int64 v4; // rcx
  char *v5; // rdx
  unsigned __int64 v6; // rsi
  int v8; // [rsp+0h] [rbp-84h] BYREF
  _QWORD v9[2]; // [rsp+4h] [rbp-80h] BYREF
  _QWORD v10[2]; // [rsp+14h] [rbp-70h] BYREF
  _QWORD v11[6]; // [rsp+24h] [rbp-60h] BYREF
  _QWORD v12[6]; // [rsp+54h] [rbp-30h] BYREF

  if ( !a2 )
    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, aUndef, 7LL);
  v2 = a2 & 0x7F;
  v3 = aM;
  v4 = 1LL;
  if ( a2 >= 0 )
    v3 = (_BYTE *)(&dword_0 + 1);
  v9[0] = v3;
  v9[1] = ((unsigned __int8)a2 >> 6) & 2;
  if ( v2 >= 0x20u )
  {
    if ( v2 == 127 )
    {
      v5 = &asc_1B211[1];
      v6 = (unsigned __int64)&asc_1B211[1] & 0xFFFFFFFF00000000LL;
      v2 = 63;
    }
    else
    {
      LODWORD(v5) = 1;
      v6 = 0LL;
      v4 = 0LL;
    }
  }
  else
  {
    v2 = a2 & 0x3F | 0x40;
    v5 = &asc_1B211[1];
    v6 = (unsigned __int64)&asc_1B211[1] & 0xFFFFFFFF00000000LL;
  }
  v10[0] = v6 | (unsigned int)v5;
  v10[1] = v4;
  v8 = v2;
  v11[0] = v9;
  v11[1] = <&T as core::fmt::Display>::fmt;
  v11[2] = v10;
  v11[3] = <&T as core::fmt::Display>::fmt;
  v11[4] = &v8;
  v11[5] = <char as core::fmt::Display>::fmt;
  v12[0] = &unk_1B1E0;
  v12[1] = 3LL;
  v12[4] = 0LL;
  v12[2] = v11;
  v12[3] = 3LL;
  return core::option::Option<T>::map_or_else(a1, v12);
}