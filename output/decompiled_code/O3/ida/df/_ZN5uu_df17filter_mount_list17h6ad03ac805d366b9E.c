__int64 __fastcall uu_df::filter_mount_list(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // r13
  const void *v11; // rbx
  size_t v12; // r14
  __int64 v13; // r15
  __int64 v14; // rbx
  size_t v15; // rbp
  __int64 v16; // r14
  __int64 i; // r12
  unsigned __int64 v18; // rax
  size_t v19; // r15
  const void *v20; // rbx
  size_t v21; // r14
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // r12
  size_t v25; // r15
  char v27; // [rsp+Eh] [rbp-18Ah]
  char v28; // [rsp+Fh] [rbp-189h]
  size_t v29; // [rsp+10h] [rbp-188h]
  _BYTE *s1; // [rsp+18h] [rbp-180h]
  size_t v31; // [rsp+20h] [rbp-178h]
  __int64 v32; // [rsp+28h] [rbp-170h]
  __int128 v33; // [rsp+30h] [rbp-168h] BYREF
  __int64 v34; // [rsp+40h] [rbp-158h]
  void *v35; // [rsp+48h] [rbp-150h]
  _QWORD *v36; // [rsp+50h] [rbp-148h]
  void *v37; // [rsp+58h] [rbp-140h]
  __int64 v38; // [rsp+60h] [rbp-138h]
  __int64 v39; // [rsp+68h] [rbp-130h]
  __int64 v40; // [rsp+70h] [rbp-128h]
  __int64 v41; // [rsp+78h] [rbp-120h]
  unsigned __int64 v42; // [rsp+80h] [rbp-118h]
  __int64 v43; // [rsp+88h] [rbp-110h]
  __int64 v44; // [rsp+90h] [rbp-108h]
  __int64 v45; // [rsp+98h] [rbp-100h]
  __int64 v46; // [rsp+A0h] [rbp-F8h]
  __int64 v47; // [rsp+A8h] [rbp-F0h]
  _QWORD *v48; // [rsp+B0h] [rbp-E8h] BYREF
  _QWORD *v49; // [rsp+B8h] [rbp-E0h]
  __int64 v50; // [rsp+C0h] [rbp-D8h]
  _QWORD *v51; // [rsp+C8h] [rbp-D0h]
  _QWORD src[25]; // [rsp+D0h] [rbp-C8h] BYREF

  v4 = a1;
  *(_QWORD *)&v33 = 0LL;
  *((_QWORD *)&v33 + 1) = 8LL;
  v34 = 0LL;
  v5 = *a2;
  v6 = (_QWORD *)a2[1];
  v7 = a2[2];
  v48 = v6;
  v49 = v6;
  v50 = v5;
  v36 = &v6[19 * v7];
  v51 = v36;
  if ( !v7 )
    goto LABEL_63;
  v40 = a1;
  v28 = *(_BYTE *)(a3 + 80);
  v27 = *(_BYTE *)(a3 + 81);
  v45 = *(_QWORD *)(a3 + 48);
  v39 = *(_QWORD *)(a3 + 56);
  v8 = *(_QWORD *)(a3 + 64);
  v44 = *(_QWORD *)(a3 + 24);
  v38 = *(_QWORD *)(a3 + 32);
  v9 = *(_QWORD *)(a3 + 40);
  v43 = v8;
  v47 = 24 * v8;
  v41 = v9;
  v46 = 24 * v9;
  do
  {
    v10 = v6 + 19;
    if ( *v6 == 0x8000000000000000LL )
      goto LABEL_62;
    src[0] = *v6;
    memcpy(&src[1], v6 + 1, 0x90uLL);
    if ( LOBYTE(src[18]) && v28 || BYTE1(src[18]) && !v27 )
      goto LABEL_8;
    if ( v45 != 0x8000000000000000LL && v43 )
    {
      v11 = (const void *)src[7];
      v12 = src[8];
      v13 = 0LL;
      while ( *(_QWORD *)(v39 + v13 + 16) != v12 || bcmp(*(const void **)(v39 + v13 + 8), v11, v12) )
      {
        v13 += 24LL;
        if ( v47 == v13 )
          goto LABEL_18;
      }
      goto LABEL_8;
    }
LABEL_18:
    if ( v44 != 0x8000000000000000LL )
    {
      if ( !v41 )
        goto LABEL_8;
      v20 = (const void *)src[7];
      v21 = src[8];
      v22 = 0LL;
      while ( *(_QWORD *)(v38 + v22 + 16) != v21 || bcmp(*(const void **)(v38 + v22 + 8), v20, v21) )
      {
        v22 += 24LL;
        if ( v46 == v22 )
          goto LABEL_8;
      }
    }
    v14 = *((_QWORD *)&v33 + 1);
    v32 = v34;
    if ( v34 )
    {
      v37 = (void *)src[1];
      v15 = src[2];
      s1 = (_BYTE *)src[4];
      v31 = src[5];
      v29 = src[14];
      v35 = (void *)src[13];
      v42 = src[11];
      if ( !src[11] )
      {
        v23 = 152 * v34;
        v24 = 0LL;
        while ( 1 )
        {
          if ( *(_QWORD *)(v14 + v24 + 16) == v15
            && !bcmp(*(const void **)(v14 + v24 + 8), v37, v15)
            && (!v31 || *s1 != 47 || *(_QWORD *)(v14 + v24 + 40) && **(_BYTE **)(v14 + v24 + 32) == 47) )
          {
            v25 = *(_QWORD *)(v14 + v24 + 112);
            if ( v29 >= v25
              && (v31 == *(_QWORD *)(v14 + v24 + 40) && !bcmp(s1, *(const void **)(v14 + v24 + 32), v31)
               || v29 != v25
               || bcmp(v35, *(const void **)(v14 + v24 + 104), v29)) )
            {
              break;
            }
          }
          v24 += 152LL;
          if ( v23 == v24 )
            goto LABEL_59;
        }
LABEL_8:
        core::ptr::drop_in_place<uucore::features::fsext::MountInfo>(src);
        goto LABEL_9;
      }
      v16 = 152 * v34;
      for ( i = 0LL; v16 != i; i += 152LL )
      {
        if ( *(_QWORD *)(v14 + i + 16) != v15
          || bcmp(*(const void **)(v14 + i + 8), v37, v15)
          || v31 && *s1 == 47 && (!*(_QWORD *)(v14 + i + 40) || **(_BYTE **)(v14 + i + 32) != 47) )
        {
          continue;
        }
        v18 = *(_QWORD *)(v14 + i + 88);
        v19 = *(_QWORD *)(v14 + i + 112);
        if ( v18 )
        {
          if ( v29 < v19 && v42 <= v18 )
            continue;
        }
        else if ( v29 < v19 )
        {
          continue;
        }
        if ( v31 == *(_QWORD *)(v14 + i + 40) && !bcmp(s1, *(const void **)(v14 + i + 32), v31)
          || v29 != v19
          || bcmp(v35, *(const void **)(v14 + i + 104), v29) )
        {
          goto LABEL_8;
        }
      }
    }
LABEL_59:
    if ( v32 == (_QWORD)v33 )
    {
      alloc::raw_vec::RawVec<T,A>::grow_one(&v33);
      v14 = *((_QWORD *)&v33 + 1);
    }
    memcpy((void *)(v14 + 152 * v32), src, 0x98uLL);
    v34 = v32 + 1;
LABEL_9:
    v6 += 19;
  }
  while ( v10 != v36 );
  v10 = v36;
LABEL_62:
  v49 = v10;
  v4 = v40;
LABEL_63:
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v48);
  *(_QWORD *)(v4 + 16) = v34;
  *(_OWORD *)v4 = v33;
  return v4;
}
