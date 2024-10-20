        __int64 a7)
{
  __int64 v7; // r12
  unsigned __int64 v8; // rbp
  double v9; // r15
  __int64 v10; // rax
  unsigned __int8 *v11; // r14
  __int64 v12; // rbx
  __int64 *v13; // rax
  _QWORD *v14; // rcx
  bool v15; // zf
  __int64 v16; // rcx
  unsigned __int64 range; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r13
  __int64 v20; // r12
  unsigned int v21; // eax
  _QWORD *v22; // rdi
  char v23; // bp
  unsigned __int64 leading_gen; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  bool v27; // cf
  unsigned __int64 v28; // rdx
  char v29; // al
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r13
  _QWORD *v35; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v36; // [rsp+8h] [rbp-B0h]
  _QWORD *v37; // [rsp+10h] [rbp-A8h]
  _QWORD *v38; // [rsp+18h] [rbp-A0h]
  _QWORD *v39; // [rsp+20h] [rbp-98h]
  _QWORD *v42; // [rsp+38h] [rbp-80h]
  __int64 v43; // [rsp+40h] [rbp-78h]
  __int64 v44; // [rsp+48h] [rbp-70h]
  __int64 v45; // [rsp+58h] [rbp-60h] BYREF
  double v46; // [rsp+60h] [rbp-58h]
  unsigned __int64 v47; // [rsp+68h] [rbp-50h]
  unsigned __int64 v48; // [rsp+70h] [rbp-48h]
  __int64 v49; // [rsp+7Ch] [rbp-3Ch] BYREF
  bool v50; // [rsp+84h] [rbp-34h]

  v7 = a6;
  v8 = a3;
  v9 = *(double *)&a2;
  *(_QWORD *)(a6 + 16) = 0LL;
  v35 = a5;
  if ( *(_BYTE *)(a7 + 96) )
  {
    uu_sort::tokenize(a2, a3, *(unsigned int *)(a7 + 120), a6);
    a5 = v35;
  }
  v10 = *(_QWORD *)(a7 + 16);
  if ( v10 )
  {
    v11 = *(unsigned __int8 **)(a7 + 8);
    v38 = a5 + 2;
    v42 = a5 + 3;
    v37 = a5 + 6;
    v39 = a5 + 8;
    v12 = 56 * v10;
    v36 = v8;
    v44 = v7;
    do
    {
      if ( v11[54] )
        v16 = *(_QWORD *)(v7 + 8);
      else
        v16 = 0LL;
      range = uu_sort::FieldSelector::get_range(v11, *(_QWORD *)&v9, v8, v16, *(_QWORD *)(v7 + 16));
      v19 = v18 - range;
      if ( v18 < range )
LABEL_69:
        core::str::slice_error_fail(*(_QWORD *)&v9, v8, range, v18, &off_192B00);
      if ( range )
      {
        if ( range >= v8 )
        {
          if ( range != v8 )
            goto LABEL_69;
        }
        else if ( *(char *)(*(_QWORD *)&v9 + range) <= -65 )
        {
          goto LABEL_69;
        }
      }
      if ( v18 )
      {
        if ( v18 >= v8 )
        {
          if ( v18 != v8 )
            goto LABEL_69;
        }
        else if ( *(char *)(*(_QWORD *)&v9 + v18) <= -65 )
        {
          goto LABEL_69;
        }
      }
      v20 = *(_QWORD *)&v9 + range;
      v21 = v11[53];
      if ( v21 >= 2 )
      {
        if ( v21 == 2 )
        {
          leading_gen = uu_sort::get_leading_gen(v20, v19, v18, v18);
          v26 = v25;
          v27 = v25 < leading_gen;
          v28 = v25 - leading_gen;
          if ( v27 )
            goto LABEL_71;
          if ( leading_gen )
          {
            if ( leading_gen >= v19 )
            {
              if ( leading_gen != v19 )
                goto LABEL_71;
            }
            else if ( *(char *)(v20 + leading_gen) <= -65 )
            {
              goto LABEL_71;
            }
          }
          if ( v26 )
          {
            if ( v26 >= v19 )
            {
              if ( v26 != v19 )
LABEL_71:
                core::str::slice_error_fail(v20, v19, leading_gen, v26, &off_192B30);
            }
            else if ( *(char *)(v20 + v26) <= -65 )
            {
              goto LABEL_71;
            }
          }
          core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(&v45, leading_gen + v20, v28);
          if ( (_BYTE)v45 )
          {
            v20 = 0LL;
            v22 = v35;
          }
          else
          {
            v22 = v35;
            v20 = 2LL;
            if ( v46 > -INFINITY )
            {
              v20 = 3 - ((v46 < INFINITY) - 1LL);
              v9 = v46;
            }
          }
          v23 = 2;
        }
        else
        {
          v23 = 4;
          v9 = *(double *)&v19;
          v22 = v35;
        }
      }
      else
      {
        v50 = (_BYTE)v21 == 1;
        v49 = 0x2E00110000LL;
        uu_sort::numeric_str_cmp::NumInfo::parse(&v45, v20, v19, &v49);
        *(_QWORD *)&v9 = v48 - v47;
        v22 = v35;
        if ( v48 < v47 )
          goto LABEL_70;
        v23 = LOBYTE(v46);
        if ( v47 )
        {
          if ( v47 >= v19 )
          {
            if ( v47 != v19 )
              goto LABEL_70;
          }
          else if ( *(char *)(v20 + v47) <= -65 )
          {
            goto LABEL_70;
          }
        }
        if ( v48 )
        {
          if ( v48 >= v19 )
          {
            if ( v48 != v19 )
LABEL_70:
              core::str::slice_error_fail(v20, v19, v47, v48, &off_192B18);
          }
          else if ( *(char *)(v20 + v48) <= -65 )
          {
            goto LABEL_70;
          }
        }
        v43 = v45;
        v20 += v47;
      }
      v29 = v23 - 2;
      if ( (unsigned __int8)(v23 - 2) >= 3u )
        v29 = 1;
      if ( v29 == 2 )
      {
        v8 = v36;
        if ( !v11[55] )
          goto LABEL_7;
        v33 = v22[2];
        if ( v33 == *v22 )
        {
          alloc::raw_vec::RawVec<T,A>::grow_one();
          v22 = v35;
        }
        v13 = (__int64 *)(v22[1] + 16 * v33);
        *v13 = v20;
        v14 = v38;
      }
      else if ( v29 == 1 )
      {
        v30 = v22[5];
        if ( v30 == v22[3] )
        {
          alloc::raw_vec::RawVec<T,A>::grow_one(v42);
          v22 = v35;
        }
        v31 = v22[4];
        v32 = 16 * v30;
        *(_QWORD *)(v31 + v32) = v43;
        *(_BYTE *)(v31 + v32 + 8) = v23 & 1;
        v22[5] = v30 + 1;
        v33 = v22[2];
        if ( v33 == *v22 )
        {
          alloc::raw_vec::RawVec<T,A>::grow_one();
          v22 = v35;
        }
        v13 = (__int64 *)(v22[1] + 16 * v33);
        *v13 = v20;
        v14 = v38;
        v8 = v36;
      }
      else
      {
        v33 = *v39;
        v8 = v36;
        if ( *v39 == *v37 )
        {
          alloc::raw_vec::RawVec<T,A>::grow_one(v37);
          v22 = v35;
        }
        v13 = (__int64 *)(v22[7] + 16 * v33);
        *v13 = v20;
        v14 = v39;
      }
      *((double *)v13 + 1) = v9;
      *v14 = v33 + 1;
LABEL_7:
      v11 += 56;
      v15 = v12 == 56;
      v12 -= 56LL;
      v9 = *(double *)&a2;
      v7 = v44;
    }
    while ( !v15 );
  }
  *a1 = v9;
  *((_QWORD *)a1 + 1) = v8;
  *((_QWORD *)a1 + 2) = a4;
  return a1;
}
