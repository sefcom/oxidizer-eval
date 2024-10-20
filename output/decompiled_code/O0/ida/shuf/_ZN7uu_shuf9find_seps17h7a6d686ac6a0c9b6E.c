void __fastcall uu_shuf::find_seps(_QWORD *a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // r15
  unsigned __int8 v3; // bp
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned int v11; // r13d
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 *v14; // rbx
  unsigned __int64 v15; // rsi
  _OWORD *v16; // rax
  __int64 v17; // r14
  unsigned __int64 v18; // rcx
  __int64 v19; // rbx
  unsigned __int64 v20; // r12
  __int64 (__fastcall *v21)(_QWORD, __int64, __int64); // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rbx
  unsigned __int64 v25; // rbp
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 (__fastcall *v29)(_QWORD, __int64, __int64); // rax
  __int64 v30; // rax
  unsigned __int64 v31; // r12
  __int64 v32; // rsi
  _QWORD *v33; // rdx
  unsigned int v34; // r14d
  __int64 v35; // r13
  bool v36; // cc
  __int64 v37; // rbx
  _QWORD *v38; // [rsp+8h] [rbp-60h]
  unsigned __int64 v39; // [rsp+10h] [rbp-58h]
  unsigned __int64 v40; // [rsp+10h] [rbp-58h]
  __int64 v41; // [rsp+18h] [rbp-50h]
  unsigned __int64 v43; // [rsp+28h] [rbp-40h]
  __int64 v44; // [rsp+30h] [rbp-38h]

  v2 = a1[2];
  if ( !v2 )
    return;
  v3 = a2;
  v38 = a1;
  if ( v2 != 1 )
  {
    while ( 1 )
    {
LABEL_10:
      v7 = a1[1];
      if ( !v7 )
        goto LABEL_37;
      if ( (v7 & 7) != 0 )
        goto LABEL_37;
      v8 = a1[2];
      if ( v8 >> 59 )
        goto LABEL_37;
      if ( v8 <= --v2 )
        core::panicking::panic_bounds_check(v2, v8, &off_1224A0);
      v9 = *(_QWORD *)(v7 + 16 * v2);
      v10 = *(_QWORD *)(v7 + 16 * v2 + 8);
      v11 = v3;
      if ( v10 > 0xF )
      {
        a1 = v38;
        if ( core::slice::memchr::memchr_aligned(v3, v9) == 1 )
        {
          v8 = v38[2];
LABEL_22:
          if ( v8 <= v2 )
            alloc::vec::Vec<T,A>::swap_remove::assert_failed(v2, v8, &off_1223B8);
          v13 = a1[1];
          v14 = (__int64 *)(v13 + 16 * v2);
          v15 = v8 - 1;
          v16 = (_OWORD *)(v13 + 16 * v15);
          if ( (((unsigned __int8)v14 | (unsigned __int8)(v13 + 16 * v15)) & 7) != 0 )
            core::panicking::panic_nounwind(anon_952b21e97a889c6613436287509e44a2_12_llvm_11215979972707939310, 104LL);
          v43 = v2;
          v17 = *v14;
          v18 = v14[1];
          *(_OWORD *)v14 = *v16;
          a1[2] = v15;
          v39 = v18;
          v19 = v17 + v18;
          v20 = 0LL;
          v21 = (__int64 (__fastcall *)(_QWORD, __int64, __int64))core::sync::atomic::atomic_load(
                                                                    &memchr::arch::x86_64::memchr::memchr_raw::FN,
                                                                    0LL);
          v41 = v17;
          v22 = v17;
          v44 = v19;
          if ( v21(v3, v17, v19) )
          {
            v24 = v23;
            v25 = 0LL;
            v26 = v17;
            do
            {
              v31 = v24 - v26;
              if ( v24 - v26 < 0 )
                core::hint::unreachable_unchecked::precondition_check();
              v32 = v26;
              v33 = v38;
              if ( v31 < v25 )
                core::slice::index::slice_index_order_fail(v25, v31, &off_1224B8);
              if ( v31 > v39 )
                core::slice::index::slice_end_index_len_fail(v31, v39, &off_1224B8);
              v34 = v11;
              v35 = v38[2];
              if ( v35 == *v38 )
              {
                alloc::raw_vec::RawVec<T,A>::grow_one(v38, v26, v38);
                v32 = v41;
                v33 = v38;
              }
              v27 = v33[1];
              v28 = 16 * v35;
              *(_QWORD *)(v27 + v28) = v32 + v25;
              *(_QWORD *)(v27 + v28 + 8) = v31 - v25;
              v33[2] = v35 + 1;
              v20 = v31 + 1;
              v26 = v32;
              v29 = (__int64 (__fastcall *)(_QWORD, __int64, __int64))core::sync::atomic::atomic_load(
                                                                        &memchr::arch::x86_64::memchr::memchr_raw::FN,
                                                                        0LL);
              v11 = v34;
              v22 = v24 + 1;
              v30 = v29(v34, v24 + 1, v44);
              v24 = v23;
              v25 = v20;
            }
            while ( v30 );
          }
          v36 = v39 <= v20;
          v40 = v39 - v20;
          v2 = v43;
          v3 = a2;
          a1 = v38;
          if ( !v36 )
          {
            v37 = v38[2];
            if ( v37 == *v38 )
            {
              alloc::raw_vec::RawVec<T,A>::grow_one(v38, v22, v23);
              a1 = v38;
            }
            v5 = a1[1];
            v6 = 16 * v37;
            *(_QWORD *)(v5 + v6) = v20 + v41;
            *(_QWORD *)(v5 + v6 + 8) = v40;
            a1[2] = v37 + 1;
          }
        }
      }
      else if ( v10 )
      {
        v12 = 0LL;
        while ( *(_BYTE *)(v9 + v12) != v3 )
        {
          if ( v10 == ++v12 )
            goto LABEL_9;
        }
        goto LABEL_22;
      }
LABEL_9:
      if ( !v2 )
        return;
    }
  }
  v4 = a1[1];
  if ( !v4 || (v4 & 7) != 0 )
LABEL_37:
    core::panicking::panic_nounwind(anon_952b21e97a889c6613436287509e44a2_23_llvm_11215979972707939310, 162LL);
  if ( *(_QWORD *)(v4 + 8) )
    goto LABEL_10;
  a1[2] = 0LL;
}
