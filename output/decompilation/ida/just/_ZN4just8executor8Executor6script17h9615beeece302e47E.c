__int64 __fastcall just::executor::Executor::script(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r12
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 result; // rax
  _OWORD *v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // r12
  __int128 v24; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+18h] [rbp-A0h]
  __int64 v26; // [rsp+20h] [rbp-98h]
  __int64 v27; // [rsp+28h] [rbp-90h]
  __int64 v28; // [rsp+30h] [rbp-88h]
  __int64 v29; // [rsp+38h] [rbp-80h]
  __int64 v30; // [rsp+40h] [rbp-78h]
  _QWORD v31[2]; // [rsp+48h] [rbp-70h] BYREF
  char v32; // [rsp+58h] [rbp-60h]
  unsigned __int64 v33; // [rsp+80h] [rbp-38h]

  v30 = a3;
  *(_QWORD *)&v24 = 0LL;
  *((_QWORD *)&v24 + 1) = 1LL;
  v25 = 0LL;
  v9 = a4 + 32 * a5;
  v31[0] = a4;
  v31[1] = v9;
  v32 = 0;
  v10 = <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(v31);
  v26 = a1;
  v29 = a6;
  v28 = v9;
  v27 = a4;
  if ( a2
    && (v12 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v10, a6, a7, &off_42FBD8),
        v11 != 0 && v12 != 0) )
  {
    v21 = v12 + 24 * v11;
    v22 = v12 + 24;
    v13 = 0LL;
    do
    {
      v23 = v22;
      if ( (unsigned __int8)just::shebang::Shebang::include_shebang_line(a2, v30) )
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v24,
          *(_QWORD *)(v12 + 8),
          *(_QWORD *)(v12 + 8) + *(_QWORD *)(v12 + 16));
      alloc::string::String::push(&v24, 10LL);
      ++v13;
      v22 = v23 + 24;
      if ( v23 == v21 )
        break;
      v12 = v23;
    }
    while ( v23 );
  }
  else
  {
    v13 = 0LL;
  }
  core::iter::traits::iterator::Iterator::zip(v31, v27, v28, v29, a7);
  v33 = v13;
  v14 = v13;
  if ( !v13 )
    goto LABEL_11;
  while ( 1 )
  {
    v33 = 0LL;
    v15 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::nth(v31, v13);
    v17 = v16;
    if ( !v15 )
      break;
    while ( 1 )
    {
      for ( ; v14 < *(_QWORD *)(v15 + 24); ++v14 )
        alloc::string::String::push(&v24, 10LL);
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v24,
        *(_QWORD *)(v17 + 8),
        *(_QWORD *)(v17 + 8) + *(_QWORD *)(v17 + 16));
      alloc::string::String::push(&v24, 10LL);
      ++v14;
      v13 = v33;
      if ( v33 )
        break;
LABEL_11:
      v15 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(v31);
      v17 = v18;
      if ( !v15 )
        goto LABEL_12;
    }
  }
LABEL_12:
  result = v25;
  v20 = (_OWORD *)v26;
  *(_QWORD *)(v26 + 16) = v25;
  *v20 = v24;
  return result;
}