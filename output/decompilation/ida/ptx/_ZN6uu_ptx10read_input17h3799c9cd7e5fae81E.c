__int64 __fastcall uu_ptx::read_input(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  const char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // r14
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 (__fastcall **v19)(); // rcx
  __int64 v20; // r15
  __int64 v21; // rdx
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v25; // [rsp+10h] [rbp-1D8h] BYREF
  __int64 v26; // [rsp+20h] [rbp-1C8h]
  __int128 v27; // [rsp+28h] [rbp-1C0h]
  __int64 v28; // [rsp+38h] [rbp-1B0h]
  __int64 v29; // [rsp+40h] [rbp-1A8h]
  _QWORD v30[3]; // [rsp+50h] [rbp-198h] BYREF
  __int128 v31; // [rsp+68h] [rbp-180h]
  __int64 v32; // [rsp+78h] [rbp-170h]
  __int128 v33; // [rsp+80h] [rbp-168h] BYREF
  __int128 v34; // [rsp+90h] [rbp-158h]
  __int128 v35; // [rsp+A0h] [rbp-148h]
  __int128 v36; // [rsp+B8h] [rbp-130h] BYREF
  __int64 v37; // [rsp+C8h] [rbp-120h]
  _BYTE v38[32]; // [rsp+D0h] [rbp-118h] BYREF
  __int128 v39; // [rsp+F0h] [rbp-F8h] BYREF
  __int64 v40; // [rsp+100h] [rbp-E8h]
  _OWORD v41[3]; // [rsp+110h] [rbp-D8h] BYREF
  __int64 v42; // [rsp+140h] [rbp-A8h]
  _OWORD v43[3]; // [rsp+148h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+178h] [rbp-70h]
  _BYTE v45[104]; // [rsp+180h] [rbp-68h] BYREF

  std::thread::local::LocalKey<T>::try_with(&v25);
  *(_QWORD *)&v7 = core::result::Result<T,E>::expect(&v25);
  v33 = *(_OWORD *)&off_2ED8F8;
  v34 = xmmword_2ED908;
  v35 = v7;
  v30[0] = 0LL;
  v30[1] = 8LL;
  v30[2] = 0LL;
  if ( a3 )
  {
    if ( *(_BYTE *)(a4 + 88) )
    {
      *(_QWORD *)&v25 = a2;
      *((_QWORD *)&v25 + 1) = a2 + 24 * a3;
      v8 = a1;
      while ( 1 )
      {
        v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v25);
        if ( !v9 )
          break;
        alloc::vec::Vec<T,A>::push(v30, *(_QWORD *)(v9 + 8), *(_QWORD *)(v9 + 16));
      }
      goto LABEL_9;
    }
    v11 = *(const char **)(a2 + 8);
    v10 = *(_QWORD *)(a2 + 16);
  }
  else
  {
    v10 = 1LL;
    v11 = asc_5EC5A;
  }
  v8 = a1;
  alloc::vec::Vec<T,A>::push(v30, v11, v10);
LABEL_9:
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v38, v30);
  v12 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v38);
  if ( !v12 )
  {
LABEL_17:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(v38);
    v22 = v33;
    v23 = v34;
    *(_OWORD *)(v8 + 32) = v35;
    *(_OWORD *)(v8 + 16) = v23;
    *(_OWORD *)v8 = v22;
    return v8;
  }
  v14 = v12;
  v15 = v13;
  v16 = 0LL;
  while ( 1 )
  {
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v15, asc_5EC5A, 1LL) )
    {
      v17 = std::io::stdio::stdin();
      v18 = alloc::boxed::Box<T>::new(v17);
      v19 = (__int64 (__fastcall **)())&unk_2EDD30;
      goto LABEL_15;
    }
    std::fs::File::open(&v25, v14, v15);
    if ( (_DWORD)v25 )
      break;
    v18 = alloc::boxed::Box<T>::new(DWORD1(v25));
    v19 = &off_2EDCD8;
LABEL_15:
    std::io::buffered::bufreader::BufReader<R>::with_capacity(v43, 0x2000LL, v18, v19);
    v41[0] = v43[0];
    v41[1] = v43[1];
    v41[2] = v43[2];
    v42 = v44;
    core::iter::adapters::try_process(&v25, v41);
    if ( (_QWORD)v25 == 0x8000000000000000LL )
    {
      *(_QWORD *)(v8 + 8) = *((_QWORD *)&v25 + 1);
      goto LABEL_20;
    }
    v20 = v26;
    v31 = v25;
    v32 = v26;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(
      &v36,
      *((_QWORD *)&v25 + 1),
      *((_QWORD *)&v25 + 1) + 24 * v26);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v25, v14, v15);
    v40 = v26;
    v39 = v25;
    v26 = v32;
    v25 = v31;
    v28 = v37;
    v27 = v36;
    v29 = v16;
    hashbrown::map::HashMap<K,V,S,A>::insert(v45, &v33, &v39, &v25);
    core::ptr::drop_in_place<core::option::Option<uu_ptx::FileContent>>(v45);
    v16 += v20;
    v14 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v38);
    v15 = v21;
    v8 = a1;
    if ( !v14 )
      goto LABEL_17;
  }
  *(_QWORD *)(v8 + 8) = *((_QWORD *)&v25 + 1);
LABEL_20:
  *(_QWORD *)v8 = 0LL;
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(v38);
  core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,uu_ptx::FileContent>>(&v33);
  return v8;
}
