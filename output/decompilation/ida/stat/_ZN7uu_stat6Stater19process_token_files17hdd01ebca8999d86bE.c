__int64 __fastcall uu_stat::Stater::process_token_files(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 a7,
        char a8)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  int v23; // edx
  double v24; // xmm0_8
  _BYTE v25[24]; // [rsp+0h] [rbp-188h] BYREF
  _BYTE v26[24]; // [rsp+20h] [rbp-168h] BYREF
  __int64 v27; // [rsp+38h] [rbp-150h]
  __int64 v28; // [rsp+40h] [rbp-148h]
  __int128 v29; // [rsp+58h] [rbp-130h] BYREF
  __int64 v30; // [rsp+68h] [rbp-120h]
  __int128 v31; // [rsp+70h] [rbp-118h] BYREF
  __int128 *v32; // [rsp+80h] [rbp-108h]
  __int64 (__fastcall *v33)(); // [rsp+88h] [rbp-100h]
  __int64 v34; // [rsp+90h] [rbp-F8h] BYREF
  int v35; // [rsp+98h] [rbp-F0h]
  __int128 v36; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-D8h]
  __int128 v38; // [rsp+B8h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+C8h] [rbp-C0h]
  unsigned __int64 v40; // [rsp+D0h] [rbp-B8h] BYREF
  _QWORD v41[22]; // [rsp+D8h] [rbp-B0h] BYREF

  v8 = *(_QWORD *)a2;
  v9 = 2LL;
  if ( (unsigned __int64)(*(_QWORD *)a2 - 3LL) < 2 )
    v9 = *(_QWORD *)a2 - 3LL;
  if ( !v9 )
  {
    LODWORD(v29) = *(_DWORD *)(a2 + 8);
    *(_QWORD *)&v31 = &v29;
    *((_QWORD *)&v31 + 1) = <char as core::fmt::Display>::fmt;
    *(_QWORD *)v26 = &unk_1AB40;
    *(_QWORD *)&v26[8] = 1LL;
    v28 = 0LL;
    *(_QWORD *)&v26[16] = &v31;
    v27 = 1LL;
    std::io::stdio::_print(v26);
    return 0LL;
  }
  if ( v9 == 1 )
  {
    uu_stat::write_raw_byte(*(_DWORD *)(a2 + 8));
    return 0LL;
  }
  v10 = *(unsigned int *)(a2 + 28);
  v11 = *(unsigned int *)(a2 + 32);
  v12 = *(_QWORD *)(a2 + 8);
  v13 = *(_QWORD *)(a2 + 16);
  switch ( *(_DWORD *)(a2 + 24) )
  {
    case 'A':
      uucore::features::fs::display_permissions(v25, a3, 1LL);
      goto LABEL_58;
    case 'B':
      *(_QWORD *)&v25[8] = 512LL;
      goto LABEL_56;
    case 'C':
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v25, aUnsupportedFor, 37LL);
      goto LABEL_58;
    case 'D':
      v19 = *(_QWORD *)(a3 + 32);
      goto LABEL_36;
    case 'F':
      uucore::features::fsext::pretty_filetype(v25, *(unsigned int *)(a3 + 56), *(_QWORD *)(a3 + 80));
      goto LABEL_58;
    case 'G':
      <uucore::features::entries::Group as uucore::features::entries::Locate<u32>>::locate(
        v26,
        *(unsigned int *)(a3 + 64));
      if ( *(_QWORD *)v26 == 0x8000000000000000LL )
      {
        uu_stat::Stater::process_token_files::{{closure}}(&v36, *(_QWORD *)&v26[8]);
      }
      else
      {
        v36 = *(_OWORD *)v26;
        v37 = *(_QWORD *)&v26[16];
      }
      *(_QWORD *)&v25[16] = v37;
      *(_OWORD *)v25 = v36;
      goto LABEL_58;
    case 'H':
      v16 = *(_QWORD *)(a3 + 72) >> 8;
      goto LABEL_55;
    case 'L':
      v16 = *(unsigned __int8 *)(a3 + 72);
      goto LABEL_55;
    case 'N':
      uu_stat::get_quoted_file_name((__int64)v26, a4, a5, a6, a7, a8);
      if ( *(_QWORD *)v26 == 0x8000000000000000LL )
        return 1LL;
      *(_DWORD *)&v25[20] = *(_DWORD *)&v26[20];
      *(_QWORD *)&v25[12] = *(_QWORD *)&v26[12];
      *(_QWORD *)v25 = *(_QWORD *)v26;
      *(_DWORD *)&v25[8] = *(_DWORD *)&v26[8];
      goto LABEL_58;
    case 'R':
      v22 = *(_QWORD *)(a3 + 72);
      v40 = v22 >> 8;
      *(_QWORD *)&v29 = (unsigned __int8)v22;
      *(_QWORD *)&v31 = &v40;
      *((_QWORD *)&v31 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v32 = &v29;
      v33 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)v26 = &unk_119F98;
      *(_QWORD *)&v26[8] = 2LL;
      v28 = 0LL;
      *(_QWORD *)&v26[16] = &v31;
      v27 = 2LL;
      core::option::Option<T>::map_or_else(v25, v26);
      goto LABEL_58;
    case 'T':
      v19 = *(unsigned __int8 *)(a3 + 72);
      goto LABEL_36;
    case 'U':
      <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(
        v41,
        *(unsigned int *)(a3 + 60));
      if ( v41[0] == 0x8000000000000000LL )
      {
        v20 = v41[1];
LABEL_61:
        uu_stat::Stater::process_token_files::{{closure}}(&v38, v20);
        goto LABEL_75;
      }
      uucore::features::entries::uid2usr::{{closure}}(v26, v41);
      v20 = *(_QWORD *)&v26[8];
      if ( *(_QWORD *)v26 == 0x8000000000000000LL )
        goto LABEL_61;
      v38 = *(_OWORD *)v26;
      v39 = *(_QWORD *)&v26[16];
LABEL_75:
      *(_QWORD *)&v25[16] = v39;
      *(_OWORD *)v25 = v38;
LABEL_58:
      uu_stat::print_it((__int64)v25, v10 | (v11 << 32), v13, v8, v12);
      core::ptr::drop_in_place<uu_stat::OutputType>(v25);
      return 0LL;
    case 'W':
      <std::fs::Metadata as uucore::features::fsext::BirthTime>::birth(v26, a3);
      if ( v26[0] )
        v16 = *(_QWORD *)&v26[8];
      else
        v16 = 0LL;
      goto LABEL_55;
    case 'X':
      v17 = *(_QWORD *)(a3 + 104);
      goto LABEL_50;
    case 'Y':
      chrono::datetime::DateTime<chrono::offset::utc::Utc>::from_timestamp(
        v26,
        *(_QWORD *)(a3 + 120),
        *(unsigned int *)(a3 + 128));
      if ( *(_DWORD *)v26 )
      {
        v35 = *(_DWORD *)&v26[8];
        v34 = *(_QWORD *)v26;
      }
      else
      {
        <chrono::datetime::DateTime<chrono::offset::utc::Utc> as core::default::Default>::default(&v34);
      }
      <chrono::datetime::DateTime<chrono::offset::local::Local> as core::convert::From<chrono::datetime::DateTime<chrono::offset::utc::Utc>>>::from(
        v26,
        &v34);
      if ( (chrono::datetime::DateTime<Tz>::timestamp_nanos_opt(v26) & 1) != 0 )
      {
        v24 = 1000000000.0;
      }
      else
      {
        v23 = 1000000
            * (*(_DWORD *)&v26[4]
             + 86400 * (chrono::naive::date::NaiveDate::num_days_from_ce(*(unsigned int *)v26) - 719163))
            + *(_DWORD *)&v26[8] / 0x3E8u;
        v24 = 1000000.0;
      }
      *(double *)&v25[8] = (double)v23 / v24;
      v21 = 0x8000000000000004LL;
      goto LABEL_57;
    case 'Z':
      v17 = *(_QWORD *)(a3 + 136);
      goto LABEL_50;
    case 'a':
      *(_DWORD *)&v25[8] = *(_DWORD *)(a3 + 56) & 0xFFF;
      v21 = 0x8000000000000003LL;
      goto LABEL_57;
    case 'b':
      v16 = *(_QWORD *)(a3 + 96);
      goto LABEL_55;
    case 'd':
      v16 = *(_QWORD *)(a3 + 32);
      goto LABEL_55;
    case 'f':
      v19 = *(unsigned int *)(a3 + 56);
      goto LABEL_36;
    case 'g':
      v16 = *(unsigned int *)(a3 + 64);
      goto LABEL_55;
    case 'h':
      v16 = *(_QWORD *)(a3 + 48);
      goto LABEL_55;
    case 'i':
      v16 = *(_QWORD *)(a3 + 40);
      goto LABEL_55;
    case 'm':
      uu_stat::Stater::find_mount_point(v26, a1, a6);
      if ( *(_QWORD *)v26 == 0x8000000000000000LL )
        core::option::unwrap_failed(&off_119FB8);
      *(_QWORD *)&v25[16] = *(_QWORD *)&v26[16];
      *(_OWORD *)v25 = *(_OWORD *)v26;
      goto LABEL_58;
    case 'n':
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v25, a4, a5);
      goto LABEL_58;
    case 'o':
      v16 = *(_QWORD *)(a3 + 88);
      goto LABEL_55;
    case 'r':
      v16 = *(_QWORD *)(a3 + 72);
      goto LABEL_55;
    case 's':
      v17 = *(_QWORD *)(a3 + 80);
LABEL_50:
      *(_QWORD *)&v25[8] = v17;
      v21 = 0x8000000000000000LL;
      goto LABEL_57;
    case 't':
      v19 = *(_QWORD *)(a3 + 72) >> 8;
LABEL_36:
      *(_QWORD *)&v25[8] = v19;
      v21 = 0x8000000000000002LL;
      goto LABEL_57;
    case 'u':
      v16 = *(unsigned int *)(a3 + 60);
LABEL_55:
      *(_QWORD *)&v25[8] = v16;
LABEL_56:
      v21 = 0x8000000000000001LL;
      goto LABEL_57;
    case 'w':
      <std::fs::Metadata as uucore::features::fsext::BirthTime>::birth(v26, a3);
      if ( (v26[0] & 1) != 0 )
        uu_stat::pretty_time(&v29, *(_QWORD *)&v26[8], *(unsigned int *)&v26[16]);
      else
        *(_QWORD *)&v29 = 0x8000000000000000LL;
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v26, asc_1D6CD, 1LL);
      v32 = *(__int128 **)&v26[16];
      v31 = *(_OWORD *)v26;
      if ( (_QWORD)v29 == 0x8000000000000000LL )
      {
        *(_QWORD *)&v26[16] = v32;
        *(_OWORD *)v26 = v31;
      }
      else
      {
        *(_QWORD *)&v26[16] = v30;
        *(_OWORD *)v26 = v29;
        core::ptr::drop_in_place<alloc::string::String>(&v31);
      }
      *(_OWORD *)v25 = *(_OWORD *)v26;
      *(_QWORD *)&v25[16] = *(_QWORD *)&v26[16];
      goto LABEL_58;
    case 'x':
      v14 = *(_QWORD *)(a3 + 104);
      v15 = *(_QWORD *)(a3 + 112);
      goto LABEL_27;
    case 'y':
      v14 = *(_QWORD *)(a3 + 120);
      v15 = *(_QWORD *)(a3 + 128);
      goto LABEL_27;
    case 'z':
      v14 = *(_QWORD *)(a3 + 136);
      v15 = *(_QWORD *)(a3 + 144);
LABEL_27:
      uu_stat::pretty_time(v25, v14, v15);
      goto LABEL_58;
    default:
      v21 = 0x8000000000000005LL;
LABEL_57:
      *(_QWORD *)v25 = v21;
      goto LABEL_58;
  }
}