__int64 __fastcall uu_env::split_iterator::SplitIterator::split(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // r13
  __int64 *v4; // r12
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  int char_from_native_int; // eax
  __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // r15d
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r15
  int v21; // ebp
  __int64 v22; // rax
  char v23; // dl
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r15
  __int64 v35; // r14
  _QWORD *v36; // r12
  __int64 v37; // rsi
  __int64 v38; // rax
  char **v40; // rsi
  _BYTE *v41; // rdi
  _BYTE v42[40]; // [rsp+0h] [rbp-A8h] BYREF
  int v43; // [rsp+34h] [rbp-74h]
  int v44; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v45[36]; // [rsp+3Ch] [rbp-6Ch]
  __int64 v46; // [rsp+60h] [rbp-48h]
  __int64 v47; // [rsp+68h] [rbp-40h]
  _BYTE *v48; // [rsp+70h] [rbp-38h]

  v46 = a1;
  v4 = a2 + 3;
  v48 = v42;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = a2[4];
      v6 = a2[7];
      if ( v5 < v6 )
      {
LABEL_84:
        *(_QWORD *)v42 = &anon_c479f575d13bdc6af5496164023f20a6_5_llvm_1842864401518779319;
        v41 = v48;
        *((_QWORD *)v48 + 1) = 1LL;
        *((_QWORD *)v41 + 2) = 8LL;
        *(_OWORD *)(v41 + 24) = 0LL;
        core::panicking::panic_fmt(v41, &anon_c479f575d13bdc6af5496164023f20a6_7_llvm_1842864401518779319);
      }
      if ( v5 == v6 )
        goto LABEL_68;
      char_from_native_int = (unsigned int)uu_env::native_int_str::get_char_from_native_int(*(_BYTE *)(*v4 + v6));
      if ( char_from_native_int == (_DWORD)&unk_110000 )
        char_from_native_int = 65533;
      if ( char_from_native_int <= 31 )
      {
        if ( (unsigned int)(char_from_native_int - 9) < 5 )
          goto LABEL_8;
        goto LABEL_50;
      }
      if ( char_from_native_int <= 91 )
        break;
      if ( char_from_native_int == 92 )
      {
        v19 = v2;
        uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)v42, v4);
        v9 = *(_QWORD *)&v42[8];
        if ( *(_QWORD *)v42 == 0x8000000000000000LL )
          goto LABEL_71;
        if ( *(_QWORD *)v42 )
          _rust_dealloc(*(_QWORD *)&v42[8], 16LL * *(_QWORD *)v42, 8LL);
        v20 = a2[7];
        if ( a2[4] < v20 )
          goto LABEL_84;
        if ( a2[4] == v20 )
        {
LABEL_63:
          v27 = _rust_alloc(9LL, 1LL);
          if ( !v27 )
            alloc::raw_vec::handle_error(1LL, 9LL);
          *(_QWORD *)v27 = 0x6574696D696C6544LL;
          *(_BYTE *)(v27 + 8) = 114;
          v44 = 1;
          *(_QWORD *)&v45[4] = v20;
          *(_QWORD *)&v45[12] = 9LL;
          *(_QWORD *)&v45[20] = v27;
          *(_QWORD *)&v45[28] = 9LL;
          v13 = 1;
        }
        else
        {
          v21 = (unsigned int)uu_env::native_int_str::get_char_from_native_int(*(_BYTE *)(*v4 + v20));
          if ( v21 == (_DWORD)&unk_110000 )
            v21 = 65533;
          switch ( v21 )
          {
            case '"':
            case '#':
            case '$':
            case '\'':
            case '\\':
              v22 = uu_env::string_expander::StringExpander::take_one(a2);
              if ( v23 == 2 )
                goto LABEL_43;
              v44 = 5;
              *(_QWORD *)&v45[4] = v22;
              *(_QWORD *)&v45[12] = v22;
              v45[20] = v23 & 1;
              v13 = 5;
              break;
            case '%':
            case '&':
            case '(':
            case ')':
            case '*':
            case '+':
            case ',':
            case '-':
            case '.':
            case '/':
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case ':':
            case ';':
            case '<':
            case '=':
            case '>':
            case '?':
            case '@':
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
            case 'G':
            case 'H':
            case 'I':
            case 'J':
            case 'K':
            case 'L':
            case 'M':
            case 'N':
            case 'O':
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
            case 'V':
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
            case '[':
            case ']':
            case '^':
            case '`':
            case 'a':
            case 'b':
              goto LABEL_54;
            case '_':
              goto LABEL_57;
            case 'c':
              v13 = 6;
              break;
            default:
              if ( v21 == 10 )
              {
LABEL_57:
                uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)v42, v4);
                v8 = *(_QWORD *)v42;
                v9 = *(_QWORD *)&v42[8];
                if ( *(_QWORD *)v42 != 0x8000000000000000LL )
                  goto LABEL_9;
                v44 = 5;
                *(_QWORD *)&v45[4] = *(_QWORD *)&v42[8];
                *(_QWORD *)&v45[12] = *(_QWORD *)&v42[8];
                v45[20] = v42[16];
                v13 = 5;
              }
              else
              {
                if ( v21 == (_DWORD)&unk_110000 )
                {
                  v20 = a2[7];
                  goto LABEL_63;
                }
LABEL_54:
                uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code((__int64)v42, a2, v21);
                v13 = *(_DWORD *)v42;
                if ( *(_DWORD *)v42 == 8 )
                {
                  if ( v42[4] )
                  {
LABEL_43:
                    uu_env::split_iterator::SplitIterator::state_unquoted(&v44, a2);
                    v13 = v44;
                    if ( v44 == 8 )
                      continue;
                  }
                  else
                  {
                    v26 = a2[7];
                    v44 = 3;
                    *(_DWORD *)v45 = v21;
                    *(_QWORD *)&v45[4] = v26;
                    v13 = 3;
                  }
                }
                else
                {
                  *(_DWORD *)&v45[32] = *(_DWORD *)&v42[36];
                  *(_OWORD *)&v45[17] = *(_OWORD *)&v42[21];
                  *(_OWORD *)&v45[1] = *(_OWORD *)&v42[5];
                  v44 = *(_DWORD *)v42;
                  v45[0] = v42[4];
                }
              }
              break;
          }
        }
        v43 = *(_DWORD *)v45;
        v24 = *(_QWORD *)&v45[4];
        v9 = *(_QWORD *)&v45[12];
        v2 = *(_QWORD *)&v45[20];
        v25 = *(_QWORD *)&v45[28];
LABEL_66:
        v47 = v25;
        if ( v13 != 7 )
          goto LABEL_67;
      }
      else
      {
        if ( char_from_native_int == (_DWORD)&unk_110000 )
          goto LABEL_68;
LABEL_50:
        uu_env::split_iterator::SplitIterator::state_unquoted((int *)v42, a2);
        v13 = *(_DWORD *)v42;
        if ( *(_DWORD *)v42 != 8 )
        {
          v43 = *(_DWORD *)&v42[4];
          v24 = *(_QWORD *)&v42[8];
          v9 = *(_QWORD *)&v42[16];
          v2 = *(_QWORD *)&v42[24];
          v25 = *(_QWORD *)&v42[32];
          goto LABEL_66;
        }
      }
    }
    if ( char_from_native_int == 32 )
    {
LABEL_8:
      uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)v42, v4);
      v8 = *(_QWORD *)v42;
      v9 = *(_QWORD *)&v42[8];
      if ( *(_QWORD *)v42 == 0x8000000000000000LL )
        goto LABEL_70;
      goto LABEL_9;
    }
    if ( char_from_native_int != 35 )
      goto LABEL_50;
    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)v42, v4);
    v9 = *(_QWORD *)&v42[8];
    if ( *(_QWORD *)v42 == 0x8000000000000000LL )
    {
LABEL_70:
      v19 = v2;
LABEL_71:
      v2 = v42[16] | v19 & 0xFFFFFFFFFFFFFF00LL;
      v13 = 5;
      v24 = v9;
LABEL_72:
      v32 = v46;
      *(_DWORD *)(v46 + 4) = v43;
      *(_QWORD *)(v32 + 8) = v24;
      v33 = v32;
      *(_QWORD *)(v32 + 16) = v9;
      *(_QWORD *)(v32 + 24) = v2;
      *(_QWORD *)(v32 + 32) = v47;
      *(_DWORD *)v32 = v13;
      if ( *a2 )
      {
        _rust_dealloc(a2[1], *a2, 1LL);
        v33 = v46;
      }
      v34 = a2[9];
      v35 = a2[10];
      if ( v35 )
      {
        v36 = (_QWORD *)(v34 + 8);
        do
        {
          v37 = *(v36 - 1);
          if ( v37 )
          {
            _rust_dealloc(*v36, v37, 1LL);
            v33 = v46;
          }
          v36 += 3;
          --v35;
        }
        while ( v35 );
      }
      v28 = v33;
      v38 = a2[8];
      if ( v38 )
      {
        v29 = 24 * v38;
        v31 = 8LL;
        v30 = v34;
LABEL_81:
        _rust_dealloc(v30, v29, v31);
      }
      return v28;
    }
    if ( *(_QWORD *)v42 )
      _rust_dealloc(*(_QWORD *)&v42[8], 16LL * *(_QWORD *)v42, 8LL);
    v10 = a2[4];
    v11 = a2[7];
    while ( 1 )
    {
      if ( v10 < v11 )
      {
        *(_QWORD *)v42 = &anon_c479f575d13bdc6af5496164023f20a6_5_llvm_1842864401518779319;
        v40 = &anon_c479f575d13bdc6af5496164023f20a6_7_llvm_1842864401518779319;
        goto LABEL_86;
      }
      v13 = 6;
      if ( v10 == v11 )
        goto LABEL_45;
      v9 = *(unsigned __int8 *)(*v4 + v11);
      v14 = (unsigned int)uu_env::native_int_str::get_char_from_native_int(v9);
      if ( v14 == (_DWORD)&unk_110000 )
        v14 = 65533;
      if ( v14 == (_DWORD)&unk_110000 )
        goto LABEL_45;
      if ( v14 == 10 )
        break;
      v15 = a2[6];
      if ( v15 )
      {
        v16 = 0LL;
        while ( *(_BYTE *)(a2[5] + v16) != 10 )
        {
          if ( v15 == ++v16 )
            goto LABEL_18;
        }
        v10 = a2[4];
        v17 = a2[7];
        v11 = v17 + v16;
        a2[7] = v17 + v16;
        if ( v10 < v17 + v16 )
        {
          *(_QWORD *)v42 = &anon_c479f575d13bdc6af5496164023f20a6_5_llvm_1842864401518779319;
          v40 = &anon_c479f575d13bdc6af5496164023f20a6_13_llvm_1842864401518779319;
LABEL_86:
          *(_QWORD *)&v42[8] = 1LL;
          *(_QWORD *)&v42[16] = 8LL;
          *(_OWORD *)&v42[24] = 0LL;
          core::panicking::panic_fmt(v42, v40);
        }
        v18 = v10 - v17;
        v12 = v16 + *v4 + v17;
        v9 = v18 - v16;
      }
      else
      {
LABEL_18:
        v10 = a2[4];
        a2[7] = v10;
        v12 = v10 + a2[3];
        v11 = v10;
        v9 = 0LL;
      }
      a2[5] = v12;
      a2[6] = v9;
    }
    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)v42, v4);
    v8 = *(_QWORD *)v42;
    v9 = *(_QWORD *)&v42[8];
    if ( *(_QWORD *)v42 == 0x8000000000000000LL )
      break;
LABEL_9:
    if ( v8 )
      _rust_dealloc(v9, 16 * v8, 8LL);
  }
  LOBYTE(v11) = v42[16];
  v13 = 5;
LABEL_45:
  v2 = (unsigned __int8)v11 | v2 & 0xFFFFFFFFFFFFFF00LL;
  v24 = v9;
LABEL_67:
  if ( v13 != 6 )
    goto LABEL_72;
LABEL_68:
  v28 = v46;
  *(_QWORD *)(v46 + 24) = a2[10];
  *(_OWORD *)(v28 + 8) = *((_OWORD *)a2 + 4);
  *(_DWORD *)v28 = 8;
  v29 = *a2;
  if ( *a2 )
  {
    v30 = a2[1];
    v31 = 1LL;
    goto LABEL_81;
  }
  return v28;
}
