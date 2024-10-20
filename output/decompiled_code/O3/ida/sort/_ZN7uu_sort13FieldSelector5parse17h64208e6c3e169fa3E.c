__int64 *__fastcall uu_sort::FieldSelector::parse(__int64 *a1, void *a2, size_t a3, unsigned __int8 *a4)
{
  unsigned __int64 v6; // r12
  char *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // r14
  unsigned __int8 *v11; // r12
  char v12; // bp
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  __int128 v15; // kr00_16
  unsigned __int64 v16; // rbp
  size_t v17; // rax
  char *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // r10
  unsigned __int8 v24; // r11
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r13
  unsigned __int8 v27; // r9
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rsi
  __int64 v31; // r14
  __int64 v32; // rbx
  unsigned __int8 v33; // bp
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 *v36; // r8
  char v37; // dl
  __int64 v38; // rbx
  void *v39; // rax
  __int64 v40; // rbx
  unsigned __int64 v41; // r12
  unsigned __int8 v42; // r14
  __int64 v43; // rax
  void *v44; // r13
  unsigned __int64 v45; // rbx
  _OWORD *v46; // rax
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm2
  bool v51; // zf
  bool v52; // si
  unsigned __int8 v53; // [rsp+Fh] [rbp-C9h]
  unsigned __int64 v54; // [rsp+10h] [rbp-C8h]
  __int64 v55; // [rsp+10h] [rbp-C8h]
  __int64 v56; // [rsp+10h] [rbp-C8h]
  __int64 v58; // [rsp+18h] [rbp-C0h]
  unsigned int v59; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int16 v60; // [rsp+24h] [rbp-B4h]
  __int128 v61; // [rsp+28h] [rbp-B0h] BYREF
  __int128 v62; // [rsp+38h] [rbp-A0h]
  __int128 v63; // [rsp+48h] [rbp-90h]
  __int128 v64; // [rsp+58h] [rbp-80h]
  __int64 *v65; // [rsp+68h] [rbp-70h]
  __int64 v66; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v67; // [rsp+78h] [rbp-60h]
  unsigned __int8 v68; // [rsp+80h] [rbp-58h]
  unsigned int v69; // [rsp+81h] [rbp-57h]
  unsigned __int16 v70; // [rsp+85h] [rbp-53h]
  unsigned __int8 v71; // [rsp+87h] [rbp-51h]
  void *src; // [rsp+88h] [rbp-50h]
  __int64 v73; // [rsp+90h] [rbp-48h]
  unsigned __int64 v74; // [rsp+98h] [rbp-40h]
  __int64 v75; // [rsp+A0h] [rbp-38h]

  v65 = a1;
  v6 = 0LL;
  do
  {
    v7 = (char *)a2 + v6;
    if ( a3 - v6 > 0xF )
    {
      if ( core::slice::memchr::memchr_aligned(44LL, v7) != 1 )
      {
LABEL_14:
        v13 = 0LL;
        v10 = a3;
        goto LABEL_15;
      }
      v8 = v9;
    }
    else
    {
      if ( a3 == v6 )
        goto LABEL_14;
      v8 = 0LL;
      while ( v7[v8] != 44 )
      {
        if ( a3 - v6 == ++v8 )
          goto LABEL_14;
      }
    }
    v10 = v6 + v8 + 1;
    v11 = (unsigned __int8 *)(v8 + v6);
    if ( (unsigned __int64)v11 < a3 && v11[(_QWORD)a2] == 44 )
    {
      v12 = 1;
      v13 = v10;
      goto LABEL_16;
    }
    v6 = v10;
  }
  while ( v10 <= a3 );
  v13 = 0LL;
LABEL_15:
  v12 = 0;
  v11 = (unsigned __int8 *)a3;
LABEL_16:
  src = a2;
  uu_sort::FieldSelector::split_key_options(&v61, (unsigned __int8 *)a2, v11);
  v14 = *((_QWORD *)&v61 + 1);
  v15 = v62;
  if ( v12 )
  {
    v54 = *((_QWORD *)&v61 + 1);
    v16 = v61;
    v17 = a3;
    if ( v10 <= a3 )
    {
      do
      {
        v18 = (char *)src + v10;
        if ( a3 - v10 > 0xF )
        {
          if ( core::slice::memchr::memchr_aligned(44LL, v18) != 1 )
            break;
        }
        else
        {
          if ( a3 == v10 )
            break;
          v19 = 0LL;
          while ( v18[v19] != 44 )
          {
            if ( a3 - v10 == ++v19 )
              goto LABEL_32;
          }
        }
        v17 = v10 + v19;
        if ( v10 + v19 < a3 && *((_BYTE *)src + v17) == 44 )
          goto LABEL_33;
        v10 += v19 + 1;
      }
      while ( v10 <= a3 );
LABEL_32:
      v17 = a3;
    }
LABEL_33:
    uu_sort::FieldSelector::split_key_options(&v61, (unsigned __int8 *)src + v13, (unsigned __int8 *)(v17 - v13));
    v74 = *((_QWORD *)&v61 + 1);
    v20 = v61;
    if ( *((_QWORD *)&v15 + 1) )
      goto LABEL_34;
    if ( (_QWORD)v61 )
    {
      if ( *((_QWORD *)&v62 + 1) )
      {
LABEL_34:
        v73 = *((_QWORD *)&v62 + 1);
        a4 = (unsigned __int8 *)v62;
LABEL_35:
        v10 = 0x8000000000000000LL;
        v60 = 1536;
        v59 = 0;
        uu_sort::FieldSelector::parse_with_options::parse_key_settings(&v66, v15, *((_QWORD *)&v15 + 1), &v59);
        v21 = v66;
        if ( v66 == 0x8000000000000000LL )
        {
          uu_sort::KeyPosition::new((__int64)&v61, v16, v54, 1LL, (unsigned __int8)v67);
          v22 = *((_QWORD *)&v61 + 1);
          v23 = v62;
          v24 = BYTE8(v62);
          v25 = (unsigned __int64)((HIBYTE(v62) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v62 + 13)) << 32;
          v26 = v25 | *(unsigned int *)((char *)&v62 + 9);
          if ( (_QWORD)v61 )
          {
            v16 = v25 | *(unsigned int *)((char *)&v62 + 9);
            v27 = BYTE8(v62);
            v10 = v62;
            v21 = *((_QWORD *)&v61 + 1);
            goto LABEL_66;
          }
          if ( !v20 )
          {
            v27 = 2;
LABEL_60:
            if ( v23 )
            {
              v35 = ((unsigned __int64)v60 << 32) | v59;
              v34 = (unsigned __int64)v60 >> 8;
              v38 = v22;
              if ( v22 == 1 )
              {
                v36 = v65;
                if ( v23 == 1 )
                  v37 = (HIBYTE(v60) < 2u || (v24 | v27 ^ 2) != 0) && (unsigned __int64)v60 >> 8 != 2;
                else
                  v37 = (_DWORD)v34 != 2;
                v52 = v27 != 2;
                goto LABEL_81;
              }
              v51 = (_DWORD)v34 == 2;
LABEL_76:
              v37 = !v51;
              v52 = 1;
              v36 = v65;
LABEL_81:
              *v36 = v21;
              v36[1] = v10;
              v36[2] = (v16 << 8) | v27;
              v36[3] = v38;
              v36[4] = v23;
              *((_BYTE *)v36 + 40) = v24;
              *(_DWORD *)((char *)v36 + 41) = v26;
              *((_BYTE *)v36 + 47) = BYTE6(v26);
              *(_WORD *)((char *)v36 + 45) = WORD2(v26);
              *((_DWORD *)v36 + 12) = v35;
              *((_BYTE *)v36 + 52) = BYTE4(v35);
              *((_BYTE *)v36 + 53) = v34;
              *((_BYTE *)v36 + 54) = v52;
              goto LABEL_73;
            }
            goto LABEL_64;
          }
          v75 = *((_QWORD *)&v61 + 1);
          v53 = BYTE8(v62);
          v55 = v62;
          uu_sort::FieldSelector::parse_with_options::parse_key_settings(&v66, a4, v73, &v59);
          v21 = v66;
          if ( v66 == 0x8000000000000000LL )
          {
            uu_sort::KeyPosition::new((__int64)&v61, v20, v74, 0LL, (unsigned __int8)v67);
            v21 = *((_QWORD *)&v61 + 1);
            v10 = v62;
            v27 = BYTE8(v62);
            v16 = ((unsigned __int64)((HIBYTE(v62) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v62 + 13)) << 32) | *(unsigned int *)((char *)&v62 + 9);
            v23 = v55;
            v24 = v53;
            v22 = v75;
            if ( (_QWORD)v61 )
              goto LABEL_66;
            goto LABEL_60;
          }
        }
        v10 = v67;
        v27 = v68;
        v16 = ((unsigned __int64)((v71 << 16) | (unsigned int)v70) << 32) | v69;
        goto LABEL_66;
      }
      v10 = 0LL;
    }
    else
    {
      LOBYTE(v10) = 1;
      v20 = 0LL;
    }
    v14 = v54;
  }
  else
  {
    v16 = v61;
    v20 = 0LL;
    if ( *((_QWORD *)&v62 + 1) )
    {
      v54 = *((_QWORD *)&v61 + 1);
      goto LABEL_35;
    }
    LOBYTE(v10) = 1;
  }
  v21 = a4[125];
  uu_sort::KeyPosition::new((__int64)&v61, v16, v14, 1LL, a4[125]);
  v28 = (unsigned __int64)((HIBYTE(v62) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v62 + 13)) << 32;
  v26 = v28 | *(unsigned int *)((char *)&v62 + 9);
  v29 = *((_QWORD *)&v61 + 1);
  v23 = v62;
  v24 = BYTE8(v62);
  if ( (_QWORD)v61 )
  {
    v21 = *((_QWORD *)&v61 + 1);
    v10 = v62;
    v27 = BYTE8(v62);
    v16 = v28 | *(unsigned int *)((char *)&v62 + 9);
    goto LABEL_66;
  }
  v56 = v21;
  if ( (_BYTE)v10 )
  {
    v27 = 2;
  }
  else
  {
    v30 = v20;
    v31 = *((_QWORD *)&v61 + 1);
    v32 = v62;
    v33 = BYTE8(v62);
    uu_sort::KeyPosition::new((__int64)&v61, v30, v74, 0LL, v21);
    v29 = v31;
    v24 = v33;
    v23 = v32;
    v21 = *((_QWORD *)&v61 + 1);
    v10 = v62;
    v27 = BYTE8(v62);
    v16 = ((unsigned __int64)((HIBYTE(v62) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v62 + 13)) << 32) | *(unsigned int *)((char *)&v62 + 9);
    if ( (_QWORD)v61 )
      goto LABEL_66;
  }
  if ( v23 )
  {
    LOBYTE(v34) = a4[152];
    v35 = (a4[127] << 16) | (v56 + (a4[126] << 8)) | (a4[128] << 24) | ((unsigned __int64)a4[130] << 32);
    if ( v29 == 1 )
    {
      v36 = v65;
      if ( v23 == 1 )
        v37 = (_BYTE)v34 != 2 && ((v24 | v27 ^ 2) != 0 || (unsigned __int8)v34 < 2u);
      else
        v37 = (_BYTE)v34 != 2;
      v52 = v27 != 2;
      v38 = 1LL;
      goto LABEL_81;
    }
    v38 = v29;
    v51 = (_BYTE)v34 == 2;
    goto LABEL_76;
  }
LABEL_64:
  v21 = 59LL;
  v39 = (void *)_rust_alloc(59LL, 1LL);
  if ( !v39 )
    alloc::raw_vec::handle_error(1LL, 59LL);
  v10 = (unsigned __int64)v39;
  qmemcpy(v39, "invalid character index 0 for the start position of a field", 59);
  v27 = 59;
  v16 = 0LL;
LABEL_66:
  if ( !a3 )
  {
    v44 = &dword_0 + 1;
    goto LABEL_71;
  }
  v40 = v21;
  v41 = v10;
  if ( (a3 & 0x8000000000000000LL) != 0LL )
  {
    v58 = 0LL;
LABEL_84:
    alloc::raw_vec::handle_error(v58, a3);
  }
  v42 = v27;
  v58 = 1LL;
  v43 = _rust_alloc(a3, 1LL);
  if ( !v43 )
    goto LABEL_84;
  v44 = (void *)v43;
  v27 = v42;
  v10 = v41;
  v21 = v40;
LABEL_71:
  v45 = (v16 << 8) | v27;
  memcpy(v44, src, a3);
  *(_QWORD *)&v63 = v21;
  *((_QWORD *)&v63 + 1) = v10;
  *(_QWORD *)&v64 = v45;
  *((_QWORD *)&v61 + 1) = a3;
  *(_QWORD *)&v62 = v44;
  *((_QWORD *)&v62 + 1) = a3;
  LOBYTE(v61) = 3;
  v46 = (_OWORD *)_rust_alloc(64LL, 8LL);
  if ( !v46 )
    alloc::alloc::handle_alloc_error(8LL, 64LL);
  v47 = v61;
  v48 = v62;
  v49 = v63;
  v46[3] = v64;
  v46[2] = v49;
  v46[1] = v48;
  *v46 = v47;
  v36 = v65;
  *v65 = (__int64)v46;
  v36[1] = (__int64)&anon_d7f70ae2e91d4deb3ee5c65537f9ec21_36_llvm_14646808445695166917;
  v37 = 2;
LABEL_73:
  *((_BYTE *)v36 + 55) = v37;
  return v36;
}
