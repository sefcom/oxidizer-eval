__int64 __fastcall uu_tac::buffer_tac(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // r13
  size_t v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rbx
  const void *v13; // rax
  size_t v14; // rdx
  __int64 v15; // r13
  __int64 v16; // r12
  size_t v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rbx
  const void *v20; // rax
  size_t v21; // rdx
  __int64 v22; // r13
  const void *v23; // rax
  size_t v24; // rdx
  __int64 v25; // r14
  size_t v26; // rbx
  __int64 v28; // [rsp+0h] [rbp-108h] BYREF
  __int64 v29; // [rsp+8h] [rbp-100h]
  __int64 v30; // [rsp+10h] [rbp-F8h]
  __int64 v31; // [rsp+28h] [rbp-E0h] BYREF
  _OWORD v32[4]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+70h] [rbp-98h]
  __int64 v34; // [rsp+78h] [rbp-90h]
  __int64 v35; // [rsp+80h] [rbp-88h]
  __int64 v36; // [rsp+88h] [rbp-80h]
  _OWORD v37[7]; // [rsp+98h] [rbp-70h] BYREF

  v31 = std::io::stdio::stdout();
  v8 = std::io::stdio::Stdout::lock(&v31);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&v28, 0x2000LL, v8);
  LOBYTE(v32[0]) = 1;
  memchr::memmem::FinderBuilder::build_reverse(v37, v32, a4, a5);
  v32[3] = v37[3];
  v32[2] = v37[2];
  v32[1] = v37[1];
  v32[0] = v37[0];
  v33 = 1LL;
  v34 = a2;
  v35 = a1;
  v36 = a2;
  if ( a3 )
  {
    v9 = a2;
    while ( <memchr::memmem::FindRevIter as core::iter::traits::iterator::Iterator>::next(v32) )
    {
      v12 = v11;
      v13 = (const void *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                            v11,
                            v9,
                            a1,
                            a2,
                            &off_2C90E0);
      v15 = v30;
      if ( v14 < v28 - v30 )
      {
        v10 = v14;
        memcpy((void *)(v30 + v29), v13, v14);
        v30 = v10 + v15;
        v9 = v12;
      }
      else
      {
        v16 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v28, v13);
        v9 = v12;
        if ( v16 )
          goto LABEL_13;
      }
    }
  }
  else
  {
    v9 = a2;
    while ( <memchr::memmem::FindRevIter as core::iter::traits::iterator::Iterator>::next(v32) )
    {
      v19 = a5 + v18;
      v20 = (const void *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                            a5 + v18,
                            v9,
                            a1,
                            a2,
                            &off_2C90C8);
      v22 = v30;
      if ( v21 < v28 - v30 )
      {
        v17 = v21;
        memcpy((void *)(v30 + v29), v20, v21);
        v30 = v17 + v22;
        v9 = v19;
      }
      else
      {
        v16 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v28, v20);
        v9 = v19;
        if ( v16 )
        {
LABEL_13:
          core::ptr::drop_in_place<memchr::memmem::FindRevIter>(v32);
          goto LABEL_17;
        }
      }
    }
  }
  core::ptr::drop_in_place<memchr::memmem::FindRevIter>(v32);
  v23 = (const void *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                        0LL,
                        v9,
                        a1,
                        a2,
                        &off_2C90B0);
  v25 = v30;
  if ( v24 < v28 - v30 )
  {
    v26 = v24;
    memcpy((void *)(v30 + v29), v23, v24);
    v30 = v26 + v25;
LABEL_18:
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v28);
    return 0LL;
  }
  v16 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v28, v23);
  if ( !v16 )
    goto LABEL_18;
LABEL_17:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v28);
  return v16;
}
