unsigned __int64 __fastcall uu_env::split_iterator::SplitIterator::state_unquoted(int *a1, __int64 *a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  __int64 *v6; // r15
  void *(__fastcall *v7)(char); // rbx
  unsigned int char_from_native_int; // eax
  char v9; // dl
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rsi
  unsigned __int64 v13; // r12
  __int128 *v14; // rdi
  int v15; // r13d
  unsigned __int64 result; // rax
  char v17; // dl
  int *v18; // r12
  __int64 v19; // rsi
  char v20; // dl
  char v21; // dl
  int v22; // edx
  int v23; // r13d
  unsigned __int64 v24; // rcx
  int v25; // ebp
  int v26; // ecx
  unsigned int v27; // esi
  unsigned __int8 v28; // r12
  int v29; // ebp
  unsigned __int64 v30; // rcx
  int v31; // ebp
  int v32; // r13d
  unsigned int v33; // eax
  int v34; // ecx
  unsigned int v35; // eax
  __int64 v36; // r12
  __int64 v37; // r13
  __int64 v38; // rbx
  __int64 v39; // rbp
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdi
  int *v43; // rcx
  __int64 v44; // r15
  __int64 v45; // r12
  __int64 v46; // rbx
  __int64 v47; // r13
  __int64 v48; // rcx
  int *v49; // rbx
  __int128 v50; // xmm0
  __int64 v51; // rcx
  int *v52; // rsi
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // r15
  __int64 v56; // r13
  __int64 v57; // r15
  __int64 v58; // r13
  __int128 v59; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v60[24]; // [rsp+10h] [rbp-68h]
  int *v61; // [rsp+30h] [rbp-48h]
  _QWORD v62[8]; // [rsp+38h] [rbp-40h]

  v2 = a2[4];
  v3 = a2[7];
  if ( v2 < v3 )
    goto LABEL_107;
  v6 = a2 + 3;
  v7 = uu_env::native_int_str::get_char_from_native_int;
LABEL_3:
  if ( v2 == v3 )
  {
LABEL_113:
    v44 = *a2;
    v45 = a2[1];
    v46 = a2[2];
    *a2 = 0LL;
    a2[1] = 1LL;
    a2[2] = 0LL;
    v47 = a2[10];
    if ( v47 == a2[8] )
      alloc::raw_vec::RawVec<T,A>::grow_one(a2 + 8);
    result = a2[9];
    v48 = 3 * v47;
    *(_QWORD *)(result + 8 * v48) = v44;
    *(_QWORD *)(result + 8 * v48 + 8) = v45;
    *(_QWORD *)(result + 8 * v48 + 16) = v46;
    a2[10] = v47 + 1;
    *a1 = 6;
    return result;
  }
  char_from_native_int = (unsigned int)uu_env::native_int_str::get_char_from_native_int(*(_BYTE *)(*v6 + v3));
  if ( char_from_native_int == (_DWORD)&unk_110000 )
    char_from_native_int = 65533;
  switch ( char_from_native_int )
  {
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0x20u:
      v61 = a1;
      v36 = *a2;
      v37 = a2[1];
      v38 = a2[2];
      *a2 = 0LL;
      a2[1] = 1LL;
      a2[2] = 0LL;
      v39 = a2[10];
      if ( v39 == a2[8] )
        alloc::raw_vec::RawVec<T,A>::grow_one(a2 + 8);
      v40 = a2[9];
      v41 = 3 * v39;
      *(_QWORD *)(v40 + 8 * v41) = v36;
      *(_QWORD *)(v40 + 8 * v41 + 8) = v37;
      *(_QWORD *)(v40 + 8 * v41 + 16) = v38;
      a2[10] = v39 + 1;
      uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v59, v6);
      v42 = *((_QWORD *)&v59 + 1);
      result = 0x8000000000000000LL;
      if ( (_QWORD)v59 == 0x8000000000000000LL )
      {
        result = v60[0];
        v43 = v61;
        *v61 = 5;
        *((_QWORD *)v43 + 1) = v42;
        *((_QWORD *)v43 + 2) = v42;
        *((_BYTE *)v43 + 24) = result;
      }
      else
      {
        v49 = v61;
        if ( (_QWORD)v59 )
          result = _rust_dealloc(*((_QWORD *)&v59 + 1), 16 * v59, 8LL);
        *v49 = 8;
      }
      return result;
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x16u:
    case 0x17u:
    case 0x18u:
    case 0x19u:
    case 0x1Au:
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Eu:
    case 0x1Fu:
    case 0x21u:
    case 0x23u:
    case 0x25u:
    case 0x26u:
    case 0x28u:
    case 0x29u:
    case 0x2Au:
    case 0x2Bu:
    case 0x2Cu:
    case 0x2Du:
    case 0x2Eu:
    case 0x2Fu:
    case 0x30u:
    case 0x31u:
    case 0x32u:
    case 0x33u:
    case 0x34u:
    case 0x35u:
    case 0x36u:
    case 0x37u:
    case 0x38u:
    case 0x39u:
    case 0x3Au:
    case 0x3Bu:
    case 0x3Cu:
    case 0x3Du:
    case 0x3Eu:
    case 0x3Fu:
    case 0x40u:
    case 0x41u:
    case 0x42u:
    case 0x43u:
    case 0x44u:
    case 0x45u:
    case 0x46u:
    case 0x47u:
    case 0x48u:
    case 0x49u:
    case 0x4Au:
    case 0x4Bu:
    case 0x4Cu:
    case 0x4Du:
    case 0x4Eu:
    case 0x4Fu:
    case 0x50u:
    case 0x51u:
    case 0x52u:
    case 0x53u:
    case 0x54u:
    case 0x55u:
    case 0x56u:
    case 0x57u:
    case 0x58u:
    case 0x59u:
    case 0x5Au:
    case 0x5Bu:
      goto LABEL_28;
    case 0x22u:
      uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v59, v6);
      v10 = *((_QWORD *)&v59 + 1);
      if ( (_QWORD)v59 == 0x8000000000000000LL )
        goto LABEL_121;
      v61 = a1;
      if ( !(_QWORD)v59 )
        goto LABEL_43;
      v11 = 16 * v59;
      while ( 2 )
      {
        _rust_dealloc(v10, v11, 8LL);
LABEL_43:
        while ( 2 )
        {
          v24 = a2[4];
          result = a2[7];
          if ( v24 < result )
            goto LABEL_107;
          v23 = 0;
          v25 = 34;
          if ( v24 == result )
            goto LABEL_133;
          result = (unsigned __int64)uu_env::native_int_str::get_char_from_native_int(*(_BYTE *)(*v6 + result));
          v26 = 65533;
          if ( (_DWORD)result != (_DWORD)&unk_110000 )
            v26 = result;
          if ( v26 <= 91 )
          {
            if ( v26 == 36 )
            {
              uu_env::split_iterator::SplitIterator::substitute_variable((__int64)&v59, a2);
              v23 = v59;
              if ( (_DWORD)v59 != 8 )
              {
                v25 = DWORD1(v59);
                v24 = *((_QWORD *)&v59 + 1);
                result = *(_QWORD *)v60;
                v9 = v60[8];
                v62[0] = *(_QWORD *)&v60[9];
                *(_QWORD *)((char *)v62 + 7) = *(_QWORD *)&v60[16];
                goto LABEL_133;
              }
              continue;
            }
            if ( v26 != 34 )
              goto LABEL_65;
            uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v59, v6);
            result = *((_QWORD *)&v59 + 1);
            v12 = v59;
            if ( (_QWORD)v59 == 0x8000000000000000LL )
            {
LABEL_124:
              v9 = v60[0];
LABEL_125:
              v23 = 5;
              v24 = result;
              goto LABEL_133;
            }
            a1 = v61;
            if ( (_QWORD)v59 )
LABEL_105:
              _rust_dealloc(result, 16 * v12, 8LL);
LABEL_106:
            v2 = a2[4];
            v3 = a2[7];
            if ( v2 < v3 )
              goto LABEL_107;
            goto LABEL_3;
          }
          break;
        }
        if ( v26 == 92 )
        {
          uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v59, v6);
          result = *((_QWORD *)&v59 + 1);
          v27 = v59;
          if ( (_QWORD)v59 == 0x8000000000000000LL )
            goto LABEL_124;
          if ( (_QWORD)v59 )
          {
            v27 = 16 * v59;
            _rust_dealloc(*((_QWORD *)&v59 + 1), 16 * v59, 8LL);
          }
          result = a2[4];
          v24 = a2[7];
          if ( result < v24 )
            goto LABEL_107;
          v28 = 34;
          if ( result == v24 )
            goto LABEL_127;
          result = (unsigned __int64)uu_env::native_int_str::get_char_from_native_int(*(_BYTE *)(*v6 + v24));
          v29 = 65533;
          if ( (_DWORD)result != (_DWORD)&unk_110000 )
            v29 = result;
          if ( v29 <= 35 )
          {
            if ( v29 == 10 )
            {
              uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v59, v6);
              result = *((_QWORD *)&v59 + 1);
              v27 = v59;
              if ( (_QWORD)v59 != 0x8000000000000000LL )
              {
                if ( (_QWORD)v59 )
                {
                  v11 = 16 * v59;
                  v10 = *((_QWORD *)&v59 + 1);
                  continue;
                }
                goto LABEL_43;
              }
              v9 = v60[0];
LABEL_131:
              v23 = 5;
              v24 = result;
              goto LABEL_132;
            }
            if ( v29 == 34 )
              goto LABEL_73;
          }
          else if ( v29 <= 91 )
          {
            if ( v29 == 36 )
            {
LABEL_73:
              result = uu_env::string_expander::StringExpander::take_one(a2);
              v28 = -3;
              if ( v9 != 2 )
              {
                v9 &= 1u;
                goto LABEL_131;
              }
              goto LABEL_43;
            }
          }
          else
          {
            if ( v29 == 92 )
              goto LABEL_73;
            if ( v29 == 99 )
            {
              v24 = a2[7];
              v23 = 2;
LABEL_132:
              v25 = (v27 << 8) | v28;
              goto LABEL_133;
            }
            if ( v29 == (_DWORD)&unk_110000 )
            {
              v24 = a2[7];
LABEL_127:
              v27 = 0;
              v23 = 0;
              goto LABEL_132;
            }
          }
          result = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code((__int64)&v59, a2, v29);
          v23 = v59;
          v28 = BYTE4(v59);
          if ( (_DWORD)v59 == 8 )
          {
            if ( !BYTE4(v59) )
            {
              v24 = a2[7];
              v27 = (unsigned int)v29 >> 8;
              v23 = 3;
              v28 = v29;
              goto LABEL_132;
            }
            goto LABEL_43;
          }
          v27 = (BYTE7(v59) << 16) | *(unsigned __int16 *)((char *)&v59 + 5);
          v24 = *((_QWORD *)&v59 + 1);
          result = *(_QWORD *)v60;
          v9 = v60[8];
          v62[0] = *(_QWORD *)&v60[9];
          *(_QWORD *)((char *)v62 + 7) = *(_QWORD *)&v60[16];
          goto LABEL_132;
        }
        break;
      }
      if ( v26 != (_DWORD)&unk_110000 )
      {
LABEL_65:
        result = uu_env::string_expander::StringExpander::take_one(a2);
        if ( v9 != 2 )
        {
          v9 &= 1u;
          goto LABEL_125;
        }
        goto LABEL_43;
      }
      v24 = a2[7];
LABEL_133:
      v52 = v61;
      *v61 = v23;
      v52[1] = v25;
      *((_QWORD *)v52 + 1) = v24;
      *((_QWORD *)v52 + 2) = result;
      *((_BYTE *)v52 + 24) = v9;
      result = v62[0];
      v53 = *(_QWORD *)((char *)v62 + 7);
      *(_QWORD *)((char *)v52 + 25) = v62[0];
      *((_QWORD *)v52 + 4) = v53;
      return result;
    case 0x24u:
      uu_env::split_iterator::SplitIterator::substitute_variable((__int64)&v59, a2);
      if ( (_DWORD)v59 == 8 )
        goto LABEL_106;
      result = *(_QWORD *)&v60[16];
      *((_QWORD *)a1 + 4) = *(_QWORD *)&v60[16];
      v50 = v59;
      *((_OWORD *)a1 + 1) = *(_OWORD *)v60;
      *(_OWORD *)a1 = v50;
      return result;
    case 0x27u:
      uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v59, v6);
      v10 = *((_QWORD *)&v59 + 1);
      if ( (_QWORD)v59 == 0x8000000000000000LL )
        goto LABEL_121;
      v18 = a1;
      if ( !(_QWORD)v59 )
        goto LABEL_84;
      v19 = 16 * v59;
LABEL_81:
      _rust_dealloc(v10, v19, 8LL);
LABEL_84:
      while ( 2 )
      {
        while ( 2 )
        {
          result = a2[4];
          v30 = a2[7];
          if ( result < v30 )
            goto LABEL_107;
          v31 = 0;
          v32 = 39;
          if ( result == v30 )
            goto LABEL_137;
          v33 = (unsigned int)uu_env::native_int_str::get_char_from_native_int(*(_BYTE *)(*v6 + v30));
          v34 = 65533;
          if ( v33 != (_DWORD)&unk_110000 )
            v34 = v33;
          if ( v34 == 92 )
          {
            uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v59, v6);
            result = *((_QWORD *)&v59 + 1);
            if ( (_QWORD)v59 == 0x8000000000000000LL )
            {
LABEL_116:
              v17 = v60[0];
              goto LABEL_117;
            }
            if ( (_QWORD)v59 )
              _rust_dealloc(*((_QWORD *)&v59 + 1), 16 * v59, 8LL);
            result = a2[7];
            if ( a2[4] >= result )
            {
              if ( a2[4] != result )
              {
                v35 = (unsigned int)uu_env::native_int_str::get_char_from_native_int(*(_BYTE *)(*v6 + result));
                v32 = 65533;
                if ( v35 != (_DWORD)&unk_110000 )
                  v32 = v35;
                switch ( v32 )
                {
                  case 10:
                    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v59, v6);
                    result = *((_QWORD *)&v59 + 1);
                    if ( (_QWORD)v59 == 0x8000000000000000LL )
                      goto LABEL_116;
                    if ( !(_QWORD)v59 )
                      continue;
                    v19 = 16 * v59;
                    v10 = *((_QWORD *)&v59 + 1);
                    break;
                  case 11:
                  case 12:
                  case 13:
                  case 14:
                  case 15:
                  case 16:
                  case 17:
                  case 18:
                  case 19:
                  case 20:
                  case 21:
                  case 22:
                  case 23:
                  case 24:
                  case 25:
                  case 26:
                  case 27:
                  case 28:
                  case 29:
                  case 30:
                  case 31:
                  case 32:
                  case 33:
                  case 37:
                  case 38:
                  case 40:
                  case 41:
                  case 42:
                  case 43:
                  case 44:
                  case 45:
                  case 46:
                  case 47:
                  case 48:
                  case 49:
                  case 50:
                  case 51:
                  case 52:
                  case 53:
                  case 54:
                  case 55:
                  case 56:
                  case 57:
                  case 58:
                  case 59:
                  case 60:
                  case 61:
                  case 62:
                  case 63:
                  case 64:
                  case 65:
                  case 66:
                  case 67:
                  case 68:
                  case 69:
                  case 70:
                  case 71:
                  case 72:
                  case 73:
                  case 74:
                  case 75:
                  case 76:
                  case 77:
                  case 78:
                  case 79:
                  case 80:
                  case 81:
                  case 82:
                  case 83:
                  case 84:
                  case 85:
                  case 86:
                  case 87:
                  case 88:
                  case 89:
                  case 90:
                  case 91:
                  case 93:
                  case 94:
                  case 96:
                  case 97:
                  case 98:
                  case 99:
                  case 100:
                  case 101:
                  case 103:
                  case 104:
                  case 105:
                  case 106:
                  case 107:
                  case 108:
                  case 109:
                  case 111:
                  case 112:
                  case 113:
                  case 115:
                  case 117:
                    goto LABEL_136;
                  case 34:
                  case 35:
                  case 36:
                  case 95:
                  case 102:
                  case 110:
                  case 114:
                  case 116:
                  case 118:
                    uu_env::string_expander::StringExpander::put_one_char(a2, 0x5Cu);
                    goto LABEL_83;
                  case 39:
                  case 92:
                    goto LABEL_83;
                  default:
                    if ( v32 == (_DWORD)&unk_110000 )
                      goto LABEL_135;
LABEL_136:
                    result = a2[7];
                    v31 = 3;
                    goto LABEL_137;
                }
                goto LABEL_81;
              }
LABEL_137:
              *v18 = v31;
              v18[1] = v32;
              *((_QWORD *)v18 + 1) = result;
              *((_QWORD *)v18 + 2) = result;
              *((_BYTE *)v18 + 24) = v17;
              return result;
            }
LABEL_107:
            *(_QWORD *)&v59 = &anon_c479f575d13bdc6af5496164023f20a6_5_llvm_1842864401518779319;
            *((_QWORD *)&v59 + 1) = 1LL;
            *(_QWORD *)v60 = 8LL;
            *(_OWORD *)&v60[8] = 0LL;
            core::panicking::panic_fmt(&v59, &anon_c479f575d13bdc6af5496164023f20a6_7_llvm_1842864401518779319);
          }
          break;
        }
        if ( v34 != 39 )
        {
          if ( v34 == (_DWORD)&unk_110000 )
          {
LABEL_135:
            result = a2[7];
            v32 = 39;
            goto LABEL_137;
          }
LABEL_83:
          result = uu_env::string_expander::StringExpander::take_one(a2);
          if ( v17 != 2 )
          {
            v17 &= 1u;
LABEL_117:
            v31 = 5;
            goto LABEL_137;
          }
          continue;
        }
        break;
      }
      uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v59, v6);
      result = *((_QWORD *)&v59 + 1);
      v12 = v59;
      if ( (_QWORD)v59 == 0x8000000000000000LL )
        goto LABEL_116;
      a1 = v18;
      if ( (_QWORD)v59 )
        goto LABEL_105;
      goto LABEL_106;
    case 0x5Cu:
      uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v59, v6);
      v10 = *((_QWORD *)&v59 + 1);
      LODWORD(v12) = v59;
      if ( (_QWORD)v59 == 0x8000000000000000LL )
      {
LABEL_121:
        result = v60[0];
        *a1 = 5;
        *((_QWORD *)a1 + 1) = v10;
        *((_QWORD *)a1 + 2) = v10;
        *((_BYTE *)a1 + 24) = result;
        return result;
      }
      if ( (_QWORD)v59 )
      {
        LODWORD(v12) = 16 * v59;
        _rust_dealloc(*((_QWORD *)&v59 + 1), 16 * v59, 8LL);
      }
      v13 = a2[7];
      if ( a2[4] < v13 )
        goto LABEL_107;
      if ( a2[4] == v13 )
        goto LABEL_139;
      LOBYTE(v14) = *(_BYTE *)(*v6 + v13);
      v15 = (unsigned int)uu_env::native_int_str::get_char_from_native_int((char)v14);
      if ( v15 == (_DWORD)&unk_110000 )
        v15 = 65533;
      if ( v15 <= 91 )
      {
        switch ( v15 )
        {
          case 10:
            v14 = &v59;
            uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v59, v6);
            result = *((_QWORD *)&v59 + 1);
            v12 = v59;
            if ( (_QWORD)v59 == 0x8000000000000000LL )
              goto LABEL_145;
            if ( !(_QWORD)v59 )
              goto LABEL_106;
            goto LABEL_105;
          case 34:
          case 36:
          case 39:
            goto LABEL_32;
          default:
            goto LABEL_37;
        }
      }
      if ( v15 > 94 )
      {
        if ( v15 == 95 )
        {
          v14 = &v59;
          uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v59, v6);
          result = *((_QWORD *)&v59 + 1);
          LODWORD(v12) = v59;
          if ( (_QWORD)v59 == 0x8000000000000000LL )
          {
LABEL_145:
            v51 = v60[0];
LABEL_146:
            v22 = 5;
            v13 = result;
          }
          else
          {
            if ( (_QWORD)v59 )
            {
              LODWORD(v12) = 16 * v59;
              LOBYTE(v14) = BYTE8(v59);
              _rust_dealloc(*((_QWORD *)&v59 + 1), 16 * v59, 8LL);
            }
            v57 = *a2;
            v13 = a2[1];
            v7 = (void *(__fastcall *)(char))a2[2];
            *a2 = 0LL;
            a2[1] = 1LL;
            a2[2] = 0LL;
            v58 = a2[10];
            if ( v58 == a2[8] )
            {
              LOBYTE(v14) = (_BYTE)a2 + 64;
              alloc::raw_vec::RawVec<T,A>::grow_one(a2 + 8);
            }
            result = a2[9];
            v51 = 3 * v58;
            *(_QWORD *)(result + 8 * v51) = v57;
            *(_QWORD *)(result + 8 * v51 + 8) = v13;
            *(_QWORD *)(result + 8 * v51 + 16) = v7;
            a2[10] = v58 + 1;
            v22 = 7;
          }
        }
        else if ( v15 == 99 )
        {
          v55 = *a2;
          v13 = a2[1];
          v7 = (void *(__fastcall *)(char))a2[2];
          *a2 = 0LL;
          a2[1] = 1LL;
          a2[2] = 0LL;
          v56 = a2[10];
          if ( v56 == a2[8] )
          {
            LOBYTE(v14) = (_BYTE)a2 + 64;
            alloc::raw_vec::RawVec<T,A>::grow_one(a2 + 8);
          }
          result = a2[9];
          v51 = 3 * v56;
          *(_QWORD *)(result + 8 * v51) = v55;
          *(_QWORD *)(result + 8 * v51 + 8) = v13;
          *(_QWORD *)(result + 8 * v51 + 16) = v7;
          a2[10] = v56 + 1;
          v22 = 6;
        }
        else if ( v15 == (_DWORD)&unk_110000 )
        {
          v13 = a2[7];
LABEL_139:
          v7 = (void *(__fastcall *)(char))&byte_8;
          LOBYTE(v14) = 8;
          LODWORD(v12) = 1;
          v54 = (_QWORD *)_rust_alloc(8LL, 1LL);
          if ( !v54 )
            alloc::raw_vec::handle_error(1LL, 8LL);
          v51 = (__int64)v54;
          *v54 = 0x6465746F75716E55LL;
          v22 = 1;
          result = 8LL;
        }
        else
        {
LABEL_37:
          result = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code((__int64)&v59, a2, v15);
          v22 = v59;
          LOBYTE(v14) = BYTE4(v59);
          if ( (_DWORD)v59 == 8 )
          {
            if ( BYTE4(v59) )
              goto LABEL_106;
            v13 = a2[7];
            LODWORD(v12) = (unsigned int)v15 >> 8;
            v22 = 3;
            LOBYTE(v14) = v15;
          }
          else
          {
            LODWORD(v12) = (BYTE7(v59) << 16) | *(unsigned __int16 *)((char *)&v59 + 5);
            v13 = *((_QWORD *)&v59 + 1);
            v51 = *(_QWORD *)&v60[8];
            result = *(_QWORD *)v60;
            v7 = *(void *(__fastcall **)(char))&v60[16];
          }
        }
        *a1 = v22;
        a1[1] = ((_DWORD)v12 << 8) | (unsigned __int8)v14;
        *((_QWORD *)a1 + 1) = v13;
        *((_QWORD *)a1 + 2) = result;
        *((_QWORD *)a1 + 3) = v51;
        *((_QWORD *)a1 + 4) = v7;
        return result;
      }
      if ( v15 != 92 )
        goto LABEL_37;
LABEL_32:
      LOBYTE(v14) = (_BYTE)a2;
      result = uu_env::string_expander::StringExpander::take_one(a2);
      if ( v21 != 2 )
      {
        v51 = v21 & 1;
        goto LABEL_146;
      }
      goto LABEL_106;
    default:
      if ( char_from_native_int == (_DWORD)&unk_110000 )
        goto LABEL_113;
LABEL_28:
      result = uu_env::string_expander::StringExpander::take_one(a2);
      if ( v20 == 2 )
        goto LABEL_106;
      *a1 = 5;
      *((_QWORD *)a1 + 1) = result;
      *((_QWORD *)a1 + 2) = result;
      *((_BYTE *)a1 + 24) = v20 & 1;
      return result;
  }
}
