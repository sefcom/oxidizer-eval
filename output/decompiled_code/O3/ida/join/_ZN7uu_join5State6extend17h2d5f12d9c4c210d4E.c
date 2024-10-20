char __fastcall uu_join::State::extend(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int128 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  const void *current_key; // rbp
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // r14
  int v19; // eax
  bool v20; // zf
  bool v21; // sf
  __int64 v22; // r12
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  char v26; // [rsp+Fh] [rbp-E9h]
  __m256i v27; // [rsp+10h] [rbp-E8h] BYREF
  __int128 v28; // [rsp+30h] [rbp-C8h]
  unsigned __int64 v29; // [rsp+48h] [rbp-B0h]
  __int128 v30; // [rsp+50h] [rbp-A8h]
  __int64 v31; // [rsp+60h] [rbp-98h]
  _BYTE *v32; // [rsp+68h] [rbp-90h]
  __m256i v33; // [rsp+70h] [rbp-88h] BYREF
  __int128 v34; // [rsp+90h] [rbp-68h]
  _QWORD v35[2]; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v36; // [rsp+B0h] [rbp-48h]

  v5 = 0x8000000000000001LL;
  uu_join::State::next_line(&v27);
  v6 = v27.m256i_i64[0];
  if ( v27.m256i_i64[0] == 0x8000000000000001LL )
  {
LABEL_2:
    v31 = v27.m256i_i64[3];
    v30 = *(_OWORD *)&v27.m256i_u64[1];
    v27.m256i_i64[2] = v27.m256i_i64[3];
    *(_OWORD *)v27.m256i_i8 = v30;
    v7 = _rust_alloc(24LL, 8LL);
    if ( !v7 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    *(_QWORD *)(v7 + 16) = v27.m256i_i64[2];
    *(_OWORD *)v7 = *(_OWORD *)v27.m256i_i8;
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)&v8 = &off_FB048;
    *(_QWORD *)(a1 + 16) = &off_FB048;
    *(_QWORD *)a1 = v5;
  }
  else
  {
    v26 = *a3;
    v29 = 0x8000000000000000LL;
    v32 = a3;
    while ( 1 )
    {
      v31 = v27.m256i_i64[3];
      v30 = *(_OWORD *)&v27.m256i_u64[1];
      v36 = v28;
      if ( v6 == v29 )
        break;
      v33.m256i_i64[0] = v6;
      v33.m256i_i64[3] = v31;
      *(_OWORD *)&v33.m256i_u64[1] = v30;
      v34 = v36;
      current_key = (const void *)uu_join::State::get_current_key(a2);
      v15 = v14;
      *(_QWORD *)&v8 = uu_join::Line::get_field(&v33, a2[8]);
      if ( current_key && (_QWORD)v8 )
      {
        if ( v26 )
        {
          v35[0] = current_key;
          v35[1] = v15;
          *(_OWORD *)v27.m256i_i8 = v8;
          LOBYTE(v8) = <uu_join::CaseInsensitiveSlice as core::cmp::Ord>::cmp(v35, &v27);
        }
        else
        {
          v16 = v5;
          v17 = a1;
          v18 = v15 - *((_QWORD *)&v8 + 1);
          if ( v15 < *((_QWORD *)&v8 + 1) )
            *((_QWORD *)&v8 + 1) = v15;
          v19 = memcmp(current_key, (const void *)v8, *((size_t *)&v8 + 1));
          if ( v19 )
            v18 = v19;
          v20 = v18 == 0;
          v21 = v18 < 0;
          a1 = v17;
          v5 = v16;
          LOBYTE(v8) = !v20;
          if ( v21 )
          {
LABEL_21:
            v23 = *(_OWORD *)v33.m256i_i8;
            v24 = *(_OWORD *)&v33.m256i_u64[2];
            *(_OWORD *)(a1 + 32) = v34;
            *(_OWORD *)(a1 + 16) = v24;
            *(_OWORD *)a1 = v23;
            return v8;
          }
        }
      }
      else
      {
        LODWORD(v8) = -((_QWORD)v8 != 0LL);
        if ( current_key )
          goto LABEL_21;
      }
      if ( (_BYTE)v8 )
        goto LABEL_21;
      v28 = v34;
      v27 = v33;
      v22 = a2[2];
      if ( v22 == *a2 )
        alloc::raw_vec::RawVec<T,A>::grow_one(a2);
      v9 = a2[1];
      v10 = 48 * v22;
      v11 = *(_OWORD *)v27.m256i_i8;
      v12 = *(_OWORD *)&v27.m256i_u64[2];
      *(_OWORD *)(v9 + v10 + 32) = v28;
      *(_OWORD *)(v9 + v10 + 16) = v12;
      *(_OWORD *)(v9 + v10) = v11;
      a2[2] = v22 + 1;
      uu_join::State::next_line(&v27);
      v6 = v27.m256i_i64[0];
      if ( v27.m256i_i64[0] == v5 )
        goto LABEL_2;
    }
    LOBYTE(v8) = v29;
    *(_QWORD *)a1 = v29;
  }
  return v8;
}
