__int64 __fastcall fd::filter::time::TimeFilter::from_str(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // r15
  __int128 v11; // [rsp+0h] [rbp-168h] BYREF
  _BYTE v12[24]; // [rsp+10h] [rbp-158h] BYREF
  _BYTE v13[24]; // [rsp+28h] [rbp-140h]
  __int128 v14; // [rsp+40h] [rbp-128h] BYREF
  unsigned int v15; // [rsp+50h] [rbp-118h]
  _QWORD v16[2]; // [rsp+60h] [rbp-108h] BYREF
  __int64 v17; // [rsp+70h] [rbp-F8h]
  __int64 v18; // [rsp+88h] [rbp-E0h] BYREF
  int v19; // [rsp+90h] [rbp-D8h]
  int v20; // [rsp+98h] [rbp-D0h] BYREF
  __int128 v21; // [rsp+A0h] [rbp-C8h]
  __int128 v22; // [rsp+B0h] [rbp-B8h]
  __int128 v23; // [rsp+C0h] [rbp-A8h]
  __int128 v24; // [rsp+D0h] [rbp-98h]
  _OWORD v25[2]; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v26; // [rsp+100h] [rbp-68h]
  _OWORD v27[5]; // [rsp+110h] [rbp-58h] BYREF

  v2 = a1;
  jiff::span::parse_iso_or_friendly(&v20, a1, a2);
  if ( v20 == 1 )
  {
    jiff::fmt::temporal::DateTimeParser::parse_timestamp(&v14, a1, a2);
    if ( (_DWORD)v14 != 1 )
    {
      v2 = jiff::timestamp::<impl core::convert::From<jiff::timestamp::Timestamp> for std::time::SystemTime>::from(
             *((_QWORD *)&v14 + 1),
             v15);
LABEL_18:
      core::ptr::drop_in_place<core::result::Result<jiff::timestamp::Timestamp,jiff::error::Error>>(&v14);
      goto LABEL_19;
    }
    jiff::fmt::temporal::DateTimeParser::parse_datetime(&v11, a1, a2);
    if ( (_DWORD)v11 == 1 )
    {
      LODWORD(v16[0]) = 0;
      v3 = core::char::methods::encode_utf8_raw(64LL, v16);
      if ( <&str as core::str::pattern::Pattern>::strip_prefix_of(v3, v4, a1, a2) )
      {
        core::num::<impl u64>::from_ascii_radix(v12);
        if ( !v12[0] )
        {
          v2 = <std::time::SystemTime as core::ops::arith::Add<core::time::Duration>>::add(
                 0LL,
                 0LL,
                 *(_QWORD *)&v12[8],
                 0LL);
LABEL_17:
          core::ptr::drop_in_place<core::result::Result<jiff::civil::datetime::DateTime,jiff::error::Error>>(&v11);
          goto LABEL_18;
        }
      }
    }
    else
    {
      v19 = HIDWORD(v11);
      v18 = *(_QWORD *)((char *)&v11 + 4);
      v6 = jiff::tz::db::db();
      v7 = jiff::tz::system::get(v6);
      v9 = v8;
      if ( (v7 & 1) != 0 )
      {
        v16[0] = v8;
        core::ptr::drop_in_place<jiff::error::Error>(v16);
        v9 = 2LL;
      }
      <jiff::tz::timezone::repr::Repr as core::clone::Clone>::clone(v9);
      jiff::tz::timezone::TimeZone::into_ambiguous_zoned(v16, v9, &v18);
      jiff::tz::ambiguous::AmbiguousZoned::later(v12, v16);
      if ( (v12[0] & 1) == 0 )
      {
        v26 = *(_QWORD *)&v13[16];
        v25[1] = *(_OWORD *)v13;
        v25[0] = *(_OWORD *)&v12[8];
        v2 = jiff::zoned::<impl core::convert::From<jiff::zoned::Zoned> for std::time::SystemTime>::from(v25);
        core::ptr::drop_in_place<jiff::tz::timezone::TimeZone>(v9);
        goto LABEL_17;
      }
      core::ptr::drop_in_place<core::result::Result<jiff::zoned::Zoned,jiff::error::Error>>(v12);
      core::ptr::drop_in_place<jiff::tz::timezone::TimeZone>(v9);
    }
    core::ptr::drop_in_place<core::result::Result<jiff::civil::datetime::DateTime,jiff::error::Error>>(&v11);
    core::ptr::drop_in_place<core::result::Result<jiff::timestamp::Timestamp,jiff::error::Error>>(&v14);
  }
  else
  {
    v27[3] = v24;
    v27[2] = v23;
    v27[1] = v22;
    v27[0] = v21;
    fd::filter::time::now((__int64)v16);
    jiff::zoned::Zoned::checked_sub(v12, v16, v27);
    if ( (v12[0] & 1) != 0 )
    {
      core::ptr::drop_in_place<core::result::Result<jiff::zoned::Zoned,jiff::error::Error>>(v12);
      core::ptr::drop_in_place<jiff::zoned::Zoned>(v17);
    }
    else
    {
      v14 = *(_OWORD *)&v12[8];
      v5 = *(_QWORD *)v13;
      v11 = *(_OWORD *)&v13[8];
      core::ptr::drop_in_place<jiff::zoned::Zoned>(v17);
      *(_OWORD *)v12 = v14;
      *(_QWORD *)&v12[16] = v5;
      *(_OWORD *)v13 = v11;
      v2 = jiff::zoned::<impl core::convert::From<jiff::zoned::Zoned> for std::time::SystemTime>::from(v12);
    }
  }
LABEL_19:
  core::ptr::drop_in_place<core::result::Result<jiff::span::Span,jiff::error::Error>>(&v20);
  return v2;
}