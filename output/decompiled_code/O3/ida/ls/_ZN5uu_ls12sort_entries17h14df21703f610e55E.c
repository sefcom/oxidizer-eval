__int64 __fastcall uu_ls::sort_entries(_OWORD *a1, unsigned __int64 a2, __int64 a3, char *a4)
{
  __int64 v4; // r15
  unsigned __int8 v5; // bp
  __int64 result; // rax
  _OWORD *v7; // r14
  unsigned __int64 v8; // rbx
  char *v9; // r14
  char *v10; // r12
  __int64 v11; // r13
  char *v12; // r14
  __int64 v13; // r15
  char *v14; // rbp
  char v15; // al
  __int128 *v16; // rcx
  __int128 *v17; // rdx
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  __int128 v22; // xmm0
  __int128 v23; // xmm0
  __int128 v24; // xmm0
  __int128 v25; // xmm0
  __int128 v26; // xmm0
  __int128 v27; // xmm0
  __int128 v28; // xmm0
  __int128 v29; // xmm0
  __int128 v30; // xmm0
  __int128 v31; // xmm0
  __int128 v32; // xmm0
  __int128 v33; // xmm0
  __int128 v34; // xmm0
  __int128 v35; // xmm0
  __int128 v36; // xmm0
  char v37; // [rsp+Eh] [rbp-18Ah] BYREF
  unsigned __int8 v38; // [rsp+Fh] [rbp-189h]
  char *v39; // [rsp+10h] [rbp-188h] BYREF
  void *dest; // [rsp+18h] [rbp-180h]
  unsigned __int64 v41; // [rsp+20h] [rbp-178h]
  __int64 v42; // [rsp+28h] [rbp-170h]
  char *v43; // [rsp+30h] [rbp-168h]
  _QWORD src[44]; // [rsp+38h] [rbp-160h] BYREF

  v4 = a3;
  v5 = *(_BYTE *)(a3 + 249);
  result = v5;
  switch ( v5 )
  {
    case 0u:
      break;
    case 1u:
      result = (__int64)&v37;
      src[0] = &v37;
      if ( a2 >= 2 )
      {
        v7 = a1;
        v8 = a2;
        if ( a2 >= 0x15 )
          result = core::slice::sort::stable::driftsort_main(a1, a2, src);
        else
          result = core::slice::sort::shared::smallsort::insertion_sort_shift_left(a1, a2, 1LL, src);
        goto LABEL_35;
      }
      break;
    case 2u:
      v39 = a4;
      result = (__int64)&v39;
      src[0] = &v39;
      if ( a2 >= 2 )
      {
        v7 = a1;
        v8 = a2;
        if ( a2 >= 0x15 )
          result = core::slice::sort::stable::driftsort_main(a1, a2, src);
        else
          result = core::slice::sort::shared::smallsort::insertion_sort_shift_left(a1);
        goto LABEL_35;
      }
      break;
    case 3u:
      src[0] = a4;
      src[1] = a3;
      result = (__int64)src;
      v39 = (char *)src;
      if ( a2 >= 2 )
      {
        v7 = a1;
        v8 = a2;
        if ( a2 >= 0x15 )
          result = core::slice::sort::stable::driftsort_main(a1, a2, &v39);
        else
          result = core::slice::sort::shared::smallsort::insertion_sort_shift_left(a1, a2, 1LL, &v39);
        goto LABEL_35;
      }
      break;
    case 4u:
      v38 = *(_BYTE *)(a3 + 249);
      v42 = a3;
      dest = a1;
      result = (__int64)&v37;
      v39 = &v37;
      v41 = a2;
      if ( a2 >= 2 )
      {
        if ( v41 >= 0x15 )
        {
          result = core::slice::sort::stable::driftsort_main(dest, v41, &v39);
        }
        else
        {
          v9 = (char *)dest + 304 * v41;
          v10 = (char *)dest + 304;
          v11 = 0LL;
          v43 = v9;
          do
          {
            result = alloc::slice::<impl [T]>::sort_by::{{closure}}(v10, v10 - 304);
            if ( (_BYTE)result )
            {
              memcpy(src, v10, 0x130uLL);
              v13 = v11;
              v14 = v10;
              while ( 1 )
              {
                v12 = v14 - 304;
                memcpy(v14, v14 - 304, 0x130uLL);
                if ( !v13 )
                  break;
                v15 = alloc::slice::<impl [T]>::sort_by::{{closure}}(src, v14 - 608);
                v13 += 304LL;
                v14 -= 304;
                if ( !v15 )
                  goto LABEL_9;
              }
              v12 = (char *)dest;
LABEL_9:
              result = (__int64)memcpy(v12, src, 0x130uLL);
              v9 = v43;
            }
            v10 += 304;
            v11 -= 304LL;
          }
          while ( v10 != v9 );
        }
      }
      a2 = v41;
      a1 = dest;
      v4 = v42;
      v5 = v38;
      break;
    case 5u:
      result = (__int64)&v37;
      src[0] = &v37;
      if ( a2 >= 2 )
      {
        v7 = a1;
        v8 = a2;
        if ( a2 >= 0x15 )
          result = core::slice::sort::stable::driftsort_main(a1, a2, src);
        else
          result = core::slice::sort::shared::smallsort::insertion_sort_shift_left(a1, a2, 1LL, src);
        goto LABEL_35;
      }
      break;
    case 6u:
      result = (__int64)&v37;
      src[0] = &v37;
      if ( a2 >= 2 )
      {
        v7 = a1;
        v8 = a2;
        if ( a2 >= 0x15 )
          result = core::slice::sort::stable::driftsort_main(a1, a2, src);
        else
          result = core::slice::sort::shared::smallsort::insertion_sort_shift_left(a1, a2, 1LL, src);
LABEL_35:
        a1 = v7;
        a2 = v8;
      }
      break;
  }
  if ( *(_BYTE *)(v4 + 231) && a2 >= 2 )
  {
    result = a2 >> 1;
    v16 = a1 + 18;
    v17 = &a1[19 * a2 - 1];
    do
    {
      v18 = *(v16 - 18);
      *(v16 - 18) = *(v17 - 18);
      *(v17 - 18) = v18;
      v19 = *(v16 - 17);
      *(v16 - 17) = *(v17 - 17);
      *(v17 - 17) = v19;
      v20 = *(v16 - 16);
      *(v16 - 16) = *(v17 - 16);
      *(v17 - 16) = v20;
      v21 = *(v16 - 15);
      *(v16 - 15) = *(v17 - 15);
      *(v17 - 15) = v21;
      v22 = *(v16 - 14);
      *(v16 - 14) = *(v17 - 14);
      *(v17 - 14) = v22;
      v23 = *(v16 - 13);
      *(v16 - 13) = *(v17 - 13);
      *(v17 - 13) = v23;
      v24 = *(v16 - 12);
      *(v16 - 12) = *(v17 - 12);
      *(v17 - 12) = v24;
      v25 = *(v16 - 11);
      *(v16 - 11) = *(v17 - 11);
      *(v17 - 11) = v25;
      v26 = *(v16 - 10);
      *(v16 - 10) = *(v17 - 10);
      *(v17 - 10) = v26;
      v27 = *(v16 - 9);
      *(v16 - 9) = *(v17 - 9);
      *(v17 - 9) = v27;
      v28 = *(v16 - 8);
      *(v16 - 8) = *(v17 - 8);
      *(v17 - 8) = v28;
      v29 = *(v16 - 7);
      *(v16 - 7) = *(v17 - 7);
      *(v17 - 7) = v29;
      v30 = *(v16 - 6);
      *(v16 - 6) = *(v17 - 6);
      *(v17 - 6) = v30;
      v31 = *(v16 - 5);
      *(v16 - 5) = *(v17 - 5);
      *(v17 - 5) = v31;
      v32 = *(v16 - 4);
      *(v16 - 4) = *(v17 - 4);
      *(v17 - 4) = v32;
      v33 = *(v16 - 3);
      *(v16 - 3) = *(v17 - 3);
      *(v17 - 3) = v33;
      v34 = *(v16 - 2);
      *(v16 - 2) = *(v17 - 2);
      *(v17 - 2) = v34;
      v35 = *(v16 - 1);
      *(v16 - 1) = *(v17 - 1);
      *(v17 - 1) = v35;
      v36 = *v16;
      *v16 = *v17;
      *v17 = v36;
      v16 += 19;
      v17 -= 19;
      --result;
    }
    while ( result );
  }
  if ( v5 )
  {
    if ( *(_BYTE *)(v4 + 237) )
    {
      result = (__int64)&v37;
      src[0] = &v37;
      if ( a2 >= 2 )
      {
        if ( a2 >= 0x15 )
          return core::slice::sort::stable::driftsort_main(a1, a2, src);
        else
          return core::slice::sort::shared::smallsort::insertion_sort_shift_left(a1, a2, 1LL, src);
      }
    }
  }
  return result;
}
