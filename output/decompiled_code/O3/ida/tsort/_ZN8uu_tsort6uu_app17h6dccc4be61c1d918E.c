void *__fastcall uu_tsort::uu_app(void *dest)
{
  __int64 v1; // r14
  _QWORD *v2; // rax
  _QWORD *v3; // r14
  _OWORD v5[45]; // [rsp+0h] [rbp-818h] BYREF
  _BYTE v6[24]; // [rsp+2D0h] [rbp-548h] BYREF
  __int128 v7; // [rsp+2E8h] [rbp-530h]
  __int128 v8; // [rsp+2F8h] [rbp-520h]
  __int64 v9; // [rsp+308h] [rbp-510h]
  __int128 v10; // [rsp+310h] [rbp-508h]
  __int64 v11; // [rsp+320h] [rbp-4F8h]
  __int128 v12; // [rsp+328h] [rbp-4F0h]
  __int64 v13; // [rsp+338h] [rbp-4E0h]
  __int64 v14; // [rsp+340h] [rbp-4D8h]
  __int128 v15; // [rsp+348h] [rbp-4D0h]
  __int64 v16; // [rsp+358h] [rbp-4C0h]
  __int128 v17; // [rsp+360h] [rbp-4B8h]
  __int64 v18; // [rsp+370h] [rbp-4A8h]
  __int128 v19; // [rsp+378h] [rbp-4A0h]
  __int64 v20; // [rsp+388h] [rbp-490h]
  __int128 v21; // [rsp+390h] [rbp-488h]
  __int64 v22; // [rsp+3A0h] [rbp-478h]
  __int128 v23; // [rsp+3A8h] [rbp-470h]
  __int64 v24; // [rsp+3B8h] [rbp-460h]
  __int128 v25; // [rsp+3C0h] [rbp-458h]
  __int64 v26; // [rsp+3D0h] [rbp-448h]
  __int128 v27; // [rsp+3D8h] [rbp-440h]
  __int64 v28; // [rsp+3E8h] [rbp-430h]
  __int128 v29; // [rsp+3F0h] [rbp-428h]
  __int64 v30; // [rsp+400h] [rbp-418h]
  __int128 v31; // [rsp+408h] [rbp-410h]
  __int64 v32; // [rsp+418h] [rbp-400h]
  __int128 v33; // [rsp+420h] [rbp-3F8h]
  __int64 v34; // [rsp+430h] [rbp-3E8h]
  __int128 v35; // [rsp+438h] [rbp-3E0h]
  _QWORD *v36; // [rsp+448h] [rbp-3D0h]
  __int64 v37; // [rsp+450h] [rbp-3C8h]
  __int64 v38; // [rsp+458h] [rbp-3C0h]
  __int64 v39; // [rsp+460h] [rbp-3B8h]
  __int128 v40; // [rsp+468h] [rbp-3B0h]
  __int64 v41; // [rsp+478h] [rbp-3A0h]
  __int64 v42; // [rsp+480h] [rbp-398h]
  unsigned __int64 v43; // [rsp+488h] [rbp-390h]
  __int128 v44; // [rsp+490h] [rbp-388h]
  unsigned __int64 v45; // [rsp+4A0h] [rbp-378h]
  __int128 v46; // [rsp+4A8h] [rbp-370h]
  __int128 v47; // [rsp+4B8h] [rbp-360h]
  unsigned __int64 v48; // [rsp+4C8h] [rbp-350h]
  __int128 v49; // [rsp+4D0h] [rbp-348h]
  const char *v50; // [rsp+4E0h] [rbp-338h]
  __int64 v51; // [rsp+4E8h] [rbp-330h]
  __int64 v52; // [rsp+4F0h] [rbp-328h]
  __int64 v53; // [rsp+4F8h] [rbp-320h]
  __int64 v54; // [rsp+500h] [rbp-318h]
  __int64 v55; // [rsp+508h] [rbp-310h]
  __int128 v56; // [rsp+510h] [rbp-308h]
  _OWORD src[47]; // [rsp+520h] [rbp-2F8h] BYREF

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(src, qword_EC238, qword_EC240);
  *(_QWORD *)&src[38] = a0027;
  *((_QWORD *)&src[38] + 1) = 6LL;
  memcpy(v5, src, 0x2C8uLL);
  uucore::format_usage(v6, aOptionsFile, 17LL);
  v1 = *(_QWORD *)v6;
  if ( *(_QWORD *)v6 != 0x8000000000000000LL )
    src[0] = *(_OWORD *)&v6[8];
  if ( *(_QWORD *)&v5[29] != 0x8000000000000000LL && *(_QWORD *)&v5[29] )
    _rust_dealloc(*((_QWORD *)&v5[29] + 1), *(_QWORD *)&v5[29], 1LL);
  *(_QWORD *)&v5[29] = v1;
  *(_OWORD *)((char *)&v5[29] + 8) = src[0];
  memcpy(src, v5, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v5, src, aTopologicalSor, 309LL);
  memcpy(src, v5, 0x2BCuLL);
  *(_QWORD *)((char *)&src[43] + 12) = *(_QWORD *)((char *)&v5[43] + 12) | 0x8000000080LL;
  DWORD1(src[44]) = DWORD1(v5[44]);
  v5[7] = 8uLL;
  v5[9] = 0LL;
  v5[10] = 8uLL;
  v5[12] = 0LL;
  v5[13] = 8uLL;
  v5[15] = 0LL;
  v5[16] = 8uLL;
  v5[18] = 0LL;
  v5[19] = 8uLL;
  v5[21] = 0LL;
  v5[22] = 8uLL;
  v5[25] = 8uLL;
  *(_QWORD *)&v5[0] = 0LL;
  *(_QWORD *)&v5[1] = 0LL;
  *((_QWORD *)&v5[2] + 1) = 0LL;
  *((_QWORD *)&v5[3] + 1) = 0LL;
  *(_QWORD *)&v5[5] = 5LL;
  *((_QWORD *)&v5[6] + 1) = 0LL;
  *((_QWORD *)&v5[8] + 1) = 8LL;
  *((_QWORD *)&v5[11] + 1) = 8LL;
  *((_QWORD *)&v5[14] + 1) = 8LL;
  *((_QWORD *)&v5[17] + 1) = 8LL;
  *((_QWORD *)&v5[20] + 1) = 4LL;
  *((_QWORD *)&v5[23] + 1) = 8LL;
  v5[24] = 0LL;
  *((_QWORD *)&v5[26] + 1) = 8LL;
  *(_QWORD *)&v5[27] = 0LL;
  *((_QWORD *)&v5[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v5[29] = 0x8000000000000000LL;
  *((_QWORD *)&v5[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v5[33] = aFile;
  *((_QWORD *)&v5[33] + 1) = 4LL;
  *(_QWORD *)&v5[34] = 0LL;
  *(_QWORD *)&v5[35] = 0LL;
  v5[36] = xmmword_10AB0;
  v2 = (_QWORD *)_rust_alloc(16LL, 8LL);
  if ( !v2 )
    alloc::raw_vec::handle_error(8LL, 16LL);
  v3 = v2;
  *v2 = asc_197D0;
  v2[1] = 1LL;
  if ( *(_QWORD *)&v5[23] )
    _rust_dealloc(8LL, 16LL * *(_QWORD *)&v5[23], 8LL);
  *(_QWORD *)&v5[23] = 1LL;
  *((_QWORD *)&v5[23] + 1) = v3;
  *(_QWORD *)&v5[24] = 1LL;
  v7 = *(_OWORD *)((char *)&v5[1] + 8);
  v10 = v5[4];
  v12 = *(_OWORD *)((char *)&v5[5] + 8);
  v15 = *(_OWORD *)((char *)&v5[7] + 8);
  v17 = v5[9];
  v19 = *(_OWORD *)((char *)&v5[10] + 8);
  v21 = v5[12];
  v23 = *(_OWORD *)((char *)&v5[13] + 8);
  v25 = 0LL;
  v27 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v33 = 0LL;
  v35 = *(_OWORD *)((char *)&v5[22] + 8);
  v40 = 0LL;
  v44 = v5[28];
  v46 = *(_OWORD *)((char *)&v5[29] + 8);
  v47 = *(_OWORD *)((char *)&v5[30] + 8);
  v49 = v5[32];
  *(_OWORD *)v6 = v5[0];
  *(_QWORD *)&v6[16] = *(_QWORD *)&v5[1];
  v8 = *(_OWORD *)((char *)&v5[2] + 8);
  v9 = *((_QWORD *)&v5[3] + 1);
  v11 = 5LL;
  v13 = 0LL;
  v14 = 8LL;
  v16 = 8LL;
  v18 = 8LL;
  v20 = 8LL;
  v22 = 8LL;
  v24 = 8LL;
  v26 = 8LL;
  v28 = 8LL;
  v30 = 8LL;
  v32 = 4LL;
  v34 = 8LL;
  v36 = v3;
  v37 = 1LL;
  v38 = 0LL;
  v39 = 8LL;
  v41 = 8LL;
  v42 = 0LL;
  v43 = 0x8000000000000000LL;
  v45 = 0x8000000000000000LL;
  v48 = 0x8000000000000001LL;
  v50 = aFile;
  v51 = 4LL;
  v52 = 0LL;
  v53 = *((_QWORD *)&v5[34] + 1);
  v54 = 0LL;
  v55 = *((_QWORD *)&v5[35] + 1);
  v56 = xmmword_10AD0;
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
