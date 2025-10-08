__int64 __fastcall uu_ls::TimeStyler::new(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rcx
  void *v3; // r15
  int v4; // eax
  __int64 result; // rax
  __int128 v6; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v7; // [rsp+18h] [rbp-C0h]
  __int64 v8; // [rsp+20h] [rbp-B8h]
  char v9; // [rsp+28h] [rbp-B0h]
  _BYTE v10[24]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v11[21]; // [rsp+48h] [rbp-90h] BYREF
  __int64 v12; // [rsp+60h] [rbp-78h]
  unsigned int v13; // [rsp+68h] [rbp-70h]
  int v14; // [rsp+70h] [rbp-68h] BYREF
  __int64 v15; // [rsp+74h] [rbp-64h]
  unsigned int v16; // [rsp+7Ch] [rbp-5Ch]
  __int128 v17; // [rsp+80h] [rbp-58h] BYREF
  __int64 v18; // [rsp+90h] [rbp-48h]
  _QWORD v19[4]; // [rsp+98h] [rbp-40h] BYREF
  char v20; // [rsp+B8h] [rbp-20h]
  _DWORD v21[7]; // [rsp+B9h] [rbp-1Fh]

  v2 = 4LL;
  if ( (*a2 ^ 0x8000000000000000LL) < 4 )
    v2 = *a2 ^ 0x8000000000000000LL;
  switch ( v2 )
  {
    case 0uLL:
      *(_QWORD *)&v6 = aYMDHMSFZ;
      *((_QWORD *)&v6 + 1) = 23LL;
      goto LABEL_12;
    case 1uLL:
      *(_QWORD *)&v6 = aYMDHM;
      *((_QWORD *)&v6 + 1) = 14LL;
LABEL_12:
      v7 = 8LL;
      v8 = 0LL;
      v9 = 0;
      chrono::format::strftime::StrftimeItems::parse(v11, &v6);
      goto LABEL_13;
    case 2uLL:
      *(_QWORD *)&v6 = aYMD;
      *((_QWORD *)&v6 + 1) = 9LL;
      v7 = 8LL;
      v8 = 0LL;
      v9 = 0;
      chrono::format::strftime::StrftimeItems::parse(v11, &v6);
      v3 = &unk_D2A65;
      goto LABEL_8;
    case 3uLL:
      *(_QWORD *)&v6 = aBEY;
      *((_QWORD *)&v6 + 1) = 9LL;
      v7 = 8LL;
      v8 = 0LL;
      v9 = 0;
      chrono::format::strftime::StrftimeItems::parse(v11, &v6);
      v3 = &unk_D2A5A;
LABEL_8:
      core::result::Result<T,E>::unwrap(&v17, v11);
      v19[0] = v3;
      v19[1] = 11LL;
      v19[2] = 8LL;
      v19[3] = 0LL;
      v20 = 0;
      v21[0] = *(_DWORD *)v11;
      *(_DWORD *)((char *)v21 + 3) = *(_DWORD *)&v11[3];
      core::iter::traits::iterator::Iterator::collect(&v6, v19);
      *(_QWORD *)&v10[16] = v7;
      *(_OWORD *)v10 = v6;
      v4 = 0;
      if ( (_QWORD)v6 != 0x8000000000000000LL )
      {
        chrono::offset::local::Local::now(&v6);
        chrono::datetime::DateTime<Tz>::checked_sub_signed(&v14, &v6);
        v4 = v14;
        if ( !v14 )
          core::option::expect_failed(aDatetimeTimede, 33LL, &off_286740);
        v12 = v15;
        v13 = v16;
      }
      break;
    case 4uLL:
      uucore::features::custom_tz_fmt::custom_time_format(v10, a2[1], a2[2]);
      v6 = *(_OWORD *)&v10[8];
      v7 = 8LL;
      v8 = 0LL;
      v9 = 1;
      chrono::format::strftime::StrftimeItems::parse_to_owned(v11, &v6);
      core::ptr::drop_in_place<alloc::string::String>(v10);
LABEL_13:
      core::result::Result<T,E>::unwrap(&v17, v11);
      *(_QWORD *)v10 = 0x8000000000000000LL;
      v4 = 0;
      break;
  }
  *(_QWORD *)(a1 + 16) = v18;
  *(_OWORD *)a1 = v17;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)v10;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)&v10[16];
  *(_DWORD *)(a1 + 48) = v4;
  *(_QWORD *)(a1 + 52) = v12;
  result = v13;
  *(_DWORD *)(a1 + 60) = v13;
  return result;
}