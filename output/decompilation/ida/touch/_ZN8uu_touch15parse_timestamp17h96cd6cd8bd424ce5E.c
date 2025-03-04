_QWORD *__fastcall uu_touch::parse_timestamp(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  const char *v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebp
  unsigned int v8; // r15d
  int v9; // edx
  char **v11; // rdx
  const char *v12; // rdi
  __int128 v13; // [rsp+0h] [rbp-148h] BYREF
  __int128 *v14; // [rsp+10h] [rbp-138h]
  __int64 v15; // [rsp+18h] [rbp-130h]
  __int64 v16; // [rsp+20h] [rbp-128h]
  _BYTE v17[24]; // [rsp+30h] [rbp-118h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+48h] [rbp-100h]
  _BYTE v19[24]; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v20; // [rsp+80h] [rbp-C8h] BYREF
  _BYTE *v21; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v22; // [rsp+98h] [rbp-B0h]
  char v23; // [rsp+A8h] [rbp-A0h]
  __int128 v24; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v25; // [rsp+C0h] [rbp-88h]
  __int128 v26; // [rsp+C8h] [rbp-80h] BYREF
  int v27; // [rsp+DCh] [rbp-6Ch] BYREF
  __int64 v28; // [rsp+E0h] [rbp-68h]
  __int64 v29; // [rsp+E8h] [rbp-60h] BYREF
  int v30; // [rsp+F0h] [rbp-58h]
  __int128 v31; // [rsp+F8h] [rbp-50h] BYREF
  __int128 *v32; // [rsp+108h] [rbp-40h]
  __int128 v33; // [rsp+110h] [rbp-38h] BYREF
  __int128 *v34; // [rsp+120h] [rbp-28h]

  *(_QWORD *)&v26 = a2;
  *((_QWORD *)&v26 + 1) = a3;
  switch ( <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(a2, a3 + a2) )
  {
    case 8LL:
      chrono::offset::local::Local::now(&v13);
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(v17, &v13, HIDWORD(v13));
      LODWORD(v21) = *(int *)v17 >> 13;
      *(_QWORD *)v17 = &v21;
      *(_QWORD *)&v17[8] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
      *(_QWORD *)&v17[16] = &v26;
      v18 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v13 = "\x01";
      *((_QWORD *)&v13 + 1) = 2LL;
      v16 = 0LL;
      v14 = (__int128 *)v17;
      v15 = 2LL;
      goto LABEL_7;
    case 10LL:
      *(_QWORD *)v17 = &v26;
      *(_QWORD *)&v17[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v13 = &off_310F18;
      *((_QWORD *)&v13 + 1) = 1LL;
      v16 = 0LL;
      v14 = (__int128 *)v17;
      v15 = 1LL;
LABEL_7:
      core::option::Option<T>::map_or_else(&v24, &v13);
      goto LABEL_9;
    case 11LL:
      chrono::offset::local::Local::now(&v13);
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(v17, &v13, HIDWORD(v13));
      LODWORD(v21) = *(int *)v17 >> 13;
      *(_QWORD *)v17 = &v21;
      *(_QWORD *)&v17[8] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
      *(_QWORD *)&v17[16] = &v26;
      v18 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v13 = "\x01";
      *((_QWORD *)&v13 + 1) = 2LL;
      v16 = 0LL;
      v14 = (__int128 *)v17;
      v15 = 2LL;
      goto LABEL_11;
    case 12LL:
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v24, a2, a3);
LABEL_9:
      v4 = 10LL;
      v5 = aYMDHM_0;
      goto LABEL_13;
    case 13LL:
      *(_QWORD *)v17 = &v26;
      *(_QWORD *)&v17[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v13 = &off_310F18;
      *((_QWORD *)&v13 + 1) = 1LL;
      v16 = 0LL;
      v14 = (__int128 *)v17;
      v15 = 1LL;
LABEL_11:
      core::option::Option<T>::map_or_else(&v24, &v13);
      goto LABEL_12;
    case 15LL:
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v24, a2, a3);
LABEL_12:
      v4 = 13LL;
      v5 = aYMDHMS_0;
LABEL_13:
      *(_QWORD *)&v19[16] = v25;
      *(_OWORD *)v19 = v24;
      chrono::naive::datetime::NaiveDateTime::parse_from_str(&v13, *((_QWORD *)&v24 + 1), v25, v5, v4);
      if ( !(_DWORD)v13 )
      {
        v6 = uu_touch::parse_timestamp::{{closure}}(*(_QWORD *)&v19[8], *(_QWORD *)&v19[16]);
        goto LABEL_25;
      }
      v27 = v13;
      v28 = *(_QWORD *)((char *)&v13 + 4);
      <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_local_datetime(&v13, 1LL, &v27);
      chrono::offset::LocalResult<T>::and_then(v17, &v13, &v27);
      if ( *(_DWORD *)v17 )
      {
        v21 = 0LL;
        v22 = *(_OWORD *)&v19[8];
        v23 = 1;
        *(_QWORD *)&v24 = &v21;
        *((_QWORD *)&v24 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v13 = &off_310F38;
        *((_QWORD *)&v13 + 1) = 1LL;
        v16 = 0LL;
        v14 = &v24;
        v15 = 1LL;
        core::option::Option<T>::map_or_else(&v31, &v13);
        LODWORD(v15) = 1;
        v13 = v31;
        v14 = v32;
        v6 = alloc::boxed::Box<T>::new(&v13);
LABEL_25:
        a1[1] = v6;
        a1[2] = &off_310E78;
        *a1 = 1LL;
        goto LABEL_26;
      }
      v20 = *(_OWORD *)&v17[4];
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v13, &v20, *(unsigned int *)&v17[16]);
      if ( __ROR4__(-286331153 * DWORD1(v13) - 286331157, 2) <= 0x4444443u
        && (unsigned __int8)core::slice::<impl [T]>::ends_with(*(_QWORD *)&v19[8], *(_QWORD *)&v19[16], a60, 3LL) )
      {
        <chrono::datetime::DateTime<Tz> as core::ops::arith::AddAssign<chrono::time_delta::TimeDelta>>::add_assign(&v20);
      }
      chrono::datetime::DateTime<Tz>::checked_add_signed(&v13, &v20);
      if ( !(_DWORD)v13 )
      {
        v11 = &off_310F48;
        v12 = aDatetimeTimede_0;
        goto LABEL_30;
      }
      *(_OWORD *)v17 = v13;
      chrono::datetime::DateTime<Tz>::checked_sub_signed(&v13, v17);
      if ( !(_DWORD)v13 )
      {
        v11 = &off_310F60;
        v12 = aDatetimeTimede_1;
LABEL_30:
        core::option::expect_failed(v12, 33LL, v11);
      }
      v30 = DWORD2(v13);
      v29 = v13;
      v7 = HIDWORD(v13);
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v13, &v20, HIDWORD(v20));
      v8 = DWORD1(v13);
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v13, &v29, v7);
      if ( v8 / 0xE10 != DWORD1(v13) / 0xE10 )
      {
        *(_QWORD *)v17 = 0LL;
        *(_OWORD *)&v17[8] = v26;
        LOBYTE(v18) = 1;
        v21 = v17;
        *(_QWORD *)&v22 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v13 = &off_310F28;
        *((_QWORD *)&v13 + 1) = 1LL;
        v16 = 0LL;
        v14 = (__int128 *)&v21;
        v15 = 1LL;
        core::option::Option<T>::map_or_else(&v33, &v13);
        LODWORD(v15) = 1;
        v13 = v33;
        v14 = v34;
        v6 = alloc::boxed::Box<T>::new(&v13);
        goto LABEL_25;
      }
      a1[1] = uu_touch::datetime_to_filetime((unsigned int *)&v20);
      *((_DWORD *)a1 + 4) = v9;
      *a1 = 0LL;
LABEL_26:
      core::ptr::drop_in_place<alloc::string::String>(v19);
      return a1;
    default:
      v21 = 0LL;
      *(_QWORD *)&v22 = a2;
      *((_QWORD *)&v22 + 1) = a3;
      v23 = 1;
      *(_QWORD *)v19 = &v21;
      *(_QWORD *)&v19[8] = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v13 = &off_310F28;
      *((_QWORD *)&v13 + 1) = 1LL;
      v16 = 0LL;
      v14 = (__int128 *)v19;
      v15 = 1LL;
      core::option::Option<T>::map_or_else(v17, &v13);
      LODWORD(v18) = 1;
      a1[1] = alloc::boxed::Box<T>::new(v17);
      a1[2] = &off_310E78;
      *a1 = 1LL;
      return a1;
  }
}
