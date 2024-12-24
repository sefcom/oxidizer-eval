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
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v20; // [rsp+8h] [rbp-190h] BYREF
  void *v21; // [rsp+10h] [rbp-188h] BYREF
  __int64 v22; // [rsp+18h] [rbp-180h]
  __int64 v23; // [rsp+20h] [rbp-178h]
  void *v24; // [rsp+28h] [rbp-170h]
  _QWORD v25[2]; // [rsp+30h] [rbp-168h] BYREF
  __int64 v26; // [rsp+40h] [rbp-158h] BYREF
  void **v27; // [rsp+48h] [rbp-150h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+50h] [rbp-148h]
  void **v29; // [rsp+58h] [rbp-140h]
  __int64 (__fastcall *v30)(); // [rsp+60h] [rbp-138h]
  __int64 v31; // [rsp+68h] [rbp-130h]
  __int64 v32; // [rsp+70h] [rbp-128h]
  void *v33; // [rsp+78h] [rbp-120h] BYREF
  __int64 v34; // [rsp+80h] [rbp-118h]
  void ***v35; // [rsp+88h] [rbp-110h]
  __int128 v36; // [rsp+90h] [rbp-108h]
  __int64 v37; // [rsp+A0h] [rbp-F8h]
  char v38; // [rsp+A8h] [rbp-F0h]
  __int64 v39; // [rsp+B0h] [rbp-E8h]
  __int64 v40; // [rsp+C0h] [rbp-D8h]
  __int64 v41; // [rsp+C8h] [rbp-D0h]
  __int64 v42; // [rsp+D0h] [rbp-C8h]
  __int64 v43; // [rsp+D8h] [rbp-C0h]
  char v44; // [rsp+E0h] [rbp-B8h]
  void *v45; // [rsp+E8h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+F0h] [rbp-A8h]
  void ***v47; // [rsp+F8h] [rbp-A0h]
  __int64 v48; // [rsp+100h] [rbp-98h]
  void **v49; // [rsp+108h] [rbp-90h]
  __int64 v50; // [rsp+110h] [rbp-88h]
  char v51; // [rsp+118h] [rbp-80h] BYREF
  __int64 v52; // [rsp+120h] [rbp-78h]
  char v53; // [rsp+128h] [rbp-70h]
  __int64 v54; // [rsp+130h] [rbp-68h]
  char v55; // [rsp+138h] [rbp-60h]
  __int64 v56; // [rsp+140h] [rbp-58h]
  char v57; // [rsp+148h] [rbp-50h]
  __int64 v58; // [rsp+150h] [rbp-48h]
  char v59; // [rsp+158h] [rbp-40h]
  __int64 v60; // [rsp+160h] [rbp-38h]
  char v61; // [rsp+168h] [rbp-30h] BYREF

  v23 = a4;
  v24 = a3;
  v33 = (void *)std::io::stdio::stdout();
  v20 = std::io::stdio::Stdout::lock(&v33);
  v8 = a2[2];
  v9 = a1[27];
  v10 = a2[3];
  v11 = a1[24];
  v12 = a1[25];
  v13 = *a2;
  v14 = a2[1];
  v15 = a1[28];
  v16 = a2[4];
  v51 = a1[26];
  v52 = v8;
  v53 = v9;
  v54 = v10;
  v55 = v12;
  v56 = v14;
  v57 = v11;
  v58 = v13;
  v59 = v15;
  v60 = v16;
  v21 = &dword_0 + 1;
  v22 = 0LL;
  v25[0] = &v51;
  v25[1] = &v61;
  v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(v25);
  if ( v17 )
  {
    while ( 1 )
    {
      v26 = v17 + 8;
      v27 = &v21;
      v28 = <&T as core::fmt::Display>::fmt;
      v29 = (void **)&v26;
      v30 = <&T as core::fmt::Display>::fmt;
      v31 = a5;
      v32 = 0LL;
      v33 = &dword_0 + 2;
      v35 = (void ***)(&dword_0 + 2);
      *((_QWORD *)&v36 + 1) = 0LL;
      v37 = 32LL;
      v38 = 3;
      v39 = 2LL;
      v40 = 1LL;
      v41 = 2LL;
      v42 = 1LL;
      v43 = 32LL;
      v44 = 3;
      v45 = &unk_19C40;
      v46 = 2LL;
      v49 = &v33;
      v50 = 2LL;
      v47 = &v27;
      v48 = 3LL;
      v18 = std::io::Write::write_fmt(&v20, &v45);
      if ( v18 )
        break;
      v21 = &unk_1E6F1;
      v22 = 1LL;
      v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(v25);
      if ( !v17 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    if ( v24 )
    {
      v45 = v24;
      v46 = v23;
      v27 = &v21;
      v28 = <&T as core::fmt::Display>::fmt;
      v29 = &v45;
      v30 = <&T as core::fmt::Display>::fmt;
      v33 = &unk_132208;
      v34 = 3LL;
      v35 = &v27;
      v36 = 2uLL;
    }
    else
    {
      v33 = &off_132238;
      v34 = 1LL;
      v35 = (void ***)&byte_8;
      v36 = 0LL;
    }
    v18 = std::io::Write::write_fmt(&v20, &v33);
  }
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v20);
  return v18;
}
