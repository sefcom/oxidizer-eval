__int64 __fastcall uu_tac::buffer_tac_regex(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rbp
  size_t v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  const void *v13; // rax
  size_t v14; // rdx
  __int64 v15; // r15
  __int64 v16; // r14
  const void *v17; // rax
  size_t v18; // rdx
  __int64 v19; // r14
  size_t v20; // rbx
  __int64 v21; // rbp
  __int64 v22; // r15
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  const void *v26; // rax
  size_t v27; // rdx
  __int64 v28; // r15
  size_t v29; // r14
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
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&v31, 0x2000LL, v6);
  if ( a2 )
  {
    if ( a5 )
    {
      v7 = a2;
      v8 = a2;
      v9 = a2;
      while ( 1 )
      {
        v9 = <usize as core::iter::range::Step>::backward_unchecked(v9);
        v11 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                0LL,
                v7,
                a1,
                a2,
                &off_2C9068);
        regex::regex::bytes::Regex::find_at(v37, v34, v35, v11, v12, v9);
        if ( v37[0] )
        {
          v13 = (const void *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                                v9,
                                v8,
                                a1,
                                a2,
                                &off_2C9098);
          v15 = v33;
          if ( v14 < v31 - v33 )
          {
            v10 = v14;
            memcpy((void *)(v33 + v32), v13, v14);
            v33 = v10 + v15;
            v8 = v9;
            v7 = v9;
          }
          else
          {
            v16 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v31, v13);
            v8 = v9;
            v7 = v9;
            if ( v16 )
              goto LABEL_22;
          }
        }
        if ( !v9 )
          goto LABEL_11;
      }
    }
    v21 = a2;
    v22 = a2;
    v23 = a2;
    while ( 1 )
    {
      v23 = <usize as core::iter::range::Step>::backward_unchecked(v23);
      v24 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
              0LL,
              v21,
              a1,
              a2,
              &off_2C9068);
      regex::regex::bytes::Regex::find_at(v37, v34, v35, v24, v25, v23);
      if ( v37[0] )
      {
        v8 = v23 + v37[3] - v37[2];
        v26 = (const void *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                              v8,
                              v22,
                              a1,
                              a2,
                              &off_2C9080);
        v28 = v33;
        if ( v27 >= v31 - v33 )
        {
          v16 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v31, v26);
          v21 = v23;
          if ( v16 )
            goto LABEL_22;
        }
        else
        {
          v29 = v27;
          memcpy((void *)(v33 + v32), v26, v27);
          v33 = v29 + v28;
          v21 = v23;
        }
      }
      else
      {
        v8 = v22;
      }
      v22 = v8;
      if ( !v23 )
        goto LABEL_11;
    }
  }
  v8 = 0LL;
LABEL_11:
  v17 = (const void *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                        0LL,
                        v8,
                        a1,
                        a2,
                        &off_2C9050);
  v19 = v33;
  if ( v18 >= v31 - v33 )
  {
    v16 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v31, v17);
    if ( v16 )
    {
LABEL_22:
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v31);
      return v16;
    }
  }
  else
  {
    v20 = v18;
    memcpy((void *)(v33 + v32), v17, v18);
    v33 = v20 + v19;
  }
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v31);
  return 0LL;
}
