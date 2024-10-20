void __fastcall uu_shuf::find_seps(_QWORD *a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // r12
  unsigned __int8 v3; // bp
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rbx
  unsigned __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // r15
  __int64 v23; // rax
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // r13
  bool v28; // cc
  __int64 v29; // rbx
  unsigned int v30; // [rsp+Ch] [rbp-5Ch]
  __int64 v31; // [rsp+10h] [rbp-58h]
  unsigned __int64 v32; // [rsp+18h] [rbp-50h]
  unsigned __int64 v33; // [rsp+18h] [rbp-50h]
  unsigned __int64 v35; // [rsp+28h] [rbp-40h]

  v2 = a1[2];
  if ( v2 )
  {
    v3 = a2;
    if ( v2 != 1 || *(_QWORD *)(a1[1] + 8LL) )
    {
      v30 = a2;
      while ( 1 )
      {
        --v2;
        v6 = a1[2];
        if ( v2 >= v6 )
          core::panicking::panic_bounds_check(v2, v6, &off_F2470);
        v7 = a1[1];
        v8 = *(_QWORD *)(v7 + 16 * v2);
        v9 = *(_QWORD *)(v7 + 16 * v2 + 8);
        if ( v9 > 0xF )
        {
          if ( core::slice::memchr::memchr_aligned(v30, v8) == 1 )
          {
            v6 = a1[2];
LABEL_16:
            if ( v6 <= v2 )
              alloc::vec::Vec<T,A>::swap_remove::assert_failed(v2, v6, &off_F23A8);
            v35 = v2;
            v11 = a1[1];
            v12 = *(_QWORD *)(v11 + 16 * v2);
            v13 = *(_QWORD *)(v11 + 16 * v2 + 8);
            v14 = v6 - 1;
            *(_OWORD *)(v11 + 16 * v2) = *(_OWORD *)(v11 + 16 * v14);
            a1[2] = v14;
            v32 = v13;
            v31 = v12;
            v15 = v12;
            if ( memchr::arch::x86_64::memchr::memchr_raw::FN() )
            {
              v17 = v16;
              v18 = 0LL;
              v19 = v31;
              do
              {
                v24 = v17 - v19;
                v25 = v17 - v19 - v18;
                if ( v17 - v19 < v18 )
                  core::slice::index::slice_index_order_fail(v18, v17 - v19, &off_F2488);
                if ( v24 > v32 )
                  core::slice::index::slice_end_index_len_fail(v17 - v19, v32, &off_F2488);
                v26 = v19;
                v27 = a1[2];
                if ( v27 == *a1 )
                {
                  alloc::raw_vec::RawVec<T,A>::grow_one(a1, v15, v26);
                  v26 = v31;
                }
                v20 = a1[1];
                v21 = 16 * v27;
                *(_QWORD *)(v20 + v21) = v26 + v18;
                *(_QWORD *)(v20 + v21 + 8) = v25;
                a1[2] = v27 + 1;
                v22 = v24 + 1;
                v19 = v26;
                v15 = v17 + 1;
                v23 = memchr::arch::x86_64::memchr::memchr_raw::FN();
                v17 = v16;
                v18 = v22;
              }
              while ( v23 );
            }
            else
            {
              v22 = 0LL;
              v19 = v31;
            }
            v28 = v32 <= v22;
            v33 = v32 - v22;
            v2 = v35;
            v3 = a2;
            if ( !v28 )
            {
              v29 = a1[2];
              if ( v29 == *a1 )
              {
                alloc::raw_vec::RawVec<T,A>::grow_one(a1, v15, v16);
                v19 = v31;
              }
              v4 = a1[1];
              v5 = 16 * v29;
              *(_QWORD *)(v4 + v5) = v22 + v19;
              *(_QWORD *)(v4 + v5 + 8) = v33;
              a1[2] = v29 + 1;
            }
          }
        }
        else if ( v9 )
        {
          v10 = 0LL;
          while ( *(_BYTE *)(v8 + v10) != v3 )
          {
            if ( v9 == ++v10 )
              goto LABEL_6;
          }
          goto LABEL_16;
        }
LABEL_6:
        if ( !v2 )
          return;
      }
    }
    a1[2] = 0LL;
  }
}
