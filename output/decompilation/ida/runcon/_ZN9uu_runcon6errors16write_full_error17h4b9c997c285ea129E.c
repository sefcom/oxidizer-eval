__int64 __fastcall uu_runcon::errors::write_full_error(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *v7; // [rsp+8h] [rbp-90h] BYREF
  __int64 (__fastcall *v8)(); // [rsp+10h] [rbp-88h]
  __int64 v9; // [rsp+18h] [rbp-80h] BYREF
  __int64 (__fastcall **v10)(); // [rsp+20h] [rbp-78h]
  __int64 v11; // [rsp+28h] [rbp-70h] BYREF
  __int64 v12; // [rsp+30h] [rbp-68h]
  char **v13; // [rsp+38h] [rbp-60h] BYREF
  __int64 v14; // [rsp+40h] [rbp-58h]
  __int64 **v15; // [rsp+48h] [rbp-50h]
  __int64 v16; // [rsp+50h] [rbp-48h]
  __int64 v17; // [rsp+58h] [rbp-40h]

  v9 = a3;
  v10 = &off_EBDE0;
  v7 = &v9;
  v8 = <&T as core::fmt::Display>::fmt;
  v13 = (char **)&unk_196B0;
  v14 = 1LL;
  v17 = 0LL;
  v15 = &v7;
  v16 = 1LL;
  LOBYTE(v3) = 1;
  if ( !(unsigned __int8)core::fmt::Formatter::write_fmt(a1, a2, &v13) )
  {
    v4 = ((__int64 (__fastcall *)(__int64))v10[6])(v9);
    if ( v4 )
    {
      do
      {
        v11 = v4;
        v12 = v5;
        v7 = &v11;
        v8 = <&T as core::fmt::Display>::fmt;
        v13 = &off_EBDB0;
        v14 = 1LL;
        v17 = 0LL;
        v15 = &v7;
        v16 = 1LL;
        v3 = core::fmt::Formatter::write_fmt(a1, a2, &v13);
        if ( (_BYTE)v3 )
          break;
        v4 = (*(__int64 (__fastcall **)(__int64))(v12 + 48))(v11);
      }
      while ( v4 );
    }
    else
    {
      return 0;
    }
  }
  return v3;
}