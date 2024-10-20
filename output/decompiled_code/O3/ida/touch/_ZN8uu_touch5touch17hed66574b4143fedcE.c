__int64 __fastcall uu_touch::touch(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  signed __int64 v7; // rbp
  signed __int64 v8; // rax
  __int64 v9; // rsi
  __int32 v10; // edx
  const void *v11; // r13
  signed __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // rax
  void *v16; // r14
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 *v22; // r14
  __int64 v23; // r15
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 (__fastcall **v26)(); // r13
  __int64 v27; // r12
  _BYTE *v28; // rax
  char v29; // al
  __int64 v30; // r12
  __int64 v31; // rbx
  unsigned __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 (__fastcall **v35)(); // rbx
  int v36; // ebx
  char v37; // al
  char v38; // cl
  int v39; // ecx
  __int64 v40; // r12
  __int64 (__fastcall **v41)(); // rbx
  __int64 (__fastcall *v42)(); // rsi
  __int64 v43; // rdx
  __int32 v44; // esi
  __int64 v45; // rax
  __int32 v46; // ecx
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // eax
  __int64 (__fastcall **v50)(); // rbx
  bool v51; // zf
  __int64 v52; // rax
  __int64 (__fastcall **v53)(); // rdi
  __int64 v54; // rax
  _QWORD *v55; // r12
  __int64 v56; // rsi
  unsigned int v57; // ebx
  __int64 v58; // rdx
  __int64 v59; // rdi
  __int64 v60; // r13
  int v61; // eax
  int v62; // eax
  unsigned __int64 v63; // r13
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int32 v66; // ebx
  __int64 v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rdi
  __int64 v70; // r13
  int v71; // eax
  int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int32 v75; // esi
  __int64 result; // rax
  const void *v77; // rbx
  size_t v78; // rdx
  __int64 v79; // r14
  size_t v80; // r15
  __int64 v81; // rax
  char *v82; // rdi
  const void *v83; // rsi
  size_t v84; // rbx
  __int128 v85; // xmm0
  __int128 v86; // xmm0
  char v87; // [rsp+7h] [rbp-1F1h]
  unsigned __int32 v88; // [rsp+8h] [rbp-1F0h]
  bool v89; // [rsp+Eh] [rbp-1EAh]
  char v90; // [rsp+Fh] [rbp-1E9h]
  __int64 v91; // [rsp+10h] [rbp-1E8h]
  _BYTE v92[24]; // [rsp+18h] [rbp-1E0h] BYREF
  __int64 (__fastcall *v93)(); // [rsp+30h] [rbp-1C8h]
  __int64 v94; // [rsp+38h] [rbp-1C0h]
  unsigned __int64 v95; // [rsp+40h] [rbp-1B8h]
  __int64 v96; // [rsp+48h] [rbp-1B0h]
  unsigned __int64 v97; // [rsp+50h] [rbp-1A8h]
  __int64 v98; // [rsp+58h] [rbp-1A0h]
  __int64 v99; // [rsp+60h] [rbp-198h]
  __int64 (__fastcall **v100)(); // [rsp+68h] [rbp-190h]
  __int64 v101; // [rsp+70h] [rbp-188h]
  int fd[2]; // [rsp+78h] [rbp-180h] BYREF
  __int64 (__fastcall **v103)(); // [rsp+80h] [rbp-178h]
  __int32 v104; // [rsp+88h] [rbp-170h]
  int v105; // [rsp+8Ch] [rbp-16Ch]
  __int128 v106; // [rsp+90h] [rbp-168h] BYREF
  _BYTE v107[24]; // [rsp+A0h] [rbp-158h] BYREF
  _QWORD *v108; // [rsp+C0h] [rbp-138h] BYREF
  __int64 dest; // [rsp+C8h] [rbp-130h] BYREF
  __int64 v110; // [rsp+D0h] [rbp-128h] BYREF
  __m256i v111; // [rsp+D8h] [rbp-120h]
  __int64 v112; // [rsp+F8h] [rbp-100h]
  char v113; // [rsp+100h] [rbp-F8h]
  __int64 v114; // [rsp+178h] [rbp-80h]
  size_t *v115; // [rsp+180h] [rbp-78h]
  const void **v116; // [rsp+188h] [rbp-70h]
  __int64 v117; // [rsp+190h] [rbp-68h] BYREF
  int v118; // [rsp+198h] [rbp-60h]
  int v119; // [rsp+19Ch] [rbp-5Ch]
  __int64 v120; // [rsp+1A0h] [rbp-58h] BYREF
  int v121; // [rsp+1A8h] [rbp-50h]
  int v122; // [rsp+1ACh] [rbp-4Ch]
  _QWORD v123[9]; // [rsp+1B0h] [rbp-48h] BYREF

  v96 = a1;
  v7 = a4[3];
  v8 = 0LL;
  if ( v7 < (__int64)0x8000000000000002LL )
    v8 = v7 - 0x7FFFFFFFFFFFFFFFLL;
  if ( !v8 )
  {
    v11 = (const void *)a4[4];
    v12 = a4[5];
    uu_touch::stat(&dest, v11, v12, *((_BYTE *)a4 + 49) == 0);
    if ( !dest )
    {
      v9 = v110;
      v10 = v111.m256i_i32[0];
      v94 = v111.m256i_i64[1];
      v88 = v111.m256i_u32[4];
      goto LABEL_15;
    }
    v13 = v110;
    if ( v12 )
    {
      if ( v12 < 0 )
      {
        v14 = 0LL;
      }
      else
      {
        v14 = 1LL;
        v15 = _rust_alloc(v12, 1LL);
        if ( v15 )
        {
          v16 = (void *)v15;
LABEL_170:
          memcpy(v16, v11, v12);
          result = v96;
          *(_QWORD *)v96 = 0x8000000000000002LL;
          *(_QWORD *)(result + 8) = v12;
          *(_QWORD *)(result + 16) = v16;
          *(_QWORD *)(result + 24) = v12;
          *(_QWORD *)(result + 32) = v13;
          return result;
        }
      }
      alloc::raw_vec::handle_error(v14, v12);
    }
    v16 = &dword_0 + 1;
    goto LABEL_170;
  }
  if ( v8 == 1 )
  {
    v9 = a4[4];
    v10 = *((_DWORD *)a4 + 10);
  }
  else
  {
    chrono::offset::local::Local::now(&dest);
    v17 = ((int)dest >> 13) - 1;
    v18 = 0;
    if ( (int)dest >> 13 <= 0 )
    {
      v19 = (1 - ((int)dest >> 13)) / 0x190u + 1;
      v17 += 400 * v19;
      v18 = -146097 * v19;
    }
    v20 = (int)(((v17 / 100) >> 2) + ((1461 * v17) >> 2) + v18 + (((unsigned int)dest >> 4) & 0x1FF) - v17 / 100);
    v10 = v110;
    v9 = 86400 * v20 + HIDWORD(dest) - 0xE77934880LL;
  }
  v94 = v9;
  v88 = v10;
LABEL_15:
  v21 = *a4;
  if ( *a4 != 0x8000000000000000LL )
  {
    v98 = a3;
    v57 = v10;
    v58 = v9 / 86400;
    v59 = (v9 % 86400) >> 63;
    v99 = v9;
    v60 = v9 % 86400 + 86400;
    if ( v9 % 86400 >= 0 )
      v60 = v9 % 86400;
    if ( (unsigned __int64)(v59 + v58 - 2146764485) < 0xFFFFFFFF00000000LL
      || (v61 = chrono::naive::date::NaiveDate::from_num_days_from_ce_opt((unsigned int)(v58 + v59 + 719163))) == 0
      || v57 > 0x773593FF
      || v57 >= 0x3B9ACA00 && (unsigned int)v60 % 0x3C != 59
      || (*(_DWORD *)v92 = v61,
          *(_DWORD *)&v92[4] = v60,
          *(_DWORD *)&v92[8] = v57,
          v62 = <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_utc_datetime(1LL, v92),
          !*(_DWORD *)v92) )
    {
      result = v96;
      *(_QWORD *)v96 = 0x8000000000000001LL;
      *(_QWORD *)(result + 8) = v99;
      *(_DWORD *)(result + 16) = v57;
      return result;
    }
    v117 = *(_QWORD *)v92;
    v118 = *(_DWORD *)&v92[8];
    v119 = v62;
    v63 = a4[1];
    uu_touch::parse_date(&dest, &v117, v63);
    v64 = dest;
    v65 = v110;
    v66 = v111.m256i_i32[0];
    if ( dest != 0x8000000000000004LL )
    {
      v85 = *(_OWORD *)((char *)v111.m256i_i64 + 4);
      result = v96;
      *(_OWORD *)(v96 + 32) = *(_OWORD *)&v111.m256i_u64[2];
      *(_OWORD *)(result + 20) = v85;
      *(_QWORD *)result = v64;
      *(_QWORD *)(result + 8) = v65;
      *(_DWORD *)(result + 16) = v66;
      return result;
    }
    v97 = 0x8000000000000004LL;
    v95 = v63;
    v99 = v110;
    v67 = v94;
    v68 = v94 / 86400;
    v69 = (v94 % 86400) >> 63;
    v70 = v94 % 86400 + 86400;
    if ( v94 % 86400 >= 0 )
      v70 = v94 % 86400;
    if ( (unsigned __int64)(v69 + v68 - 2146764485) < 0xFFFFFFFF00000000LL
      || (v71 = chrono::naive::date::NaiveDate::from_num_days_from_ce_opt((unsigned int)(v68 + v69 + 719163)),
          v67 = v94,
          !v71)
      || v88 > 0x773593FF
      || v88 >= 0x3B9ACA00 && (unsigned int)v70 % 0x3C != 59
      || (*(_DWORD *)v92 = v71,
          *(_DWORD *)&v92[4] = v70,
          *(_DWORD *)&v92[8] = v88,
          v72 = <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_utc_datetime(1LL, v92),
          v67 = v94,
          !*(_DWORD *)v92) )
    {
      result = v96;
      *(_QWORD *)v96 = 0x8000000000000001LL;
      *(_QWORD *)(result + 8) = v67;
      *(_DWORD *)(result + 16) = v88;
      return result;
    }
    v120 = *(_QWORD *)v92;
    v121 = *(_DWORD *)&v92[8];
    v122 = v72;
    uu_touch::parse_date(&dest, &v120, v95);
    v73 = dest;
    v74 = v110;
    v75 = v111.m256i_i32[0];
    if ( dest != v97 )
    {
      v86 = *(_OWORD *)((char *)v111.m256i_i64 + 4);
      result = v96;
      *(_OWORD *)(v96 + 32) = *(_OWORD *)&v111.m256i_u64[2];
      *(_OWORD *)(result + 20) = v86;
      *(_QWORD *)result = v73;
      *(_QWORD *)(result + 8) = v74;
      *(_DWORD *)(result + 16) = v75;
      return result;
    }
    v88 = v111.m256i_i32[0];
    v94 = v110;
    v9 = v99;
    v10 = v66;
    a3 = v98;
    if ( v98 )
      goto LABEL_17;
LABEL_166:
    result = v96;
    *(_QWORD *)v96 = 0x8000000000000004LL;
    return result;
  }
  if ( !a3 )
    goto LABEL_166;
LABEL_17:
  v90 = *((_BYTE *)a4 + 48);
  LOBYTE(v97) = *((_BYTE *)a4 + 49);
  v87 = *((_BYTE *)a4 + 50);
  v89 = (v21 ^ 0x8000000000000000LL | v7 ^ 0x8000000000000001LL) == 0;
  v105 = *((unsigned __int8 *)a4 + 51);
  v22 = (__int64 *)(a2 + 16);
  v23 = 24 * a3;
  v24 = 0LL;
  v99 = v9;
  v104 = v10;
  while ( 1 )
  {
    v25 = *(v22 - 2);
    if ( v25 == 0x8000000000000000LL )
    {
      std::sys::os_str::bytes::Slice::to_owned(&v110, aDevStdout, 11LL);
      v26 = (__int64 (__fastcall **)())v111.m256i_i64[0];
      v95 = v110;
      LOBYTE(v98) = v110 == 0x8000000000000000LL;
      v114 = v111.m256i_i64[1];
      v101 = v111.m256i_i64[0];
      v116 = (const void **)(v111.m256i_i64[0] + 8);
      v115 = (size_t *)(v111.m256i_i64[0] + 16);
      if ( v110 == 0x8000000000000000LL )
      {
        v26 = *(__int64 (__fastcall ***)())(v111.m256i_i64[0] + 8);
        v27 = *(_QWORD *)(v111.m256i_i64[0] + 16);
      }
      else
      {
        v27 = v111.m256i_i64[1];
      }
      v28 = (_BYTE *)_rust_alloc(1LL, 1LL);
      if ( !v28 )
        alloc::raw_vec::handle_error(1LL, 1LL);
      *v28 = 45;
      *(_QWORD *)v107 = 1LL;
      *(_QWORD *)&v107[8] = v28;
      *(_QWORD *)&v107[16] = 1LL;
      if ( !(_BYTE)v97 )
        goto LABEL_24;
    }
    else
    {
      v26 = (__int64 (__fastcall **)())*(v22 - 1);
      v27 = *v22;
      *(_QWORD *)&v106 = v26;
      *((_QWORD *)&v106 + 1) = v27;
      *(_QWORD *)v92 = 0LL;
      *(_QWORD *)&v92[8] = 1LL;
      *(_QWORD *)&v92[16] = 0LL;
      v112 = 32LL;
      v113 = 3;
      dest = 0LL;
      v111.m256i_i64[0] = 0LL;
      v111.m256i_i64[2] = (__int64)v92;
      v111.m256i_i64[3] = (__int64)&off_291A38;
      if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(&v106, &dest) )
        core::result::unwrap_failed(aADisplayImplem, 55LL, fd, &unk_291AE0, &off_291A68);
      v101 = (__int64)(v22 - 2);
      v116 = (const void **)(v22 - 1);
      *(_OWORD *)v107 = *(_OWORD *)v92;
      *(_QWORD *)&v107[16] = *(_QWORD *)&v92[16];
      LOBYTE(v98) = 1;
      v115 = (size_t *)v22;
      v95 = 0x8000000000000000LL;
      if ( !(_BYTE)v97 )
      {
LABEL_24:
        std::sys::pal::unix::fs::stat(&dest);
        goto LABEL_29;
      }
    }
    std::sys::pal::unix::fs::lstat(&dest);
LABEL_29:
    v91 = v110;
    if ( (_DWORD)dest != 2 )
    {
LABEL_66:
      v43 = v99;
      v44 = v104;
      v45 = v94;
      v46 = v88;
      if ( v105 != 2 )
      {
        if ( v105 != 1 )
        {
          uu_touch::stat(&dest, v26, v27, (_BYTE)v97 == 0);
          if ( dest )
          {
            v47 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                    v110,
                    v26,
                    v27);
            goto LABEL_80;
          }
          v45 = v111.m256i_i64[1];
          v46 = v111.m256i_i32[4];
          v43 = v99;
          v44 = v104;
          if ( !(_BYTE)v97 )
            goto LABEL_77;
LABEL_74:
          if ( v25 != 0x8000000000000000LL )
          {
            *(_QWORD *)&v92[8] = v43;
            *(_DWORD *)&v92[16] = v44;
            *(_QWORD *)v92 = 1LL;
            v110 = v45;
            v111.m256i_i32[0] = v46;
            dest = 1LL;
            v48 = filetime::imp::linux::set_times(v26, v27, v92, &dest, 1LL);
LABEL_78:
            if ( !v48 )
            {
              v30 = 0LL;
LABEL_82:
              if ( *(_QWORD *)v107 )
                _rust_dealloc(*(_QWORD *)&v107[8], *(_QWORD *)v107, 1LL);
              v26 = &anon_a8009f0f96d850c1c46a2cf3287456a4_4_llvm_17503802422331354604;
              if ( !v30 )
              {
LABEL_85:
                LOBYTE(v98) = (v95 == 0) | v98;
                if ( !(_BYTE)v98 )
                  _rust_dealloc(v101, v95, 1LL);
                goto LABEL_18;
              }
              goto LABEL_45;
            }
            v47 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                    v48,
                    v26,
                    v27);
LABEL_80:
            v30 = v47;
            goto LABEL_82;
          }
LABEL_77:
          *(_QWORD *)&v92[8] = v43;
          *(_DWORD *)&v92[16] = v44;
          *(_QWORD *)v92 = 1LL;
          v110 = v45;
          v111.m256i_i32[0] = v46;
          dest = 1LL;
          v48 = filetime::imp::linux::set_times(v26, v27, v92, &dest, 0LL);
          goto LABEL_78;
        }
        uu_touch::stat(&dest, v26, v27, (_BYTE)v97 == 0);
        if ( dest )
        {
          v47 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                  v110,
                  v26,
                  v27);
          goto LABEL_80;
        }
        v43 = v110;
        v44 = v111.m256i_i32[0];
        v45 = v94;
        v46 = v88;
      }
      if ( !(_BYTE)v97 )
        goto LABEL_77;
      goto LABEL_74;
    }
    switch ( v110 & 3 )
    {
      case 0LL:
        v29 = *(_BYTE *)(v110 + 16);
        goto LABEL_40;
      case 1LL:
        v29 = *(_BYTE *)(v110 + 15);
        goto LABEL_40;
      case 2LL:
        if ( (v110 & 0xFFFFFFFF00000000LL) == 0x200000000LL )
          goto LABEL_33;
        goto LABEL_41;
      case 3LL:
        switch ( HIDWORD(v110) )
        {
          case 0:
            v29 = 0;
            break;
          case 1:
            v29 = 1;
            break;
          case 2:
            v29 = 2;
            break;
          case 3:
            v29 = 3;
            break;
          case 4:
            v29 = 4;
            break;
          case 5:
            v29 = 5;
            break;
          case 6:
            v29 = 6;
            break;
          case 7:
            v29 = 7;
            break;
          case 8:
            v29 = 8;
            break;
          case 9:
            v29 = 9;
            break;
          case 0xA:
            v29 = 10;
            break;
          case 0xB:
            v29 = 11;
            break;
          case 0xC:
            v29 = 12;
            break;
          case 0xD:
            v29 = 13;
            break;
          case 0xE:
            v29 = 14;
            break;
          case 0xF:
            v29 = 15;
            break;
          case 0x10:
            v29 = 16;
            break;
          case 0x11:
            v29 = 17;
            break;
          case 0x12:
            v29 = 18;
            break;
          case 0x13:
            v29 = 19;
            break;
          case 0x14:
            v29 = 20;
            break;
          case 0x15:
            v29 = 21;
            break;
          case 0x16:
            v29 = 22;
            break;
          case 0x17:
            v29 = 23;
            break;
          case 0x18:
            v29 = 24;
            break;
          case 0x19:
            v29 = 25;
            break;
          case 0x1A:
            v29 = 26;
            break;
          case 0x1B:
            v29 = 27;
            break;
          case 0x1C:
            v29 = 28;
            break;
          case 0x1D:
            v29 = 29;
            break;
          case 0x1E:
            v29 = 30;
            break;
          case 0x1F:
            v29 = 31;
            break;
          case 0x20:
            v29 = 32;
            break;
          case 0x21:
            v29 = 33;
            break;
          case 0x22:
            v29 = 34;
            break;
          case 0x23:
            v29 = 35;
            break;
          case 0x24:
            v29 = 36;
            break;
          case 0x25:
            v29 = 37;
            break;
          case 0x26:
            v29 = 38;
            break;
          case 0x27:
            v29 = 39;
            break;
          case 0x28:
            v29 = 40;
            break;
          default:
            v29 = 41;
            break;
        }
LABEL_40:
        if ( !v29 )
        {
LABEL_33:
          if ( v90 )
            goto LABEL_34;
          if ( (_BYTE)v97 )
          {
            *(_QWORD *)v92 = 0LL;
            *(_OWORD *)&v92[8] = *(_OWORD *)&v107[8];
            LOBYTE(v93) = 1;
            *(_QWORD *)&v106 = v92;
            *((_QWORD *)&v106 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
            dest = (__int64)&off_291C80;
            v110 = 2LL;
            v111.m256i_i64[0] = (__int64)&v106;
            *(_OWORD *)&v111.m256i_u64[1] = 1uLL;
            alloc::fmt::format::format_inner(v123, &dest);
            v100 = (__int64 (__fastcall **)())v123[0];
            v26 = (__int64 (__fastcall **)())v123[1];
            v33 = v123[2];
            v34 = _rust_alloc(32LL, 8LL);
            if ( !v34 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            v30 = v34;
            *(_QWORD *)v34 = v100;
            *(_QWORD *)(v34 + 8) = v26;
            *(_QWORD *)(v34 + 16) = v33;
            *(_DWORD *)(v34 + 24) = 1;
            if ( v87 )
            {
              v26 = &off_291CD8;
LABEL_35:
              v31 = v91;
LABEL_36:
              core::ptr::drop_in_place<std::io::error::Error>(v31);
              goto LABEL_42;
            }
            *(_QWORD *)fd = v34;
            v103 = &off_291CD8;
            _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
            if ( uucore::UTIL_NAME != 2 )
              once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
            v106 = xmmword_2D0AD0;
            *(_QWORD *)v92 = &v106;
            *(_QWORD *)&v92[8] = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v92[16] = fd;
            v93 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            dest = (__int64)&unk_291C50;
            v110 = 3LL;
            v111.m256i_i64[0] = (__int64)v92;
            *(_OWORD *)&v111.m256i_u64[1] = 2uLL;
            std::io::stdio::_eprint(&dest);
            v40 = *(_QWORD *)fd;
            v41 = v103;
            if ( *v103 )
              ((void (__fastcall *)(_QWORD))*v103)(*(_QWORD *)fd);
            v42 = v41[1];
            if ( v42 )
              _rust_dealloc(v40, v42, v41[2]);
LABEL_34:
            v30 = 0LL;
            goto LABEL_35;
          }
          dest = 0x1B600000000LL;
          BYTE5(v110) = 0;
          LODWORD(v110) = 256;
          *(_WORD *)((char *)&v110 + 3) = 257;
          std::fs::OpenOptions::_open(fd, &dest, v26, v27);
          if ( !fd[0] )
          {
            close(fd[1]);
            if ( !v89 )
            {
              core::ptr::drop_in_place<std::io::error::Error>(v91);
              goto LABEL_66;
            }
            goto LABEL_34;
          }
          v35 = v103;
          std::sys::os_str::bytes::Slice::to_string_lossy(&dest, v26, v27);
          v100 = v35;
          if ( !v111.m256i_i64[0]
            || (v36 = *(unsigned __int8 *)(v110 + v111.m256i_i64[0] - 1), (v36 & 0x80u) != 0)
            && ((v37 = *(_BYTE *)(v110 + v111.m256i_i64[0] - 2), v37 >= -64)
              ? (v49 = v37 & 0x1F)
              : ((v38 = *(_BYTE *)(v110 + v111.m256i_i64[0] - 3), v38 > -65)
               ? (v39 = v38 & 0xF)
               : (v39 = ((*(_BYTE *)(v110 + v111.m256i_i64[0] - 4) & 7) << 6) | v38 & 0x3F),
                 v49 = (v39 << 6) | v37 & 0x3F),
                v36 = (v49 << 6) | v36 & 0x3F,
                v36 == 1114112) )
          {
            if ( 2 * dest )
              _rust_dealloc(v110, dest, 1LL);
            v50 = v100;
            goto LABEL_139;
          }
          if ( 2 * dest )
            _rust_dealloc(v110, dest, 1LL);
          v51 = v36 == 47;
          v50 = v100;
          if ( v51 )
          {
            v52 = std::io::error::Error::new(39LL, aNoSuchFileOrDi, 25LL);
            v30 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                    v52,
                    v107);
            v53 = v50;
            v31 = v91;
            core::ptr::drop_in_place<std::io::error::Error>(v53);
          }
          else
          {
LABEL_139:
            v54 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                    v50,
                    v26,
                    v27);
            v30 = v54;
            v31 = v91;
            if ( !v87 )
            {
              v108 = (_QWORD *)v54;
              _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
              if ( uucore::UTIL_NAME != 2 )
                once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
              v106 = xmmword_2D0AD0;
              *(_QWORD *)v92 = &v106;
              *(_QWORD *)&v92[8] = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v92[16] = &v108;
              v93 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
              dest = (__int64)&unk_291C50;
              v110 = 3LL;
              v111.m256i_i64[0] = (__int64)v92;
              *(_OWORD *)&v111.m256i_u64[1] = 2uLL;
              std::io::stdio::_eprint(&dest);
              v55 = v108;
              v56 = *v108;
              if ( *v108 != 0x8000000000000000LL && v56 )
                _rust_dealloc(v108[1], v56, 1LL);
              core::ptr::drop_in_place<std::io::error::Error>(v55[3]);
              _rust_dealloc(v55, 32LL, 8LL);
              v30 = 0LL;
            }
          }
          v26 = &off_291BE0;
          goto LABEL_36;
        }
LABEL_41:
        v30 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                v110,
                v107);
        v26 = &off_291BE0;
LABEL_42:
        if ( *(_QWORD *)v107 )
          _rust_dealloc(*(_QWORD *)&v107[8], *(_QWORD *)v107, 1LL);
        if ( !v30 )
          goto LABEL_85;
        break;
    }
LABEL_45:
    if ( (_BYTE)v98 )
      break;
    v32 = v95;
    if ( v95 != 0x8000000000000004LL )
      goto LABEL_177;
LABEL_18:
    v22 += 3;
    ++v24;
    v23 -= 24LL;
    if ( !v23 )
      goto LABEL_166;
  }
  v77 = *v116;
  v78 = *v115;
  if ( !*v115 )
  {
    v82 = (char *)&dword_0 + 1;
    goto LABEL_176;
  }
  if ( (*v115 & 0x8000000000000000LL) != 0LL )
  {
    v80 = *v115;
    v79 = 0LL;
LABEL_187:
    alloc::raw_vec::handle_error(v79, v80);
  }
  v79 = 1LL;
  v80 = *v115;
  v81 = _rust_alloc(*v115, 1LL);
  if ( !v81 )
    goto LABEL_187;
  v82 = (char *)v81;
  v78 = v80;
LABEL_176:
  v101 = (__int64)v82;
  v83 = v77;
  v84 = v78;
  memcpy(v82, v83, v78);
  v114 = v84;
  v32 = v84;
LABEL_177:
  result = v96;
  *(_QWORD *)v96 = v32;
  *(_QWORD *)(result + 8) = v101;
  *(_QWORD *)(result + 16) = v114;
  *(_QWORD *)(result + 24) = v30;
  *(_QWORD *)(result + 32) = v26;
  *(_QWORD *)(result + 40) = v24;
  return result;
}
