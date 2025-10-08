__int64 __fastcall uu_tac::buffer_tac_regex(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rbp
  bool v10; // cf
  __int64 v11; // rax
  __int64 v12; // rdx
  const void *v13; // rax
  size_t v14; // rdx
  size_t v15; // rbx
  __int64 v16; // r15
  __int64 v17; // r15
  const void *v18; // rax
  size_t v19; // rdx
  size_t v20; // rbx
  __int64 v21; // r14
  __int64 v23; // rbx
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdx
  const void *v27; // rax
  size_t v28; // rdx
  size_t v29; // rbx
  __int64 v30; // r15
  __int64 v31; // [rsp+8h] [rbp-90h] BYREF
  __int64 v32; // [rsp+10h] [rbp-88h]
  __int64 v33; // [rsp+18h] [rbp-80h]
  __int64 v34; // [rsp+30h] [rbp-68h]
  __int64 v35; // [rsp+38h] [rbp-60h]
  __int64 v36; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v37[10]; // [rsp+48h] [rbp-50h] BYREF

  v35 = a4;
  v34 = a3;
  v36 = std::io::stdio::stdout();
  v6 = std::io::stdio::Stdout::lock(&v36);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&v31, v6);
  if ( a2 )
  {
    v7 = a2 - 1;
    if ( a5 )
    {
      v8 = a2;
      v9 = a2;
      while ( 1 )
      {
        v11 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                0LL,
                v8,
                a1,
                a2,
                &off_233AB0);
        regex::regex::bytes::Regex::find_at(v37, v34, v35, v11, v12, v7);
        if ( v37[0] )
        {
          v13 = (const void *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                                v7,
                                v9,
                                a1,
                                a2,
                                &off_233AE0);
          v15 = v14;
          v16 = v33;
          if ( v14 < v31 - v33 )
          {
            memcpy((void *)(v33 + v32), v13, v14);
            v33 = v15 + v16;
            v9 = v7;
            v8 = v7;
          }
          else
          {
            v17 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v31, v13, v14);
            v9 = v7;
            v8 = v7;
            if ( v17 )
              goto LABEL_14;
          }
        }
        v10 = v7-- != 0;
        if ( !v10 )
          goto LABEL_11;
      }
    }
    v23 = a2;
    v24 = a2;
    while ( 1 )
    {
      v25 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
              0LL,
              v23,
              a1,
              a2,
              &off_233AB0);
      regex::regex::bytes::Regex::find_at(v37, v34, v35, v25, v26, v7);
      if ( v37[0] )
      {
        v9 = v7 + v37[3] - v37[2];
        v27 = (const void *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                              v9,
                              v24,
                              a1,
                              a2,
                              &off_233AC8);
        v29 = v28;
        v30 = v33;
        if ( v28 >= v31 - v33 )
        {
          v17 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v31, v27, v28);
          v23 = v7;
          if ( v17 )
            goto LABEL_14;
        }
        else
        {
          memcpy((void *)(v33 + v32), v27, v28);
          v33 = v29 + v30;
          v23 = v7;
        }
      }
      else
      {
        v9 = v24;
      }
      v24 = v9;
      v10 = v7-- != 0;
      if ( !v10 )
        goto LABEL_11;
    }
  }
  v9 = 0LL;
LABEL_11:
  v18 = (const void *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                        0LL,
                        v9,
                        a1,
                        a2,
                        &off_233A98);
  v20 = v19;
  v21 = v33;
  if ( v19 >= v31 - v33 )
  {
    v17 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v31, v18, v19);
    if ( v17 )
      goto LABEL_14;
  }
  else
  {
    memcpy((void *)(v33 + v32), v18, v19);
    v33 = v20 + v21;
  }
  v17 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v31);
LABEL_14:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v31);
  return v17;
}