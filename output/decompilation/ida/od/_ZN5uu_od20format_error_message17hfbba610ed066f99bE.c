__int64 __fastcall uu_od::format_error_message(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char **v6; // rax
  _QWORD *v8; // [rsp+8h] [rbp-80h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+10h] [rbp-78h]
  __int64 *v10; // [rsp+18h] [rbp-70h]
  __int64 (__fastcall *v11)(); // [rsp+20h] [rbp-68h]
  __int64 v12; // [rsp+28h] [rbp-60h] BYREF
  __int64 v13; // [rsp+30h] [rbp-58h]
  __int64 v14; // [rsp+38h] [rbp-50h]
  char v15; // [rsp+40h] [rbp-48h]
  char **v16; // [rsp+48h] [rbp-40h] BYREF
  __int64 v17; // [rsp+50h] [rbp-38h]
  _QWORD *v18; // [rsp+58h] [rbp-30h]
  __int64 v19; // [rsp+60h] [rbp-28h]
  __int64 v20; // [rsp+68h] [rbp-20h]
  _QWORD v21[2]; // [rsp+78h] [rbp-10h] BYREF

  v21[0] = a5;
  v21[1] = a6;
  switch ( a2 )
  {
    case 0LL:
      v12 = 0LL;
      v13 = a3;
      v14 = a4;
      v15 = 1;
      v8 = v21;
      v9 = <&T as core::fmt::Display>::fmt;
      v10 = &v12;
      v11 = <os_display::Quoted as core::fmt::Display>::fmt;
      v6 = &off_103AE8;
      goto LABEL_4;
    case 1LL:
    case 3LL:
      v12 = 0LL;
      v13 = a3;
      v14 = a4;
      v15 = 1;
      v8 = v21;
      v9 = <&T as core::fmt::Display>::fmt;
      v10 = &v12;
      v11 = <os_display::Quoted as core::fmt::Display>::fmt;
      v6 = &off_103B08;
LABEL_4:
      v16 = v6;
      v17 = 2LL;
      break;
    case 2LL:
      v12 = 0LL;
      v13 = a3;
      v14 = a4;
      v15 = 1;
      v8 = v21;
      v9 = <&T as core::fmt::Display>::fmt;
      v10 = &v12;
      v11 = <os_display::Quoted as core::fmt::Display>::fmt;
      v16 = &off_103B28;
      v17 = 3LL;
      break;
  }
  v20 = 0LL;
  v18 = &v8;
  v19 = 2LL;
  return core::option::Option<T>::map_or_else(a1, &v16);
}