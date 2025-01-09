__int64 __fastcall uu_mktemp::dry_exec(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r14
  _BYTE *i; // rax
  char v16; // cl
  unsigned __int8 v17; // cl
  __int128 v19; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+10h] [rbp-A8h]
  __int64 v21; // [rsp+18h] [rbp-A0h] BYREF
  __int128 v22; // [rsp+20h] [rbp-98h]
  __int64 v23; // [rsp+40h] [rbp-78h]
  __int64 v24; // [rsp+48h] [rbp-70h]
  __int128 v25; // [rsp+50h] [rbp-68h] BYREF
  __int64 v26; // [rsp+60h] [rbp-58h]
  _BYTE v27[72]; // [rsp+70h] [rbp-48h] BYREF

  v24 = a3;
  v23 = a2;
  v11 = a6 + a5;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v21, a8 + a6 + a5, 0LL);
  if ( v21 )
    alloc::raw_vec::handle_error(v22, *((_QWORD *)&v22 + 1));
  v19 = v22;
  v20 = 0LL;
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v19,
    a4,
    a4 + a5);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(&v19, a6, 88LL);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v19,
    a7,
    a7 + a8);
  v12 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(
          a5,
          v11,
          *((_QWORD *)&v19 + 1),
          v20,
          &off_136A88);
  v14 = v13;
  v21 = rand::rngs::thread::thread_rng();
  rand::rng::Rng::fill(&v21, v12, v14);
  core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v21);
  v21 = v12;
  *(_QWORD *)&v22 = v14 + v12;
  for ( i = (_BYTE *)<core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(&v21);
        i;
        i = (_BYTE *)<core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(&v21) )
  {
    v17 = *i % 0x3Eu;
    if ( v17 < 0xAu )
    {
      v16 = v17 | 0x30;
    }
    else if ( v17 >= 0x24u )
    {
      v16 = v17 + 29;
    }
    else
    {
      v16 = v17 + 87;
    }
    *i = v16;
  }
  v26 = v20;
  v25 = v19;
  alloc::string::String::from_utf8(&v21, &v25);
  core::result::Result<T,E>::unwrap(v27, &v21);
  std::path::Path::join(a1, v23, v24, v27);
  return a1;
}
