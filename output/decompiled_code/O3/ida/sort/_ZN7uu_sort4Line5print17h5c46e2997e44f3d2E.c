__int64 __fastcall uu_sort::Line::print(__int64 a1, _QWORD *a2, __int64 a3)
{
  bool v4; // zf
  char *v5; // r12
  size_t v6; // rdx
  size_t v7; // rbx
  __int64 v8; // rax
  size_t v9; // rdx
  __int64 v10; // r13
  unsigned __int64 range; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rbp
  unsigned int v18; // r14d
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  char *v22; // r15
  __int64 v23; // rsi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // rax
  char *v28; // rdx
  char **v29; // r14
  __int64 v30; // rcx
  char *v31; // rsi
  char *v32; // rdi
  char *v33; // r9
  unsigned __int8 v34; // r10
  char v35; // r11
  int v36; // edx
  unsigned __int64 v37; // rbp
  bool v38; // al
  int v39; // edx
  int v40; // edx
  __int64 v41; // rax
  int v42; // edx
  unsigned __int64 leading_gen; // rax
  unsigned __int64 v44; // rdx
  bool v45; // cf
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rbp
  unsigned __int8 *v48; // r8
  unsigned __int8 *v49; // rsi
  unsigned __int8 *v50; // rdx
  char v51; // r9
  char v52; // r9
  unsigned __int8 *v53; // rdi
  unsigned int v54; // r9d
  int v55; // r10d
  int v56; // ebp
  int v57; // r11d
  unsigned int v58; // r10d
  int v59; // esi
  int v60; // edi
  int v61; // r9d
  int v62; // r8d
  int v63; // edx
  unsigned __int64 v64; // r15
  unsigned __int64 v65; // rbp
  unsigned __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 v68; // r8
  char *v69; // r9
  unsigned __int64 v70; // rsi
  unsigned int v71; // ecx
  char v72; // r10
  char v73; // r11
  int v74; // r11d
  int v75; // r10d
  unsigned __int64 v76; // rcx
  __int64 v77; // rax
  _QWORD *v78; // rbx
  __int64 result; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  _QWORD *v82; // r14
  __int64 v83; // rbx
  __int64 v84; // r14
  __int64 v85; // r14
  __int64 v86; // rsi
  __int64 v87; // rax
  char **v88; // r8
  const char *v89; // rbx
  char *v90; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v91; // [rsp+8h] [rbp-F0h]
  __int64 v92; // [rsp+10h] [rbp-E8h] BYREF
  __int64 (__fastcall *v93)(); // [rsp+18h] [rbp-E0h]
  int v94; // [rsp+20h] [rbp-D8h]
  const char *v95; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v96; // [rsp+30h] [rbp-C8h]
  unsigned __int64 v97; // [rsp+38h] [rbp-C0h]
  __int128 v98; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD *v99; // [rsp+58h] [rbp-A0h]
  __int64 *v100; // [rsp+60h] [rbp-98h] BYREF
  __int64 (__fastcall *v101)(); // [rsp+68h] [rbp-90h]
  __int64 v102; // [rsp+70h] [rbp-88h] BYREF
  char *v103; // [rsp+78h] [rbp-80h]
  unsigned __int64 v104; // [rsp+80h] [rbp-78h]
  __int64 v105; // [rsp+88h] [rbp-70h]
  __int64 v106; // [rsp+90h] [rbp-68h] BYREF
  __int64 v107; // [rsp+98h] [rbp-60h]
  __int64 v108; // [rsp+A0h] [rbp-58h]
  __int64 v109; // [rsp+A8h] [rbp-50h]
  _BYTE *v110; // [rsp+B0h] [rbp-48h]
  __int64 v111; // [rsp+B8h] [rbp-40h]
  __int64 v112; // [rsp+C0h] [rbp-38h]

  v4 = *(_BYTE *)(a3 + 124) == 0;
  v5 = *(char **)a1;
  v6 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    v83 = *(_QWORD *)(a1 + 8);
    v84 = a2[2];
    if ( *a2 - v84 <= v6 )
    {
      v87 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v5, v6);
      if ( v87 )
      {
        v95 = (const char *)v87;
        core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v95, &off_192520, &off_1928F0);
      }
      v85 = a2[2];
    }
    else
    {
      memcpy((void *)(v84 + a2[1]), v5, v6);
      v85 = v83 + v84;
      a2[2] = v85;
    }
    result = *(unsigned __int8 *)(a3 + 153);
    LOBYTE(v92) = *(_BYTE *)(a3 + 153);
    if ( (unsigned __int64)(*a2 - v85) < 2 )
    {
      result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, &v92, 1LL);
      if ( result )
      {
        v95 = (const char *)result;
        core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v95, &off_192520, &off_192908);
      }
    }
    else
    {
      *(_BYTE *)(a2[1] + v85) = result;
      a2[2] = v85 + 1;
    }
  }
  else
  {
    v99 = a2;
    v7 = v6;
    alloc::str::<impl str>::replace(&v102, v5);
    v92 = (__int64)&v102;
    v93 = <alloc::string::String as core::fmt::Display>::fmt;
    v95 = (const char *)&unk_192938;
    v96 = 2LL;
    v97 = (unsigned __int64)&v92;
    v98 = 1uLL;
    v8 = std::io::Write::write_fmt(a2, &v95);
    if ( v8 )
    {
      v89 = (const char *)v8;
      goto LABEL_234;
    }
    v106 = 0LL;
    v107 = 8LL;
    v108 = 0LL;
    uu_sort::tokenize(v5, v7, *(unsigned int *)(a3 + 120), &v106);
    v109 = *(_QWORD *)(a3 + 8);
    v110 = (_BYTE *)a3;
    v105 = *(_QWORD *)(a3 + 16);
    v9 = v7;
    if ( v105 )
    {
      v10 = v109;
      v112 = v109 + 56 * v105;
      v111 = -(__int64)v7;
      v91 = v7;
      v90 = v5;
      do
      {
        range = uu_sort::FieldSelector::get_range(v10, v5, v9, v107, v108);
        v16 = range;
        v17 = v12;
        v18 = *(unsigned __int8 *)(v10 + 53);
        if ( v18 < 2 )
        {
          v21 = v12 - range;
          if ( v17 < range )
            goto LABEL_228;
          if ( !range )
            goto LABEL_26;
          if ( range >= v91 )
          {
            if ( range == v91 )
              goto LABEL_26;
            goto LABEL_228;
          }
          if ( v90[range] <= -65 )
            goto LABEL_228;
LABEL_26:
          if ( v17 )
          {
            if ( v17 < v91 )
            {
              if ( v90[v17] <= -65 )
                goto LABEL_228;
              goto LABEL_31;
            }
            if ( v17 == v91 )
              goto LABEL_31;
LABEL_228:
            v25 = v17;
            v88 = &off_192968;
            v20 = v91;
            goto LABEL_225;
          }
LABEL_31:
          v22 = &v90[range];
          LOBYTE(v93) = (_BYTE)v18 == 1;
          v92 = 0x2E00110000LL;
          uu_sort::numeric_str_cmp::NumInfo::parse(&v95, &v90[range], v21, &v92);
          v23 = v98 - v97;
          if ( (unsigned __int64)v98 < v97 )
            v23 = 0LL;
          v24 = v97 + v16;
          v25 = v23 + v97 + v16;
          if ( __PAIR128__(v98, v97) != 0 )
          {
            if ( (_BYTE)v18 == 1 )
            {
              v20 = v91;
              v26 = 0x1600000000000LL;
              if ( v25 > v17 )
                goto LABEL_238;
              if ( !v25 )
                goto LABEL_112;
              if ( v25 >= v91 )
              {
                if ( v25 == v91 )
                  goto LABEL_112;
                goto LABEL_238;
              }
              if ( v90[v25] <= -65 )
                goto LABEL_238;
LABEL_112:
              if ( v17 )
              {
                if ( v17 < v91 )
                {
                  if ( v90[v17] <= -65 )
                    goto LABEL_238;
                  goto LABEL_117;
                }
                if ( v17 == v91 )
                  goto LABEL_117;
LABEL_238:
                v16 += v23 + v97;
                v25 = v17;
                v88 = &off_192998;
                goto LABEL_225;
              }
LABEL_117:
              if ( v17 != v25 )
              {
                v59 = (unsigned __int8)v90[v25];
                if ( (v59 & 0x80u) != 0 )
                {
                  v60 = v59 & 0x1F;
                  v61 = v90[v25 + 1] & 0x3F;
                  if ( (unsigned __int8)v59 <= 0xDFu )
                  {
                    v59 = v61 | (v60 << 6);
                  }
                  else
                  {
                    v62 = (v61 << 6) | v90[v25 + 2] & 0x3F;
                    if ( (unsigned __int8)v59 < 0xF0u )
                      v59 = (v60 << 12) | v62;
                    else
                      v59 = ((v59 & 7) << 18) | (v62 << 6) | v90[v25 + 3] & 0x3F;
                  }
                }
                v66 = (unsigned int)(v59 - 69);
                if ( (unsigned int)v66 <= 0x26 )
                {
                  v67 = 0x4000308945LL;
                  if ( _bittest64(&v67, v66) )
                    ++v25;
                }
                v17 = v25;
              }
            }
            else
            {
              v17 = v23 + v97 + v16;
              v20 = v91;
              v26 = 0x1600000000000LL;
            }
            if ( v16 > v24 )
            {
LABEL_223:
              v25 = v24;
            }
            else
            {
              v68 = 0LL;
              v69 = v22;
              v70 = v16;
              do
              {
                v25 = v97 + v70;
                if ( v16 )
                {
                  if ( v16 >= v20 )
                  {
                    if ( v16 != v20 )
                      goto LABEL_223;
                  }
                  else if ( *v22 <= -65 )
                  {
                    goto LABEL_224;
                  }
                }
                if ( v25 )
                {
                  if ( v25 >= v20 )
                  {
                    if ( v70 + v111 + v97 )
                      goto LABEL_223;
                  }
                  else if ( v69[v97] <= -65 )
                  {
                    goto LABEL_223;
                  }
                }
                if ( v97 == v68 )
                  goto LABEL_161;
                v71 = (unsigned __int8)v69[v97 - 1];
                if ( (v71 & 0x80u) != 0 )
                {
                  v72 = v69[v97 - 2];
                  if ( v72 >= -64 )
                  {
                    v75 = v72 & 0x1F;
                  }
                  else
                  {
                    v73 = v69[v97 - 3];
                    if ( v73 >= -64 )
                    {
                      v74 = v73 & 0xF;
                    }
                    else
                    {
                      v74 = ((v69[v97 - 4] & 7) << 6) | v73 & 0x3F;
                      v26 = 0x1600000000000LL;
                      v20 = v91;
                    }
                    v75 = (v74 << 6) | v72 & 0x3F;
                  }
                  v71 = (v75 << 6) | v71 & 0x3F;
                }
                if ( v71 > 0x30 || !_bittest64(&v26, v71) )
                {
                  v16 = v70 + v97;
                  goto LABEL_161;
                }
                --v24;
                v76 = v97 + v70-- - 1;
                --v69;
                ++v68;
              }
              while ( v16 <= v76 );
              v25 = v70 + v97;
            }
LABEL_224:
            v88 = &off_1929B0;
            goto LABEL_225;
          }
          if ( v24 > v25 )
          {
            v16 += v97;
            v88 = &off_192980;
            v20 = v91;
            goto LABEL_225;
          }
          v20 = v91;
          if ( !v24 )
            goto LABEL_80;
          if ( v24 >= v91 )
          {
            if ( v24 == v91 )
              goto LABEL_80;
            goto LABEL_241;
          }
          if ( v90[v24] <= -65 )
            goto LABEL_241;
LABEL_80:
          if ( v25 )
          {
            if ( v25 < v91 )
            {
              if ( v90[v25] <= -65 )
                goto LABEL_241;
              goto LABEL_85;
            }
            if ( v25 == v91 )
              goto LABEL_85;
LABEL_241:
            v16 += v97;
            v88 = &off_192980;
            goto LABEL_225;
          }
LABEL_85:
          if ( (unsigned __int64)v98 <= v97 )
          {
LABEL_109:
            v50 = 0LL;
LABEL_110:
            v17 = (unsigned __int64)&v50[v25];
            v16 = (unsigned __int64)&v50[v24];
            goto LABEL_161;
          }
          v48 = (unsigned __int8 *)&v90[v24];
          v49 = (unsigned __int8 *)&v90[v24 + v23];
          v50 = 0LL;
          while ( 2 )
          {
            v53 = v48;
            v54 = *v48;
            if ( (v54 & 0x80u) != 0 )
            {
              v55 = v54 & 0x1F;
              v56 = v48[1] & 0x3F;
              if ( (unsigned __int8)v54 <= 0xDFu )
              {
                v48 += 2;
                v54 = v56 | (v55 << 6);
              }
              else
              {
                v57 = (v56 << 6) | v48[2] & 0x3F;
                if ( (unsigned __int8)v54 < 0xF0u )
                {
                  v48 += 3;
                  v54 = (v55 << 12) | v57;
                }
                else
                {
                  v48 += 4;
                  v54 = ((v54 & 7) << 18) | (v57 << 6) | v53[3] & 0x3F;
                }
              }
            }
            else
            {
              ++v48;
            }
            if ( v54 - 9 >= 5 && v54 != 32 )
            {
              if ( v54 < 0x80 )
                goto LABEL_110;
              v58 = v54 >> 8;
              if ( v54 >> 8 <= 0x1F )
              {
                if ( v58 )
                {
                  if ( v58 != 22 )
                    goto LABEL_110;
                  v52 = v54 == 5760;
                  goto LABEL_89;
                }
                v51 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v54];
LABEL_88:
                v52 = v51 & 1;
                goto LABEL_89;
              }
              if ( v58 == 32 )
              {
                v51 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v54] >> 1;
                goto LABEL_88;
              }
              if ( v58 != 48 )
                goto LABEL_110;
              v52 = v54 == 12288;
LABEL_89:
              if ( !v52 )
                goto LABEL_110;
            }
            v50 = &v48[v50 - v53];
            if ( v48 == v49 )
              goto LABEL_109;
            continue;
          }
        }
        if ( v18 == 2 )
        {
          if ( v12 >= range )
          {
            v20 = v91;
            if ( range )
            {
              if ( range >= v91 )
              {
                if ( range != v91 )
                  goto LABEL_239;
              }
              else if ( v90[range] <= -65 )
              {
                goto LABEL_239;
              }
            }
            if ( v12 )
            {
              if ( v12 >= v91 )
              {
                if ( v12 != v91 )
                  goto LABEL_239;
              }
              else if ( v90[v12] <= -65 )
              {
LABEL_239:
                v25 = v12;
                v88 = &off_1929C8;
                goto LABEL_225;
              }
            }
            leading_gen = uu_sort::get_leading_gen(&v90[range], v12 - range, v12, v13);
            v16 += leading_gen;
            v45 = v44 < leading_gen;
            v46 = v44 - leading_gen;
            v47 = 0LL;
            if ( !v45 )
              v47 = v46;
            v17 = v16 + v47;
            goto LABEL_161;
          }
          v25 = v12;
          v88 = &off_1929C8;
          v20 = v91;
LABEL_225:
          core::str::slice_error_fail(v90, v20, v16, v25, v88);
        }
        if ( v18 != 3 )
          goto LABEL_161;
        v19 = v12 - range;
        v20 = v91;
        if ( v12 < range )
        {
LABEL_237:
          v25 = v12;
          v88 = &off_1929E0;
          goto LABEL_225;
        }
        if ( range )
        {
          if ( range >= v91 )
          {
            if ( range != v91 )
              goto LABEL_237;
          }
          else if ( v90[range] <= -65 )
          {
            goto LABEL_237;
          }
        }
        if ( v12 )
        {
          if ( v12 >= v91 )
          {
            if ( v12 != v91 )
              goto LABEL_237;
          }
          else if ( v90[v12] <= -65 )
          {
            goto LABEL_237;
          }
        }
        v95 = &v90[range];
        v96 = (__int64)&v90[v12];
        v97 = 0LL;
        LOBYTE(v98) = 0;
        v27 = core::str::<impl str>::trim_matches(&v90[range], v19, v12, v13, v14, v15, v90, v91, v92, v93, v94);
        v29 = &off_192E70;
        v30 = 0LL;
        while ( 1 )
        {
          v31 = v29[1];
          if ( !v31 )
            break;
          v32 = *v29;
          if ( v31 >= v28 )
          {
            if ( v31 != v28 )
              goto LABEL_58;
          }
          else if ( v31[v27] <= -65 )
          {
            goto LABEL_58;
          }
          if ( (*(_BYTE *)v27 | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)v27 - 65) < 0x1Au))) == ((unsigned __int8)*v32 | (unsigned __int8)(32 * ((unsigned __int8)(*v32 - 65) < 0x1Au))) )
          {
            v33 = 0LL;
            while ( v31 - 1 != v33 )
            {
              v34 = v33[v27 + 1];
              v35 = (v33++)[(_QWORD)v32 + 1];
              if ( (v34 | (unsigned __int8)(32 * ((unsigned __int8)(v34 - 65) < 0x1Au))) != ((unsigned __int8)v35 | (unsigned __int8)(32 * ((unsigned __int8)(v35 - 65) < 0x1Au))) )
              {
                if ( v33 < v31 )
                  goto LABEL_58;
                goto LABEL_69;
              }
            }
            break;
          }
LABEL_58:
          v30 += 3LL;
          v29 = &(&off_192E70)[v30];
          if ( v30 == 36 )
          {
            v37 = core::iter::traits::iterator::Iterator::try_fold(&v95, &v98);
            v38 = v63 == 1114112;
            goto LABEL_123;
          }
        }
LABEL_69:
        v37 = core::iter::traits::iterator::Iterator::try_fold(&v95, &v98);
        v38 = v36 == 1114112;
        if ( *((_BYTE *)v29 + 16) )
        {
          if ( v36 == 1114112 )
            core::option::unwrap_failed(&off_1929F8);
          core::iter::traits::iterator::Iterator::try_fold(&v95, &v98);
          if ( v39 != 1114112 )
          {
            core::iter::traits::iterator::Iterator::try_fold(&v95, &v98);
            if ( v40 != 1114112 )
            {
              v41 = core::iter::traits::iterator::Iterator::try_fold(&v95, &v98);
              if ( v42 != 1114112 )
                v19 = v41;
            }
          }
          goto LABEL_126;
        }
LABEL_123:
        if ( v38 )
          v37 = v19;
        v19 = v37;
LABEL_126:
        v16 += v37;
        v45 = v19 < v37;
        v64 = v19 - v37;
        v65 = 0LL;
        if ( !v45 )
          v65 = v64;
        v17 = v16 + v65;
LABEL_161:
        if ( v16 )
        {
          v20 = v104;
          if ( v16 >= v104 )
          {
            if ( v16 != v104 )
              goto LABEL_230;
          }
          else if ( v103[v16] <= -65 )
          {
LABEL_230:
            v90 = v103;
            v25 = v16;
            v88 = &off_192A10;
            v16 = 0LL;
            goto LABEL_225;
          }
        }
        v77 = unicode_width::str_width(v103, v16, 0LL);
        alloc::str::<impl str>::repeat(&v92, asc_291C5, 1LL, v77);
        v100 = &v92;
        v101 = <alloc::string::String as core::fmt::Display>::fmt;
        v95 = asc_1F080;
        v96 = 1LL;
        v97 = (unsigned __int64)&v100;
        v98 = 1uLL;
        v78 = v99;
        result = std::io::Write::write_fmt(v99, &v95);
        if ( result )
          goto LABEL_226;
        if ( v92 )
          _rust_dealloc(v93, v92, 1LL);
        if ( v17 <= v16 )
        {
          v95 = (const char *)&off_192958;
          v96 = 1LL;
          v97 = 8LL;
          v98 = 0LL;
          result = std::io::Write::write_fmt(v78, &v95);
          v9 = v91;
          v5 = v90;
          if ( !result )
            goto LABEL_6;
LABEL_231:
          v89 = (const char *)result;
LABEL_232:
          if ( v106 )
            _rust_dealloc(v107, 16 * v106, 8LL);
LABEL_234:
          if ( v102 )
            _rust_dealloc(v103, v102, 1LL);
          v95 = v89;
          core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v95, &off_192520, &off_192920);
        }
        v20 = v104;
        if ( !v16 )
          goto LABEL_177;
        if ( v16 >= v104 )
        {
          if ( v16 == v104 )
            goto LABEL_177;
          goto LABEL_229;
        }
        if ( v103[v16] <= -65 )
          goto LABEL_229;
LABEL_177:
        if ( v17 >= v104 )
        {
          if ( v17 == v104 )
            goto LABEL_181;
LABEL_229:
          v90 = v103;
          v25 = v17;
          v88 = &off_192A28;
          goto LABEL_225;
        }
        if ( v103[v17] <= -65 )
          goto LABEL_229;
LABEL_181:
        v80 = unicode_width::str_width(&v103[v16], v17 - v16, 0LL);
        alloc::str::<impl str>::repeat(&v92, asc_291C4, 1LL, v80);
        v100 = &v92;
        v101 = <alloc::string::String as core::fmt::Display>::fmt;
        v95 = (const char *)&unk_192938;
        v96 = 2LL;
        v97 = (unsigned __int64)&v100;
        v98 = 1uLL;
        result = std::io::Write::write_fmt(v99, &v95);
        v5 = v90;
        if ( result )
          goto LABEL_226;
        if ( v92 )
          _rust_dealloc(v93, v92, 1LL);
        v9 = v91;
LABEL_6:
        v10 += 56LL;
      }
      while ( v10 != v112 );
    }
    result = (unsigned __int8)v110[152];
    if ( (_BYTE)result != 5 && !v110[131] && !v110[132] )
    {
      if ( v110[127]
        || v110[125]
        || v110[126]
        || (_BYTE)result != 6
        || v110[128]
        || (v45 = v105 == 0, --v105, v45)
        || (v86 = 56 * v105 + v109, *(_QWORD *)(v86 + 24) != 1LL)
        || *(_QWORD *)(v86 + 32) != 1LL
        || *(_BYTE *)(v86 + 40)
        || *(_BYTE *)(v86 + 16) != 2
        || *(_BYTE *)(v86 + 53) != 6
        || *(_BYTE *)(v86 + 48)
        || *(_BYTE *)(v86 + 49)
        || *(_BYTE *)(v86 + 50)
        || *(_BYTE *)(v86 + 51)
        || (result = *(unsigned __int8 *)(v86 + 52), LOBYTE(result) = *(_BYTE *)(v86 + 54) | result, (_BYTE)result)
        || *(_BYTE *)(56 * v105 + v109 + 55) )
      {
        if ( v9 )
        {
          v81 = unicode_width::str_width(v103, v104, 0LL);
          v82 = v99;
          alloc::str::<impl str>::repeat(&v92, asc_291C4, 1LL, v81);
          v100 = &v92;
          v101 = <alloc::string::String as core::fmt::Display>::fmt;
          v95 = (const char *)&unk_192938;
          v96 = 2LL;
          v97 = (unsigned __int64)&v100;
          v98 = 1uLL;
          result = std::io::Write::write_fmt(v82, &v95);
          if ( result )
          {
LABEL_226:
            v89 = (const char *)result;
            if ( v92 )
              _rust_dealloc(v93, v92, 1LL);
            goto LABEL_232;
          }
          if ( v92 )
            result = _rust_dealloc(v93, v92, 1LL);
        }
        else
        {
          v95 = (const char *)&off_192958;
          v96 = 1LL;
          v97 = 8LL;
          v98 = 0LL;
          result = std::io::Write::write_fmt(v99, &v95);
          if ( result )
            goto LABEL_231;
        }
      }
    }
    if ( v106 )
      result = _rust_dealloc(v107, 16 * v106, 8LL);
    if ( v102 )
      return _rust_dealloc(v103, v102, 1LL);
  }
  return result;
}
