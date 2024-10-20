char *__fastcall uu_df::filesystem::Filesystem::new(char *dest, char *src, __int64 *a3)
{
  char *v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 v10; // [rsp+8h] [rbp-140h]
  __int128 v11; // [rsp+10h] [rbp-138h]
  __int128 v12; // [rsp+20h] [rbp-128h]
  __int128 v13; // [rsp+30h] [rbp-118h] BYREF
  __int64 v14; // [rsp+40h] [rbp-108h]
  __int128 v15; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-E8h]
  _OWORD desta[14]; // [rsp+68h] [rbp-E0h] BYREF

  v5 = src + 96;
  if ( !*((_QWORD *)src + 14) )
    v5 = src + 24;
  <alloc::string::String as core::clone::Clone>::clone(&v15, v5);
  v14 = v16;
  v13 = v15;
  uucore::features::fsext::statfs(desta, &v13);
  if ( *(_QWORD *)&desta[0] )
  {
    if ( *((_QWORD *)&desta[0] + 1) )
      _rust_dealloc(*(_QWORD *)&desta[1], *((_QWORD *)&desta[0] + 1), 1LL);
    *(_QWORD *)dest = 0x8000000000000000LL;
    v6 = *a3;
    if ( *a3 != 0x8000000000000000LL && v6 )
      _rust_dealloc(a3[1], v6, 1LL);
    core::ptr::drop_in_place<uucore::features::fsext::MountInfo>(src);
  }
  else
  {
    v7 = *(_QWORD *)&desta[2];
    v10 = *((_QWORD *)&desta[3] + 1);
    v11 = desta[1];
    v12 = *(_OWORD *)((char *)&desta[2] + 8);
    v8 = *((_QWORD *)&desta[2] + 1) >> 63;
    *((_QWORD *)&desta[10] + 1) = a3[2];
    *(_OWORD *)((char *)&desta[9] + 8) = *(_OWORD *)a3;
    memcpy(desta, src, 0x98uLL);
    memcpy(dest, desta, 0xB0uLL);
    *((_OWORD *)dest + 11) = v11;
    *((_QWORD *)dest + 24) = v7;
    *(_OWORD *)(dest + 200) = v12;
    *((_QWORD *)dest + 27) = v10;
    dest[224] = v8;
  }
  return dest;
}
