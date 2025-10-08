__int64 __fastcall uu_tac::buffer_tac(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rbx
  const void *v12; // rax
  size_t v13; // rdx
  size_t v14; // r13
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rbp
  const void *v20; // rax
  size_t v21; // rdx
  size_t v22; // r13
  __int64 v23; // rbx
  const void *v24; // rax
  size_t v25; // rdx
  size_t v26; // rbx
  __int64 v27; // r14
  __int64 v29; // [rsp+0h] [rbp-108h] BYREF
  __int64 v30; // [rsp+8h] [rbp-100h]
  __int64 v31; // [rsp+10h] [rbp-F8h]
  __int64 v32; // [rsp+28h] [rbp-E0h] BYREF
  _OWORD v33[4]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+70h] [rbp-98h]
  __int64 v35; // [rsp+78h] [rbp-90h]
  __int64 v36; // [rsp+80h] [rbp-88h]
  __int64 v37; // [rsp+88h] [rbp-80h]
  _OWORD v38[7]; // [rsp+98h] [rbp-70h] BYREF

  v32 = std::io::stdio::stdout();
  v8 = std::io::stdio::Stdout::lock(&v32);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&v29, v8);
  memchr::memmem::FinderBuilder::build_reverse(v38, a4, a5);
  v33[3] = v38[3];
  v33[2] = v38[2];
  v33[1] = v38[1];
  v33[0] = v38[0];
  v34 = 1LL;
  v35 = a2;
  v36 = a1;
  v37 = a2;
  if ( a3 )
  {
    v9 = a2;
    while ( (<memchr::memmem::FindRevIter as core::iter::traits::iterator::Iterator>::next(v33) & 1) != 0 )
    {
      v11 = v10;
      v12 = (const void *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                            v10,
                            v9,
                            a1,
                            a2,
                            &off_233B28);
      v14 = v13;
      v15 = v31;
      if ( v13 >= v29 - v31 )
      {
        v16 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v29, v12, v13);
        v9 = v11;
        if ( v16 )
        {
          v17 = v16;
          goto LABEL_13;
        }
      }
      else
      {
        memcpy((void *)(v31 + v30), v12, v13);
        v31 = v15 + v14;
        v9 = v11;
      }
    }
  }
  else
  {
    v9 = a2;
    while ( (<memchr::memmem::FindRevIter as core::iter::traits::iterator::Iterator>::next(v33) & 1) != 0 )
    {
      v19 = a5 + v18;
      v20 = (const void *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                            a5 + v18,
                            v9,
                            a1,
                            a2,
                            &off_233B10);
      v22 = v21;
      v23 = v31;
      if ( v21 >= v29 - v31 )
      {
        v17 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v29, v20, v21);
        v9 = v19;
        if ( v17 )
        {
LABEL_13:
          core::ptr::drop_in_place<memchr::memmem::FindRevIter>(v33);
          goto LABEL_17;
        }
      }
      else
      {
        memcpy((void *)(v31 + v30), v20, v21);
        v31 = v23 + v22;
        v9 = v19;
      }
    }
  }
  core::ptr::drop_in_place<memchr::memmem::FindRevIter>(v33);
  v24 = (const void *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                        0LL,
                        v9,
                        a1,
                        a2,
                        &off_233AF8);
  v26 = v25;
  v27 = v31;
  if ( v25 >= v29 - v31 )
  {
    v17 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v29, v24, v25);
    if ( v17 )
      goto LABEL_17;
  }
  else
  {
    memcpy((void *)(v31 + v30), v24, v25);
    v31 = v26 + v27;
  }
  v17 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v29);
LABEL_17:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v29);
  return v17;
}