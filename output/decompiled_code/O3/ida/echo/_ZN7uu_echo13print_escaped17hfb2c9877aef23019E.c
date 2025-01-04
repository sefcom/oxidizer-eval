char __fastcall uu_echo::print_escaped(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 *v4; // rax
  __int64 v6; // rcx
  char *v7; // rsi
  __int64 v8; // rax
  unsigned __int8 v9; // al
  unsigned __int8 *v10; // rax
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // al
  char v13; // dl
  __int64 v14; // rdi
  const char *v15; // rsi
  unsigned __int8 *v16; // rax
  bool v17; // zf
  int v18; // eax
  __int64 v19; // r13
  char v20; // dl
  char v21; // dl
  _BYTE *v22; // rcx
  _BYTE *v23; // rcx
  _BYTE *v24; // rcx
  char v26; // [rsp+Dh] [rbp-5Bh] BYREF
  _BYTE v27[2]; // [rsp+Eh] [rbp-5Ah] BYREF
  __int64 v28; // [rsp+10h] [rbp-58h]
  __int64 v29; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int8 *v30; // [rsp+20h] [rbp-48h]
  _QWORD v31[8]; // [rsp+28h] [rbp-40h] BYREF

  v28 = a1;
  v31[0] = a2;
  v31[1] = a2 + a3;
  v6 = 0LL;
  while ( 1 )
  {
    v29 = 0LL;
    if ( !v6 )
      v4 = (unsigned __int8 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v31);
    if ( !v4 )
    {
      LOBYTE(v8) = v28;
      *(_WORD *)v28 = 0;
      return v8;
    }
    v9 = *v4;
    if ( v9 != 92 )
    {
      v27[0] = v9;
LABEL_14:
      v14 = a4;
      v15 = v27;
      goto LABEL_15;
    }
    v10 = *(unsigned __int8 **)core::option::Option<T>::get_or_insert_with(&v29, v31);
    if ( v10 )
    {
      v12 = *v10;
      if ( (unsigned __int8)(v12 - 49) < 7u )
      {
        if ( (uu_echo::parse_backslash_number(&v29, 0, v12) & 1) == 0 )
          core::option::unwrap_failed(&off_1060F0);
        v27[0] = v13;
        goto LABEL_14;
      }
    }
    v16 = v30;
    v17 = v29 == 0;
    v29 = 0LL;
    if ( !v17 )
    {
      if ( v30 )
        break;
      goto LABEL_23;
    }
    v16 = (unsigned __int8 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v31);
    if ( v16 )
      break;
LABEL_23:
    v14 = a4;
    v15 = asc_1B41B;
LABEL_15:
    v8 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(v14, v15, 1LL);
    if ( v8 )
    {
      v22 = (_BYTE *)v28;
      *(_QWORD *)(v28 + 8) = v8;
      *v22 = 1;
      return v8;
    }
LABEL_4:
    v6 = v29;
    v4 = v30;
  }
  v18 = *v16;
  v19 = 1LL;
  switch ( v18 )
  {
    case '0':
      if ( (uu_echo::parse_backslash_number(&v29, 1, v11) & 1) != 0 )
      {
        v26 = v20;
        v7 = &v26;
      }
      else
      {
        v7 = "";
      }
      goto LABEL_3;
    case '\\':
      v7 = asc_1B41B;
      goto LABEL_3;
    case 'a':
      v7 = (char *)&unk_1B41C;
      goto LABEL_3;
    case 'b':
      v7 = (char *)&unk_1B41D;
      goto LABEL_3;
    case 'c':
      v24 = (_BYTE *)v28;
      *(_BYTE *)(v28 + 1) = 1;
      LOBYTE(v8) = 0;
      *v24 = 0;
      return v8;
    case 'e':
      v7 = (char *)&unk_1B41E;
      goto LABEL_3;
    case 'f':
      v7 = (char *)&unk_1B41F;
      goto LABEL_3;
    case 'n':
      v7 = "\n\r\t\v\\x";
      goto LABEL_3;
    case 'r':
      v7 = "\r\t\v\\x";
      goto LABEL_3;
    case 't':
      v7 = "\t\v\\x";
      goto LABEL_3;
    case 'v':
      v7 = "\v\\x";
      goto LABEL_3;
    case 'x':
      v19 = 2LL;
      v7 = "\\x";
      if ( (uu_echo::parse_backslash_number(&v29, 2, v11) & 1) != 0 )
      {
        v26 = v21;
        v7 = &v26;
        v19 = 1LL;
      }
      goto LABEL_3;
    default:
      v27[0] = 92;
      v27[1] = v18;
      v19 = 2LL;
      v7 = v27;
LABEL_3:
      v8 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a4, v7, v19);
      if ( !v8 )
        goto LABEL_4;
      v23 = (_BYTE *)v28;
      *(_QWORD *)(v28 + 8) = v8;
      LOBYTE(v8) = 1;
      *v23 = 1;
      break;
  }
  return v8;
}
