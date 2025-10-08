__int64 __fastcall uu_rm::remove(__int64 *a1, __int64 a2, _BYTE *a3)
{
  __int64 *v3; // r15
  __int64 *v4; // r14
  unsigned int v5; // ebp
  char v6; // al
  __int64 v7; // r13
  __int64 v8; // rbx
  char v10; // al
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdx
  char v15; // [rsp+7h] [rbp-151h]
  __int64 v17; // [rsp+10h] [rbp-148h]
  __int64 *v18; // [rsp+18h] [rbp-140h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+20h] [rbp-138h]
  char **v20; // [rsp+28h] [rbp-130h] BYREF
  __int64 v21; // [rsp+30h] [rbp-128h]
  __int64 **v22; // [rsp+38h] [rbp-120h]
  __int64 v23; // [rsp+40h] [rbp-118h]
  __int64 v24; // [rsp+48h] [rbp-110h]
  __int64 v25; // [rsp+58h] [rbp-100h] BYREF
  __int64 v26; // [rsp+60h] [rbp-F8h]
  __int64 v27; // [rsp+68h] [rbp-F0h]
  char v28; // [rsp+70h] [rbp-E8h]
  int dest; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+80h] [rbp-D8h]
  int v31; // [rsp+B0h] [rbp-A8h]

  if ( a2 )
  {
    v3 = a1;
    v4 = &a1[2 * a2];
    v15 = *a3 ^ 1;
    v5 = 0;
    if ( (*a3 & 1) != 0 )
    {
      do
      {
        v7 = *v3;
        v8 = v3[1];
        std::fs::symlink_metadata(&dest);
        if ( dest == 2 )
        {
          core::ptr::drop_in_place<std::io::error::Error>(v30);
          v6 = v15;
        }
        else if ( (v31 & 0xF000) == 0x4000 )
        {
          v6 = uu_rm::handle_dir(v7, v8, a3);
        }
        else
        {
          v6 = uu_rm::remove_file(v7, v8, a3);
        }
        LOBYTE(v5) = v6 | v5;
        v3 += 2;
      }
      while ( v3 != v4 );
    }
    else
    {
      do
      {
        v11 = *v3;
        v12 = v3[1];
        v13 = *v3;
        std::fs::symlink_metadata(&dest);
        if ( dest == 2 )
        {
          v17 = v30;
          v25 = uucore::util_name(&dest, v13);
          v26 = v14;
          v18 = &v25;
          v19 = <&T as core::fmt::Display>::fmt;
          v20 = (char **)&unk_EA4A0;
          v21 = 2LL;
          v24 = 0LL;
          v22 = &v18;
          v23 = 1LL;
          std::io::stdio::_eprint(&v20);
          v25 = 1LL;
          v26 = v11;
          v27 = v12;
          v28 = 1;
          v18 = &v25;
          v19 = <os_display::Quoted as core::fmt::Display>::fmt;
          v20 = &off_EA4C0;
          v21 = 2LL;
          v24 = 0LL;
          v22 = &v18;
          v23 = 1LL;
          std::io::stdio::_eprint(&v20);
          core::ptr::drop_in_place<std::io::error::Error>(v17);
          v10 = v15;
        }
        else if ( (v31 & 0xF000) == 0x4000 )
        {
          v10 = uu_rm::handle_dir(v11, v12, a3);
        }
        else
        {
          v10 = uu_rm::remove_file(v11, v12, a3);
        }
        LOBYTE(v5) = v10 | v5;
        v3 += 2;
      }
      while ( v3 != v4 );
    }
  }
  else
  {
    v5 = 0;
  }
  LOBYTE(v5) = v5 & 1;
  return v5;
}