char __fastcall just::assignment::<impl core::fmt::Display for just::binding::Binding<just::expression::Expression>>::fmt(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbx
  char result; // al
  __int64 v8; // r15
  char **v9; // [rsp+0h] [rbp-68h] BYREF
  __int64 v10; // [rsp+8h] [rbp-60h]
  _QWORD *v11; // [rsp+10h] [rbp-58h]
  __int128 v12; // [rsp+18h] [rbp-50h]
  _QWORD v13[7]; // [rsp+30h] [rbp-38h] BYREF

  v6 = *a2;
  if ( !*(_BYTE *)(a1 + 206)
    || (v9 = &off_42DB30,
        v10 = 1LL,
        v11 = (_QWORD *)&byte_8,
        v12 = 0LL,
        a4 = (unsigned int)((__int64 (__fastcall *)(__int64, __int64, char ***))core::fmt::Formatter::write_fmt)(
                             v6,
                             a2[1],
                             &v9),
        result = 1,
        !(_BYTE)a4) )
  {
    if ( *(_BYTE *)(a1 + 205) )
    {
      v9 = &off_42DB40;
      v10 = 1LL;
      v11 = (_QWORD *)&byte_8;
      v12 = 0LL;
      v8 = a2[1];
      a4 = (unsigned int)((__int64 (__fastcall *)(__int64, __int64, char ***, __int64, __int64, __int64))core::fmt::Formatter::write_fmt)(
                           v6,
                           v8,
                           &v9,
                           a4,
                           a5,
                           a6);
      result = 1;
      if ( (_BYTE)a4 )
        return result;
    }
    else
    {
      v8 = a2[1];
    }
    v13[0] = a1 + 128;
    v13[1] = <just::name::Name as core::fmt::Display>::fmt;
    v13[2] = a1;
    v13[3] = <just::expression::Expression as core::fmt::Display>::fmt;
    v9 = (char **)&unk_42DB50;
    v10 = 2LL;
    v11 = v13;
    v12 = 2uLL;
    return ((__int64 (__fastcall *)(__int64, __int64, char ***, __int64, __int64, __int64))core::fmt::Formatter::write_fmt)(
             v6,
             v8,
             &v9,
             a4,
             a5,
             a6);
  }
  return result;
}