int *__fastcall uu_env::split_iterator::SplitIterator::state_unquoted(int *a1, __int64 a2)
{
  __int64 v2; // r14
  _QWORD *v4; // r15
  __int128 *v5; // r12
  void *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  char v15; // dl
  void *v16; // rbx
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  char v21; // dl
  void *v22; // rsi
  void *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // esi
  char v27; // dl
  unsigned __int64 *v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rax
  char v31; // dl
  unsigned int v32; // r8d
  void *v33; // rbx
  char v34; // dl
  __int64 v35; // rax
  __int64 v36; // rcx
  int *v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  int v42; // ecx
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int128 v46; // xmm0
  char v47; // al
  __int64 v48; // rax
  __int64 v49; // rcx
  char v50; // dl
  __int128 v51; // xmm1
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int128 v58; // xmm0
  __int64 v59; // rbx
  __int64 v60; // rax
  __int128 v61; // xmm0
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // rax
  __int128 v66; // xmm0
  int v67; // ecx
  int *v68; // rdx
  __int128 v69; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v70; // [rsp+10h] [rbp-E8h]
  __int128 v71; // [rsp+18h] [rbp-E0h]
  __int128 v72; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v73; // [rsp+40h] [rbp-B8h]
  char v74; // [rsp+48h] [rbp-B0h]
  _BYTE v75[15]; // [rsp+49h] [rbp-AFh]
  unsigned __int64 v76; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v77; // [rsp+60h] [rbp-98h]
  __int64 v78; // [rsp+68h] [rbp-90h]
  _QWORD v79[2]; // [rsp+70h] [rbp-88h]
  int *v80; // [rsp+80h] [rbp-78h]
  unsigned __int64 v81; // [rsp+88h] [rbp-70h] BYREF
  unsigned __int64 v82; // [rsp+90h] [rbp-68h]
  char v83; // [rsp+98h] [rbp-60h]
  int v84; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v85; // [rsp+A4h] [rbp-54h]
  __int128 v86; // [rsp+B4h] [rbp-44h]
  int v87; // [rsp+C4h] [rbp-34h]

  v2 = a2;
  v4 = (_QWORD *)(a2 + 24);
  v5 = &v69;
  while ( 2 )
  {
    uu_env::string_parser::StringParser::peek_char_at_pointer((__int64)&v69, v4, *(_QWORD *)(v2 + 56));
    v6 = &loc_110000;
    if ( BYTE8(v69) == 2 )
      LODWORD(v6) = v69;
    switch ( (int)v6 )
    {
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 32:
        v70 = *(_QWORD *)(v2 + 16);
        v69 = *(_OWORD *)v2;
        *(_QWORD *)v2 = 0LL;
        *(_QWORD *)(v2 + 8) = 1LL;
        *(_QWORD *)(v2 + 16) = 0LL;
        v43 = *(_QWORD *)(v2 + 80);
        if ( v43 == *(_QWORD *)(v2 + 64) )
          alloc::raw_vec::RawVec<T,A>::grow_one(v2 + 64);
        v44 = *(_QWORD *)(v2 + 72);
        v45 = 3 * v43;
        v46 = v69;
        *(_QWORD *)(v44 + 8 * v45 + 16) = v70;
        *(_OWORD *)(v44 + 8 * v45) = v46;
        *(_QWORD *)(v2 + 80) = v43 + 1;
        uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v72, v4);
        v7 = *((_QWORD *)&v72 + 1);
        if ( (_QWORD)v72 == 0x8000000000000000LL )
          goto LABEL_139;
        if ( (_QWORD)v72 )
        {
          if ( (unsigned __int64)v72 > 0xFFFFFFFFFFFFFFFLL )
            goto LABEL_188;
          v48 = 16 * v72;
          *(_QWORD *)&v69 = *((_QWORD *)&v72 + 1);
          *((_QWORD *)&v69 + 1) = 8LL;
          v49 = 16LL;
        }
        else
        {
          v49 = 8LL;
          v48 = 0LL;
        }
        *(_QWORD *)((char *)&v69 + v49) = v48;
        if ( *((_QWORD *)&v69 + 1) && v70 )
          _rust_dealloc(v69);
        *a1 = 8;
        return a1;
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
      case 33:
      case 35:
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
        goto LABEL_20;
      case 34:
        uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v72, v4);
        v7 = *((_QWORD *)&v72 + 1);
        if ( (_QWORD)v72 == 0x8000000000000000LL )
          goto LABEL_139;
        if ( (_QWORD)v72 )
        {
          if ( (unsigned __int64)v72 > 0xFFFFFFFFFFFFFFFLL )
            goto LABEL_188;
          v8 = 16 * v72;
          *(_QWORD *)&v69 = *((_QWORD *)&v72 + 1);
          *((_QWORD *)&v69 + 1) = 8LL;
          v9 = 16LL;
        }
        else
        {
          v9 = 8LL;
          v8 = 0LL;
        }
        *(_QWORD *)((char *)&v69 + v9) = v8;
        if ( *((_QWORD *)&v69 + 1) && v70 )
          _rust_dealloc(v69);
        while ( 2 )
        {
          while ( 2 )
          {
            while ( 2 )
            {
              uu_env::string_parser::StringParser::peek_char_at_pointer((__int64)&v69, v4, *(_QWORD *)(v2 + 56));
              v14 = (__int64)&loc_110000;
              if ( BYTE8(v69) == 2 )
                v14 = (unsigned int)v69;
              if ( (int)v14 <= 91 )
              {
                if ( (_DWORD)v14 == 36 )
                {
                  uu_env::split_iterator::SplitIterator::substitute_variable((__int64)&v72, (_QWORD *)v2);
                  v26 = v72;
                  if ( (_DWORD)v72 != 8 )
                  {
                    LODWORD(v28) = DWORD1(v72);
                    v52 = *((_QWORD *)&v72 + 1);
                    v14 = v73;
                    v27 = v74;
                    v79[0] = *(_QWORD *)v75;
                    *(_QWORD *)((char *)v79 + 7) = *(_QWORD *)&v75[7];
                    goto LABEL_157;
                  }
                  continue;
                }
                if ( (_DWORD)v14 == 34 )
                {
                  v28 = &v76;
                  uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v76, v4);
                  v38 = v76;
                  v14 = v77;
                  if ( v76 == 0x8000000000000000LL )
                  {
LABEL_140:
                    v31 = v78;
LABEL_141:
                    v27 = v31 & 1;
                    v26 = 5;
                    v52 = v14;
                    goto LABEL_157;
                  }
                  goto LABEL_117;
                }
LABEL_80:
                LODWORD(v28) = v2;
                v14 = (__int64)uu_env::string_expander::StringExpander::take_one((_QWORD *)v2);
                if ( v31 != 2 )
                  goto LABEL_141;
                continue;
              }
              break;
            }
            if ( (_DWORD)v14 != 92 )
            {
              if ( (_DWORD)v14 == (_DWORD)&loc_110000 )
              {
                v52 = *(_QWORD *)(v2 + 56);
                v26 = 0;
                LODWORD(v28) = 34;
                goto LABEL_157;
              }
              goto LABEL_80;
            }
            v28 = &v76;
            uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v76, v4);
            v14 = v77;
            if ( v76 == 0x8000000000000000LL )
              goto LABEL_140;
            if ( v76 )
            {
              if ( v76 > 0xFFFFFFFFFFFFFFFLL )
                goto LABEL_188;
              v29 = 16 * v76;
              *(_QWORD *)&v69 = v77;
              *((_QWORD *)&v69 + 1) = 8LL;
              v30 = 16LL;
            }
            else
            {
              v30 = 8LL;
              v29 = 0LL;
            }
            *(_QWORD *)((char *)&v69 + v30) = v29;
            if ( *((_QWORD *)&v69 + 1) && v70 )
              _rust_dealloc(v69);
            v28 = &v76;
            v14 = uu_env::string_parser::StringParser::peek_char_at_pointer((__int64)&v76, v4, *(_QWORD *)(v2 + 56));
            v33 = &loc_110000;
            if ( (_BYTE)v77 == 2 )
              LODWORD(v33) = v76;
            if ( (int)v33 > 35 )
            {
              if ( (int)v33 > 91 )
              {
                if ( (_DWORD)v33 != 92 )
                {
                  if ( (_DWORD)v33 == 99 )
                  {
                    v52 = *(_QWORD *)(v2 + 56);
                    v26 = 2;
                    goto LABEL_156;
                  }
                  if ( (_DWORD)v33 == (_DWORD)&loc_110000 )
                  {
                    v52 = *(_QWORD *)(v2 + 56);
                    v26 = 0;
                    LOBYTE(v28) = 34;
                    v32 = 0;
                    goto LABEL_156;
                  }
                  goto LABEL_96;
                }
LABEL_100:
                LOBYTE(v28) = v2;
                v14 = (__int64)uu_env::string_expander::StringExpander::take_one((_QWORD *)v2);
                if ( v34 != 2 )
                {
                  v27 = v34 & 1;
                  v26 = 5;
                  v52 = v14;
                  goto LABEL_156;
                }
                continue;
              }
              if ( (_DWORD)v33 == 36 )
                goto LABEL_100;
LABEL_96:
              v14 = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(
                      (__int64)&v69,
                      v2,
                      (int)v33);
              v26 = v69;
              LOBYTE(v28) = BYTE4(v69);
              if ( (_DWORD)v69 != 8 )
              {
                v32 = (BYTE7(v69) << 16) | *(unsigned __int16 *)((char *)&v69 + 5);
                v52 = *((_QWORD *)&v69 + 1);
                v14 = v70;
                v27 = v71;
                v79[0] = *(_QWORD *)((char *)&v71 + 1);
                *(_QWORD *)((char *)v79 + 7) = *((_QWORD *)&v71 + 1);
                goto LABEL_156;
              }
              if ( (BYTE4(v69) & 1) == 0 )
              {
                v52 = *(_QWORD *)(v2 + 56);
                v32 = (unsigned int)v33 >> 8;
                v26 = 3;
                LOBYTE(v28) = (_BYTE)v33;
                goto LABEL_156;
              }
              continue;
            }
            break;
          }
          if ( (_DWORD)v33 != 10 )
          {
            if ( (_DWORD)v33 == 34 )
              goto LABEL_100;
            goto LABEL_96;
          }
          uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v81, v4);
          LOBYTE(v28) = v82;
          if ( v81 != 0x8000000000000000LL )
          {
            if ( v81 )
            {
              if ( v81 > 0xFFFFFFFFFFFFFFFLL )
                goto LABEL_188;
              v35 = 16 * v81;
              v76 = v82;
              v77 = 8LL;
              v36 = 16LL;
            }
            else
            {
              v36 = 8LL;
              v35 = 0LL;
            }
            *(unsigned __int64 *)((char *)&v76 + v36) = v35;
            if ( v77 && v78 )
              _rust_dealloc(v76);
            continue;
          }
          break;
        }
        v27 = v83 & 1;
        v26 = 5;
        v52 = v82;
        v14 = v82;
LABEL_156:
        LODWORD(v28) = (v32 << 8) | (unsigned __int8)v28;
LABEL_157:
        *a1 = v26;
        a1[1] = (int)v28;
        *((_QWORD *)a1 + 1) = v52;
        *((_QWORD *)a1 + 2) = v14;
        *((_BYTE *)a1 + 24) = v27;
        v53 = *(_QWORD *)((char *)v79 + 7);
        *(_QWORD *)((char *)a1 + 25) = v79[0];
        *((_QWORD *)a1 + 4) = v53;
        return a1;
      case 36:
        uu_env::split_iterator::SplitIterator::substitute_variable((__int64)&v84, (_QWORD *)v2);
        if ( v84 == 8 )
          continue;
        *a1 = v84;
        v51 = v86;
        *(_OWORD *)(a1 + 1) = v85;
        *(_OWORD *)(a1 + 5) = v51;
        a1[9] = v87;
        return a1;
      case 39:
        uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v72, v4);
        v7 = *((_QWORD *)&v72 + 1);
        if ( (_QWORD)v72 == 0x8000000000000000LL )
          goto LABEL_139;
        if ( (_QWORD)v72 )
        {
          if ( (unsigned __int64)v72 > 0xFFFFFFFFFFFFFFFLL )
            goto LABEL_188;
          v12 = 16 * v72;
          *(_QWORD *)&v69 = *((_QWORD *)&v72 + 1);
          *((_QWORD *)&v69 + 1) = 8LL;
          v13 = 16LL;
        }
        else
        {
          v13 = 8LL;
          v12 = 0LL;
        }
        *(_QWORD *)((char *)&v69 + v13) = v12;
        while ( 2 )
        {
          if ( *((_QWORD *)&v69 + 1) && v70 )
            _rust_dealloc(v69);
LABEL_40:
          LODWORD(v22) = (_DWORD)v4;
          uu_env::string_parser::StringParser::peek_char_at_pointer((__int64)&v69, v4, *(_QWORD *)(v2 + 56));
          v23 = &loc_110000;
          if ( BYTE8(v69) == 2 )
            LODWORD(v23) = v69;
          if ( (_DWORD)v23 == 92 )
          {
            LODWORD(v22) = (_DWORD)v4;
            uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v72, v4);
            v14 = *((_QWORD *)&v72 + 1);
            if ( (_QWORD)v72 == 0x8000000000000000LL )
              goto LABEL_134;
            if ( (_QWORD)v72 )
            {
              if ( (unsigned __int64)v72 > 0xFFFFFFFFFFFFFFFLL )
                goto LABEL_188;
              v24 = 16 * v72;
              *(_QWORD *)&v69 = *((_QWORD *)&v72 + 1);
              *((_QWORD *)&v69 + 1) = 8LL;
              v25 = 16LL;
            }
            else
            {
              v25 = 8LL;
              v24 = 0LL;
            }
            *(_QWORD *)((char *)&v69 + v25) = v24;
            if ( *((_QWORD *)&v69 + 1) && v70 )
              _rust_dealloc(v69);
            uu_env::string_parser::StringParser::peek_char_at_pointer((__int64)&v69, v4, *(_QWORD *)(v2 + 56));
            v22 = &loc_110000;
            if ( BYTE8(v69) == 2 )
              LODWORD(v22) = v69;
            switch ( (int)v22 )
            {
              case 10:
                LODWORD(v22) = (_DWORD)v4;
                uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v72, v4);
                v14 = *((_QWORD *)&v72 + 1);
                if ( (_QWORD)v72 == 0x8000000000000000LL )
                  goto LABEL_134;
                if ( !(_QWORD)v72 )
                {
                  *((_QWORD *)&v69 + 1) = 0LL;
                  continue;
                }
                if ( (unsigned __int64)v72 <= 0xFFFFFFFFFFFFFFFLL )
                {
                  *(_QWORD *)&v69 = *((_QWORD *)&v72 + 1);
                  *((_QWORD *)&v69 + 1) = 8LL;
                  v70 = 16 * v72;
                  continue;
                }
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
                goto LABEL_164;
              case 34:
              case 35:
              case 36:
              case 95:
              case 102:
              case 110:
              case 114:
              case 116:
              case 118:
                LODWORD(v22) = 92;
                uu_env::string_expander::StringExpander::put_one_char(v2, 0x5Cu);
                goto LABEL_39;
              case 39:
              case 92:
                goto LABEL_39;
              default:
                if ( (_DWORD)v22 == (_DWORD)&loc_110000 )
                  goto LABEL_159;
LABEL_164:
                v14 = *(_QWORD *)(v2 + 56);
                v42 = 3;
                goto LABEL_160;
            }
LABEL_188:
            core::panicking::panic_nounwind(anon_e24762227fb4b6cbc444e0a255431b09_8_llvm_9290427749344586668, 69LL);
          }
          break;
        }
        if ( (_DWORD)v23 != 39 )
        {
          if ( (_DWORD)v23 == (_DWORD)&loc_110000 )
          {
LABEL_159:
            v14 = *(_QWORD *)(v2 + 56);
            v42 = 0;
            LODWORD(v22) = 39;
            goto LABEL_160;
          }
LABEL_39:
          v14 = (__int64)uu_env::string_expander::StringExpander::take_one((_QWORD *)v2);
          if ( v21 != 2 )
            goto LABEL_135;
          goto LABEL_40;
        }
        LODWORD(v22) = (_DWORD)v4;
        uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v72, v4);
        v14 = *((_QWORD *)&v72 + 1);
        v38 = v72;
        if ( (_QWORD)v72 == 0x8000000000000000LL )
        {
LABEL_134:
          v21 = v73;
LABEL_135:
          v50 = v21 & 1;
          v42 = 5;
LABEL_160:
          *a1 = v42;
          a1[1] = (int)v22;
LABEL_161:
          *((_QWORD *)a1 + 1) = v14;
          *((_QWORD *)a1 + 2) = v14;
          *((_BYTE *)a1 + 24) = v50;
          return a1;
        }
LABEL_117:
        if ( v38 )
        {
          if ( v38 <= 0xFFFFFFFFFFFFFFFLL )
          {
            v39 = 16 * v38;
            *(_QWORD *)&v69 = v14;
            *((_QWORD *)&v69 + 1) = 8LL;
            v40 = 16LL;
            goto LABEL_121;
          }
          goto LABEL_188;
        }
        v40 = 8LL;
        v39 = 0LL;
LABEL_121:
        *(_QWORD *)((char *)&v69 + v40) = v39;
        if ( *((_QWORD *)&v69 + 1) && v70 )
          _rust_dealloc(v69);
        continue;
      case 92:
        uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v72, v4);
        v7 = *((_QWORD *)&v72 + 1);
        if ( (_QWORD)v72 == 0x8000000000000000LL )
        {
LABEL_139:
          v47 = v73 & 1;
          *a1 = 5;
          *((_QWORD *)a1 + 1) = v7;
          *((_QWORD *)a1 + 2) = v7;
          *((_BYTE *)a1 + 24) = v47;
          return a1;
        }
        if ( (_QWORD)v72 )
        {
          if ( (unsigned __int64)v72 > 0xFFFFFFFFFFFFFFFLL )
            goto LABEL_188;
          v10 = 16 * v72;
          *(_QWORD *)&v69 = *((_QWORD *)&v72 + 1);
          *((_QWORD *)&v69 + 1) = 8LL;
          v11 = 16LL;
        }
        else
        {
          v11 = 8LL;
          v10 = 0LL;
        }
        *(_QWORD *)((char *)&v69 + v11) = v10;
        if ( *((_QWORD *)&v69 + 1) && v70 )
          _rust_dealloc(v69);
        uu_env::string_parser::StringParser::peek_char_at_pointer((__int64)&v72, v4, *(_QWORD *)(v2 + 56));
        v16 = &loc_110000;
        if ( BYTE8(v72) == 2 )
          LODWORD(v16) = v72;
        v80 = a1;
        if ( (int)v16 <= 91 )
        {
          switch ( (int)v16 )
          {
            case 10:
              uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v76, v4);
              a1 = (int *)v77;
              LOBYTE(v18) = 0;
              if ( v76 == 0x8000000000000000LL )
                goto LABEL_169;
              if ( v76 )
              {
                if ( v76 > 0xFFFFFFFFFFFFFFFLL )
                  goto LABEL_188;
                v19 = 16 * v76;
                *(_QWORD *)&v72 = v77;
                *((_QWORD *)&v72 + 1) = 8LL;
                v20 = 16LL;
              }
              else
              {
                v20 = 8LL;
                v19 = 0LL;
              }
              *(_QWORD *)((char *)&v72 + v20) = v19;
              if ( *((_QWORD *)&v72 + 1) && v73 )
                _rust_dealloc(v72);
              break;
            case 34:
            case 36:
            case 39:
              goto LABEL_112;
            default:
              goto LABEL_131;
          }
          goto LABEL_113;
        }
        if ( (int)v16 > 94 )
        {
          if ( (_DWORD)v16 == 95 )
          {
            uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v76, v4);
            a1 = (int *)v77;
            LOBYTE(v18) = 0;
            if ( v76 != 0x8000000000000000LL )
            {
              if ( v76 )
              {
                if ( v76 > 0xFFFFFFFFFFFFFFFLL )
                  goto LABEL_188;
                v62 = 16 * v76;
                *(_QWORD *)&v72 = v77;
                *((_QWORD *)&v72 + 1) = 8LL;
                v63 = 16LL;
              }
              else
              {
                v63 = 8LL;
                v62 = 0LL;
              }
              *(_QWORD *)((char *)&v72 + v63) = v62;
              if ( *((_QWORD *)&v72 + 1) && v73 )
                _rust_dealloc(v72);
              v73 = *(_QWORD *)(v2 + 16);
              v72 = *(_OWORD *)v2;
              *(_QWORD *)v2 = 0LL;
              *(_QWORD *)(v2 + 8) = 1LL;
              *(_QWORD *)(v2 + 16) = 0LL;
              v64 = *(_QWORD *)(v2 + 80);
              if ( v64 == *(_QWORD *)(v2 + 64) )
                alloc::raw_vec::RawVec<T,A>::grow_one(v2 + 64);
              v65 = *(_QWORD *)(v2 + 72);
              v18 = 3 * v64;
              v66 = v72;
              v17 = v73;
              *(_QWORD *)(v65 + 8 * v18 + 16) = v73;
              *(_OWORD *)(v65 + 8 * v18) = v66;
              *(_QWORD *)(v2 + 80) = v64 + 1;
              v41 = 7;
LABEL_187:
              v67 = (v17 << 8) | (unsigned __int8)v18;
              v68 = v80;
              *v80 = v41;
              v68[1] = v67;
              *((_QWORD *)v68 + 1) = a1;
              a1 = v68;
              *((_QWORD *)v68 + 2) = v4;
              *((_QWORD *)v68 + 3) = v2;
              *((_QWORD *)v68 + 4) = v5;
              return a1;
            }
LABEL_169:
            v2 = v78 & 1;
LABEL_170:
            v41 = 5;
            v4 = a1;
            goto LABEL_187;
          }
          if ( (_DWORD)v16 == 99 )
          {
            v73 = *(_QWORD *)(v2 + 16);
            v72 = *(_OWORD *)v2;
            *(_QWORD *)v2 = 0LL;
            *(_QWORD *)(v2 + 8) = 1LL;
            *(_QWORD *)(v2 + 16) = 0LL;
            v59 = *(_QWORD *)(v2 + 80);
            if ( v59 == *(_QWORD *)(v2 + 64) )
              alloc::raw_vec::RawVec<T,A>::grow_one(v2 + 64);
            v60 = *(_QWORD *)(v2 + 72);
            v18 = 3 * v59;
            v61 = v72;
            v17 = v73;
            *(_QWORD *)(v60 + 8 * v18 + 16) = v73;
            *(_OWORD *)(v60 + 8 * v18) = v61;
            *(_QWORD *)(v2 + 80) = v59 + 1;
            v41 = 6;
            goto LABEL_187;
          }
          if ( (_DWORD)v16 == (_DWORD)&loc_110000 )
          {
            a1 = *(int **)(v2 + 56);
            v5 = (_OWORD *)&byte_8;
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v72, 8LL, 0LL);
            v4 = (_QWORD *)*((_QWORD *)&v72 + 1);
            if ( (_QWORD)v72 )
              alloc::raw_vec::handle_error(*((_QWORD *)&v72 + 1), v73);
            v2 = v73;
            core::intrinsics::copy_nonoverlapping::precondition_check(&unk_1C130, v73, 1LL, 1LL, 8LL);
            *(_QWORD *)v2 = 0x6465746F75716E55LL;
            v41 = 1;
            goto LABEL_187;
          }
LABEL_131:
          uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code((__int64)&v69, v2, (int)v16);
          v41 = v69;
          LOBYTE(v18) = BYTE4(v69);
          if ( (_DWORD)v69 != 8 )
          {
            v17 = (BYTE7(v69) << 16) | *(unsigned __int16 *)((char *)&v69 + 5);
            a1 = (int *)*((_QWORD *)&v69 + 1);
            v4 = (_QWORD *)v70;
            v5 = (__int128 *)*((_QWORD *)&v71 + 1);
            v2 = v71;
            goto LABEL_187;
          }
          if ( (BYTE4(v69) & 1) == 0 )
          {
            a1 = *(int **)(v2 + 56);
            v17 = (unsigned int)v16 >> 8;
            v41 = 3;
            LOBYTE(v18) = (_BYTE)v16;
            goto LABEL_187;
          }
          goto LABEL_113;
        }
        if ( (_DWORD)v16 != 92 )
          goto LABEL_131;
LABEL_112:
        v37 = (int *)uu_env::string_expander::StringExpander::take_one((_QWORD *)v2);
        if ( (_BYTE)v17 != 2 )
        {
          a1 = v37;
          LOBYTE(v17) = v17 & 1;
          v2 = (unsigned __int8)v17;
          goto LABEL_170;
        }
LABEL_113:
        a1 = v80;
        continue;
      default:
        if ( (_DWORD)v6 == (_DWORD)&loc_110000 )
        {
          v70 = *(_QWORD *)(v2 + 16);
          v69 = *(_OWORD *)v2;
          *(_QWORD *)v2 = 0LL;
          *(_QWORD *)(v2 + 8) = 1LL;
          *(_QWORD *)(v2 + 16) = 0LL;
          v55 = *(_QWORD *)(v2 + 80);
          if ( v55 == *(_QWORD *)(v2 + 64) )
            alloc::raw_vec::RawVec<T,A>::grow_one(v2 + 64);
          v56 = *(_QWORD *)(v2 + 72);
          v57 = 3 * v55;
          v58 = v69;
          *(_QWORD *)(v56 + 8 * v57 + 16) = v70;
          *(_OWORD *)(v56 + 8 * v57) = v58;
          *(_QWORD *)(v2 + 80) = v55 + 1;
          *a1 = 6;
          return a1;
        }
LABEL_20:
        v14 = (__int64)uu_env::string_expander::StringExpander::take_one((_QWORD *)v2);
        if ( v15 == 2 )
          continue;
        v50 = v15 & 1;
        *a1 = 5;
        goto LABEL_161;
    }
  }
}
