__int64 __fastcall uu_touch::parse_date(__int64 a1, __int128 *a2, _BYTE *a3, size_t a4)
{
  __int64 v6; // rcx
  char v7; // al
  int v8; // eax
  __int64 v9; // r14
  int v10; // ebp
  __int64 v11; // rcx
  char v12; // al
  int v13; // eax
  const char *v14; // r13
  __int64 (__fastcall *v15)(); // rbp
  __int64 v16; // rcx
  char v17; // al
  const char *v18; // r13
  __int64 (__fastcall *v19)(); // rbp
  __int64 v20; // rcx
  char v21; // al
  const char *v22; // r13
  __int64 (__fastcall *v23)(); // rbp
  __int64 v24; // rcx
  char v25; // al
  int v26; // eax
  bool v27; // cl
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v34; // r15
  int v35; // r14d
  __int64 v36; // r12
  void *v37; // r13
  __int128 v38; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 v39; // [rsp+10h] [rbp-1E8h] BYREF
  __int64 v40; // [rsp+18h] [rbp-1E0h]
  const char *v41; // [rsp+20h] [rbp-1D8h] BYREF
  __int64 (__fastcall *v42)(); // [rsp+28h] [rbp-1D0h]
  __int128 *v43; // [rsp+30h] [rbp-1C8h]
  __int64 (__fastcall *v44)(); // [rsp+38h] [rbp-1C0h]
  __int64 v45; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v46; // [rsp+48h] [rbp-1B0h]
  signed __int64 v47; // [rsp+50h] [rbp-1A8h] BYREF
  int v48; // [rsp+58h] [rbp-1A0h]
  unsigned int v49; // [rsp+5Ch] [rbp-19Ch]
  int v50; // [rsp+60h] [rbp-198h] BYREF
  char **v51; // [rsp+68h] [rbp-190h] BYREF
  __int64 v52; // [rsp+70h] [rbp-188h]
  void *dest; // [rsp+78h] [rbp-180h]
  __int128 v54; // [rsp+80h] [rbp-178h]
  const char *v55; // [rsp+110h] [rbp-E8h]
  __int64 v56; // [rsp+118h] [rbp-E0h]
  const char *v57; // [rsp+120h] [rbp-D8h]
  __int64 v58; // [rsp+128h] [rbp-D0h]
  const char *v59; // [rsp+130h] [rbp-C8h]
  __int64 v60; // [rsp+138h] [rbp-C0h]
  const char *v61; // [rsp+140h] [rbp-B8h]
  __int64 v62; // [rsp+148h] [rbp-B0h]
  __int64 v63; // [rsp+150h] [rbp-A8h]
  __int64 v64; // [rsp+158h] [rbp-A0h]
  int v65; // [rsp+160h] [rbp-98h] BYREF
  __int64 v66; // [rsp+164h] [rbp-94h]
  int v67; // [rsp+16Ch] [rbp-8Ch] BYREF
  __int128 v68; // [rsp+170h] [rbp-88h]
  __int128 v69; // [rsp+180h] [rbp-78h]
  _BYTE v70[8]; // [rsp+190h] [rbp-68h] BYREF
  __int64 v71; // [rsp+198h] [rbp-60h]
  __int128 v72; // [rsp+1A0h] [rbp-58h] BYREF
  __int128 v73; // [rsp+1B0h] [rbp-48h] BYREF

  <chrono::format::parsed::Parsed as core::default::Default>::default(&v51);
  v41 = aABEHMSY;
  v42 = (__int64 (__fastcall *)())&dword_14;
  v43 = (_OWORD *)&byte_8;
  v44 = 0LL;
  chrono::format::parse::parse_internal(&v38, &v51, a3, a4, &v41);
  if ( (_QWORD)v38 )
  {
    v7 = 3 * (*((_QWORD *)&v38 + 1) == 0LL) + 5;
    if ( 3 * (*((_QWORD *)&v38 + 1) == 0LL) != 3 )
      goto LABEL_3;
  }
  else
  {
    v7 = BYTE8(v38);
    if ( BYTE8(v38) != 8 )
    {
LABEL_3:
      LOBYTE(v46) = v7;
      HIDWORD(v45) = 0;
      goto LABEL_7;
    }
  }
  LOBYTE(v6) = *((_QWORD *)&v38 + 1) == 0LL;
  chrono::format::parsed::Parsed::to_naive_datetime_with_offset((char *)&v45 + 4, &v51, 0LL, v6);
  v8 = HIDWORD(v45);
  if ( HIDWORD(v45) )
  {
    v9 = (unsigned int)v46;
    v10 = HIDWORD(v46);
LABEL_39:
    LODWORD(v51) = v8;
    v26 = chrono::naive::date::NaiveDate::num_days_from_ce(&v51);
    goto LABEL_40;
  }
LABEL_7:
  v55 = aYMDHMS;
  v56 = 17LL;
  v57 = aYMDHMSF;
  v58 = 20LL;
  v59 = aYMDHM;
  v60 = 14LL;
  v61 = aYMDHMZ;
  v62 = 17LL;
  v64 = 4LL;
  v63 = 1LL;
  if ( !aYMDHMS )
    goto LABEL_33;
  <chrono::format::parsed::Parsed as core::default::Default>::default(&v51);
  v41 = aYMDHMS;
  v42 = (__int64 (__fastcall *)())(&word_10 + 1);
  v43 = (_OWORD *)&byte_8;
  v44 = 0LL;
  chrono::format::parse::parse_internal(&v38, &v51, a3, a4, &v41);
  if ( (_QWORD)v38 )
  {
    v12 = 3 * (*((_QWORD *)&v38 + 1) == 0LL) + 5;
    if ( 3 * (*((_QWORD *)&v38 + 1) == 0LL) != 3 )
      goto LABEL_10;
  }
  else
  {
    v12 = BYTE8(v38);
    if ( BYTE8(v38) != 8 )
    {
LABEL_10:
      LOBYTE(v40) = v12;
      HIDWORD(v39) = 0;
      goto LABEL_13;
    }
  }
  LOBYTE(v11) = *((_QWORD *)&v38 + 1) == 0LL;
  chrono::format::parsed::Parsed::to_naive_datetime_with_offset((char *)&v39 + 4, &v51, 0LL, v11);
  v13 = HIDWORD(v39);
  if ( HIDWORD(v39) )
    goto LABEL_31;
LABEL_13:
  v63 = 2LL;
  v14 = v57;
  if ( !v57 )
    goto LABEL_33;
  v15 = (__int64 (__fastcall *)())v58;
  <chrono::format::parsed::Parsed as core::default::Default>::default(&v51);
  v41 = v14;
  v42 = v15;
  v43 = (_OWORD *)&byte_8;
  v44 = 0LL;
  chrono::format::parse::parse_internal(&v38, &v51, a3, a4, &v41);
  if ( (_QWORD)v38 )
  {
    v17 = 3 * (*((_QWORD *)&v38 + 1) == 0LL) + 5;
    if ( 3 * (*((_QWORD *)&v38 + 1) == 0LL) != 3 )
      goto LABEL_16;
  }
  else
  {
    v17 = BYTE8(v38);
    if ( BYTE8(v38) != 8 )
    {
LABEL_16:
      LOBYTE(v40) = v17;
      HIDWORD(v39) = 0;
      goto LABEL_19;
    }
  }
  LOBYTE(v16) = *((_QWORD *)&v38 + 1) == 0LL;
  chrono::format::parsed::Parsed::to_naive_datetime_with_offset((char *)&v39 + 4, &v51, 0LL, v16);
  v13 = HIDWORD(v39);
  if ( HIDWORD(v39) )
    goto LABEL_31;
LABEL_19:
  v63 = 3LL;
  v18 = v59;
  if ( !v59 )
    goto LABEL_33;
  v19 = (__int64 (__fastcall *)())v60;
  <chrono::format::parsed::Parsed as core::default::Default>::default(&v51);
  v41 = v18;
  v42 = v19;
  v43 = (_OWORD *)&byte_8;
  v44 = 0LL;
  chrono::format::parse::parse_internal(&v38, &v51, a3, a4, &v41);
  if ( (_QWORD)v38 )
  {
    v21 = 3 * (*((_QWORD *)&v38 + 1) == 0LL) + 5;
    if ( 3 * (*((_QWORD *)&v38 + 1) == 0LL) != 3 )
      goto LABEL_22;
  }
  else
  {
    v21 = BYTE8(v38);
    if ( BYTE8(v38) != 8 )
    {
LABEL_22:
      LOBYTE(v40) = v21;
      HIDWORD(v39) = 0;
      goto LABEL_25;
    }
  }
  LOBYTE(v20) = *((_QWORD *)&v38 + 1) == 0LL;
  chrono::format::parsed::Parsed::to_naive_datetime_with_offset((char *)&v39 + 4, &v51, 0LL, v20);
  v13 = HIDWORD(v39);
  if ( HIDWORD(v39) )
  {
LABEL_31:
    v9 = (unsigned int)v40;
    v10 = HIDWORD(v40);
    LODWORD(v51) = v13;
    v26 = chrono::naive::date::NaiveDate::num_days_from_ce(&v51);
LABEL_40:
    *(_QWORD *)(a1 + 8) = 86400LL * v26 + v9 - 0xE77934880LL;
    *(_DWORD *)(a1 + 16) = v10;
LABEL_41:
    *(_QWORD *)a1 = 0x8000000000000004LL;
    return a1;
  }
LABEL_25:
  v63 = 4LL;
  v22 = v61;
  if ( v61 )
  {
    v23 = (__int64 (__fastcall *)())v62;
    <chrono::format::parsed::Parsed as core::default::Default>::default(&v51);
    v41 = v22;
    v42 = v23;
    v43 = (_OWORD *)&byte_8;
    v44 = 0LL;
    chrono::format::parse::parse_internal(&v38, &v51, a3, a4, &v41);
    if ( (_QWORD)v38 )
      v25 = 3 * (*((_QWORD *)&v38 + 1) == 0LL) + 5;
    else
      v25 = BYTE8(v38);
    if ( v25 == 8 )
    {
      LOBYTE(v24) = *((_QWORD *)&v38 + 1) == 0LL;
      chrono::format::parsed::Parsed::to_naive_datetime_with_offset((char *)&v39 + 4, &v51, 0LL, v24);
      v13 = HIDWORD(v39);
      if ( HIDWORD(v39) )
        goto LABEL_31;
    }
    else
    {
      LOBYTE(v40) = v25;
      HIDWORD(v39) = 0;
    }
  }
LABEL_33:
  <chrono::format::parsed::Parsed as core::default::Default>::default(&v51);
  v41 = aYMD;
  v42 = (__int64 (__fastcall *)())&byte_8;
  v43 = (_OWORD *)&byte_8;
  v44 = 0LL;
  chrono::format::parse::parse_internal(&v38, &v51, a3, a4, &v41);
  v27 = BYTE8(v38) == 8;
  if ( (_QWORD)v38 )
    v27 = *((_QWORD *)&v38 + 1) == 0LL;
  if ( v27 )
  {
    v28 = chrono::format::parsed::Parsed::to_naive_date(&v51);
    if ( (v28 & 1) == 0 )
    {
      v65 = HIDWORD(v28);
      v66 = 0LL;
      LOBYTE(v38) = 1;
      std::thread::local::LocalKey<T>::try_with(
        &v51,
        &anon_3f273f3c4772dc55a54bdec9062ccb39_6_llvm_3469199380322658755,
        &v65,
        &v38);
      core::result::Result<T,E>::expect(
        &v41,
        &v51,
        anon_6b18f3ca19b16514212961b62c614770_0_llvm_3964607150695535679,
        70LL,
        &anon_6b18f3ca19b16514212961b62c614770_2_llvm_3964607150695535679);
      chrono::offset::LocalResult<T>::and_then(&v67, &v41, &v65);
      if ( v67 )
      {
        if ( v67 == 1 )
        {
          v73 = v68;
          v38 = v69;
          v41 = (const char *)&v73;
          v42 = <chrono::datetime::DateTime<Tz> as core::fmt::Debug>::fmt;
          v43 = &v38;
          v44 = <chrono::datetime::DateTime<Tz> as core::fmt::Debug>::fmt;
          v51 = &off_2C9B18;
          v52 = 2LL;
          dest = &v41;
          v54 = 2uLL;
        }
        else
        {
          v51 = &off_2C9B38;
          v52 = 1LL;
          dest = &byte_8;
          v54 = 0LL;
        }
        core::panicking::panic_fmt(
          &v51,
          &off_2C9CC8,
          v29,
          v30,
          v31,
          v32,
          v38,
          *((_QWORD *)&v38 + 1),
          v39,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
      }
      v8 = v68;
      v9 = DWORD1(v68);
      v10 = DWORD2(v68);
      goto LABEL_39;
    }
  }
  if ( a3 && a4 && *a3 == 64 )
  {
    if ( a4 >= 2 && (char)a3[1] <= -65 )
      core::str::slice_error_fail(a3, a4, 1LL, a4, &off_2C9CE0);
    core::num::<impl core::str::traits::FromStr for i64>::from_str(v70, a3 + 1, a4 - 1);
    if ( (v70[0] & 1) == 0 )
    {
      *(_QWORD *)(a1 + 8) = v71;
      *(_DWORD *)(a1 + 16) = 0;
      goto LABEL_41;
    }
  }
  v72 = *a2;
  parse_datetime::parse_datetime_at_date(&v47, &v72, a3, a4);
  if ( v47 == 0x8000000000000002LL )
  {
    v34 = v49;
    v35 = v50;
    LODWORD(v51) = v48;
    *(_QWORD *)(a1 + 8) = 86400LL * (int)chrono::naive::date::NaiveDate::num_days_from_ce(&v51) + v34 - 0xE77934880LL;
    *(_DWORD *)(a1 + 16) = v35;
    *(_QWORD *)a1 = 0x8000000000000004LL;
    if ( v47 >= (__int64)0x8000000000000003LL )
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(&v51, &v47);
      if ( v52 )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v50, v51, v52, dest);
    }
  }
  else
  {
    if ( v47 >= (__int64)0x8000000000000003LL )
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(&v51, &v47);
      if ( v52 )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v50, v51, v52, dest);
    }
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v51, a4, 0LL);
    v36 = v52;
    if ( v51 )
      alloc::raw_vec::handle_error(v52, dest);
    v37 = dest;
    core::intrinsics::copy_nonoverlapping::precondition_check(a3, dest, 1LL, 1LL, a4);
    memcpy(v37, a3, a4);
    *(_QWORD *)a1 = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 8) = v36;
    *(_QWORD *)(a1 + 16) = v37;
    *(_QWORD *)(a1 + 24) = a4;
  }
  return a1;
}
