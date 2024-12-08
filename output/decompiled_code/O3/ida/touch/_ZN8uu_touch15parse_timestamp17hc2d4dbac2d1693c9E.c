_QWORD *__fastcall uu_touch::parse_timestamp(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  const char *v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebp
  unsigned int v8; // r15d
  int v9; // eax
  int v10; // edx
  char **v12; // rdx
  const char *v13; // rdi
  __int128 v14; // [rsp+0h] [rbp-148h] BYREF
  __int128 *v15; // [rsp+10h] [rbp-138h]
  __int64 v16; // [rsp+18h] [rbp-130h]
  __int64 v17; // [rsp+20h] [rbp-128h]
  _BYTE v18[24]; // [rsp+30h] [rbp-118h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+48h] [rbp-100h]
  __int128 v20; // [rsp+60h] [rbp-E8h] BYREF
  _BYTE v21[24]; // [rsp+70h] [rbp-D8h] BYREF
  _BYTE *v22; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+98h] [rbp-B0h]
  char v24; // [rsp+A8h] [rbp-A0h]
  __int128 v25; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v26; // [rsp+C0h] [rbp-88h]
  __int128 v27; // [rsp+C8h] [rbp-80h] BYREF
  int v28; // [rsp+DCh] [rbp-6Ch] BYREF
  __int64 v29; // [rsp+E0h] [rbp-68h]
  __int64 v30; // [rsp+E8h] [rbp-60h] BYREF
  int v31; // [rsp+F0h] [rbp-58h]
  __int128 v32; // [rsp+F8h] [rbp-50h] BYREF
  __int128 *v33; // [rsp+108h] [rbp-40h]
  __int128 v34; // [rsp+110h] [rbp-38h] BYREF
  __int128 *v35; // [rsp+120h] [rbp-28h]

  *(_QWORD *)&v27 = a2;
  *((_QWORD *)&v27 + 1) = a3;
  switch ( <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(a2, a3 + a2) )
  {
    case 8LL:
      chrono::offset::local::Local::now(&v14);
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(v18, &v14, HIDWORD(v14));
      LODWORD(v22) = *(int *)v18 >> 13;
      *(_QWORD *)v18 = &v22;
      *(_QWORD *)&v18[8] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
      *(_QWORD *)&v18[16] = &v27;
      v19 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v14 = "\x01";
      *((_QWORD *)&v14 + 1) = 2LL;
      v17 = 0LL;
      v15 = (__int128 *)v18;
      v16 = 2LL;
      goto LABEL_7;
    case 10LL:
      *(_QWORD *)v18 = &v27;
      *(_QWORD *)&v18[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v14 = &off_3111C0;
      *((_QWORD *)&v14 + 1) = 1LL;
      v17 = 0LL;
      v15 = (__int128 *)v18;
      v16 = 1LL;
LABEL_7:
      core::option::Option<T>::map_or_else(&v25, &v14);
      goto LABEL_9;
    case 11LL:
      chrono::offset::local::Local::now(&v14);
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(v18, &v14, HIDWORD(v14));
      LODWORD(v22) = *(int *)v18 >> 13;
      *(_QWORD *)v18 = &v22;
      *(_QWORD *)&v18[8] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
      *(_QWORD *)&v18[16] = &v27;
      v19 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v14 = "\x01";
      *((_QWORD *)&v14 + 1) = 2LL;
      v17 = 0LL;
      v15 = (__int128 *)v18;
      v16 = 2LL;
      goto LABEL_11;
    case 12LL:
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v25, a2, a3);
LABEL_9:
      v4 = 10LL;
      v5 = aYMDHM_0;
      goto LABEL_13;
    case 13LL:
      *(_QWORD *)v18 = &v27;
      *(_QWORD *)&v18[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v14 = &off_3111C0;
      *((_QWORD *)&v14 + 1) = 1LL;
      v17 = 0LL;
      v15 = (__int128 *)v18;
      v16 = 1LL;
LABEL_11:
      core::option::Option<T>::map_or_else(&v25, &v14);
      goto LABEL_12;
    case 15LL:
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v25, a2, a3);
LABEL_12:
      v4 = 13LL;
      v5 = aYMDHMS_0;
LABEL_13:
      *(_QWORD *)&v21[16] = v26;
      *(_OWORD *)v21 = v25;
      chrono::naive::datetime::NaiveDateTime::parse_from_str(&v14, *((_QWORD *)&v25 + 1), v26, v5, v4);
      if ( !(_DWORD)v14 )
      {
        v6 = uu_touch::parse_timestamp::{{closure}}(*(_QWORD *)&v21[8], *(_QWORD *)&v21[16]);
        goto LABEL_25;
      }
      v28 = v14;
      v29 = *(_QWORD *)((char *)&v14 + 4);
      <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_local_datetime(&v14, 1LL, &v28);
      chrono::offset::LocalResult<T>::and_then(v18, &v14, &v28);
      if ( *(_DWORD *)v18 )
      {
        v22 = 0LL;
        v23 = *(_OWORD *)&v21[8];
        v24 = 1;
        *(_QWORD *)&v25 = &v22;
        *((_QWORD *)&v25 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v14 = &off_311210;
        *((_QWORD *)&v14 + 1) = 1LL;
        v17 = 0LL;
        v15 = &v25;
        v16 = 1LL;
        core::option::Option<T>::map_or_else(&v32, &v14);
        LODWORD(v16) = 1;
        v14 = v32;
        v15 = v33;
        v6 = alloc::boxed::Box<T>::new(&v14);
LABEL_25:
        a1[1] = v6;
        a1[2] = &off_311120;
        *a1 = 1LL;
        goto LABEL_26;
      }
      v20 = *(_OWORD *)&v18[4];
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v14, &v20, *(unsigned int *)&v18[16]);
      if ( __ROR4__(-286331153 * DWORD1(v14) - 286331157, 2) <= 0x4444443u
        && (unsigned __int8)core::slice::<impl [T]>::ends_with(*(_QWORD *)&v21[8], *(_QWORD *)&v21[16], a60, 3LL) )
      {
        <chrono::datetime::DateTime<Tz> as core::ops::arith::AddAssign<chrono::time_delta::TimeDelta>>::add_assign(&v20);
      }
      chrono::datetime::DateTime<Tz>::checked_add_signed(&v14, &v20);
      if ( !(_DWORD)v14 )
      {
        v12 = &off_3111D0;
        v13 = aDatetimeTimede_0;
        goto LABEL_30;
      }
      *(_OWORD *)v18 = v14;
      chrono::datetime::DateTime<Tz>::checked_sub_signed(&v14, v18);
      if ( !(_DWORD)v14 )
      {
        v12 = &off_3111E8;
        v13 = aDatetimeTimede_1;
LABEL_30:
        core::option::expect_failed(v13, 33LL, v12);
      }
      v31 = DWORD2(v14);
      v30 = v14;
      v7 = HIDWORD(v14);
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v14, &v20, HIDWORD(v20));
      v8 = DWORD1(v14);
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v14, &v30, v7);
      if ( v8 / 0xE10 != DWORD1(v14) / 0xE10 )
      {
        *(_QWORD *)v18 = 0LL;
        *(_OWORD *)&v18[8] = v27;
        LOBYTE(v19) = 1;
        v22 = v18;
        *(_QWORD *)&v23 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v14 = &off_311200;
        *((_QWORD *)&v14 + 1) = 1LL;
        v17 = 0LL;
        v15 = (__int128 *)&v22;
        v16 = 1LL;
        core::option::Option<T>::map_or_else(&v34, &v14);
        LODWORD(v16) = 1;
        v14 = v34;
        v15 = v35;
        v6 = alloc::boxed::Box<T>::new(&v14);
        goto LABEL_25;
      }
      v9 = chrono::naive::date::NaiveDate::num_days_from_ce((unsigned int)v20);
      v10 = DWORD2(v20);
      a1[1] = 86400LL * v9 + DWORD1(v20) - 0xE77934880LL;
      *((_DWORD *)a1 + 4) = v10;
      *a1 = 0LL;
LABEL_26:
      core::ptr::drop_in_place<alloc::string::String>(v21);
      return a1;
    default:
      v22 = 0LL;
      *(_QWORD *)&v23 = a2;
      *((_QWORD *)&v23 + 1) = a3;
      v24 = 1;
      *(_QWORD *)v21 = &v22;
      *(_QWORD *)&v21[8] = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v14 = &off_311200;
      *((_QWORD *)&v14 + 1) = 1LL;
      v17 = 0LL;
      v15 = (__int128 *)v21;
      v16 = 1LL;
      core::option::Option<T>::map_or_else(v18, &v14);
      LODWORD(v19) = 1;
      a1[1] = alloc::boxed::Box<T>::new(v18);
      a1[2] = &off_311120;
      *a1 = 1LL;
      return a1;
  }
}
