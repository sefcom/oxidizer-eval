__int64 __fastcall just::justfile::Justfile::run_dependencies(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10,
        __int64 a11)
{
  __int64 result; // rax
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rcx
  char v15; // al
  char v16; // al
  __int64 v17; // rbp
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  char v21; // al
  __int128 v22; // xmm2
  __int128 v23; // xmm3
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int128 v27; // [rsp+8h] [rbp-150h] BYREF
  __int64 v28; // [rsp+18h] [rbp-140h]
  __m256i v29; // [rsp+20h] [rbp-138h] BYREF
  __int64 *v30; // [rsp+40h] [rbp-118h]
  __int64 *v31; // [rsp+48h] [rbp-110h]
  _QWORD **v32; // [rsp+50h] [rbp-108h]
  __int64 *v33; // [rsp+58h] [rbp-100h]
  _QWORD v34[4]; // [rsp+68h] [rbp-F0h] BYREF
  _BYTE v35[104]; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+F0h] [rbp-68h]
  __int64 v37; // [rsp+F8h] [rbp-60h]
  _QWORD *v38; // [rsp+100h] [rbp-58h]
  __int64 v39; // [rsp+108h] [rbp-50h]
  __int64 v40; // [rsp+110h] [rbp-48h]
  __int64 v41; // [rsp+118h] [rbp-40h] BYREF
  __int64 v42; // [rsp+120h] [rbp-38h] BYREF

  v39 = a11;
  v38 = a10;
  v37 = a8;
  v40 = a2;
  v41 = a2;
  v42 = a6;
  result = *a3;
  if ( *(_BYTE *)(*a3 + 415) )
  {
    *(_BYTE *)a1 = 56;
    return result;
  }
  v36 = a6;
  *(_QWORD *)&v27 = 0LL;
  *((_QWORD *)&v27 + 1) = 8LL;
  v28 = 0LL;
  if ( !a5 )
  {
LABEL_7:
    v16 = just::attribute_set::AttributeSet::contains((__int64 *)(a9 + 216), 13);
    v17 = v36;
    if ( v16 )
    {
      v29.m256i_i64[2] = v28;
      *(_OWORD *)v29.m256i_i8 = v27;
      v29.m256i_i64[3] = (__int64)&v41;
      v30 = &v42;
      v31 = &a8;
      v32 = &a10;
      v33 = &a11;
      std::thread::scoped::scope(v35, &v29);
      if ( v35[0] != 56 )
      {
        result = *(_QWORD *)&v35[96];
        *(_QWORD *)(a1 + 96) = *(_QWORD *)&v35[96];
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v35[80];
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v35[64];
        v18 = *(_OWORD *)v35;
        v19 = *(_OWORD *)&v35[16];
        v20 = *(_OWORD *)&v35[32];
        *(_OWORD *)(a1 + 48) = *(_OWORD *)&v35[48];
        *(_OWORD *)(a1 + 32) = v20;
        *(_OWORD *)(a1 + 16) = v19;
        *(_OWORD *)a1 = v18;
        return result;
      }
    }
    else
    {
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v34, &v27);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v29, v34);
      if ( !__OFSUB__(0LL, v29.m256i_i64[1]) )
      {
        while ( 1 )
        {
          just::justfile::Justfile::run_recipe(
            (__int64)v35,
            v29.m256i_i64[2],
            v29.m256i_i64[3],
            v40,
            v17,
            1u,
            v37,
            (_QWORD *)(*(_QWORD *)v29.m256i_i64[0] + 16LL),
            v38,
            v39);
          v21 = v35[0];
          if ( v35[0] != 56 )
            break;
          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v29.m256i_u64[1]);
          <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v29, v34);
          if ( v29.m256i_i64[1] == 0x8000000000000000LL )
            goto LABEL_13;
        }
        *(_QWORD *)(a1 + 96) = *(_QWORD *)&v35[96];
        *(_OWORD *)(a1 + 81) = *(_OWORD *)&v35[81];
        *(_OWORD *)(a1 + 65) = *(_OWORD *)&v35[65];
        v24 = *(_OWORD *)&v35[1];
        v25 = *(_OWORD *)&v35[17];
        v26 = *(_OWORD *)&v35[33];
        *(_OWORD *)(a1 + 49) = *(_OWORD *)&v35[49];
        *(_OWORD *)(a1 + 33) = v26;
        *(_OWORD *)(a1 + 17) = v25;
        *(_OWORD *)(a1 + 1) = v24;
        *(_BYTE *)a1 = v21;
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v29.m256i_u64[1]);
        return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&alloc::sync::Arc<just::recipe::Recipe>,alloc::vec::Vec<alloc::string::String>)>>(v34);
      }
LABEL_13:
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&alloc::sync::Arc<just::recipe::Recipe>,alloc::vec::Vec<alloc::string::String>)>>(v34);
    }
    result = a1;
    *(_BYTE *)a1 = 56;
    return result;
  }
  v12 = a4 + 24;
  v13 = 32 * a5;
  while ( 1 )
  {
    v14 = *(_QWORD *)(v12 - 16) + (*(_QWORD *)(v12 - 8) << 7);
    v34[0] = *(_QWORD *)(v12 - 16);
    v34[1] = v14;
    v34[2] = a7;
    core::iter::traits::iterator::Iterator::collect(v35, v34);
    v15 = v35[0];
    if ( v35[0] != 56 )
      break;
    *(__int64 *)((char *)&v29.m256i_i64[2] + 7) = *(_QWORD *)&v35[24];
    *(_OWORD *)((char *)&v29.m256i_u32[1] + 3) = *(_OWORD *)&v35[8];
    *(_QWORD *)v35 = v12;
    alloc::vec::Vec<T,A>::push(&v27, v35);
    v12 += 32LL;
    v13 -= 32LL;
    if ( !v13 )
      goto LABEL_7;
  }
  v22 = *(_OWORD *)&v35[32];
  v23 = *(_OWORD *)&v35[48];
  *(_OWORD *)((char *)&v29.m256i_u64[1] + 7) = *(_OWORD *)&v35[16];
  *(_OWORD *)v29.m256i_i8 = *(_OWORD *)&v35[1];
  *(_QWORD *)(a1 + 96) = *(_QWORD *)&v35[96];
  *(_OWORD *)(a1 + 80) = *(_OWORD *)&v35[80];
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v35[64];
  *(_OWORD *)(a1 + 48) = v23;
  *(_OWORD *)(a1 + 32) = v22;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)((char *)&v29.m256i_u64[1] + 7);
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v29.m256i_i8;
  *(_BYTE *)a1 = v15;
  return core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::sync::Arc<just::recipe::Recipe>,alloc::vec::Vec<alloc::string::String>)>>(&v27);
}