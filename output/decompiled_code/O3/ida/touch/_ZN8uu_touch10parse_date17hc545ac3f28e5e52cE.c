void *__fastcall uu_touch::parse_date(__int64 a1, __int64 a2, _BYTE *a3, signed __int64 a4)
{
  int v7; // eax
  int v8; // edi
  int v9; // esi
  unsigned int v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  int v14; // esi
  unsigned int v15; // esi
  void *result; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // edi
  int v20; // esi
  unsigned int v21; // esi
  int v22; // ecx
  int v23; // edi
  int v24; // esi
  unsigned int v25; // esi
  __int64 v26; // r13
  __int64 v27; // rax
  void *v28; // r12
  int v29; // ebp
  unsigned int v30; // ebx
  int v31; // r12d
  __int128 v32; // [rsp+0h] [rbp-B8h] BYREF
  int **v33; // [rsp+10h] [rbp-A8h]
  __int128 v34; // [rsp+18h] [rbp-A0h]
  int v35; // [rsp+34h] [rbp-84h] BYREF
  __int64 v36; // [rsp+38h] [rbp-80h]
  int *v37; // [rsp+40h] [rbp-78h] BYREF
  __int64 (__fastcall *v38)(); // [rsp+48h] [rbp-70h]
  int *v39; // [rsp+50h] [rbp-68h]
  __int64 (__fastcall *v40)(); // [rsp+58h] [rbp-60h]
  __int64 v41; // [rsp+60h] [rbp-58h]
  int v42; // [rsp+68h] [rbp-50h] BYREF
  __int64 v43; // [rsp+6Ch] [rbp-4Ch]
  int v44; // [rsp+74h] [rbp-44h]
  int v45; // [rsp+78h] [rbp-40h] BYREF
  __int64 v46; // [rsp+7Ch] [rbp-3Ch]
  unsigned int v47; // [rsp+84h] [rbp-34h]

  chrono::naive::datetime::NaiveDateTime::parse_from_str(&v32, a3, a4, aABEHMSY, 20LL);
  if ( (_DWORD)v32 )
  {
    v7 = DWORD2(v32);
    v8 = ((int)v32 >> 13) - 1;
    v9 = 0;
    if ( (int)v32 >> 13 <= 0 )
    {
      v10 = (1 - ((int)v32 >> 13)) / 0x190u + 1;
      v8 += 400 * v10;
      v9 = -146097 * v10;
    }
    *(_QWORD *)(a1 + 8) = 86400LL
                        * (int)(((v8 / 100) >> 2)
                              + ((1461 * v8) >> 2)
                              + v9
                              + (((unsigned int)v32 >> 4) & 0x1FF)
                              - v8 / 100)
                        + DWORD1(v32)
                        - 0xE77934880LL;
    *(_DWORD *)(a1 + 16) = v7;
    goto LABEL_12;
  }
  chrono::naive::datetime::NaiveDateTime::parse_from_str(&v32, a3, a4, aYMDHMS, 17LL);
  v11 = v32;
  if ( (_DWORD)v32
    || (chrono::naive::datetime::NaiveDateTime::parse_from_str(&v32, a3, a4, aYMDHMSF, 20LL), (v11 = v32) != 0)
    || (chrono::naive::datetime::NaiveDateTime::parse_from_str(&v32, a3, a4, aYMDHM, 14LL), (v11 = v32) != 0)
    || (chrono::naive::datetime::NaiveDateTime::parse_from_str(&v32, a3, a4, aYMDHMZ, 17LL), (v11 = v32) != 0) )
  {
    v12 = DWORD2(v32);
    v13 = (v11 >> 13) - 1;
    v14 = 0;
    if ( v11 >> 13 <= 0 )
    {
      v15 = (1 - (v11 >> 13)) / 0x190u + 1;
      v13 += 400 * v15;
      v14 = -146097 * v15;
    }
    *(_QWORD *)(a1 + 8) = 86400LL
                        * (int)(((v13 / 100) >> 2)
                              + ((1461 * v13) >> 2)
                              + v14
                              + (((unsigned int)v11 >> 4) & 0x1FF)
                              - v13 / 100)
                        + DWORD1(v32)
                        - 0xE77934880LL;
    *(_DWORD *)(a1 + 16) = v12;
    goto LABEL_12;
  }
  v17 = chrono::naive::date::NaiveDate::parse_from_str(a3, a4, aYMD, 8LL);
  if ( (v17 & 1) == 0 )
  {
    v35 = HIDWORD(v17);
    v36 = 0LL;
    chrono::offset::local::inner::offset(&v37, HIDWORD(v17), 0LL, 1LL);
    if ( (_DWORD)v37 )
    {
      if ( (_DWORD)v37 == 1 )
      {
        v29 = HIDWORD(v37);
        v30 = (unsigned int)v38;
        chrono::naive::datetime::NaiveDateTime::checked_sub_offset(&v32, &v35, HIDWORD(v37));
        v31 = v32;
        v41 = *(_QWORD *)((char *)&v32 + 4);
        chrono::naive::datetime::NaiveDateTime::checked_sub_offset(&v32, &v35, v30);
        if ( (_DWORD)v32 )
        {
          if ( v31 )
          {
            v42 = v31;
            v43 = v41;
            v44 = v29;
            v45 = v32;
            v46 = *(_QWORD *)((char *)&v32 + 4);
            v47 = v30;
            v37 = &v42;
            v38 = <chrono::datetime::DateTime<Tz> as core::fmt::Debug>::fmt;
            v39 = &v45;
            v40 = <chrono::datetime::DateTime<Tz> as core::fmt::Debug>::fmt;
            *(_QWORD *)&v32 = &anon_baab62fa9d6ba0389a8386834aaa7826_12_llvm_3656620608646900075;
            *((_QWORD *)&v32 + 1) = 2LL;
            v33 = &v37;
            v34 = 2uLL;
LABEL_42:
            core::panicking::panic_fmt(&v32, &off_291D48);
          }
        }
      }
    }
    else
    {
      chrono::naive::datetime::NaiveDateTime::checked_sub_offset(&v32, &v35, HIDWORD(v37));
      if ( (_DWORD)v32 )
      {
        v18 = HIDWORD(*(_QWORD *)((char *)&v32 + 4));
        v19 = ((int)v32 >> 13) - 1;
        v20 = 0;
        if ( (int)v32 >> 13 <= 0 )
        {
          v21 = (1 - ((int)v32 >> 13)) / 0x190u + 1;
          v19 += 400 * v21;
          v20 = -146097 * v21;
        }
        *(_QWORD *)(a1 + 8) = 86400LL
                            * (int)(((v19 / 100) >> 2)
                                  + ((1461 * v19) >> 2)
                                  + v20
                                  + (((unsigned int)v32 >> 4) & 0x1FF)
                                  - v19 / 100)
                            + DWORD1(v32)
                            - 0xE77934880LL;
        *(_DWORD *)(a1 + 16) = v18;
        goto LABEL_12;
      }
    }
    *(_QWORD *)&v32 = &anon_baab62fa9d6ba0389a8386834aaa7826_14_llvm_3656620608646900075;
    *((_QWORD *)&v32 + 1) = 1LL;
    v33 = (int **)&byte_8;
    v34 = 0LL;
    goto LABEL_42;
  }
  if ( a4 && *a3 == 64 )
  {
    if ( a4 != 1 && (char)a3[1] <= -65 )
      core::str::slice_error_fail(a3, a4, 1LL, a4, &off_291D60);
    core::num::<impl core::str::traits::FromStr for i64>::from_str(&v32, a3 + 1, a4 - 1);
    if ( !(_BYTE)v32 )
    {
      *(_QWORD *)(a1 + 8) = *((_QWORD *)&v32 + 1);
      *(_DWORD *)(a1 + 16) = 0;
LABEL_12:
      result = (void *)0x8000000000000004LL;
      *(_QWORD *)a1 = 0x8000000000000004LL;
      return result;
    }
  }
  parse_datetime::parse_datetime_at_date(&v32, a2, a3, a4);
  if ( (_QWORD)v32 != 0x8000000000000002LL )
  {
    if ( (__int64)v32 >= (__int64)0x8000000000000003LL && (_QWORD)v32 )
      _rust_dealloc(*((_QWORD *)&v32 + 1), v32, 1LL);
    if ( a4 )
    {
      if ( a4 < 0 )
      {
        v26 = 0LL;
      }
      else
      {
        v26 = 1LL;
        v27 = _rust_alloc(a4, 1LL);
        if ( v27 )
        {
          v28 = (void *)v27;
LABEL_36:
          result = memcpy(v28, a3, a4);
          *(_QWORD *)a1 = 0x8000000000000000LL;
          *(_QWORD *)(a1 + 8) = a4;
          *(_QWORD *)(a1 + 16) = v28;
          *(_QWORD *)(a1 + 24) = a4;
          return result;
        }
      }
      alloc::raw_vec::handle_error(v26, a4);
    }
    v28 = &dword_0 + 1;
    goto LABEL_36;
  }
  v22 = (int)v33;
  v23 = (SDWORD2(v32) >> 13) - 1;
  v24 = 0;
  if ( SDWORD2(v32) >> 13 <= 0 )
  {
    v25 = (1 - (SDWORD2(v32) >> 13)) / 0x190u + 1;
    v23 += 400 * v25;
    v24 = -146097 * v25;
  }
  result = (void *)(86400LL
                  * (((v23 / 100) >> 2) + ((1461 * v23) >> 2) + v24 + ((DWORD2(v32) >> 4) & 0x1FF) - v23 / 100)
                  + HIDWORD(v32)
                  - 0xE77934880LL);
  *(_QWORD *)(a1 + 8) = result;
  *(_DWORD *)(a1 + 16) = v22;
  *(_QWORD *)a1 = 0x8000000000000004LL;
  return result;
}
