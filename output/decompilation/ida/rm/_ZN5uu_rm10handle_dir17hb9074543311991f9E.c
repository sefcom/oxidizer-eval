char __fastcall uu_rm::handle_dir(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(); // rdx
  char **v9; // rax
  char ***v11; // rdi
  __int64 v12; // rsi
  char v13; // cl
  __int64 v14; // rax
  __int64 (__fastcall *v15)(); // rdx
  __int64 (__fastcall *v16)(); // rdx
  __int64 (__fastcall *v17)(); // rdx
  void **v18; // [rsp+8h] [rbp-A0h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+10h] [rbp-98h]
  char **v20; // [rsp+18h] [rbp-90h] BYREF
  __int64 v21; // [rsp+20h] [rbp-88h]
  void **v22; // [rsp+28h] [rbp-80h]
  __int128 v23; // [rsp+30h] [rbp-78h]
  char v24; // [rsp+52h] [rbp-56h]
  void *v25; // [rsp+58h] [rbp-50h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+60h] [rbp-48h]
  __int64 v27; // [rsp+68h] [rbp-40h]
  char v28; // [rsp+70h] [rbp-38h]

  v4 = uu_rm::clean_trailing_slashes();
  v6 = v5;
  v7 = v5;
  if ( (unsigned __int8)uu_rm::path_is_current_or_parent_directory(v4, v5) )
  {
    v25 = (void *)uucore::util_name(v4, v7);
    v26 = v8;
    v18 = &v25;
    v19 = <&T as core::fmt::Display>::fmt;
    v20 = (char **)&unk_EA4A0;
    v21 = 2LL;
    v22 = (void **)&v18;
    v23 = 1uLL;
    std::io::stdio::_eprint(&v20);
    v25 = (void *)v4;
    v26 = (__int64 (__fastcall *)())v6;
    v18 = &v25;
    v19 = <std::path::Display as core::fmt::Display>::fmt;
    v9 = &off_EA550;
    goto LABEL_3;
  }
  v11 = &v20;
  v12 = v4;
  std::path::Path::components(&v20, v4, v6);
  if ( !v24 && (unsigned __int8)((_BYTE)v22 - 5) < 2u )
  {
    v13 = a3[3];
    if ( !v13 )
    {
      if ( a3[4] )
        return uu_rm::remove_dir(v4, v6, a3);
LABEL_19:
      if ( v13 )
      {
        v25 = (void *)uucore::util_name(v11, v12);
        v26 = v15;
        v18 = &v25;
        v19 = <&T as core::fmt::Display>::fmt;
        v20 = (char **)&unk_EA4A0;
        v21 = 2LL;
        v22 = (void **)&v18;
        v23 = 1uLL;
        std::io::stdio::_eprint(&v20);
        v25 = &unk_18B04;
        v26 = <char as core::fmt::Display>::fmt;
        v20 = &off_EA570;
        v21 = 2LL;
        v22 = &v25;
        v23 = 1uLL;
        std::io::stdio::_eprint(&v20);
        v25 = (void *)uucore::util_name(&v20, v12);
        v26 = v16;
        v18 = &v25;
        v19 = <&T as core::fmt::Display>::fmt;
        v20 = (char **)&unk_EA4A0;
        v21 = 2LL;
        v22 = (void **)&v18;
        v23 = 1uLL;
        std::io::stdio::_eprint(&v20);
        v20 = &off_EA590;
        v21 = 1LL;
        v22 = (void **)&byte_8;
        v23 = 0LL;
        std::io::stdio::_eprint(&v20);
        return 1;
      }
      v25 = (void *)uucore::util_name(v11, v12);
      v26 = v17;
      v18 = &v25;
      v19 = <&T as core::fmt::Display>::fmt;
      v20 = (char **)&unk_EA4A0;
      v21 = 2LL;
      v22 = (void **)&v18;
      v23 = 1uLL;
      std::io::stdio::_eprint(&v20);
      v25 = &dword_0 + 1;
      v26 = (__int64 (__fastcall *)())v4;
      v27 = v6;
      v28 = 1;
      v18 = &v25;
      v19 = <os_display::Quoted as core::fmt::Display>::fmt;
      v9 = &off_EA5A0;
LABEL_3:
      v20 = v9;
      v21 = 2LL;
      v22 = (void **)&v18;
      v23 = 1uLL;
      std::io::stdio::_eprint(&v20);
      return 1;
    }
    return uu_rm::remove_dir_recursive(v4, v6, a3);
  }
  v11 = (char ***)v4;
  v12 = v6;
  v14 = std::path::Path::parent(v4, v6);
  v13 = a3[3];
  if ( v13 )
  {
    if ( v14 || !a3[2] )
      return uu_rm::remove_dir_recursive(v4, v6, a3);
    if ( !a3[4] )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( !a3[4] )
    goto LABEL_19;
  if ( !v14 )
  {
LABEL_18:
    if ( a3[2] )
      goto LABEL_19;
  }
  return uu_rm::remove_dir(v4, v6, a3);
}