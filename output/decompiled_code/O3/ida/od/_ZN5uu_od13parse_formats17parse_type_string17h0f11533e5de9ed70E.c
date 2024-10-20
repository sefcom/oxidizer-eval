__int64 __fastcall uu_od::parse_formats::parse_type_string(_QWORD *a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  int v4; // r15d
  unsigned __int8 *v5; // r12
  int v6; // eax
  int v7; // ecx
  _QWORD *v8; // rcx
  __int64 result; // rax
  unsigned __int8 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // r14
  __int64 v14; // rax
  int v15; // eax
  unsigned __int8 v16; // al
  int v17; // ecx
  int v18; // edi
  int v19; // esi
  unsigned __int8 v20; // r15
  unsigned __int64 v21; // rcx
  char v22; // r13
  __int64 v23; // rax
  __int64 v24; // r13
  int v25; // eax
  int v26; // ecx
  unsigned __int8 v27; // r15
  __int64 v28; // rax
  char v29; // bp
  int v30; // eax
  unsigned int v31; // ecx
  unsigned __int8 v32; // r15
  int v33; // eax
  unsigned int v34; // ecx
  unsigned __int8 v35; // r15
  __int128 v36; // xmm0
  __int64 v37; // r14
  __int128 v38; // xmm0
  __int64 v39; // r13
  __int128 v40; // xmm0
  _QWORD *v41; // rcx
  __int64 v42; // rcx
  _QWORD *v43; // rsi
  __int64 v44; // rcx
  _QWORD *v45; // rsi
  char v46; // [rsp+Fh] [rbp-149h] BYREF
  _BYTE v47[24]; // [rsp+10h] [rbp-148h] BYREF
  unsigned __int8 *v48; // [rsp+28h] [rbp-130h]
  _OWORD *v49; // [rsp+30h] [rbp-128h] BYREF
  __int128 v50; // [rsp+38h] [rbp-120h]
  _QWORD *v51; // [rsp+50h] [rbp-108h]
  unsigned __int64 v52; // [rsp+58h] [rbp-100h]
  __int64 v53; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v54; // [rsp+68h] [rbp-F0h]
  __int64 v55; // [rsp+70h] [rbp-E8h]
  int v56; // [rsp+7Ch] [rbp-DCh] BYREF
  __int64 v57; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int8 *v58; // [rsp+88h] [rbp-D0h]
  unsigned __int64 v59; // [rsp+90h] [rbp-C8h]
  char v60; // [rsp+98h] [rbp-C0h]
  __int128 v61; // [rsp+A0h] [rbp-B8h] BYREF
  int **v62; // [rsp+B0h] [rbp-A8h]
  __int64 v63; // [rsp+B8h] [rbp-A0h]
  __int64 v64; // [rsp+C0h] [rbp-98h]
  int *v65; // [rsp+D0h] [rbp-88h] BYREF
  __int128 v66; // [rsp+D8h] [rbp-80h]
  __int64 (__fastcall *v67)(); // [rsp+E8h] [rbp-70h]
  _BYTE v68[24]; // [rsp+F0h] [rbp-68h] BYREF
  __int64 (__fastcall *v69)(); // [rsp+108h] [rbp-50h]
  __int128 v70; // [rsp+110h] [rbp-48h]
  __int64 v71; // [rsp+120h] [rbp-38h]

  v48 = a2;
  v51 = a1;
  v53 = 0LL;
  v54 = 8LL;
  v55 = 0LL;
  v52 = a3;
  if ( !a3 )
    goto LABEL_7;
  v3 = (unsigned __int64)v48;
  v4 = *v48;
  if ( (v4 & 0x80u) != 0 )
  {
    v6 = v4 & 0x1F;
    a3 = v48[1] & 0x3F;
    if ( (unsigned __int8)v4 <= 0xDFu )
    {
      v5 = v48 + 2;
      v4 = a3 | (v6 << 6);
      goto LABEL_12;
    }
    a3 = (unsigned int)((_DWORD)a3 << 6);
    v7 = a3 | v48[2] & 0x3F;
    if ( (unsigned __int8)v4 <= 0xEFu )
    {
      v5 = v48 + 3;
      v4 = (v6 << 12) | v7;
      goto LABEL_12;
    }
    v4 = ((v4 & 7) << 18) | (v7 << 6) | v48[3] & 0x3F;
    if ( v4 != 1114112 )
    {
      v3 = (unsigned __int64)v48;
      v5 = v48 + 4;
      goto LABEL_12;
    }
LABEL_7:
    v8 = v51;
    v51[3] = v55;
    v8[1] = v53;
    result = v54;
    v8[2] = v54;
    *v8 = 0LL;
    return result;
  }
  v5 = v48 + 1;
LABEL_12:
  v10 = (unsigned __int8 *)(v3 + v52);
  while ( 2 )
  {
    v56 = v4;
    switch ( v4 )
    {
      case 'a':
        v13 = 0;
        goto LABEL_20;
      case 'c':
        v13 = 1;
LABEL_20:
        v16 = 0;
        a3 = 0LL;
        goto LABEL_26;
      case 'd':
        v13 = 2;
        goto LABEL_25;
      case 'f':
        LOBYTE(a3) = 2;
        v16 = 1;
        v13 = 6;
        goto LABEL_26;
      case 'o':
        v13 = 3;
        goto LABEL_25;
      case 'u':
        v13 = 4;
        goto LABEL_25;
      case 'x':
        v13 = 5;
LABEL_25:
        v16 = 1;
        LOBYTE(a3) = 1;
        goto LABEL_26;
      default:
        v57 = 0LL;
        v58 = v48;
        v59 = v52;
        v60 = 1;
        v65 = &v56;
        *(_QWORD *)&v66 = <char as core::fmt::Display>::fmt;
        *((_QWORD *)&v66 + 1) = &v57;
        v67 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v61 = &off_103358;
        *((_QWORD *)&v61 + 1) = 2LL;
        v64 = 0LL;
        v62 = &v65;
        v63 = 2LL;
        v3 = (unsigned __int64)&v61;
        alloc::fmt::format::format_inner(v68, &v61);
        v14 = *(_QWORD *)v68;
        v13 = v68[8];
        *(_QWORD *)v47 = *(_QWORD *)&v68[9];
        *(_QWORD *)&v47[7] = *(_QWORD *)&v68[16];
        if ( *(_QWORD *)v68 != 0x8000000000000000LL )
        {
          v42 = *(_QWORD *)v47;
          v43 = v51;
          v51[3] = *(_QWORD *)&v47[7];
          *(_QWORD *)((char *)v43 + 17) = v42;
          v43[1] = v14;
          *((_BYTE *)v43 + 16) = v13;
          *v43 = 1LL;
          goto LABEL_124;
        }
        v15 = 124;
        v16 = _bittest(&v15, v68[8]);
        a3 = 0x2010101010000uLL >> (8 * v68[8]);
LABEL_26:
        if ( v5 == v10 )
        {
          v4 = 1114112;
          v5 = v10;
        }
        else
        {
          v4 = *v5;
          if ( (v4 & 0x80u) != 0 )
          {
            v17 = v4 & 0x1F;
            v18 = v5[1] & 0x3F;
            if ( (unsigned __int8)v4 <= 0xDFu )
            {
              v5 += 2;
              v4 = v18 | (v17 << 6);
            }
            else
            {
              v19 = (v18 << 6) | v5[2] & 0x3F;
              if ( (unsigned __int8)v4 < 0xF0u )
              {
                v5 += 3;
                v3 = (v17 << 12) | (unsigned int)v19;
                v4 = v3;
              }
              else
              {
                v20 = v5[3];
                v5 += 4;
                v3 = (unsigned int)(v19 << 6);
                v4 = ((v17 & 7) << 18) | v3 | v20 & 0x3F;
              }
            }
          }
          else
          {
            ++v5;
          }
        }
        v46 = 0;
        if ( !(_BYTE)a3 )
          goto LABEL_41;
        v21 = (unsigned __int8)a3;
        if ( (unsigned __int8)a3 == 1 )
        {
          v21 = (unsigned int)(v4 - 67);
          switch ( v4 )
          {
            case 'C':
              v22 = 1;
              goto LABEL_67;
            case 'I':
              v22 = 4;
              goto LABEL_67;
            case 'L':
              goto LABEL_54;
            case 'S':
              v22 = 2;
              goto LABEL_67;
            default:
              goto LABEL_41;
          }
        }
        if ( v4 == 68 )
        {
LABEL_54:
          v22 = 8;
LABEL_67:
          v46 = v22;
          if ( v5 == v10 )
          {
            v4 = 1114112;
            v29 = 0;
            v5 = v10;
LABEL_88:
            switch ( v13 )
            {
              case 0:
                goto LABEL_89;
              case 1:
                goto LABEL_96;
              case 2:
                goto LABEL_92;
              case 3:
                goto LABEL_94;
              case 4:
                goto LABEL_90;
              case 5:
                goto LABEL_97;
              case 6:
                goto LABEL_99;
            }
          }
          v4 = *v5;
          if ( (v4 & 0x80u) == 0 )
          {
            ++v5;
            if ( v4 != 122 )
              goto LABEL_87;
            goto LABEL_78;
          }
          v30 = v4 & 0x1F;
          a3 = v5[1] & 0x3F;
          if ( (unsigned __int8)v4 <= 0xDFu )
          {
            v5 += 2;
            v4 = a3 | (v30 << 6);
LABEL_77:
            if ( v4 != 122 )
              goto LABEL_87;
            goto LABEL_78;
          }
          a3 = (unsigned int)((_DWORD)a3 << 6);
          v31 = a3 | v5[2] & 0x3F;
          if ( (unsigned __int8)v4 < 0xF0u )
          {
            v5 += 3;
            v21 = (v30 << 12) | v31;
            v4 = v21;
            if ( (_DWORD)v21 != 122 )
            {
LABEL_87:
              v29 = 0;
              goto LABEL_88;
            }
          }
          else
          {
            v32 = v5[3];
            v5 += 4;
            v21 = v31 << 6;
            v4 = ((v30 & 7) << 18) | v21 | v32 & 0x3F;
            if ( v4 != 122 )
              goto LABEL_87;
          }
LABEL_78:
          v29 = 1;
          if ( v5 == v10 )
          {
            v4 = 1114112;
            v5 = v10;
            goto LABEL_88;
          }
          v4 = *v5;
          if ( (v4 & 0x80u) != 0 )
          {
            v33 = v4 & 0x1F;
            a3 = v5[1] & 0x3F;
            if ( (unsigned __int8)v4 <= 0xDFu )
            {
              v5 += 2;
              v4 = a3 | (v33 << 6);
            }
            else
            {
              a3 = (unsigned int)((_DWORD)a3 << 6);
              v34 = a3 | v5[2] & 0x3F;
              if ( (unsigned __int8)v4 < 0xF0u )
              {
                v5 += 3;
                v21 = (v33 << 12) | v34;
                v4 = v21;
              }
              else
              {
                v35 = v5[3];
                v5 += 4;
                v21 = v34 << 6;
                v4 = ((v33 & 7) << 18) | v21 | v35 & 0x3F;
              }
            }
            goto LABEL_88;
          }
          ++v5;
          v29 = 1;
          switch ( v13 )
          {
            case 0:
LABEL_89:
              *(_QWORD *)&v47[16] = &byte_4;
              v36 = *(_OWORD *)&off_103928;
LABEL_116:
              *(_OWORD *)v47 = v36;
              v37 = 0LL;
              break;
            case 1:
LABEL_96:
              *(_QWORD *)&v47[16] = &byte_4;
              *(_OWORD *)v47 = *(_OWORD *)&off_103948;
              v37 = 2LL;
              break;
            case 2:
LABEL_92:
              switch ( v22 )
              {
                case 0:
                case 4:
                  *(_QWORD *)&v47[16] = &byte_9[3];
                  v36 = *(_OWORD *)&off_103820;
                  goto LABEL_116;
                case 1:
                  *(_QWORD *)&v47[16] = &byte_5;
                  v36 = *(_OWORD *)&off_1037E0;
                  goto LABEL_116;
                case 2:
                  *(_QWORD *)&v47[16] = &byte_7;
                  v36 = *(_OWORD *)&off_103800;
                  goto LABEL_116;
                case 8:
                  *(_QWORD *)&v47[16] = (char *)&dword_14 + 1;
                  v36 = *(_OWORD *)&off_103840;
                  goto LABEL_116;
                default:
                  goto LABEL_120;
              }
            case 3:
LABEL_94:
              switch ( v22 )
              {
                case 0:
                case 4:
                  *(_QWORD *)&v47[16] = &byte_9[3];
                  v36 = *(_OWORD *)&off_1036A0;
                  goto LABEL_116;
                case 1:
                  *(_QWORD *)&v47[16] = &byte_4;
                  v36 = *(_OWORD *)&off_103660;
                  goto LABEL_116;
                case 2:
                  *(_QWORD *)&v47[16] = &byte_7;
                  v36 = *(_OWORD *)&off_103680;
                  goto LABEL_116;
                case 8:
                  *(_QWORD *)&v47[16] = (char *)&dword_14 + 3;
                  v36 = *(_OWORD *)&off_1036C0;
                  goto LABEL_116;
                default:
                  goto LABEL_120;
              }
            case 4:
LABEL_90:
              switch ( v22 )
              {
                case 0:
                case 4:
                  *(_QWORD *)&v47[16] = &byte_9[2];
                  v36 = *(_OWORD *)&off_1037A0;
                  goto LABEL_116;
                case 1:
                  *(_QWORD *)&v47[16] = &byte_4;
                  v36 = *(_OWORD *)&off_103760;
                  goto LABEL_116;
                case 2:
                  *(_QWORD *)&v47[16] = &byte_6;
                  v36 = *(_OWORD *)&off_103780;
                  goto LABEL_116;
                case 8:
                  *(_QWORD *)&v47[16] = (char *)&dword_14 + 1;
                  v36 = *(_OWORD *)&off_1037C0;
                  goto LABEL_116;
                default:
                  goto LABEL_120;
              }
            case 5:
LABEL_97:
              switch ( v22 )
              {
                case 0:
                case 4:
                  *(_QWORD *)&v47[16] = byte_9;
                  v36 = *(_OWORD *)&off_103720;
                  goto LABEL_116;
                case 1:
                  *(_QWORD *)&v47[16] = (char *)&dword_0 + 3;
                  v36 = *(_OWORD *)&off_1036E0;
                  goto LABEL_116;
                case 2:
                  *(_QWORD *)&v47[16] = &byte_5;
                  v36 = *(_OWORD *)&off_103700;
                  goto LABEL_116;
                case 8:
                  *(_QWORD *)&v47[16] = (char *)&word_10 + 1;
                  v36 = *(_OWORD *)&off_103740;
                  goto LABEL_116;
                default:
                  goto LABEL_120;
              }
            case 6:
LABEL_99:
              switch ( v22 )
              {
                case 0:
                case 4:
                  *(_QWORD *)&v47[16] = &byte_9[6];
                  v38 = *(_OWORD *)&off_104C08;
                  goto LABEL_103;
                case 2:
                  *(_QWORD *)&v47[16] = &byte_9[1];
                  v38 = *(_OWORD *)&off_104BE8;
                  goto LABEL_103;
                case 8:
                  *(_QWORD *)&v47[16] = (char *)&off_18 + 1;
                  v38 = *(_OWORD *)&off_104C28;
LABEL_103:
                  *(_OWORD *)v47 = v38;
                  v37 = 1LL;
                  goto LABEL_117;
                default:
LABEL_120:
                  v57 = 0LL;
                  v58 = v48;
                  v59 = v52;
                  v60 = 1;
                  v65 = (int *)&v46;
                  *(_QWORD *)&v66 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
                  *((_QWORD *)&v66 + 1) = &v57;
                  v67 = <os_display::Quoted as core::fmt::Display>::fmt;
                  *(_QWORD *)&v61 = &off_103398;
                  *((_QWORD *)&v61 + 1) = 2LL;
                  v64 = 0LL;
                  v62 = &v65;
                  v63 = 2LL;
                  alloc::fmt::format::format_inner(v68, &v61);
                  v40 = *(_OWORD *)v68;
                  v70 = *(_OWORD *)v68;
                  v71 = *(_QWORD *)&v68[16];
                  v41 = v51;
                  v51[3] = *(_QWORD *)&v68[16];
                  *(_OWORD *)(v41 + 1) = v40;
                  *v41 = 1LL;
                  goto LABEL_124;
              }
          }
LABEL_117:
          v70 = *(_OWORD *)v47;
          v71 = *(_QWORD *)&v47[16];
          v62 = *(int ***)&v47[16];
          v61 = *(_OWORD *)v47;
          v39 = v55;
          if ( v55 == v53 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v53, v3, a3, v21);
          v11 = v54;
          v12 = 5 * v39;
          *(_QWORD *)(v54 + 8 * v12) = v37;
          *(_OWORD *)(v11 + 8 * v12 + 8) = v61;
          a3 = (unsigned __int64)v62;
          *(_QWORD *)(v11 + 8 * v12 + 24) = v62;
          *(_BYTE *)(v11 + 8 * v12 + 32) = v29;
          v55 = v39 + 1;
          if ( v4 == 1114112 )
            goto LABEL_7;
          continue;
        }
        v22 = 4;
        if ( v4 == 70 )
          goto LABEL_67;
LABEL_41:
        v49 = 0LL;
        v50 = 1uLL;
        v21 = (unsigned int)(v4 - 48);
        LOBYTE(v21) = (unsigned int)v21 >= 0xA;
        if ( (unsigned __int8)v21 | v16 ^ 1 )
          goto LABEL_60;
        v23 = 1LL;
        while ( 1 )
        {
          v24 = v23;
          if ( (_OWORD *)(v23 - 1) == v49 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v49, v3, a3, v21);
          *(_BYTE *)(v50 + v24 - 1) = v4;
          *((_QWORD *)&v50 + 1) = v24;
          if ( v5 == v10 )
            break;
          v4 = *v5;
          if ( (v4 & 0x80u) == 0 )
          {
            ++v5;
          }
          else
          {
            v25 = v4 & 0x1F;
            a3 = v5[1] & 0x3F;
            if ( (unsigned __int8)v4 <= 0xDFu )
            {
              v5 += 2;
              v4 = a3 | (v25 << 6);
            }
            else
            {
              a3 = (unsigned int)((_DWORD)a3 << 6);
              v26 = a3 | v5[2] & 0x3F;
              if ( (unsigned __int8)v4 < 0xF0u )
              {
                v5 += 3;
                v4 = (v25 << 12) | v26;
              }
              else
              {
                v27 = v5[3];
                v5 += 4;
                v4 = ((v25 & 7) << 18) | (v26 << 6) | v27 & 0x3F;
              }
            }
          }
          v21 = (unsigned int)(v4 - 48);
          v23 = v24 + 1;
          if ( (unsigned int)v21 >= 0xA )
            goto LABEL_56;
        }
        v4 = 1114112;
        v5 = v10;
LABEL_56:
        if ( !v24 )
        {
LABEL_60:
          v22 = 0;
          goto LABEL_61;
        }
        if ( (core::num::<impl core::str::traits::FromStr for u8>::from_str(v50, v24) & 1) == 0 )
        {
          v22 = a3;
          v46 = a3;
LABEL_61:
          v3 = (unsigned __int64)v49;
          if ( v49 )
          {
            _rust_dealloc(v50, v49, 1LL);
            if ( v4 != 122 )
              goto LABEL_87;
            goto LABEL_78;
          }
          goto LABEL_77;
        }
        v65 = 0LL;
        v66 = v50;
        LOBYTE(v67) = 1;
        v57 = 0LL;
        v58 = v48;
        v59 = v52;
        v60 = 1;
        *(_QWORD *)v68 = &v65;
        *(_QWORD *)&v68[8] = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v68[16] = &v57;
        v69 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v61 = &off_103378;
        *((_QWORD *)&v61 + 1) = 2LL;
        v64 = 0LL;
        v62 = (int **)v68;
        v63 = 2LL;
        alloc::fmt::format::format_inner(v47, &v61);
        v28 = *(_QWORD *)v47;
        v22 = v47[8];
        a3 = *(_QWORD *)&v47[16];
        *(_QWORD *)&v70 = *(_QWORD *)&v47[9];
        *(_QWORD *)((char *)&v70 + 7) = *(_QWORD *)&v47[16];
        v21 = 0x8000000000000000LL;
        if ( *(_QWORD *)v47 == 0x8000000000000000LL )
        {
          v46 = v47[8];
          goto LABEL_61;
        }
        v44 = v70;
        v45 = v51;
        v51[3] = *(_QWORD *)((char *)&v70 + 7);
        *(_QWORD *)((char *)v45 + 17) = v44;
        v45[1] = v28;
        *((_BYTE *)v45 + 16) = v22;
        *v45 = 1LL;
        if ( v49 )
          _rust_dealloc(v50, v49, 1LL);
LABEL_124:
        result = v53;
        if ( v53 )
          return _rust_dealloc(v54, 40 * v53, 8LL);
        return result;
    }
  }
}
