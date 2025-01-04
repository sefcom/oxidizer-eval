__int64 __fastcall uu_ls::display_date(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  unsigned __int64 v5; // rdx
  bool v7; // zf
  _BOOL8 v8; // rcx
  void *v9; // rax
  void *v10; // rdx
  __int128 v11; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+10h] [rbp-98h]
  __int64 v13; // [rsp+18h] [rbp-90h]
  __int128 v14; // [rsp+20h] [rbp-88h] BYREF
  __int128 v15; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v16[6]; // [rsp+40h] [rbp-68h] BYREF

  uu_ls::get_time(&v15, a2, a3);
  if ( !(_DWORD)v15 )
    return <T as alloc::slice::hack::ConvertVec>::to_vec(a1, asc_362E5, 3LL);
  v14 = v15;
  chrono::datetime::DateTime<Tz>::checked_add_signed(v16, &v15);
  if ( !LODWORD(v16[0]) )
    core::option::expect_failed(aDatetimeTimede, 33LL, &off_212988);
  v11 = v16[0];
  chrono::offset::local::Local::now(v16);
  v4 = <chrono::naive::datetime::NaiveDateTime as core::cmp::PartialOrd>::partial_cmp(&v11, v16);
  v5 = 4LL;
  if ( (*(_QWORD *)(a3 + 184) ^ 0x8000000000000000LL) < 4 )
    v5 = *(_QWORD *)(a3 + 184) ^ 0x8000000000000000LL;
  switch ( v5 )
  {
    case 0uLL:
      *(_QWORD *)&v11 = aYMDHMSFZ;
      *((_QWORD *)&v11 + 1) = 23LL;
      break;
    case 1uLL:
      *(_QWORD *)&v11 = aYMDHM;
      *((_QWORD *)&v11 + 1) = 14LL;
      break;
    case 2uLL:
      v7 = v4 == 1;
      v8 = v4 == 1;
      v9 = &unk_36393;
      v10 = &unk_363A9;
      goto LABEL_11;
    case 3uLL:
      v7 = v4 == 1;
      v8 = v4 == 1;
      v9 = &unk_3639E;
      v10 = &unk_363B2;
LABEL_11:
      if ( v7 )
        v10 = v9;
      *(_QWORD *)&v11 = v10;
      *((_QWORD *)&v11 + 1) = 2 * v8 + 9;
      break;
    case 4uLL:
      v11 = *(_OWORD *)(a3 + 192);
      break;
  }
  v12 = 8LL;
  v13 = 0LL;
  ((void (__fastcall *)(_OWORD *, __int128 *, __int128 *))chrono::datetime::DateTime<Tz>::format_with_items)(
    v16,
    &v14,
    &v11);
  <T as alloc::string::ToString>::to_string(a1, v16);
  return core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(v16);
}
