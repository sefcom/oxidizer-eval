__int64 __fastcall uu_wc::print_stats(_BYTE *a1, __int64 *a2, void *a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rcx
  char v9; // dl
  __int64 v10; // rsi
  char v11; // di
  char v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  char v15; // r11
  __int64 v16; // rbx
  __int64 i; // r14
  __int64 result; // rax
  __int64 v19; // rdi
  __int64 v21; // rbx
  __int64 v22; // [rsp+8h] [rbp-180h] BYREF
  void *v23; // [rsp+10h] [rbp-178h] BYREF
  __int64 v24; // [rsp+18h] [rbp-170h]
  __int64 v25; // [rsp+20h] [rbp-168h]
  void *v26; // [rsp+28h] [rbp-160h]
  char *v27; // [rsp+30h] [rbp-158h] BYREF
  void **v28; // [rsp+38h] [rbp-150h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+40h] [rbp-148h]
  void **v30; // [rsp+48h] [rbp-140h]
  __int64 (__fastcall *v31)(); // [rsp+50h] [rbp-138h]
  __int64 v32; // [rsp+58h] [rbp-130h]
  __int64 v33; // [rsp+60h] [rbp-128h]
  void *v34; // [rsp+68h] [rbp-120h] BYREF
  __int64 v35; // [rsp+70h] [rbp-118h]
  void ***v36; // [rsp+78h] [rbp-110h]
  __int128 v37; // [rsp+80h] [rbp-108h]
  __int64 v38; // [rsp+90h] [rbp-F8h]
  char v39; // [rsp+98h] [rbp-F0h]
  __int64 v40; // [rsp+A0h] [rbp-E8h]
  __int64 v41; // [rsp+B0h] [rbp-D8h]
  __int64 v42; // [rsp+B8h] [rbp-D0h]
  __int64 v43; // [rsp+C0h] [rbp-C8h]
  __int64 v44; // [rsp+C8h] [rbp-C0h]
  char v45; // [rsp+D0h] [rbp-B8h]
  void *v46; // [rsp+D8h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+E0h] [rbp-A8h]
  void ***v48; // [rsp+E8h] [rbp-A0h]
  __int64 v49; // [rsp+F0h] [rbp-98h]
  void **v50; // [rsp+F8h] [rbp-90h]
  __int64 v51; // [rsp+100h] [rbp-88h]
  _BYTE v52[8]; // [rsp+108h] [rbp-80h]
  __int64 v53; // [rsp+110h] [rbp-78h] BYREF
  char v54; // [rsp+118h] [rbp-70h]
  __int64 v55; // [rsp+120h] [rbp-68h]
  char v56; // [rsp+128h] [rbp-60h]
  __int64 v57; // [rsp+130h] [rbp-58h]
  char v58; // [rsp+138h] [rbp-50h]
  __int64 v59; // [rsp+140h] [rbp-48h]
  char v60; // [rsp+148h] [rbp-40h]
  __int64 v61; // [rsp+150h] [rbp-38h]

  v25 = a4;
  v26 = a3;
  v34 = (void *)std::io::stdio::stdout();
  v22 = std::io::stdio::Stdout::lock(&v34);
  v8 = a2[2];
  v9 = a1[27];
  v10 = a2[3];
  v11 = a1[24];
  v12 = a1[25];
  v13 = *a2;
  v14 = a2[1];
  v15 = a1[28];
  v16 = a2[4];
  v52[0] = a1[26];
  v53 = v8;
  v54 = v9;
  v55 = v10;
  v56 = v12;
  v57 = v14;
  v58 = v11;
  v59 = v13;
  v60 = v15;
  v61 = v16;
  v23 = &dword_0 + 1;
  v24 = 0LL;
  for ( i = 0LL; i != 80; i += 16LL )
  {
    while ( !v52[i] )
    {
      i += 16LL;
      if ( i == 80 )
        goto LABEL_6;
    }
    v27 = (char *)&v53 + i;
    v28 = &v23;
    v29 = <&T as core::fmt::Display>::fmt;
    v30 = (void **)&v27;
    v31 = <&T as core::fmt::Display>::fmt;
    v32 = a5;
    v33 = 0LL;
    v34 = &dword_0 + 2;
    v36 = (void ***)(&dword_0 + 2);
    *((_QWORD *)&v37 + 1) = 0LL;
    v38 = 32LL;
    v39 = 3;
    v40 = 2LL;
    v41 = 1LL;
    v42 = 2LL;
    v43 = 1LL;
    v44 = 32LL;
    v45 = 3;
    v46 = &unk_154A8;
    v47 = 2LL;
    v50 = &v34;
    v51 = 2LL;
    v48 = &v28;
    v49 = 3LL;
    result = std::io::Write::write_fmt(&v22, &v46);
    if ( result )
      goto LABEL_10;
    v23 = &unk_19FDD;
    v24 = 1LL;
  }
LABEL_6:
  if ( v26 )
  {
    v46 = v26;
    v47 = v25;
    v28 = &v23;
    v29 = <&T as core::fmt::Display>::fmt;
    v30 = &v46;
    v31 = <&T as core::fmt::Display>::fmt;
    v34 = &unk_F3388;
    v35 = 3LL;
    v36 = &v28;
    v37 = 2uLL;
  }
  else
  {
    v34 = &off_F33B8;
    v35 = 1LL;
    v36 = (void ***)&byte_8;
    v37 = 0LL;
  }
  result = std::io::Write::write_fmt(&v22, &v34);
LABEL_10:
  v19 = v22;
  if ( (*(_DWORD *)(v22 + 12))-- == 1 )
  {
    *(_QWORD *)v19 = 0LL;
    if ( _InterlockedExchange((volatile __int32 *)(v19 + 8), 0) == 2 )
    {
      v21 = result;
      std::sys::sync::mutex::futex::Mutex::wake(v19 + 8);
      return v21;
    }
  }
  return result;
}
