__int64 __fastcall alacritty::migrate::Migration::success_message(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // rax
  char **v4; // rax
  __int64 v6; // [rsp+8h] [rbp-60h] BYREF
  __int64 v7; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v8; // [rsp+18h] [rbp-50h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+20h] [rbp-48h]
  __int64 *v10; // [rsp+28h] [rbp-40h]
  __int64 (__fastcall *v11)(); // [rsp+30h] [rbp-38h]
  char **v12; // [rsp+38h] [rbp-30h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h]
  __int64 **v14; // [rsp+48h] [rbp-20h]
  __int64 v15; // [rsp+50h] [rbp-18h]
  __int64 v16; // [rsp+58h] [rbp-10h]

  if ( __OFSUB__(0LL, *(_QWORD *)(a2 + 16)) )
  {
    v6 = a2;
    if ( (_BYTE)a3 )
    {
      v8 = &v6;
      v9 = <&T as core::fmt::Debug>::fmt;
      v3 = &off_883808;
    }
    else
    {
      v6 = a2;
      v8 = &v6;
      v9 = <&T as core::fmt::Debug>::fmt;
      v3 = &off_883818;
    }
    v12 = v3;
    v13 = 1LL;
    v16 = 0LL;
    v14 = &v8;
    v15 = 1LL;
  }
  else
  {
    v7 = a2;
    v6 = a2 + 16;
    if ( (_BYTE)a3 )
    {
      v8 = &v7;
      v9 = <&T as core::fmt::Debug>::fmt;
      v10 = &v6;
      v11 = <&T as core::fmt::Debug>::fmt;
      v4 = &off_8837C8;
    }
    else
    {
      v7 = a2;
      v6 = a2 + 16;
      v8 = &v7;
      v9 = <&T as core::fmt::Debug>::fmt;
      v10 = &v6;
      v11 = <&T as core::fmt::Debug>::fmt;
      v4 = &off_8837E8;
    }
    v12 = v4;
    v13 = 2LL;
    v16 = 0LL;
    v14 = &v8;
    v15 = 2LL;
  }
  return core::option::Option<T>::map_or_else(a1, 0LL, a3, &v12);
}