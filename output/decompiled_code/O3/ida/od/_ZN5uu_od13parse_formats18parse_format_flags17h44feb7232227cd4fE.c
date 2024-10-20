__int64 __fastcall uu_od::parse_formats::parse_format_flags(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  char v5; // al
  __int64 v6; // rax
  unsigned __int8 *v7; // rbp
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  unsigned __int8 *v10; // r12
  void *v11; // rbp
  unsigned __int64 v12; // rbx
  __int64 v13; // r13
  char v14; // r15
  unsigned __int8 *v15; // r13
  char v16; // bl
  __int64 v17; // rax
  unsigned int v18; // r12d
  unsigned __int64 v19; // rbx
  size_t v20; // rbx
  int v21; // eax
  unsigned int v22; // edx
  unsigned __int64 v23; // rsi
  void *v24; // rdi
  __int128 v25; // xmm0
  __int128 v26; // xmm0
  __int64 v27; // r12
  __int64 v28; // r14
  unsigned __int8 *v29; // r15
  void *v30; // rbx
  unsigned __int64 v31; // rbp
  __int64 v32; // r13
  __int64 v33; // r14
  __int64 v34; // rcx
  unsigned __int8 *v35; // r12
  void *v36; // rbx
  unsigned __int64 v37; // r13
  __int64 v38; // rbp
  __int64 v39; // r14
  __int64 v40; // rax
  void *v41; // rax
  __int128 v43; // [rsp+0h] [rbp-B8h]
  char *v44; // [rsp+10h] [rbp-A8h]
  __int128 v45; // [rsp+20h] [rbp-98h] BYREF
  __int64 v46; // [rsp+30h] [rbp-88h]
  __int64 v47; // [rsp+38h] [rbp-80h] BYREF
  __int64 v48; // [rsp+40h] [rbp-78h]
  unsigned __int64 v49; // [rsp+48h] [rbp-70h]
  __int64 v50; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int8 *v51; // [rsp+58h] [rbp-60h]
  void *src; // [rsp+60h] [rbp-58h]
  unsigned __int64 v53; // [rsp+68h] [rbp-50h]
  __int64 v54; // [rsp+70h] [rbp-48h]
  __int64 v55; // [rsp+78h] [rbp-40h]
  unsigned __int64 v56; // [rsp+80h] [rbp-38h]

  v3 = a2;
  v54 = a1;
  *(_QWORD *)&v45 = 0LL;
  *((_QWORD *)&v45 + 1) = 8LL;
  v46 = 0LL;
  v56 = a2 + 24 * a3;
  v4 = 1LL;
  v5 = 0;
LABEL_100:
  v14 = 0;
  while ( 1 )
  {
LABEL_2:
    if ( (v5 & 1) != 0 )
    {
      v6 = v3;
      if ( v3 == v56 )
        goto LABEL_101;
    }
    else
    {
      a3 = (v56 - v3) / 0x18;
      if ( a3 <= v4 )
        goto LABEL_101;
      v6 = v3 + 24 * v4;
    }
    v3 = v6 + 24;
    if ( (v14 & 1) == 0 )
      break;
    uu_od::parse_formats::parse_type_string(&v50, *(_QWORD *)(v6 + 8), *(_QWORD *)(v6 + 16), v4);
    v9 = v3;
    v10 = v51;
    v11 = src;
    v12 = v53;
    if ( v50 )
    {
      v39 = v54;
      *(_QWORD *)(v54 + 8) = v51;
      *(_QWORD *)(v39 + 16) = v11;
      *(_QWORD *)(v39 + 24) = v12;
      goto LABEL_110;
    }
    v13 = v46;
    if ( (__int64)v45 - v46 < v53 )
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v45, v46, v53);
      v13 = v46;
    }
    a2 = (__int64)v11;
    memcpy((void *)(*((_QWORD *)&v45 + 1) + 40 * v13), v11, 40 * v12);
    v46 = v12 + v13;
    v5 = 1;
    v4 = 0LL;
    v14 = 0;
    v3 = v9;
    if ( v10 )
    {
      a2 = 40LL * (_QWORD)v10;
      _rust_dealloc(v11, 40LL * (_QWORD)v10, 8LL);
      v5 = 1;
      v4 = 0LL;
      goto LABEL_100;
    }
  }
  v7 = *(unsigned __int8 **)(v6 + 8);
  v8 = *(_QWORD *)(v6 + 16);
  if ( v8 >= 2 )
  {
    if ( *(_WORD *)v7 == 11565 )
    {
      if ( v8 != 2 )
      {
        if ( v8 < 9 )
        {
          v5 = 1;
          v4 = 0LL;
          if ( v8 == 8 )
          {
            if ( *(_QWORD *)v7 == 0x74616D726F662D2DLL )
              v14 = 1;
            v5 = 1;
            v4 = 0LL;
          }
          goto LABEL_2;
        }
        v5 = 1;
        v4 = 0LL;
        if ( *(_QWORD *)v7 ^ 0x74616D726F662D2DLL | v7[8] ^ 0x3DLL )
          goto LABEL_2;
        v51 = v7;
        src = &v7[v8];
        LOBYTE(v53) = 0;
        v50 = 1LL;
        <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v47, &v50, a3, 0LL);
        v33 = v3;
        v55 = v48;
        uu_od::parse_formats::parse_type_string(&v50, v48, v49, v34);
        v35 = v51;
        v36 = src;
        v37 = v53;
        if ( !v50 )
        {
          v38 = v46;
          if ( (__int64)v45 - v46 < v53 )
          {
            alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v45, v46, v53);
            v38 = v46;
          }
          memcpy((void *)(*((_QWORD *)&v45 + 1) + 40 * v38), v36, 40 * v37);
          v46 = v37 + v38;
          if ( v35 )
            _rust_dealloc(v36, 40LL * (_QWORD)v35, 8LL);
          a2 = v47;
          if ( v47 )
            _rust_dealloc(v55, v47, 1LL);
          v4 = 0LL;
          v3 = v33;
          v5 = 1;
          goto LABEL_2;
        }
        v39 = v54;
        *(_QWORD *)(v54 + 8) = v51;
        *(_QWORD *)(v39 + 16) = v36;
        *(_QWORD *)(v39 + 24) = v37;
        *(_QWORD *)v39 = 1LL;
        if ( v47 )
          _rust_dealloc(v55, v47, 1LL);
        goto LABEL_111;
      }
LABEL_101:
      if ( (v14 & 1) == 0 )
      {
        v39 = v54;
        if ( !v46 )
        {
          if ( !(_QWORD)v45 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v45, a2, a3, v4);
          v40 = *((_QWORD *)&v45 + 1);
          *(_OWORD *)(*((_QWORD *)&v45 + 1) + 16LL) = unk_103688;
          *(_OWORD *)v40 = uu_od::prn_int::FORMAT_ITEM_OCT16;
          *(_BYTE *)(v40 + 32) = 0;
          v46 = 1LL;
        }
        *(_QWORD *)(v39 + 24) = v46;
        *(_OWORD *)(v39 + 8) = v45;
        *(_QWORD *)v39 = 0LL;
        return v39;
      }
      v41 = (void *)_rust_alloc(52LL, 1LL);
      v39 = v54;
      if ( !v41 )
        alloc::raw_vec::handle_error(1LL, 52LL);
      qmemcpy(v41, "missing format specification after '--format' / '-t'", 52);
      *(_QWORD *)(v39 + 8) = 52LL;
      *(_QWORD *)(v39 + 16) = v41;
      *(_QWORD *)(v39 + 24) = 52LL;
LABEL_110:
      *(_QWORD *)v39 = 1LL;
      goto LABEL_111;
    }
  }
  else
  {
    v5 = 1;
    v4 = 0LL;
    if ( !v8 )
      goto LABEL_2;
  }
  v5 = 1;
  v4 = 0LL;
  if ( *v7 != 45 )
    goto LABEL_2;
  v55 = v3;
  v15 = &v7[v8];
  v47 = 0LL;
  v48 = 1LL;
  v49 = 0LL;
  v16 = 0;
  while ( (v16 & 1) != 0 )
  {
    if ( v7 == v15 )
      goto LABEL_74;
    v18 = *v7;
    if ( (v18 & 0x80u) != 0 )
    {
      v21 = v18 & 0x1F;
      v4 = v7[1] & 0x3F;
      if ( (unsigned __int8)v18 <= 0xDFu )
      {
        v7 += 2;
        v18 = v4 | (v21 << 6);
        if ( (v14 & 1) != 0 )
          goto LABEL_24;
        goto LABEL_54;
      }
      v4 = (unsigned int)((_DWORD)v4 << 6);
      v22 = v4 | v7[2] & 0x3F;
      if ( (unsigned __int8)v18 > 0xEFu )
      {
        v4 = (unsigned __int64)v7;
        goto LABEL_39;
      }
      v7 += 3;
      a3 = (v21 << 12) | v22;
      v18 = a3;
      if ( (v14 & 1) != 0 )
        goto LABEL_24;
LABEL_54:
      v16 = 1;
      switch ( v18 )
      {
        case 'A':
        case 'N':
        case 'S':
        case 'j':
        case 'w':
          goto LABEL_74;
        case 'B':
        case 'o':
          v44 = &byte_7;
          v25 = *(_OWORD *)&off_103680;
          goto LABEL_69;
        case 'D':
          v44 = &byte_9[2];
          v25 = *(_OWORD *)&off_1037A0;
          goto LABEL_69;
        case 'F':
        case 'e':
          v44 = (char *)&off_18 + 1;
          v26 = *(_OWORD *)&off_104C28;
          goto LABEL_65;
        case 'H':
        case 'X':
          v44 = byte_9;
          v25 = *(_OWORD *)&off_103720;
          goto LABEL_69;
        case 'I':
        case 'L':
        case 'l':
          v44 = (char *)&dword_14 + 1;
          v25 = *(_OWORD *)&off_103840;
          goto LABEL_69;
        case 'O':
          v44 = &byte_9[3];
          v25 = *(_OWORD *)&off_1036A0;
          goto LABEL_69;
        case 'a':
          v44 = &byte_4;
          v25 = *(_OWORD *)&off_103928;
          goto LABEL_69;
        case 'b':
          v44 = &byte_4;
          v25 = *(_OWORD *)&off_103660;
          goto LABEL_69;
        case 'c':
          v44 = &byte_4;
          v43 = *(_OWORD *)&off_103948;
          v27 = 2LL;
          goto LABEL_70;
        case 'd':
          v44 = &byte_6;
          v25 = *(_OWORD *)&off_103780;
          goto LABEL_69;
        case 'f':
          v44 = &byte_9[6];
          v26 = *(_OWORD *)&off_104C08;
LABEL_65:
          v43 = v26;
          v27 = 1LL;
          goto LABEL_70;
        case 'h':
        case 'x':
          v44 = &byte_5;
          v25 = *(_OWORD *)&off_103700;
          goto LABEL_69;
        case 'i':
          v44 = &byte_9[3];
          v25 = *(_OWORD *)&off_103820;
          goto LABEL_69;
        case 's':
          v44 = &byte_7;
          v25 = *(_OWORD *)&off_103800;
LABEL_69:
          v43 = v25;
          v27 = 0LL;
LABEL_70:
          v28 = v46;
          if ( v46 == (_QWORD)v45 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v45, a2, a3, v4);
          v17 = *((_QWORD *)&v45 + 1);
          v4 = 5 * v28;
          *(_QWORD *)(*((_QWORD *)&v45 + 1) + 8 * v4) = v27;
          *(_OWORD *)(v17 + 8 * v4 + 8) = v43;
          a3 = (unsigned __int64)v44;
          *(_QWORD *)(v17 + 8 * v4 + 24) = v44;
          *(_BYTE *)(v17 + 8 * v4 + 32) = 0;
          v46 = v28 + 1;
          break;
        case 't':
          v16 = 1;
          v14 = 1;
          continue;
        default:
          continue;
      }
    }
    else
    {
      ++v7;
      if ( (v14 & 1) == 0 )
        goto LABEL_54;
LABEL_24:
      if ( v18 >= 0x80 )
      {
        LODWORD(v50) = 0;
        if ( v18 >= 0x800 )
        {
          if ( v18 >= (unsigned int)&unk_10000 )
          {
            LOBYTE(v50) = (v18 >> 18) | 0xF0;
            BYTE1(v50) = (v18 >> 12) & 0x3F | 0x80;
            BYTE2(v50) = (v18 >> 6) & 0x3F | 0x80;
            BYTE3(v50) = v18 & 0x3F | 0x80;
            v20 = 4LL;
          }
          else
          {
            LOBYTE(v50) = (v18 >> 12) | 0xE0;
            BYTE1(v50) = (v18 >> 6) & 0x3F | 0x80;
            BYTE2(v50) = v18 & 0x3F | 0x80;
            v20 = 3LL;
          }
        }
        else
        {
          LOBYTE(v50) = (v18 >> 6) | 0xC0;
          BYTE1(v50) = v18 & 0x3F | 0x80;
          v20 = 2LL;
        }
        v23 = v49;
        if ( v47 - v49 < v20 )
        {
          alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v47, v49, v20);
          v23 = v49;
        }
        v24 = (void *)(v48 + v23);
        a2 = (__int64)&v50;
        memcpy(v24, &v50, v20);
        v49 += v20;
        v16 = 1;
      }
      else
      {
        v19 = v49;
        if ( v49 == v47 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v47, a2, a3, v4);
        *(_BYTE *)(v48 + v19) = v18;
        v49 = v19 + 1;
        v16 = 1;
      }
    }
  }
  if ( v15 != v7 )
  {
    v4 = (unsigned __int64)&v7[byte_1DCA4[*v7]];
    if ( (unsigned __int8 *)v4 != v15 )
    {
      v18 = *(unsigned __int8 *)v4;
      if ( (v18 & 0x80u) != 0 )
      {
        v21 = v18 & 0x1F;
        a2 = *(_BYTE *)(v4 + 1) & 0x3F;
        if ( (unsigned __int8)v18 <= 0xDFu )
        {
          v4 += 2LL;
          v18 = a2 | (v21 << 6);
        }
        else
        {
          a2 = (unsigned int)((_DWORD)a2 << 6);
          v22 = a2 | *(_BYTE *)(v4 + 2) & 0x3F;
          if ( (unsigned __int8)v18 <= 0xEFu )
          {
            v4 += 3LL;
            a3 = (v21 << 12) | v22;
            v18 = a3;
          }
          else
          {
LABEL_39:
            a3 = v22 << 6;
            v18 = ((v21 & 7) << 18) | a3 | *(_BYTE *)(v4 + 3) & 0x3F;
            if ( v18 == 1114112 )
              goto LABEL_74;
            v4 += 4LL;
          }
        }
      }
      else
      {
        ++v4;
      }
      v7 = (unsigned __int8 *)v4;
      if ( (v14 & 1) != 0 )
        goto LABEL_24;
      goto LABEL_54;
    }
  }
LABEL_74:
  a3 = v49;
  if ( !v49 )
    goto LABEL_81;
  uu_od::parse_formats::parse_type_string(&v50, v48, v49, v4);
  v29 = v51;
  v30 = src;
  v31 = v53;
  if ( !v50 )
  {
    v32 = v46;
    if ( (__int64)v45 - v46 < v53 )
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v45, v46, v53);
      v32 = v46;
    }
    memcpy((void *)(*((_QWORD *)&v45 + 1) + 40 * v32), v30, 40 * v31);
    v46 = v31 + v32;
    if ( v29 )
      _rust_dealloc(v30, 40LL * (_QWORD)v29, 8LL);
    v14 = 0;
LABEL_81:
    a2 = v47;
    v3 = v55;
    if ( v47 )
      _rust_dealloc(v48, v47, 1LL);
    v4 = 0LL;
    v5 = 1;
    goto LABEL_2;
  }
  v39 = v54;
  *(_QWORD *)(v54 + 8) = v51;
  *(_QWORD *)(v39 + 16) = v30;
  *(_QWORD *)(v39 + 24) = v31;
  *(_QWORD *)v39 = 1LL;
  if ( v47 )
    _rust_dealloc(v48, v47, 1LL);
LABEL_111:
  if ( (_QWORD)v45 )
    _rust_dealloc(*((_QWORD *)&v45 + 1), 40 * v45, 8LL);
  return v39;
}
