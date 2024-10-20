__int64 **__fastcall uu_cp::Options::from_matches::{{closure}}(__int64 ***a1, __int128 *a2)
{
  __int64 **result; // rax
  __int64 *v3; // rcx
  __int64 *v4; // rdx
  __int64 v5; // r15
  unsigned __int64 v6; // rax
  __int64 **v7; // rcx
  __int64 *v8; // rdx
  __int64 *v9; // rdx
  __int64 **v10; // r14
  __int128 v11; // xmm0
  __int64 *v12; // rbx
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // [rsp+8h] [rbp-80h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-70h]
  __int128 v18; // [rsp+20h] [rbp-68h]
  __m256i v19; // [rsp+30h] [rbp-58h]
  __int128 v20; // [rsp+50h] [rbp-38h] BYREF
  __int64 v21; // [rsp+60h] [rbp-28h]

  result = *a1;
  v3 = **a1;
  if ( v3 != (*a1)[1] )
  {
    *result = v3 + 1;
    if ( v3 )
    {
      v4 = result[2];
      if ( !v4 )
        core::panicking::panic_const::panic_const_sub_overflow(&anon_21d6120f1bf3ae8083dd7bd30f6eb60d_435_llvm_13186119769495240950);
      v5 = *v3;
      result[2] = (__int64 *)((char *)v4 - 1);
      v21 = *((_QWORD *)a2 + 2);
      v20 = *a2;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v16, &v20);
      if ( v17 >= 2 )
      {
        v6 = v17 - 1;
        do
        {
          v7 = *a1;
          v8 = **a1;
          if ( v8 != (*a1)[1] )
          {
            *v7 = v8 + 1;
            if ( v8 )
            {
              v9 = v7[2];
              if ( !v9 )
                core::panicking::panic_const::panic_const_sub_overflow(&anon_21d6120f1bf3ae8083dd7bd30f6eb60d_435_llvm_13186119769495240950);
              v7[2] = (__int64 *)((char *)v9 - 1);
            }
          }
          --v6;
        }
        while ( v6 );
      }
      v10 = a1[1];
      v11 = *((_OWORD *)a1 + 1);
      v19.m256i_i64[3] = v17;
      *(_OWORD *)&v19.m256i_u64[1] = v16;
      v19.m256i_i64[0] = v5;
      v18 = v11;
      v12 = v10[2];
      if ( v12 == *v10 )
        alloc::raw_vec::RawVec<T,A>::grow_one(v10);
      result = (__int64 **)v10[1];
      v13 = 6LL * (_QWORD)v12;
      v14 = v18;
      v15 = *(_OWORD *)v19.m256i_i8;
      *(_OWORD *)&result[v13 + 4] = *(_OWORD *)&v19.m256i_u64[2];
      *(_OWORD *)&result[v13 + 2] = v15;
      *(_OWORD *)&result[v13] = v14;
      v10[2] = (__int64 *)((char *)v12 + 1);
    }
  }
  return result;
}
