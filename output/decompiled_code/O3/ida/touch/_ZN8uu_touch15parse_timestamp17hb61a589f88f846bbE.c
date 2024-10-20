__int64 __fastcall uu_touch::parse_timestamp(__int64 a1, void *a2, unsigned __int64 a3)
{
  signed __int64 v3; // r14
  __int64 v4; // rax
  char *v5; // r15
  __int64 v6; // r8
  const char *v7; // rcx
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  _OWORD *v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // rax
  unsigned __int32 v14; // r13d
  __int64 v15; // rax
  __int128 v16; // xmm0
  unsigned int v17; // r13d
  __int64 v18; // rbp
  unsigned __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // rbp
  int v25; // ecx
  int v26; // eax
  int v27; // r12d
  __int64 v28; // r13
  __int64 v29; // rbp
  int v30; // eax
  int v31; // ebp
  __int64 v32; // rcx
  __int64 v33; // r12
  unsigned int v34; // eax
  unsigned int v35; // r13d
  unsigned int v36; // ebp
  unsigned int v37; // r12d
  int v38; // ecx
  int v39; // eax
  unsigned int v40; // eax
  char **v41; // rdx
  const char *v42; // rdi
  unsigned __int32 v43; // [rsp+4h] [rbp-1A4h]
  int v44; // [rsp+4h] [rbp-1A4h]
  __int128 v45; // [rsp+8h] [rbp-1A0h] BYREF
  __m256i **v46; // [rsp+18h] [rbp-190h]
  __int64 v47; // [rsp+20h] [rbp-188h]
  __int64 v48; // [rsp+28h] [rbp-180h]
  __m256i v49; // [rsp+38h] [rbp-170h] BYREF
  _BYTE v50[12]; // [rsp+58h] [rbp-150h] BYREF
  unsigned __int32 v51; // [rsp+64h] [rbp-144h]
  __m256i *v52; // [rsp+68h] [rbp-140h] BYREF
  __int64 (__fastcall *v53)(); // [rsp+70h] [rbp-138h]
  unsigned __int64 v54; // [rsp+78h] [rbp-130h]
  char v55; // [rsp+80h] [rbp-128h]
  int v56; // [rsp+8Ch] [rbp-11Ch]
  __int128 v57; // [rsp+90h] [rbp-118h] BYREF
  unsigned int v58; // [rsp+A4h] [rbp-104h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-100h]
  __m256i **v60; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 (__fastcall *v61)(); // [rsp+B8h] [rbp-F0h]
  __int64 v62; // [rsp+C0h] [rbp-E8h]
  unsigned __int64 v63; // [rsp+C8h] [rbp-E0h]
  unsigned int v64; // [rsp+D0h] [rbp-D8h] BYREF
  __int64 v65; // [rsp+D4h] [rbp-D4h]
  unsigned int v66; // [rsp+DCh] [rbp-CCh] BYREF
  __int64 v67; // [rsp+E0h] [rbp-C8h]
  _QWORD v68[3]; // [rsp+E8h] [rbp-C0h] BYREF
  _QWORD v69[3]; // [rsp+100h] [rbp-A8h] BYREF
  _QWORD v70[3]; // [rsp+118h] [rbp-90h] BYREF
  _QWORD v71[3]; // [rsp+130h] [rbp-78h] BYREF
  _QWORD v72[3]; // [rsp+148h] [rbp-60h] BYREF
  _QWORD v73[9]; // [rsp+160h] [rbp-48h] BYREF

  v3 = a3;
  *(_QWORD *)&v57 = a2;
  *((_QWORD *)&v57 + 1) = a3;
  if ( a3 >= 0x20 )
    v4 = core::str::count::do_count_chars(a2, a3);
  else
    v4 = core::str::count::char_count_general_case(a2, a3);
  switch ( v4 )
  {
    case 8LL:
      chrono::offset::local::Local::now(&v45);
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v49, &v45, HIDWORD(v45));
      LODWORD(v52) = v49.m256i_i32[0] >> 13;
      v49.m256i_i64[0] = (__int64)&v52;
      v49.m256i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
      v49.m256i_i64[2] = (__int64)&v57;
      v49.m256i_i64[3] = (__int64)<&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v45 = "\x01";
      *((_QWORD *)&v45 + 1) = 2LL;
      v48 = 0LL;
      v46 = (__m256i **)&v49;
      v47 = 2LL;
      alloc::fmt::format::format_inner(v71, &v45);
      v3 = v71[0];
      v5 = (char *)v71[1];
      v6 = 10LL;
      v7 = aYMDHM_0;
      v8 = v71[2];
      goto LABEL_24;
    case 10LL:
      v49.m256i_i64[0] = (__int64)&v57;
      v49.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v45 = &off_291D78;
      *((_QWORD *)&v45 + 1) = 1LL;
      v48 = 0LL;
      v46 = (__m256i **)&v49;
      v47 = 1LL;
      alloc::fmt::format::format_inner(v69, &v45);
      v3 = v69[0];
      v5 = (char *)v69[1];
      v6 = 10LL;
      v7 = aYMDHM_0;
      v8 = v69[2];
      goto LABEL_24;
    case 11LL:
      chrono::offset::local::Local::now(&v45);
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v49, &v45, HIDWORD(v45));
      LODWORD(v52) = v49.m256i_i32[0] >> 13;
      v49.m256i_i64[0] = (__int64)&v52;
      v49.m256i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
      v49.m256i_i64[2] = (__int64)&v57;
      v49.m256i_i64[3] = (__int64)<&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v45 = "\x01";
      *((_QWORD *)&v45 + 1) = 2LL;
      v48 = 0LL;
      v46 = (__m256i **)&v49;
      v47 = 2LL;
      alloc::fmt::format::format_inner(v70, &v45);
      v3 = v70[0];
      v5 = (char *)v70[1];
      v6 = 13LL;
      v7 = aYMDHMS_0;
      v8 = v70[2];
      goto LABEL_24;
    case 12LL:
      if ( !v3 )
      {
        v5 = (_BYTE *)(&dword_0 + 1);
        goto LABEL_22;
      }
      if ( v3 < 0 )
        goto LABEL_76;
      v9 = 1LL;
      v13 = _rust_alloc(v3, 1LL);
      if ( v13 )
      {
        v5 = (char *)v13;
LABEL_22:
        memcpy(v5, a2, v3);
        v6 = 10LL;
        v7 = aYMDHM_0;
        goto LABEL_23;
      }
      goto LABEL_77;
    case 13LL:
      v49.m256i_i64[0] = (__int64)&v57;
      v49.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v45 = &off_291D78;
      *((_QWORD *)&v45 + 1) = 1LL;
      v48 = 0LL;
      v46 = (__m256i **)&v49;
      v47 = 1LL;
      alloc::fmt::format::format_inner(v68, &v45);
      v3 = v68[0];
      v5 = (char *)v68[1];
      v6 = 13LL;
      v7 = aYMDHMS_0;
      v8 = v68[2];
      goto LABEL_24;
    case 15LL:
      if ( !v3 )
      {
        v5 = (_BYTE *)(&dword_0 + 1);
        goto LABEL_20;
      }
      if ( v3 < 0 )
      {
LABEL_76:
        v9 = 0LL;
LABEL_77:
        alloc::raw_vec::handle_error(v9, v3);
      }
      v9 = 1LL;
      v10 = _rust_alloc(v3, 1LL);
      if ( !v10 )
        goto LABEL_77;
      v5 = (char *)v10;
LABEL_20:
      memcpy(v5, a2, v3);
      v6 = 13LL;
      v7 = aYMDHMS_0;
LABEL_23:
      v8 = v3;
LABEL_24:
      chrono::naive::datetime::NaiveDateTime::parse_from_str(&v64, v5, v8, v7, v6);
      if ( v64 )
      {
        v58 = v64;
        v59 = v65;
        chrono::offset::local::inner::offset(&v49, v64, v65, 1LL);
        if ( v49.m256i_i32[0] )
        {
          if ( v49.m256i_i32[0] == 1 )
          {
            v14 = v49.m256i_u32[2];
            chrono::naive::datetime::NaiveDateTime::checked_sub_offset(&v45, &v58, v49.m256i_u32[1]);
            chrono::naive::datetime::NaiveDateTime::checked_sub_offset(&v45, &v58, v14);
          }
          goto LABEL_37;
        }
        v43 = v49.m256i_u32[1];
        chrono::naive::datetime::NaiveDateTime::checked_sub_offset(&v45, &v58, v49.m256i_u32[1]);
        v17 = v45;
        if ( !(_DWORD)v45 )
        {
LABEL_37:
          v49.m256i_i64[0] = 0LL;
          v49.m256i_i64[1] = (__int64)v5;
          v49.m256i_i64[2] = v8;
          v49.m256i_i8[24] = 1;
          v52 = &v49;
          v53 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&v45 = &off_291DC8;
          *((_QWORD *)&v45 + 1) = 1LL;
          v48 = 0LL;
          v46 = &v52;
          v47 = 1LL;
          alloc::fmt::format::format_inner(v72, &v45);
          v21 = v72[0];
          v22 = v72[1];
          v23 = v72[2];
          v15 = _rust_alloc(32LL, 8LL);
          if ( !v15 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_38:
          *(_QWORD *)v15 = v21;
          *(_QWORD *)(v15 + 8) = v22;
          *(_QWORD *)(v15 + 16) = v23;
          *(_DWORD *)(v15 + 24) = 1;
          goto LABEL_39;
        }
        v18 = *(_QWORD *)((char *)&v45 + 4);
        *(_DWORD *)v50 = v45;
        *(_QWORD *)&v50[4] = *(_QWORD *)((char *)&v45 + 4);
        v51 = v43;
        chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v45, v50, v43);
        v19 = HIDWORD(v18);
        if ( v8 >= 3
          && DWORD1(v45) % 0x3C == 59
          && !(*(_WORD *)&v5[v8 - 3] ^ 0x362E | (unsigned __int8)v5[v8 - 1] ^ 0x30) )
        {
          if ( SHIDWORD(v18) <= 999999999 )
          {
            v25 = HIDWORD(v18) + 1000000000;
            if ( v18 >= 0 )
              v25 = HIDWORD(v18);
            v44 = v25;
            v20 = (v18 >= 0) + (unsigned __int64)(unsigned int)v18;
          }
          else if ( (unsigned int)(HIDWORD(v18) - 1000000000) < 0x3B9ACA00 )
          {
            v44 = HIDWORD(v18) - 1000000000;
            v20 = (unsigned int)v18 + 1LL;
          }
          else
          {
            v20 = (unsigned int)v18 + 2LL;
            v44 = HIDWORD(v18) - 2000000000;
          }
          v18 = (0xC22E4506728ALL * (unsigned __int128)(unsigned __int64)v20) >> 64;
          v26 = chrono::naive::date::NaiveDate::add_days(v17, (unsigned int)v18);
          if ( !v26 )
          {
            v41 = &off_291A20;
            goto LABEL_75;
          }
          LODWORD(v45) = v26;
          DWORD1(v45) = v20 - 86400 * v18;
          DWORD2(v45) = v44;
          v43 = <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_utc_datetime(&v49, &v45);
          v19 = DWORD2(v45);
          *(_DWORD *)&v50[8] = DWORD2(v45);
          *(_QWORD *)v50 = v45;
          v51 = v43;
          LODWORD(v18) = DWORD1(v45);
        }
        v63 = v19;
        v62 = (unsigned int)v18;
        if ( (int)v19 <= 999999999 )
        {
          if ( (v19 & 0x80000000) != 0LL )
          {
            v27 = v19 + 1000000000;
            v28 = (unsigned int)v18 + 3599LL;
          }
          else
          {
            v28 = (unsigned int)v18 + 3600LL;
            v27 = v19;
          }
        }
        else
        {
          v27 = v19 - 1000000000;
          if ( (unsigned int)(v19 - 1000000000) <= 0x3B9AC9FF )
          {
            v28 = (unsigned int)v18 + 3600LL;
          }
          else
          {
            v27 = v19 - 2000000000;
            v28 = (unsigned int)v18 + 3601LL;
          }
        }
        v29 = (0xC22E4506728ALL * (unsigned __int128)(unsigned __int64)v28) >> 64;
        v56 = *(_DWORD *)v50;
        v30 = chrono::naive::date::NaiveDate::add_days(*(unsigned int *)v50, (unsigned int)v29);
        if ( v30 )
        {
          LODWORD(v45) = v30;
          DWORD1(v45) = v28 - 86400 * v29;
          DWORD2(v45) = v27;
          <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_utc_datetime(&v49, &v45);
          if ( (_DWORD)v45 )
          {
            v31 = DWORD2(v45);
            if ( SDWORD2(v45) <= 999999999 )
            {
              if ( SDWORD2(v45) < 0 )
              {
                v31 = DWORD2(v45) + 1000000000;
                v32 = DWORD1(v45) - 3601LL;
              }
              else
              {
                v32 = DWORD1(v45) - 3600LL;
              }
            }
            else if ( (unsigned int)(DWORD2(v45) - 1000000000) <= 0x3B9AC9FF )
            {
              v32 = DWORD1(v45) - 3599LL;
              v31 = DWORD2(v45) - 1000000000;
            }
            else
            {
              v31 = DWORD2(v45) - 2000000000;
              v32 = DWORD1(v45) - 3598LL;
            }
            v33 = v32 % 86400 + (((v32 % 86400) >> 63) & 0x15180);
            v34 = chrono::naive::date::NaiveDate::add_days(
                    (unsigned int)v45,
                    (unsigned int)(((int)v32 - (int)v33) / 86400));
            v35 = v34;
            if ( v34 )
            {
              *(_QWORD *)&v45 = __PAIR64__(v33, v34);
              DWORD2(v45) = v31;
              v36 = <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_utc_datetime(&v49, &v45);
              v66 = v35;
              v67 = *(_QWORD *)((char *)&v45 + 4);
              chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v45, v50, v43);
              v37 = DWORD1(v45);
              chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v45, &v66, v36);
              if ( v37 / 0xE10 == DWORD1(v45) / 0xE10 )
              {
                v38 = (v56 >> 13) - 1;
                v39 = 0;
                if ( v56 >> 13 <= 0 )
                {
                  v40 = (1 - (v56 >> 13)) / 0x190u + 1;
                  v38 += 400 * v40;
                  v39 = -146097 * v40;
                }
                *(_QWORD *)(a1 + 8) = 86400LL
                                    * (int)(((v38 / 100) >> 2)
                                          + ((1461 * v38) >> 2)
                                          + v39
                                          + (((unsigned int)v56 >> 4) & 0x1FF)
                                          - v38 / 100)
                                    + v62
                                    - 0xE77934880LL;
                *(_DWORD *)(a1 + 16) = v63;
                *(_QWORD *)a1 = 0LL;
                if ( v3 )
                  goto LABEL_40;
                return a1;
              }
              v49.m256i_i64[0] = 0LL;
              *(_OWORD *)&v49.m256i_u64[1] = v57;
              v49.m256i_i8[24] = 1;
              v52 = &v49;
              v53 = <os_display::Quoted as core::fmt::Display>::fmt;
              *(_QWORD *)&v45 = &off_291DB8;
              *((_QWORD *)&v45 + 1) = 1LL;
              v48 = 0LL;
              v46 = &v52;
              v47 = 1LL;
              alloc::fmt::format::format_inner(v73, &v45);
              v21 = v73[0];
              v22 = v73[1];
              v23 = v73[2];
              v15 = _rust_alloc(32LL, 8LL);
              if ( !v15 )
                alloc::alloc::handle_alloc_error(8LL, 32LL);
              goto LABEL_38;
            }
            v41 = &off_291DA0;
            v42 = aDatetimeTimede;
LABEL_80:
            core::option::expect_failed(v42, 33LL, v41);
          }
        }
        v41 = &off_291D88;
LABEL_75:
        v42 = (const char *)&unk_6AD50;
        goto LABEL_80;
      }
      v52 = 0LL;
      v53 = (__int64 (__fastcall *)())v5;
      v54 = v8;
      v55 = 1;
      v60 = &v52;
      v61 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v45 = &off_291DC8;
      *((_QWORD *)&v45 + 1) = 1LL;
      v48 = 0LL;
      v46 = (__m256i **)&v60;
      v47 = 1LL;
      alloc::fmt::format::format_inner(&v49, &v45);
      v49.m256i_i32[6] = 1;
      v15 = _rust_alloc(32LL, 8LL);
      if ( !v15 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v16 = *(_OWORD *)v49.m256i_i8;
      *(_OWORD *)(v15 + 16) = *(_OWORD *)&v49.m256i_u64[2];
      *(_OWORD *)v15 = v16;
LABEL_39:
      *(_QWORD *)(a1 + 8) = v15;
      *(_QWORD *)(a1 + 16) = &off_291CD8;
      *(_QWORD *)a1 = 1LL;
      if ( v3 )
LABEL_40:
        _rust_dealloc(v5, v3, 1LL);
      return a1;
    default:
      v52 = 0LL;
      v53 = (__int64 (__fastcall *)())a2;
      v54 = v3;
      v55 = 1;
      v60 = &v52;
      v61 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v45 = &off_291DB8;
      *((_QWORD *)&v45 + 1) = 1LL;
      v48 = 0LL;
      v46 = (__m256i **)&v60;
      v47 = 1LL;
      alloc::fmt::format::format_inner(&v49, &v45);
      v49.m256i_i32[6] = 1;
      v11 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v11 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v12 = *(_OWORD *)v49.m256i_i8;
      v11[1] = *(_OWORD *)&v49.m256i_u64[2];
      *v11 = v12;
      *(_QWORD *)(a1 + 8) = v11;
      *(_QWORD *)(a1 + 16) = &off_291CD8;
      *(_QWORD *)a1 = 1LL;
      return a1;
  }
}
