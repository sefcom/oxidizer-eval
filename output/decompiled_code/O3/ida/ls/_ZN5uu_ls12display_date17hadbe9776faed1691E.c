__int64 __fastcall uu_ls::display_date(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r12d
  unsigned int v5; // r15d
  unsigned int v6; // ebp
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // al
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  bool v13; // zf
  void *v14; // rax
  void *v15; // rdx
  __int128 v16; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+10h] [rbp-A8h]
  __int64 v18; // [rsp+18h] [rbp-A0h]
  __int128 v19; // [rsp+20h] [rbp-98h] BYREF
  __int128 v20; // [rsp+30h] [rbp-88h] BYREF
  int v21; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v22; // [rsp+44h] [rbp-74h]
  unsigned int v23; // [rsp+48h] [rbp-70h]

  uu_ls::get_time(&v20, a2, a3);
  if ( !(_DWORD)v20 )
    return <T as alloc::slice::hack::ConvertVec>::to_vec(a1, asc_363E5, 3LL);
  v19 = v20;
  chrono::datetime::DateTime<Tz>::checked_add_signed(&v21, &v20);
  v4 = v21;
  if ( !v21 )
    core::option::expect_failed(aDatetimeTimede, 33LL, &off_212B88);
  v5 = v22;
  v6 = v23;
  chrono::offset::local::Local::now(&v21);
  v9 = v4 != v21;
  if ( v4 < v21 )
    v9 = -1;
  if ( !v9 )
  {
    v9 = v5 != v22;
    if ( v5 < v22 )
      v9 = -1;
    if ( !v9 )
    {
      v9 = -1;
      if ( v6 >= v23 )
        v9 = v6 != v23;
    }
  }
  v10 = *(_QWORD *)(a3 + 184) ^ 0x8000000000000000LL;
  v11 = 4LL;
  if ( v10 < 4 )
    v11 = *(_QWORD *)(a3 + 184) ^ 0x8000000000000000LL;
  switch ( v11 )
  {
    case 0uLL:
      *(_QWORD *)&v16 = aYMDHMSFZ;
      *((_QWORD *)&v16 + 1) = 23LL;
      break;
    case 1uLL:
      *(_QWORD *)&v16 = aYMDHM;
      *((_QWORD *)&v16 + 1) = 14LL;
      break;
    case 2uLL:
      v13 = v9 == 1;
      v10 = v9 == 1;
      v14 = &unk_3649C;
      v15 = &unk_36493;
      goto LABEL_19;
    case 3uLL:
      v13 = v9 == 1;
      v10 = v9 == 1;
      v14 = &unk_364B0;
      v15 = &unk_364A7;
LABEL_19:
      if ( v13 )
        v15 = v14;
      *(_QWORD *)&v16 = v15;
      *((_QWORD *)&v16 + 1) = 2 * v10 + 9;
      break;
    case 4uLL:
      v16 = *(_OWORD *)(a3 + 192);
      break;
  }
  v17 = 8LL;
  v18 = 0LL;
  ((void (__fastcall *)(int *, __int128 *, __int128 *, unsigned __int64, __int64, __int64))chrono::datetime::DateTime<Tz>::format_with_items)(
    &v21,
    &v19,
    &v16,
    v10,
    v7,
    v8);
  <T as alloc::string::ToString>::to_string(a1, &v21);
  return core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(&v21);
}
