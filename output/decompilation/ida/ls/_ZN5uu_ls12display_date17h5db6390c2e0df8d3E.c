__int64 __fastcall uu_ls::display_date(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  bool v10; // zf
  void *v11; // rax
  void *v12; // rdx
  __int128 v13; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+10h] [rbp-98h]
  __int64 v15; // [rsp+18h] [rbp-90h]
  __int128 v16; // [rsp+20h] [rbp-88h] BYREF
  __int128 v17; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v18[6]; // [rsp+40h] [rbp-68h] BYREF

  uu_ls::get_time(&v17, a2, a3);
  if ( !(_DWORD)v17 )
    return <T as alloc::slice::hack::ConvertVec>::to_vec(a1, asc_362E5, 3LL);
  v16 = v17;
  chrono::datetime::DateTime<Tz>::checked_add_signed(v18, &v17);
  if ( !LODWORD(v18[0]) )
    core::option::expect_failed(aDatetimeTimede, 33LL, &off_212988);
  v13 = v18[0];
  chrono::offset::local::Local::now(v18);
  v4 = <chrono::naive::datetime::NaiveDateTime as core::cmp::PartialOrd>::partial_cmp(&v13, v18);
  v7 = *(_QWORD *)(a3 + 184) ^ 0x8000000000000000LL;
  v8 = 4LL;
  if ( v7 < 4 )
    v8 = *(_QWORD *)(a3 + 184) ^ 0x8000000000000000LL;
  switch ( v8 )
  {
    case 0uLL:
      *(_QWORD *)&v13 = aYMDHMSFZ;
      *((_QWORD *)&v13 + 1) = 23LL;
      break;
    case 1uLL:
      *(_QWORD *)&v13 = aYMDHM;
      *((_QWORD *)&v13 + 1) = 14LL;
      break;
    case 2uLL:
      v10 = v4 == 1;
      v7 = v4 == 1;
      v11 = &unk_36393;
      v12 = &unk_363A9;
      goto LABEL_11;
    case 3uLL:
      v10 = v4 == 1;
      v7 = v4 == 1;
      v11 = &unk_3639E;
      v12 = &unk_363B2;
LABEL_11:
      if ( v10 )
        v12 = v11;
      *(_QWORD *)&v13 = v12;
      *((_QWORD *)&v13 + 1) = 2 * v7 + 9;
      break;
    case 4uLL:
      v13 = *(_OWORD *)(a3 + 192);
      break;
  }
  v14 = 8LL;
  v15 = 0LL;
  ((void (__fastcall *)(_OWORD *, __int128 *, __int128 *, unsigned __int64, __int64, __int64))chrono::datetime::DateTime<Tz>::format_with_items)(
    v18,
    &v16,
    &v13,
    v7,
    v5,
    v6);
  <T as alloc::string::ToString>::to_string(a1, v18);
  return core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(v18);
}
