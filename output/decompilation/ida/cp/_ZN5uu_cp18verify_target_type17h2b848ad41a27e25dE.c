unsigned __int64 *__fastcall uu_cp::verify_target_type(unsigned __int64 *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned __int64 v6; // r13
  char is_dir; // al
  char **v8; // rax
  __int64 *v10; // [rsp+0h] [rbp-88h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+8h] [rbp-80h]
  __int64 v12; // [rsp+10h] [rbp-78h] BYREF
  __int64 v13; // [rsp+18h] [rbp-70h]
  __int64 v14; // [rsp+20h] [rbp-68h]
  char v15; // [rsp+28h] [rbp-60h]
  _QWORD v16[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = 0x8000000000000003LL;
  is_dir = std::path::Path::is_dir(a2, a3);
  if ( *a4 == 1 )
  {
    if ( is_dir )
    {
      v12 = 1LL;
      v13 = a2;
      v14 = a3;
      v15 = 1;
      v10 = &v12;
      v11 = <os_display::Quoted as core::fmt::Display>::fmt;
      v8 = &off_15EAE8;
LABEL_7:
      v16[0] = v8;
      v16[1] = 2LL;
      v16[4] = 0LL;
      v16[2] = &v10;
      v16[3] = 1LL;
      core::option::Option<T>::map_or_else(a1 + 1, v16);
      goto LABEL_8;
    }
  }
  else if ( !is_dir )
  {
    v12 = 1LL;
    v13 = a2;
    v14 = a3;
    v15 = 1;
    v10 = &v12;
    v11 = <os_display::Quoted as core::fmt::Display>::fmt;
    v8 = &off_15EDB0;
    goto LABEL_7;
  }
  v6 = 0x800000000000000CLL;
LABEL_8:
  *a1 = v6;
  return a1;
}