_OWORD *__fastcall bat::get_syntax_mapping_to_paths(_OWORD *a1, __int64 a2)
{
  __int128 v2; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _OWORD *result; // rax
  __m256i v9; // [rsp+10h] [rbp-C8h] BYREF
  __m256i v10; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v11; // [rsp+50h] [rbp-88h] BYREF
  __int128 v12; // [rsp+60h] [rbp-78h]
  __int128 v13; // [rsp+70h] [rbp-68h]
  _BYTE v14[80]; // [rsp+88h] [rbp-50h] BYREF

  *(_QWORD *)&v2 = std::thread::local::LocalKey<T>::with();
  v11 = *(_OWORD *)&off_6C6F08;
  v12 = xmmword_6C6F18;
  v13 = v2;
  <core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::FromResidual<core::ops::control_flow::ControlFlow<B,core::convert::Infallible>>>::from_residual(
    v14,
    a2);
  while ( 1 )
  {
    v4 = <core::iter::adapters::chain::Chain<A,B> as core::iter::traits::iterator::Iterator>::next(v14);
    if ( !v4 )
      break;
    if ( !*v3 )
    {
      hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v10, &v11, v3[1], v3[2]);
      if ( v10.m256i_i64[0] )
      {
        v9 = v10;
      }
      else
      {
        *(_OWORD *)&v9.m256i_u64[1] = *(_OWORD *)&v10.m256i_u64[1];
        v9.m256i_i64[0] = 0LL;
      }
      v5 = std::collections::hash::map::Entry<K,V>::or_insert_with(&v9);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, *(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 16));
      v9.m256i_i64[2] = v10.m256i_i64[2];
      *(_OWORD *)v9.m256i_i8 = *(_OWORD *)v10.m256i_i8;
      alloc::vec::Vec<T,A>::push(v5, &v9);
    }
  }
  v6 = v11;
  v7 = v12;
  result = a1;
  a1[2] = v13;
  a1[1] = v7;
  *a1 = v6;
  return result;
}