__int64 *__fastcall uu_cp::verify_target_type(__int64 *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  char is_dir; // al
  __int64 v7; // rcx
  char **v8; // rax
  __int64 *v10; // [rsp+8h] [rbp-80h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+10h] [rbp-78h]
  __int64 v12; // [rsp+18h] [rbp-70h] BYREF
  __int64 v13; // [rsp+20h] [rbp-68h]
  __int64 v14; // [rsp+28h] [rbp-60h]
  char v15; // [rsp+30h] [rbp-58h]
  _QWORD v16[10]; // [rsp+38h] [rbp-50h] BYREF

  is_dir = std::path::Path::is_dir(a2, a3);
  if ( *a4 )
  {
    v7 = 13LL;
    if ( is_dir )
    {
      v12 = 1LL;
      v13 = a2;
      v14 = a3;
      v15 = 1;
      v10 = &v12;
      v11 = <os_display::Quoted as core::fmt::Display>::fmt;
      v8 = &off_1B5DB8;
LABEL_6:
      v16[0] = v8;
      v16[1] = 2LL;
      v16[4] = 0LL;
      v16[2] = &v10;
      v16[3] = 1LL;
      core::option::Option<T>::map_or_else(a1 + 1, v16);
      v7 = 4LL;
    }
  }
  else
  {
    v7 = 13LL;
    if ( !is_dir )
    {
      v12 = 1LL;
      v13 = a2;
      v14 = a3;
      v15 = 1;
      v10 = &v12;
      v11 = <os_display::Quoted as core::fmt::Display>::fmt;
      v8 = &off_1B60B0;
      goto LABEL_6;
    }
  }
  *a1 = v7;
  return a1;
}
