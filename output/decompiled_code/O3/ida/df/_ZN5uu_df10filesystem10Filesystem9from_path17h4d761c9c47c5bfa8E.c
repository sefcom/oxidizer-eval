_QWORD *__fastcall uu_df::filesystem::Filesystem::from_path(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // r15
  _QWORD *v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int16 v17; // ax
  __m256i v19; // [rsp+8h] [rbp-1B0h] BYREF
  _BYTE v20[24]; // [rsp+28h] [rbp-190h] BYREF
  __m256i v21; // [rsp+40h] [rbp-178h] BYREF
  __m256i *v22; // [rsp+60h] [rbp-158h]
  __int64 (__fastcall **v23)(); // [rsp+68h] [rbp-150h]
  __int64 v24; // [rsp+70h] [rbp-148h]
  char v25; // [rsp+78h] [rbp-140h]
  __int128 v26; // [rsp+88h] [rbp-130h] BYREF
  __int64 v27; // [rsp+98h] [rbp-120h] BYREF
  __int128 v28; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-108h]
  void *dest; // [rsp+B8h] [rbp-100h]
  __int128 v31; // [rsp+C0h] [rbp-F8h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-E8h]
  __int128 v33; // [rsp+D8h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+E8h] [rbp-D0h]
  __int128 src; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+100h] [rbp-B8h]
  __int128 v37; // [rsp+108h] [rbp-B0h]
  __int64 v38; // [rsp+118h] [rbp-A0h]
  __int128 v39; // [rsp+120h] [rbp-98h]
  __int64 v40; // [rsp+130h] [rbp-88h]
  __int128 v41; // [rsp+138h] [rbp-80h]
  __int64 v42; // [rsp+148h] [rbp-70h]
  __int128 v43; // [rsp+150h] [rbp-68h]
  __int64 v44; // [rsp+160h] [rbp-58h]
  __int128 v45; // [rsp+168h] [rbp-50h]
  __int64 v46; // [rsp+178h] [rbp-40h]
  __int16 v47; // [rsp+180h] [rbp-38h]

  v5 = a2;
  v6 = a1;
  v7 = *a4;
  *(_OWORD *)v20 = *(_OWORD *)(*a4 + 8);
  v19.m256i_i64[0] = 0LL;
  *(_OWORD *)&v19.m256i_u64[1] = 1uLL;
  v24 = 32LL;
  v25 = 3;
  v21.m256i_i64[0] = 0LL;
  v21.m256i_i64[2] = 0LL;
  v22 = &v19;
  v23 = &off_FD3B0;
  if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(v20, &v21) )
    core::result::unwrap_failed(aADisplayImplem, 55LL, &v26, &unk_FD3F8, &off_FD3E0);
  v28 = *(_OWORD *)v19.m256i_i8;
  v29 = v19.m256i_i64[2];
  std::fs::canonicalize(&v21, *(_QWORD *)(v7 + 8), *(_QWORD *)(v7 + 16));
  if ( v21.m256i_i64[0] == 0x8000000000000000LL )
  {
    if ( (unsigned __int64)(v21.m256i_i8[8] & 3) - 2 >= 2 && (v21.m256i_i8[8] & 3) != 0 )
    {
      v8 = v21.m256i_i64[1] - 1;
      v9 = *(_QWORD *)(v21.m256i_i64[1] - 1);
      v10 = *(_QWORD *)(v21.m256i_i64[1] + 7);
      if ( *(_QWORD *)v10 )
        (*(void (__fastcall **)(__int64))v10)(v9);
      v11 = *(_QWORD *)(v10 + 8);
      if ( v11 )
        _rust_dealloc(v9, v11, *(_QWORD *)(v10 + 16));
      _rust_dealloc(v8, 24LL, 8LL);
    }
LABEL_21:
    *v6 = 0x8000000000000000LL;
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v28);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v28);
    return v6;
  }
  dest = a1;
  *(_OWORD *)&v20[8] = *(_OWORD *)&v21.m256i_u64[1];
  *(_QWORD *)v20 = v21.m256i_i64[0];
  v12 = 152 * a3;
  *(_QWORD *)&v26 = a2;
  *((_QWORD *)&v26 + 1) = a2 + 152 * a3;
  v21.m256i_i64[0] = (__int64)&v27;
  v21.m256i_i64[1] = (__int64)v20;
  v21.m256i_i64[2] = (__int64)&v27;
  <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::try_fold(&v19, &v26, &v21);
  if ( v19.m256i_i64[1] == 0x8000000000000000LL
    || (v13 = v19.m256i_i64[0],
        v21 = v19,
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v21.m256i_u64[1]),
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v21.m256i_u64[1]),
        !v13) )
  {
    v19.m256i_i64[1] = a2 + 152 * a3;
    v19.m256i_i64[2] = (__int64)v20;
    v13 = 0LL;
    if ( a3 )
    {
      while ( !(unsigned __int8)std::path::Path::starts_with(*(_QWORD *)&v20[8], *(_QWORD *)&v20[16], v5 + 96) )
      {
        v5 += 152LL;
        v12 -= 152LL;
        if ( !v12 )
          goto LABEL_19;
      }
      v19.m256i_i64[0] = v5 + 152;
      v14 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(
              &v19.m256i_u64[3],
              v5);
      if ( v15 )
      {
        v21.m256i_i64[2] = v19.m256i_i64[2];
        *(_OWORD *)v21.m256i_i8 = *(_OWORD *)v19.m256i_i8;
        <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::fold(&v21, v14);
        v13 = v16;
      }
      else
      {
        v13 = 0LL;
      }
    }
  }
LABEL_19:
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v20);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v20);
  v6 = dest;
  if ( !v13 )
    goto LABEL_21;
  <alloc::string::String as core::clone::Clone>::clone(&v31, v13);
  <alloc::string::String as core::clone::Clone>::clone(&v33, v13 + 24);
  <alloc::string::String as core::clone::Clone>::clone(&v26, v13 + 48);
  <alloc::string::String as core::clone::Clone>::clone(v20, v13 + 72);
  <alloc::string::String as core::clone::Clone>::clone(&v19, v13 + 96);
  <alloc::string::String as core::clone::Clone>::clone(&v21, v13 + 120);
  v17 = *(_WORD *)(v13 + 144);
  src = v31;
  v36 = v32;
  v37 = v33;
  v38 = v34;
  v39 = v26;
  v40 = v27;
  v41 = *(_OWORD *)v20;
  v42 = *(_QWORD *)&v20[16];
  v44 = v19.m256i_i64[2];
  v43 = *(_OWORD *)v19.m256i_i8;
  v46 = v21.m256i_i64[2];
  v45 = *(_OWORD *)v21.m256i_i8;
  v47 = v17;
  v21.m256i_i64[2] = v29;
  *(_OWORD *)v21.m256i_i8 = v28;
  uu_df::filesystem::Filesystem::new(v6, &src);
  return v6;
}
