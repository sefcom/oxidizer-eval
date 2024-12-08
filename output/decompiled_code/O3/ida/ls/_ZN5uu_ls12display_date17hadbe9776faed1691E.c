__int64 __fastcall uu_ls::display_date(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r12d
  unsigned int v5; // r15d
  unsigned int v6; // ebp
  char v7; // al
  unsigned __int64 v8; // rdx
  bool v10; // zf
  _BOOL8 v11; // rcx
  void *v12; // rax
  void *v13; // rdx
  __int128 v14; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+10h] [rbp-A8h]
  __int64 v16; // [rsp+18h] [rbp-A0h]
  __int128 v17; // [rsp+20h] [rbp-98h] BYREF
  __int128 v18; // [rsp+30h] [rbp-88h] BYREF
  int v19; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-74h]
  unsigned int v21; // [rsp+48h] [rbp-70h]

  uu_ls::get_time(&v18, a2, a3);
  if ( !(_DWORD)v18 )
    return <T as alloc::slice::hack::ConvertVec>::to_vec(a1, asc_363E5, 3LL);
  v17 = v18;
  chrono::datetime::DateTime<Tz>::checked_add_signed(&v19, &v18);
  v4 = v19;
  if ( !v19 )
    core::option::expect_failed(aDatetimeTimede, 33LL, &off_212B88);
  v5 = v20;
  v6 = v21;
  chrono::offset::local::Local::now(&v19);
  v7 = v4 != v19;
  if ( v4 < v19 )
    v7 = -1;
  if ( !v7 )
  {
    v7 = v5 != v20;
    if ( v5 < v20 )
      v7 = -1;
    if ( !v7 )
    {
      v7 = -1;
      if ( v6 >= v21 )
        v7 = v6 != v21;
    }
  }
  v8 = 4LL;
  if ( (*(_QWORD *)(a3 + 184) ^ 0x8000000000000000LL) < 4 )
    v8 = *(_QWORD *)(a3 + 184) ^ 0x8000000000000000LL;
  switch ( v8 )
  {
    case 0uLL:
      *(_QWORD *)&v14 = aYMDHMSFZ;
      *((_QWORD *)&v14 + 1) = 23LL;
      break;
    case 1uLL:
      *(_QWORD *)&v14 = aYMDHM;
      *((_QWORD *)&v14 + 1) = 14LL;
      break;
    case 2uLL:
      v10 = v7 == 1;
      v11 = v7 == 1;
      v12 = &unk_3649C;
      v13 = &unk_36493;
      goto LABEL_19;
    case 3uLL:
      v10 = v7 == 1;
      v11 = v7 == 1;
      v12 = &unk_364B0;
      v13 = &unk_364A7;
LABEL_19:
      if ( v10 )
        v13 = v12;
      *(_QWORD *)&v14 = v13;
      *((_QWORD *)&v14 + 1) = 2 * v11 + 9;
      break;
    case 4uLL:
      v14 = *(_OWORD *)(a3 + 192);
      break;
  }
  v15 = 8LL;
  v16 = 0LL;
  ((void (__fastcall *)(int *, __int128 *, __int128 *))chrono::datetime::DateTime<Tz>::format_with_items)(
    &v19,
    &v17,
    &v14);
  <T as alloc::string::ToString>::to_string(a1, &v19);
  return core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(&v19);
}
