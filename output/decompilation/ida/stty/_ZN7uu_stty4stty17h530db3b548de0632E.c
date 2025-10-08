__int64 __fastcall uu_stty::stty(_QWORD *a1)
{
  const char *v1; // rsi
  _BYTE *v2; // rbx
  __int64 v3; // rdx
  char v4; // bp
  unsigned int v5; // eax
  unsigned int v6; // eax
  const char *v7; // rsi
  char **v8; // rcx
  __int64 v9; // rdx
  __int64 v11; // r15
  _QWORD *v12; // r12
  _QWORD *v13; // r15
  int v14; // eax
  _QWORD *v15; // [rsp+0h] [rbp-168h] BYREF
  _QWORD v16[2]; // [rsp+8h] [rbp-160h] BYREF
  _QWORD v17[3]; // [rsp+18h] [rbp-150h] BYREF
  __int64 v18; // [rsp+30h] [rbp-138h]
  __int64 v19; // [rsp+38h] [rbp-130h]
  _BYTE v20[24]; // [rsp+A0h] [rbp-C8h] BYREF
  int v21; // [rsp+B8h] [rbp-B0h]
  _BYTE v22[168]; // [rsp+C0h] [rbp-A8h] BYREF

  if ( !*((_BYTE *)a1 + 41) )
  {
    v4 = 1;
    if ( __OFSUB__(0LL, *a1) )
      goto LABEL_8;
    if ( *((_BYTE *)a1 + 40) != 1 )
    {
      v4 = 0;
      goto LABEL_8;
    }
LABEL_10:
    v1 = aWhenSpecifying;
    v2 = v17;
    v3 = 53LL;
    goto LABEL_11;
  }
  if ( *((_BYTE *)a1 + 40) == 1 )
  {
    v1 = aTheOptionsForV;
    v2 = v17;
    v3 = 78LL;
LABEL_11:
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v17, v1, v3);
    LODWORD(v18) = 1;
    return alloc::boxed::Box<T>::new(v2);
  }
  v4 = 1;
  if ( !__OFSUB__(0LL, *a1) )
    goto LABEL_10;
LABEL_8:
  v5 = <uu_stty::Device as std::os::fd::owned::AsFd>::as_fd(a1 + 3);
  nix::sys::termios::tcgetattr(v17, v5);
  core::result::Result<T,E>::expect(v22, v17);
  if ( v4 )
  {
    v6 = uu_stty::print_settings(v22, a1);
    v7 = aTodoMakeProper;
    v8 = &off_E2A38;
    v9 = 43LL;
  }
  else
  {
    v11 = a1[2];
    if ( v11 )
    {
      v12 = (_QWORD *)a1[1];
      v13 = &v12[2 * v11];
      while ( 1 )
      {
        v15 = v12;
        if ( !(unsigned __int8)uu_stty::apply_setting(v22, *v12, v12[1]) )
          break;
        v12 += 2;
        if ( v12 == v13 )
          goto LABEL_17;
      }
      v16[0] = &v15;
      v16[1] = <&T as core::fmt::Display>::fmt;
      v17[0] = &off_E2960;
      v17[1] = 2LL;
      v19 = 0LL;
      v17[2] = v16;
      v18 = 1LL;
      v2 = v20;
      core::option::Option<T>::map_or_else(v20, v17);
      v21 = 1;
      return alloc::boxed::Box<T>::new(v2);
    }
LABEL_17:
    v14 = <uu_stty::Device as std::os::fd::owned::AsFd>::as_fd(a1 + 3);
    v6 = nix::sys::termios::tcsetattr(v14);
    v7 = aCouldNotWriteT;
    v8 = &off_E2A20;
    v9 = 35LL;
  }
  core::result::Result<T,E>::expect(v6, v7, v9, v8);
  return 0LL;
}