__int64 __fastcall uu_dd::blocks::conv_block_unblock_helper(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r8
  char *v13; // r15
  size_t v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdi
  char *v18; // r15
  __int64 v20; // rsi
  char **v22; // rax
  char **v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rsi
  unsigned __int64 v26; // rdi
  __int64 v27; // r8
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // r10
  char *v33; // rdi
  __int64 v34; // r8
  __int64 v35; // r14
  __int64 v36; // r10
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r9
  char *v40; // rdi
  __int64 v41; // r8
  char *v42; // rdi
  __int64 v43; // rsi
  unsigned __int64 v44; // r9
  __int64 v45; // r10
  char *v46; // r8
  __int64 v47; // r9
  __int64 v49; // [rsp+8h] [rbp-1A0h] BYREF
  __int64 v50; // [rsp+10h] [rbp-198h]
  __int64 v51; // [rsp+18h] [rbp-190h]
  __int64 v52; // [rsp+20h] [rbp-188h] BYREF
  __int64 v53; // [rsp+28h] [rbp-180h]
  __int64 v54; // [rsp+30h] [rbp-178h]
  char **v55[2]; // [rsp+38h] [rbp-170h] BYREF
  unsigned __int64 v56; // [rsp+48h] [rbp-160h]
  _QWORD v57[12]; // [rsp+50h] [rbp-158h] BYREF
  _QWORD v58[12]; // [rsp+B0h] [rbp-F8h] BYREF
  _QWORD v59[19]; // [rsp+110h] [rbp-98h] BYREF

  switch ( *(_BYTE *)a3 )
  {
    case 0:
      v7 = *a2;
      v8 = a2[1];
      v9 = a2[2];
      if ( v9 )
      {
        v10 = *(_QWORD *)(a3 + 8);
        v11 = a2[2] & 3;
        if ( v9 >= 4 )
        {
          v36 = 0LL;
          do
          {
            *(_BYTE *)(v8 + v36) = *(_BYTE *)(v10 + *(unsigned __int8 *)(v8 + v36));
            *(_BYTE *)(v8 + v36 + 1) = *(_BYTE *)(v10 + *(unsigned __int8 *)(v8 + v36 + 1));
            *(_BYTE *)(v8 + v36 + 2) = *(_BYTE *)(v10 + *(unsigned __int8 *)(v8 + v36 + 2));
            v12 = v36 + 4;
            *(_BYTE *)(v8 + v36 + 3) = *(_BYTE *)(v10 + *(unsigned __int8 *)(v8 + v36 + 3));
            v36 = v12;
          }
          while ( (v9 & 0xFFFFFFFFFFFFFFFCLL) != v12 );
        }
        else
        {
          v12 = 0LL;
        }
        if ( (v9 & 3) != 0 )
        {
          v37 = v8 + v12;
          v38 = 0LL;
          do
          {
            *(_BYTE *)(v37 + v38) = *(_BYTE *)(v10 + *(unsigned __int8 *)(v37 + v38));
            ++v38;
          }
          while ( v11 != v38 );
        }
      }
      *(_QWORD *)a1 = v7;
      *(_QWORD *)(a1 + 8) = v8;
      *(_QWORD *)(a1 + 16) = v9;
      return a1;
    case 1:
      v18 = (char *)a2[1];
      uu_dd::blocks::block(&v49, v18, a2[2], *(_QWORD *)(a3 + 8), *(_BYTE *)(a3 + 1), a4);
      v58[0] = v50;
      v58[1] = v50;
      v58[2] = v49;
      v58[3] = v50 + 24 * v51;
      v58[4] = 0LL;
      v58[8] = 0LL;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, v58);
      goto LABEL_43;
    case 2:
      v18 = (char *)a2[1];
      uu_dd::blocks::unblock((char ***)a1, v18, a2[2], *(_QWORD *)(a3 + 8));
      goto LABEL_43;
    case 3:
      v18 = (char *)a2[1];
      uu_dd::blocks::block(&v52, v18, a2[2], *(_QWORD *)(a3 + 8), *(_BYTE *)(a3 + 1), a4);
      v20 = *(_QWORD *)(a3 + 16);
      v59[0] = v53;
      v59[1] = v53;
      v59[2] = v52;
      v59[3] = v53 + 24 * v54;
      v59[4] = v20;
      v59[5] = 0LL;
      v59[10] = 0LL;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, v59);
      goto LABEL_43;
    case 4:
      v13 = (char *)a2[1];
      v14 = a2[2];
      if ( v14 )
      {
        v15 = *(_QWORD *)(a3 + 16);
        v16 = a2[2] & 3;
        if ( v14 >= 4 )
        {
          v32 = 0LL;
          do
          {
            v13[v32] = *(_BYTE *)(v15 + (unsigned __int8)v13[v32]);
            v13[v32 + 1] = *(_BYTE *)(v15 + (unsigned __int8)v13[v32 + 1]);
            v13[v32 + 2] = *(_BYTE *)(v15 + (unsigned __int8)v13[v32 + 2]);
            v17 = v32 + 4;
            v13[v32 + 3] = *(_BYTE *)(v15 + (unsigned __int8)v13[v32 + 3]);
            v32 = v17;
          }
          while ( (v14 & 0xFFFFFFFFFFFFFFFCLL) != v17 );
        }
        else
        {
          v17 = 0LL;
        }
        if ( (v14 & 3) != 0 )
        {
          v33 = &v13[v17];
          v34 = 0LL;
          do
          {
            v33[v34] = *(_BYTE *)(v15 + (unsigned __int8)v33[v34]);
            ++v34;
          }
          while ( v16 != v34 );
        }
      }
      v35 = *a2;
      uu_dd::blocks::block(&v49, v13, v14, *(_QWORD *)(a3 + 8), *(_BYTE *)(a3 + 1), a4);
      v57[0] = v50;
      v57[1] = v50;
      v57[2] = v49;
      v57[3] = v50 + 24 * v51;
      v57[4] = 0LL;
      v57[8] = 0LL;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, v57);
      goto LABEL_35;
    case 5:
      v18 = (char *)a2[1];
      uu_dd::blocks::unblock(v55, v18, a2[2], *(_QWORD *)(a3 + 8));
      v22 = v55[0];
      v23 = v55[1];
      v24 = v56;
      if ( v56 )
      {
        v25 = *(_QWORD *)(a3 + 16);
        v26 = v56 & 3;
        if ( v56 >= 4 )
        {
          v44 = v56 & 0xFFFFFFFFFFFFFFFCLL;
          v45 = 0LL;
          do
          {
            *((_BYTE *)v23 + v45) = *(_BYTE *)(v25 + *((unsigned __int8 *)v23 + v45));
            *((_BYTE *)v23 + v45 + 1) = *(_BYTE *)(v25 + *((unsigned __int8 *)v23 + v45 + 1));
            *((_BYTE *)v23 + v45 + 2) = *(_BYTE *)(v25 + *((unsigned __int8 *)v23 + v45 + 2));
            v27 = v45 + 4;
            *((_BYTE *)v23 + v45 + 3) = *(_BYTE *)(v25 + *((unsigned __int8 *)v23 + v45 + 3));
            v45 = v27;
          }
          while ( v44 != v27 );
        }
        else
        {
          v27 = 0LL;
        }
        if ( (v24 & 3) != 0 )
        {
          v46 = (char *)v23 + v27;
          v47 = 0LL;
          do
          {
            v46[v47] = *(_BYTE *)(v25 + (unsigned __int8)v46[v47]);
            ++v47;
          }
          while ( v26 != v47 );
        }
      }
      *(_QWORD *)a1 = v22;
      *(_QWORD *)(a1 + 8) = v23;
      *(_QWORD *)(a1 + 16) = v24;
LABEL_43:
      v43 = *a2;
      if ( !*a2 )
        return a1;
      v42 = v18;
      break;
    case 6:
      v13 = (char *)a2[1];
      v28 = a2[2];
      if ( v28 )
      {
        v29 = *(_QWORD *)(a3 + 16);
        v30 = a2[2] & 3;
        if ( v28 >= 4 )
        {
          v39 = 0LL;
          do
          {
            v13[v39] = *(_BYTE *)(v29 + (unsigned __int8)v13[v39]);
            v13[v39 + 1] = *(_BYTE *)(v29 + (unsigned __int8)v13[v39 + 1]);
            v13[v39 + 2] = *(_BYTE *)(v29 + (unsigned __int8)v13[v39 + 2]);
            v31 = v39 + 4;
            v13[v39 + 3] = *(_BYTE *)(v29 + (unsigned __int8)v13[v39 + 3]);
            v39 = v31;
          }
          while ( (v28 & 0xFFFFFFFFFFFFFFFCLL) != v31 );
        }
        else
        {
          v31 = 0LL;
        }
        if ( (v28 & 3) != 0 )
        {
          v40 = &v13[v31];
          v41 = 0LL;
          do
          {
            v40[v41] = *(_BYTE *)(v29 + (unsigned __int8)v40[v41]);
            ++v41;
          }
          while ( v30 != v41 );
        }
      }
      v35 = *a2;
      uu_dd::blocks::unblock((char ***)a1, v13, v28, *(_QWORD *)(a3 + 8));
LABEL_35:
      if ( !v35 )
        return a1;
      v42 = v13;
      v43 = v35;
      break;
  }
  _rust_dealloc(v42, v43, 1LL);
  return a1;
}
