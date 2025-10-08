__int64 __fastcall firecracker::seccomp::filter_thread_categories(__int64 a1)
{
  __int128 v1; // xmm0
  __int128 v2; // xmm1
  __m256i *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int128 v7; // [rsp+0h] [rbp-128h] BYREF
  __int64 v8; // [rsp+10h] [rbp-118h]
  __m256i v9; // [rsp+20h] [rbp-108h] BYREF
  __int128 v10; // [rsp+40h] [rbp-E8h]
  __int128 v11; // [rsp+50h] [rbp-D8h]
  __int128 v12; // [rsp+60h] [rbp-C8h]
  __int128 v13; // [rsp+70h] [rbp-B8h]
  __m256i v14; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v15; // [rsp+A0h] [rbp-88h]
  _OWORD v16[4]; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v17; // [rsp+F0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+100h] [rbp-28h]

  <hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::IntoIterator>::into_iter(v16);
  core::iter::traits::iterator::Iterator::partition(&v9, v16);
  v15 = v10;
  v14 = v9;
  v16[2] = v13;
  v16[1] = v12;
  v16[0] = v11;
  if ( *((_QWORD *)&v12 + 1) )
  {
    hashbrown::map::HashMap<K,V,S,A>::iter(&v9, v16);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v7);
    <std::collections::hash::map::Keys<K,V> as core::iter::traits::iterator::Iterator>::fold(&v17, &v9, &v7);
    alloc::string::String::pop(&v17);
    *(__int64 *)((char *)&v9.m256i_i64[2] + 7) = v18;
    *(_OWORD *)((char *)&v9.m256i_u32[1] + 3) = v17;
    *(_BYTE *)(a1 + 8) = 18;
LABEL_8:
    v4 = *(__int64 *)((char *)&v9.m256i_i64[1] + 7);
    v5 = *(__int64 *)((char *)&v9.m256i_i64[2] + 7);
    *(_OWORD *)(a1 + 9) = *(_OWORD *)v9.m256i_i8;
    *(_QWORD *)(a1 + 24) = v4;
    *(_QWORD *)(a1 + 32) = v5;
    *(_QWORD *)a1 = 0LL;
    core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,alloc::sync::Arc<alloc::vec::Vec<u64>>>>(v16);
    v3 = &v14;
    return core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,alloc::sync::Arc<alloc::vec::Vec<u64>>>>(v3);
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9);
  v8 = v9.m256i_i64[2];
  v7 = *(_OWORD *)v9.m256i_i8;
  if ( !hashbrown::map::HashMap<K,V,S,A>::get_inner(&v14, &v7) )
    goto LABEL_7;
  core::ptr::drop_in_place<alloc::string::String>(&v7);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9);
  v8 = v9.m256i_i64[2];
  v7 = *(_OWORD *)v9.m256i_i8;
  if ( !hashbrown::map::HashMap<K,V,S,A>::get_inner(&v14, &v7)
    || (core::ptr::drop_in_place<alloc::string::String>(&v7),
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9),
        v8 = v9.m256i_i64[2],
        v7 = *(_OWORD *)v9.m256i_i8,
        !hashbrown::map::HashMap<K,V,S,A>::get_inner(&v14, &v7)) )
  {
LABEL_7:
    *(__int64 *)((char *)&v9.m256i_i64[2] + 7) = v8;
    *(_OWORD *)((char *)&v9.m256i_u32[1] + 3) = v7;
    *(_BYTE *)(a1 + 8) = 19;
    goto LABEL_8;
  }
  core::ptr::drop_in_place<alloc::string::String>(&v7);
  v1 = *(_OWORD *)v14.m256i_i8;
  v2 = *(_OWORD *)&v14.m256i_u64[2];
  *(_OWORD *)(a1 + 32) = v15;
  *(_OWORD *)(a1 + 16) = v2;
  *(_OWORD *)a1 = v1;
  v3 = (__m256i *)v16;
  return core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,alloc::sync::Arc<alloc::vec::Vec<u64>>>>(v3);
}