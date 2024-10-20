_OWORD *__fastcall uu_df::filter_mount_list(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rcx
  _QWORD *v5; // rsi
  __int64 v6; // rax
  _OWORD *result; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rbp
  const void *v11; // rbx
  size_t v12; // r12
  const void *v13; // r15
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rbp
  const void *v17; // rbx
  size_t v18; // r12
  const void *v19; // r15
  __int64 v20; // r13
  const void *v21; // r12
  size_t v22; // rbx
  const void *v23; // rax
  size_t v24; // rdx
  bool v25; // al
  const void *v26; // rbx
  size_t v27; // r12
  const void *v28; // r15
  __int64 v29; // r13
  const void *v30; // rbx
  size_t v31; // r12
  const void *v32; // r15
  __int64 v33; // r13
  const void *v34; // r12
  __int64 v35; // rbx
  const void *v36; // rax
  size_t v37; // rdx
  __int64 v38; // r14
  unsigned __int64 v39; // rax
  __int64 v40; // rbp
  const void *v41; // rbx
  size_t v42; // r12
  const void *v43; // r15
  __int64 v44; // r13
  unsigned __int64 v45; // rbx
  int v47; // [rsp+Ch] [rbp-1ACh] BYREF
  __int64 v48; // [rsp+10h] [rbp-1A8h]
  __int128 v49; // [rsp+18h] [rbp-1A0h] BYREF
  unsigned __int64 v50; // [rsp+28h] [rbp-190h]
  _QWORD *v51; // [rsp+30h] [rbp-188h] BYREF
  _QWORD *v52; // [rsp+38h] [rbp-180h]
  __int64 v53; // [rsp+40h] [rbp-178h]
  _QWORD *v54; // [rsp+48h] [rbp-170h]
  __int64 v55; // [rsp+50h] [rbp-168h]
  _QWORD src[19]; // [rsp+58h] [rbp-160h] BYREF
  _BYTE v57[200]; // [rsp+F0h] [rbp-C8h] BYREF

  v55 = a1;
  *(_QWORD *)&v49 = 0LL;
  *((_QWORD *)&v49 + 1) = 8LL;
  v50 = 0LL;
  v4 = *a2;
  v5 = (_QWORD *)a2[1];
  v6 = a2[2];
  v51 = v5;
  v52 = v5;
  v53 = v4;
  v54 = &v5[19 * v6];
  if ( v6 )
  {
    do
    {
      v52 = v5 + 19;
      if ( *v5 == 0x8000000000000000LL )
        break;
      src[0] = *v5;
      memmove(&src[1], v5 + 1, 0x90uLL);
      if ( (src[18] & 1) != 0 && (*(_BYTE *)(a3 + 80) & 1) != 0
        || (src[18] & 0x100LL) != 0 && (*(_BYTE *)(a3 + 81) & 1) == 0 )
      {
        goto LABEL_3;
      }
      if ( *(_QWORD *)(a3 + 48) == 0x8000000000000000LL )
        goto LABEL_20;
      v8 = *(_QWORD *)(a3 + 56);
      if ( !v8 || (v8 & 7) != 0 || (v9 = *(_QWORD *)(a3 + 64), v9 > 0x555555555555555LL) )
LABEL_63:
        core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
      if ( !v9 )
      {
LABEL_20:
        if ( *(_QWORD *)(a3 + 24) != 0x8000000000000000LL )
        {
          v38 = *(_QWORD *)(a3 + 32);
          if ( !v38 )
            goto LABEL_63;
          if ( (v38 & 7) != 0 )
            goto LABEL_63;
          v39 = *(_QWORD *)(a3 + 40);
          if ( v39 > 0x555555555555555LL )
            goto LABEL_63;
          if ( !v39 )
            goto LABEL_3;
          v48 = 24 * v39;
          v40 = 0LL;
          while ( 1 )
          {
            v41 = *(const void **)(v38 + v40 + 8);
            v42 = *(_QWORD *)(v38 + v40 + 16);
            core::slice::raw::from_raw_parts::precondition_check(v41, 1LL, 1LL, v42);
            v43 = (const void *)src[7];
            v44 = src[8];
            core::slice::raw::from_raw_parts::precondition_check(src[7], 1LL, 1LL, src[8]);
            if ( v42 == v44 && !bcmp(v41, v43, v42) )
              break;
            v40 += 24LL;
            if ( v48 == v40 )
              goto LABEL_3;
          }
        }
        v15 = *((_QWORD *)&v49 + 1);
        if ( !*((_QWORD *)&v49 + 1) || (BYTE8(v49) & 7) != 0 || v50 >= 0xD79435E50D7944LL )
LABEL_62:
          core::panicking::panic_nounwind(
            "unsafe precondition(s) violated: slice::from_raw_parts requires the pointer to be aligned and non-null, and "
            "the total size of the slice not to exceed `isize::MAX`Error message contains invalid UTF-8",
            162LL);
        if ( !v50 )
        {
          v45 = 0LL;
LABEL_59:
          memcpy(v57, src, 0x98uLL);
          if ( v45 == (_QWORD)v49 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v49);
          memmove((void *)(*((_QWORD *)&v49 + 1) + 152 * v45), v57, 0x98uLL);
          v50 = v45 + 1;
          goto LABEL_4;
        }
        v48 = 152 * v50;
        v16 = 0LL;
        while ( 1 )
        {
          v17 = *(const void **)(v15 + v16 + 8);
          v18 = *(_QWORD *)(v15 + v16 + 16);
          core::slice::raw::from_raw_parts::precondition_check(v17, 1LL, 1LL, v18);
          v19 = (const void *)src[1];
          v20 = src[2];
          core::slice::raw::from_raw_parts::precondition_check(src[1], 1LL, 1LL, src[2]);
          if ( v18 == v20 && !bcmp(v17, v19, v18) )
          {
            v21 = (const void *)src[4];
            if ( !src[4] )
              goto LABEL_62;
            v22 = src[5];
            if ( src[5] < 0LL )
              goto LABEL_62;
            v47 = 0;
            v23 = (const void *)core::char::methods::encode_utf8_raw(47LL, &v47, 4LL);
            if ( v24 > v22 || bcmp(v23, v21, v24) )
              goto LABEL_66;
            v34 = *(const void **)(v15 + v16 + 32);
            if ( !v34 )
              goto LABEL_62;
            v35 = *(_QWORD *)(v15 + v16 + 40);
            if ( v35 < 0 )
              goto LABEL_62;
            v47 = 0;
            v36 = (const void *)core::char::methods::encode_utf8_raw(47LL, &v47, 4LL);
            if ( v37 <= v35 && !bcmp(v36, v34, v37) )
            {
LABEL_66:
              v25 = !src[11] || *(_QWORD *)(v15 + v16 + 88) == 0LL || src[11] <= *(_QWORD *)(v15 + v16 + 88);
              if ( src[14] >= *(_QWORD *)(v15 + v16 + 112) || !v25 )
              {
                v26 = (const void *)src[4];
                v27 = src[5];
                core::slice::raw::from_raw_parts::precondition_check(src[4], 1LL, 1LL, src[5]);
                v28 = *(const void **)(v15 + v16 + 32);
                v29 = *(_QWORD *)(v15 + v16 + 40);
                core::slice::raw::from_raw_parts::precondition_check(v28, 1LL, 1LL, v29);
                if ( v27 == v29 && !bcmp(v26, v28, v27) )
                  break;
                v30 = (const void *)src[13];
                v31 = src[14];
                core::slice::raw::from_raw_parts::precondition_check(src[13], 1LL, 1LL, src[14]);
                v32 = *(const void **)(v15 + v16 + 104);
                v33 = *(_QWORD *)(v15 + v16 + 112);
                core::slice::raw::from_raw_parts::precondition_check(v32, 1LL, 1LL, v33);
                if ( v31 != v33 || bcmp(v30, v32, v31) )
                  break;
              }
            }
          }
          v16 += 152LL;
          if ( v48 == v16 )
          {
            v45 = v50;
            goto LABEL_59;
          }
        }
      }
      else
      {
        v48 = 24 * v9;
        v10 = 0LL;
        while ( 1 )
        {
          v11 = *(const void **)(v8 + v10 + 8);
          v12 = *(_QWORD *)(v8 + v10 + 16);
          core::slice::raw::from_raw_parts::precondition_check(v11, 1LL, 1LL, v12);
          v13 = (const void *)src[7];
          v14 = src[8];
          core::slice::raw::from_raw_parts::precondition_check(src[7], 1LL, 1LL, src[8]);
          if ( v12 == v14 && !bcmp(v11, v13, v12) )
            break;
          v10 += 24LL;
          if ( v48 == v10 )
            goto LABEL_20;
        }
      }
LABEL_3:
      core::ptr::drop_in_place<uucore::features::fsext::MountInfo>(src);
LABEL_4:
      v5 = v52;
    }
    while ( v52 != v54 );
  }
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v51);
  result = (_OWORD *)v55;
  *(_QWORD *)(v55 + 16) = v50;
  *result = v49;
  return result;
}
