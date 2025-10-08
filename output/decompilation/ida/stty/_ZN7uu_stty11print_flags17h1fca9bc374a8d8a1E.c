__int64 __fastcall uu_stty::print_flags(__int64 a1, char a2)
{
  __int64 result; // rax
  char v3; // r15
  __int64 v4; // r13
  unsigned __int8 v5; // bl
  __int64 v6; // rdi
  unsigned int v7; // ebp
  __int64 v8; // rcx
  unsigned __int8 v9; // al
  void *v10; // [rsp+0h] [rbp-88h] BYREF
  __int64 v11; // [rsp+8h] [rbp-80h]
  _QWORD *v12; // [rsp+10h] [rbp-78h]
  __int128 v13; // [rsp+18h] [rbp-70h]
  _QWORD v14[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+40h] [rbp-48h]
  __int128 v16; // [rsp+48h] [rbp-40h] BYREF

  result = a1;
  v3 = 0;
  v4 = 0LL;
  do
  {
    while ( 1 )
    {
      v4 += 32LL;
      while ( 1 )
      {
        v16 = *(_OWORD *)&byte_E2FB8[v4 - 24];
        if ( byte_E2FB8[v4 - 4] )
          break;
        v4 += 32LL;
        if ( v4 == 416 )
          goto LABEL_16;
      }
      v5 = byte_E2FB8[v4 - 3];
      v6 = *(unsigned int *)&byte_E2FB8[v4 - 8];
      v7 = *(_DWORD *)&byte_E2FB8[v4 - 32];
      v8 = *(unsigned int *)&byte_E2FB8[v4 - 28];
      v15 = result;
      v9 = <nix::sys::termios::InputFlags as uu_stty::TermiosFlag>::is_in(v6, *(unsigned int *)(result + 112), v7, v8);
      if ( !v7 )
        break;
      if ( ((unsigned __int8)(a2 | v5 ^ 1) & v9) != 0 )
        goto LABEL_15;
LABEL_11:
      result = v15;
      if ( v4 == 384 )
        goto LABEL_16;
    }
    if ( (a2 & 1) == 0 && v9 == v5 )
      goto LABEL_11;
    if ( !v9 )
    {
      v10 = &off_E3858;
      v11 = 1LL;
      v12 = (_QWORD *)&byte_8;
      v13 = 0LL;
      std::io::stdio::_print(&v10);
    }
LABEL_15:
    v14[0] = &v16;
    v14[1] = <&T as core::fmt::Display>::fmt;
    v10 = &unk_E3838;
    v11 = 2LL;
    v12 = v14;
    v13 = 1uLL;
    std::io::stdio::_print(&v10);
    v3 = 1;
    result = v15;
  }
  while ( v4 != 384 );
LABEL_16:
  if ( (v3 & 1) != 0 )
  {
    v10 = &off_E2AC0;
    v11 = 1LL;
    v12 = (_QWORD *)&byte_8;
    v13 = 0LL;
    return std::io::stdio::_print(&v10);
  }
  return result;
}