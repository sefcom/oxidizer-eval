__int64 __fastcall bat::get_new_terminal_title(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  __int64 result; // rax
  __int128 v10; // [rsp+8h] [rbp-60h] BYREF
  __int64 v11; // [rsp+18h] [rbp-50h]
  _QWORD v12[9]; // [rsp+20h] [rbp-48h] BYREF

  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, aBat_0, 5LL);
  v12[0] = a2;
  v12[1] = a2 + 160 * a3;
  v12[2] = 0LL;
  v4 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v12);
  if ( v5 )
  {
    v6 = v4;
    v7 = a3 - 1;
    do
    {
      v8 = v5 + 64;
      if ( __OFSUB__(0LL, *(_QWORD *)(v5 + 64)) )
        v8 = v5 + 40;
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v10,
        *(_QWORD *)(v8 + 8),
        *(_QWORD *)(v8 + 8) + *(_QWORD *)(v8 + 16));
      if ( v6 < v7 )
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v10,
          &unk_88E48,
          &unk_88E4A);
      v6 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v12);
    }
    while ( v5 );
  }
  result = v11;
  *(_QWORD *)(a1 + 16) = v11;
  *(_OWORD *)a1 = v10;
  return result;
}