__int64 __fastcall bat::preprocessor::strip_ansi(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax
  _OWORD *v10; // rcx
  __int128 v11; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+20h] [rbp-A8h]
  __int64 v13; // [rsp+28h] [rbp-A0h]
  _QWORD v14[6]; // [rsp+30h] [rbp-98h] BYREF
  int v15; // [rsp+60h] [rbp-68h]
  __int64 v16; // [rsp+68h] [rbp-60h] BYREF
  __int64 v17; // [rsp+70h] [rbp-58h]
  __int64 v18; // [rsp+78h] [rbp-50h]

  v13 = a1;
  *(_QWORD *)&v4 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(a3, 1LL, 1LL, &off_6CD180);
  v11 = v4;
  v12 = 0LL;
  v14[0] = a2;
  v14[1] = a3;
  v14[2] = a2;
  v14[3] = a2 + a3;
  v14[4] = 0LL;
  v15 = 1114113;
  do
  {
    while ( 1 )
    {
      <bat::vscreen::EscapeSequenceOffsetsIterator as core::iter::traits::iterator::Iterator>::next(&v16, v14);
      if ( v16 )
        break;
      v5 = v17;
      v6 = v18;
      v7 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
             v17,
             v18,
             a2,
             a3);
      if ( !v7 )
        core::str::slice_error_fail(a2, a3, v5, v6, &off_6CE990);
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v11,
        v7,
        v7 + v8);
    }
  }
  while ( (_DWORD)v16 != 5 );
  result = v12;
  v10 = (_OWORD *)v13;
  *(_QWORD *)(v13 + 16) = v12;
  *v10 = v11;
  return result;
}