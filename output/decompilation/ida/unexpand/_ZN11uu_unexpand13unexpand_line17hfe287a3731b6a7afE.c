__int64 __fastcall uu_unexpand::unexpand_line(
        __int64 a1,
        _QWORD *a2,
        unsigned __int8 a3,
        char a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7)
{
  __int64 v7; // r13
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8
  char v10; // r14
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r15
  __int64 result; // rax
  __int64 v15; // r14
  unsigned __int8 v16; // bp
  __int64 v17; // r15
  __int64 v18; // r13
  __int64 v19; // r15
  unsigned __int64 v20; // rax
  bool v21; // cf
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rdi
  _QWORD *v25; // r12
  const void *v26; // rax
  size_t v27; // rdx
  size_t v28; // rbx
  __int64 v29; // r14
  unsigned __int64 v30; // rbp
  size_t v31; // rbx
  __int64 tabstop; // rax
  __int64 v33; // rdx
  const void *v34; // rax
  size_t v35; // rdx
  size_t v36; // rbx
  __int64 v37; // r14
  size_t v38; // r15
  const void *v39; // r12
  __int64 v40; // r13
  char v41; // [rsp+7h] [rbp-91h]
  char v42; // [rsp+8h] [rbp-90h]
  char v43; // [rsp+Fh] [rbp-89h]
  unsigned __int64 v44; // [rsp+10h] [rbp-88h]
  unsigned __int64 v48; // [rsp+38h] [rbp-60h]
  unsigned __int64 v50; // [rsp+48h] [rbp-50h]
  __int64 v51; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int8 v52; // [rsp+58h] [rbp-40h]
  __int64 v53; // [rsp+60h] [rbp-38h]

  v7 = a1;
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
  {
    v9 = a5 - 1;
    v10 = 3;
    v42 = 1;
    v11 = 0LL;
    v12 = 0LL;
    v44 = 0LL;
    v48 = *(_QWORD *)(a1 + 16);
    v50 = v9;
    while ( 1 )
    {
      v41 = v10;
      if ( v9 < v11 )
        break;
      v15 = *(_QWORD *)(v7 + 8);
      uu_unexpand::next_char_info((__int64)&v51, a4 != 0, v15, v8, v12);
      v16 = v52;
      v17 = v52;
      v18 = v53;
      v43 = v52;
      switch ( v52 )
      {
        case 0u:
        case 3u:
          v19 = v51;
          uu_unexpand::write_tabs(a2, a6, a7, v44, v11, v41 == 2, v42 & 1, a3 != 0);
          v20 = v11 + v19;
          v21 = v11 == 0;
          v22 = v11 - 1;
          v13 = 0LL;
          if ( !v21 )
            v13 = v22;
          if ( v16 == 3 )
            v13 = v20;
          v23 = v12 + v18;
          v24 = v12;
          v25 = a2;
          v26 = (const void *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                                v24,
                                v23,
                                v15,
                                v48,
                                &off_11D1A0);
          v28 = v27;
          v29 = a2[2];
          v30 = v23;
          if ( v27 < *a2 - v29 )
          {
            memcpy((void *)(v29 + a2[1]), v26, v27);
            v31 = v29 + v28;
            v42 = 0;
            v7 = a1;
            goto LABEL_21;
          }
          result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v26, v27);
          if ( result )
            return result;
          v42 = 0;
          v44 = v13;
LABEL_6:
          v7 = a1;
          goto LABEL_7;
        case 1u:
          goto LABEL_18;
        case 2u:
          tabstop = uu_unexpand::next_tabstop(a6, a7, v11);
          v17 = v33;
          if ( !tabstop )
            v17 = 1LL;
LABEL_18:
          v13 = v11 + v17;
          v30 = v12 + v18;
          if ( a3 | v42 & 1 )
            goto LABEL_6;
          v34 = (const void *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                                v12,
                                v12 + v18,
                                v15,
                                v48,
                                &off_11D188);
          v36 = v35;
          v25 = a2;
          v37 = a2[2];
          v7 = a1;
          if ( v35 >= *a2 - v37 )
          {
            result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v34, v35);
            v44 = v13;
            if ( result )
              return result;
          }
          else
          {
            memcpy((void *)(v37 + a2[1]), v34, v35);
            v31 = v37 + v36;
LABEL_21:
            v25[2] = v31;
            v44 = v13;
          }
LABEL_7:
          v11 = v13;
          v12 = v30;
          v8 = v48;
          v9 = v50;
          v10 = v43;
          if ( v30 >= v48 )
            goto LABEL_27;
          break;
      }
    }
    uu_unexpand::write_tabs(a2, a6, a7, v44, v11, v10 == 2, v42 & 1, 1);
    v38 = v48 - v12;
    if ( v48 < v12 )
      core::slice::index::slice_start_index_len_fail(v12, v48, &off_11D1B8);
    v39 = (const void *)(*(_QWORD *)(v7 + 8) + v12);
    v40 = a2[2];
    if ( v38 >= *a2 - v40 )
    {
      result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v39, v38);
      v13 = v11;
      v44 = v11;
      v7 = a1;
      if ( result )
        return result;
    }
    else
    {
      memcpy((void *)(v40 + a2[1]), v39, v38);
      a2[2] = v38 + v40;
      v13 = v11;
      v44 = v11;
      v7 = a1;
    }
  }
  else
  {
    v42 = 1;
    v10 = 3;
    v13 = 0LL;
    v44 = 0LL;
  }
LABEL_27:
  uu_unexpand::write_tabs(a2, a6, a7, v44, v13, v10 == 2, v42 & 1, 1);
  result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a2);
  if ( !result )
  {
    alloc::vec::Vec<T,A>::truncate(v7, 0LL);
    return 0LL;
  }
  return result;
}
