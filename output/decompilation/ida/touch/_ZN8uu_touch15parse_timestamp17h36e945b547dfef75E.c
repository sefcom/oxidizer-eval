_QWORD *__fastcall uu_touch::parse_timestamp(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r8
  const char *v7; // rcx
  __int64 *v8; // r15
  __int64 *v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // ebp
  unsigned int v12; // r15d
  int v13; // edx
  char **v15; // rdx
  const char *v16; // rdi
  _BYTE v17[24]; // [rsp+0h] [rbp-148h] BYREF
  __int64 v18; // [rsp+18h] [rbp-130h]
  __int64 v19; // [rsp+20h] [rbp-128h]
  _BYTE v20[24]; // [rsp+30h] [rbp-118h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+48h] [rbp-100h]
  __int64 *v22; // [rsp+50h] [rbp-F8h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+58h] [rbp-F0h]
  __int128 v24; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v25; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+78h] [rbp-D0h]
  __int64 v27; // [rsp+80h] [rbp-C8h]
  char v28; // [rsp+88h] [rbp-C0h]
  int v29; // [rsp+94h] [rbp-B4h] BYREF
  __int64 v30; // [rsp+98h] [rbp-B0h]
  __int128 v31; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-98h] BYREF
  int v33; // [rsp+B8h] [rbp-90h]
  _QWORD v34[3]; // [rsp+C0h] [rbp-88h] BYREF
  _QWORD v35[3]; // [rsp+D8h] [rbp-70h] BYREF
  __int128 v36; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v37; // [rsp+100h] [rbp-48h]
  __int128 v38; // [rsp+108h] [rbp-40h] BYREF
  __int64 v39; // [rsp+118h] [rbp-30h]

  *(_QWORD *)&v31 = a2;
  *((_QWORD *)&v31 + 1) = a3;
  switch ( <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(a2, a3 + a2) )
  {
    case 8LL:
      chrono::offset::local::Local::now(v17);
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(v20, v17, *(unsigned int *)&v17[12]);
      LODWORD(v25) = *(int *)v20 >> 13;
      *(_QWORD *)v20 = &v25;
      *(_QWORD *)&v20[8] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
      *(_QWORD *)&v20[16] = &v31;
      v21 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v17 = "\x01";
      *(_QWORD *)&v17[8] = 2LL;
      v19 = 0LL;
      *(_QWORD *)&v17[16] = v20;
      v18 = 2LL;
      core::option::Option<T>::map_or_else(v35, v17);
      v4 = v35[0];
      v5 = v35[1];
      v6 = 10LL;
      v7 = aYMDHM_0;
      v8 = (__int64 *)v35[2];
      goto LABEL_14;
    case 10LL:
      uu_touch::prepend_century(v17, a2, a3);
      v5 = *(_QWORD *)&v17[8];
      v4 = *(_QWORD *)v17;
      v8 = *(__int64 **)&v17[16];
      if ( __OFSUB__(-*(_QWORD *)v17, 1LL) )
        goto LABEL_11;
      goto LABEL_9;
    case 11LL:
      chrono::offset::local::Local::now(v17);
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(v20, v17, *(unsigned int *)&v17[12]);
      LODWORD(v25) = *(int *)v20 >> 13;
      *(_QWORD *)v20 = &v25;
      *(_QWORD *)&v20[8] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
      *(_QWORD *)&v20[16] = &v31;
      v21 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v17 = "\x01";
      *(_QWORD *)&v17[8] = 2LL;
      v19 = 0LL;
      *(_QWORD *)&v17[16] = v20;
      v18 = 2LL;
      core::option::Option<T>::map_or_else(v34, v17);
      v4 = v34[0];
      v5 = v34[1];
      v6 = 13LL;
      v7 = aYMDHMS_0;
      v8 = (__int64 *)v34[2];
      goto LABEL_14;
    case 12LL:
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v17, a2, a3);
      v5 = *(_QWORD *)&v17[8];
      v4 = *(_QWORD *)v17;
      v8 = *(__int64 **)&v17[16];
LABEL_9:
      v6 = 10LL;
      v7 = aYMDHM_0;
      goto LABEL_14;
    case 13LL:
      uu_touch::prepend_century(v17, a2, a3);
      v5 = *(_QWORD *)&v17[8];
      v4 = *(_QWORD *)v17;
      v8 = *(__int64 **)&v17[16];
      if ( !__OFSUB__(-*(_QWORD *)v17, 1LL) )
        goto LABEL_13;
LABEL_11:
      a1[1] = v5;
      a1[2] = v8;
      goto LABEL_12;
    case 15LL:
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v17, a2, a3);
      v5 = *(_QWORD *)&v17[8];
      v4 = *(_QWORD *)v17;
      v8 = *(__int64 **)&v17[16];
LABEL_13:
      v6 = 13LL;
      v7 = aYMDHMS_0;
LABEL_14:
      v25 = v4;
      v26 = v5;
      v27 = (__int64)v8;
      chrono::naive::datetime::NaiveDateTime::parse_from_str(v17, v5, v8, v7, v6);
      if ( !*(_DWORD *)v17 )
      {
        v9 = v8;
        v10 = uu_touch::parse_timestamp::{{closure}}(v5, v8);
        goto LABEL_26;
      }
      v29 = *(_DWORD *)v17;
      v30 = *(_QWORD *)&v17[4];
      <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_local_datetime(v20, 1LL, &v29);
      chrono::offset::LocalResult<T>::and_then(v17, v20, &v29);
      if ( *(_DWORD *)v17 )
      {
        *(_QWORD *)v20 = 0LL;
        *(_QWORD *)&v20[8] = v5;
        *(_QWORD *)&v20[16] = v8;
        LOBYTE(v21) = 1;
        v22 = (__int64 *)v20;
        v23 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v17 = &off_279EF0;
        *(_QWORD *)&v17[8] = 1LL;
        v19 = 0LL;
        *(_QWORD *)&v17[16] = &v22;
        v18 = 1LL;
        v9 = (__int64 *)v17;
        core::option::Option<T>::map_or_else(&v36, v17);
        LODWORD(v18) = 1;
        *(_OWORD *)v17 = v36;
        *(_QWORD *)&v17[16] = v37;
        v10 = alloc::boxed::Box<T>::new(v17);
LABEL_26:
        a1[1] = v10;
        a1[2] = &off_279E10;
        *a1 = 1LL;
        goto LABEL_27;
      }
      v24 = *(_OWORD *)&v17[4];
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(v17, &v24, *(unsigned int *)&v17[16]);
      if ( __ROR4__(-286331153 * *(_DWORD *)&v17[4] - 286331157, 2) <= 0x4444443u
        && (unsigned __int8)core::slice::<impl [T]>::ends_with(v5, v8) )
      {
        <chrono::datetime::DateTime<Tz> as core::ops::arith::AddAssign<chrono::time_delta::TimeDelta>>::add_assign(
          &v24,
          1LL);
      }
      chrono::datetime::DateTime<Tz>::checked_add_signed(v17, &v24);
      if ( !*(_DWORD *)v17 )
      {
        v15 = &off_279F10;
        v16 = aDatetimeTimede;
        goto LABEL_31;
      }
      *(_OWORD *)v20 = *(_OWORD *)v17;
      chrono::datetime::DateTime<Tz>::checked_sub_signed(v17, v20);
      if ( !*(_DWORD *)v17 )
      {
        v15 = &off_279F28;
        v16 = aDatetimeTimede_0;
LABEL_31:
        core::option::expect_failed(v16, 33LL, v15);
      }
      v33 = *(_DWORD *)&v17[8];
      v32 = *(_QWORD *)v17;
      v11 = *(_DWORD *)&v17[12];
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(v17, &v24, HIDWORD(v24));
      v12 = *(_DWORD *)&v17[4];
      v9 = &v32;
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(v17, &v32, v11);
      if ( v12 / 0xE10 != *(_DWORD *)&v17[4] / 0xE10u )
      {
        *(_QWORD *)v20 = 0LL;
        *(_OWORD *)&v20[8] = v31;
        LOBYTE(v21) = 1;
        v22 = (__int64 *)v20;
        v23 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v17 = &off_279F00;
        *(_QWORD *)&v17[8] = 1LL;
        v19 = 0LL;
        *(_QWORD *)&v17[16] = &v22;
        v18 = 1LL;
        v9 = (__int64 *)v17;
        core::option::Option<T>::map_or_else(&v38, v17);
        LODWORD(v18) = 1;
        *(_OWORD *)v17 = v38;
        *(_QWORD *)&v17[16] = v39;
        v10 = alloc::boxed::Box<T>::new(v17);
        goto LABEL_26;
      }
      a1[1] = uu_touch::datetime_to_filetime((unsigned int *)&v24);
      *((_DWORD *)a1 + 4) = v13;
      *a1 = 0LL;
LABEL_27:
      core::ptr::drop_in_place<alloc::string::String>(&v25, v9);
      return a1;
    default:
      v25 = 0LL;
      v26 = a2;
      v27 = a3;
      v28 = 1;
      v22 = &v25;
      v23 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)v17 = &off_279F00;
      *(_QWORD *)&v17[8] = 1LL;
      v19 = 0LL;
      *(_QWORD *)&v17[16] = &v22;
      v18 = 1LL;
      core::option::Option<T>::map_or_else(v20, v17);
      LODWORD(v21) = 1;
      a1[1] = alloc::boxed::Box<T>::new(v20);
      a1[2] = &off_279E10;
LABEL_12:
      *a1 = 1LL;
      return a1;
  }
}