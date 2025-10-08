__int64 __fastcall fd::output::print_entry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  bool v6; // bp
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char **v13; // rax
  char **v14; // [rsp+0h] [rbp-98h] BYREF
  __int64 v15; // [rsp+8h] [rbp-90h]
  _QWORD *v16; // [rsp+10h] [rbp-88h]
  __int128 v17; // [rsp+18h] [rbp-80h]
  __int128 v18; // [rsp+30h] [rbp-68h] BYREF
  __int64 v19; // [rsp+40h] [rbp-58h]
  _QWORD v20[2]; // [rsp+48h] [rbp-50h] BYREF
  __int128 v21; // [rsp+58h] [rbp-40h] BYREF
  __int64 v22; // [rsp+68h] [rbp-30h]

  if ( *(_BYTE *)(a3 + 488) )
  {
    v4 = fd::dir_entry::DirEntry::path(a2);
    fd::hyperlink::PathUrl::new((__int64)&v21, v4, v5);
    v6 = !__OFSUB__(0LL, (_QWORD)v21);
    if ( !__OFSUB__(0LL, (_QWORD)v21) )
    {
      v19 = v22;
      v18 = v21;
      v20[0] = &v18;
      v20[1] = <fd::hyperlink::PathUrl as core::fmt::Display>::fmt;
      v14 = &off_4024F0;
      v15 = 2LL;
      v16 = v20;
      v17 = 1uLL;
      v7 = ((__int64 (__fastcall *)(__int64, char ***))std::io::Write::write_fmt)(a1, &v14);
      core::ptr::drop_in_place<fd::hyperlink::PathUrl>(v18, *((_QWORD *)&v18 + 1));
      if ( v7 )
        return v7;
    }
    if ( *(_DWORD *)(a3 + 48) != 2 )
    {
LABEL_10:
      result = fd::output::print_entry_format(a1, a2, a3, a3 + 48);
      if ( result )
        return result;
      goto LABEL_13;
    }
  }
  else
  {
    v6 = 0;
    if ( *(_DWORD *)(a3 + 48) != 2 )
      goto LABEL_10;
  }
  if ( __OFSUB__(0LL, *(_QWORD *)(a3 + 200)) )
  {
    result = fd::output::print_entry_uncolorized(a1, a2, a3);
    if ( result )
      return result;
  }
  else
  {
    result = fd::output::print_entry_colorized(a1, a2, a3, a3 + 200);
    if ( result )
      return result;
  }
LABEL_13:
  if ( !v6
    || (v14 = &off_402510,
        v15 = 1LL,
        v16 = (_QWORD *)&byte_8,
        v17 = 0LL,
        (result = ((__int64 (__fastcall *)(__int64, char ***, __int64, __int64, __int64, __int64))std::io::Write::write_fmt)(
                    a1,
                    &v14,
                    v9,
                    v10,
                    v11,
                    v12)) == 0) )
  {
    if ( *(_BYTE *)(a3 + 482) )
      v13 = (char **)&off_402520;
    else
      v13 = (char **)&off_402530;
    v14 = v13;
    v15 = 1LL;
    v16 = (_QWORD *)&byte_8;
    v17 = 0LL;
    return ((__int64 (__fastcall *)(__int64, char ***, __int64, __int64, __int64, __int64))std::io::Write::write_fmt)(
             a1,
             &v14,
             v9,
             v10,
             v11,
             v12);
  }
  return result;
}