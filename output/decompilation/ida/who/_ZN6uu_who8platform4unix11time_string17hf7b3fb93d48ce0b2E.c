__int64 __fastcall uu_who::platform::unix::time_string(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // [rsp+8h] [rbp-70h] BYREF
  __int64 v5; // [rsp+10h] [rbp-68h]
  __int64 v6; // [rsp+18h] [rbp-60h]
  _BYTE v7[16]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v8[72]; // [rsp+30h] [rbp-48h] BYREF

  time::format_description::parse::parse(v8, aMonthReprShort, 54LL);
  core::result::Result<T,E>::unwrap(&v4, v8);
  uucore::features::utmpx::Utmpx::login_time(v7, a2);
  v2 = v5;
  time::offset_date_time::OffsetDateTime::format(v8, v7, v5, v6);
  core::result::Result<T,E>::unwrap(a1, v8);
  return core::ptr::drop_in_place<alloc::vec::Vec<time::format_description::borrowed_format_item::BorrowedFormatItem>>(
           v4,
           v2);
}