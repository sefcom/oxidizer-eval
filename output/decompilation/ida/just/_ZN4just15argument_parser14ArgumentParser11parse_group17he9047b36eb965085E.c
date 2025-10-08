__int64 __fastcall just::argument_parser::ArgumentParser::parse_group(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rbp
  __int64 v22; // r14
  __int64 v23; // rax
  __int128 v24; // xmm2
  __int128 v25; // xmm3
  __m256i v26; // [rsp+0h] [rbp-128h] BYREF
  _BYTE v27[48]; // [rsp+20h] [rbp-108h] BYREF
  __int128 v28; // [rsp+50h] [rbp-D8h]
  __int128 v29; // [rsp+60h] [rbp-C8h]
  __int128 v30; // [rsp+70h] [rbp-B8h]
  __int64 v31; // [rsp+80h] [rbp-A8h]
  __int64 v32; // [rsp+88h] [rbp-A0h]
  __int128 v33; // [rsp+90h] [rbp-98h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-88h]
  _BYTE v35[31]; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v36; // [rsp+D0h] [rbp-58h]
  __int64 v37; // [rsp+D8h] [rbp-50h] BYREF
  __int128 v38; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v39; // [rsp+F0h] [rbp-38h]

  v2 = a2[3];
  if ( v2 >= a2[1] )
  {
    v6 = just::argument_parser::ArgumentParser::rest(a2);
    just::argument_parser::ArgumentParser::resolve_recipe(v27, a2[2], v6, v7);
    result = v27[0];
    if ( v27[0] == 56 )
    {
      v8 = *(_QWORD *)&v27[32];
      *(_OWORD *)((char *)&v26.m256i_u32[1] + 3) = *(_OWORD *)&v27[8];
      *(__int64 *)((char *)&v26.m256i_i64[2] + 7) = *(_QWORD *)&v27[24];
      *(_QWORD *)&v35[16] = *(_QWORD *)&v27[24];
      *(_OWORD *)v35 = *(_OWORD *)&v27[8];
      v37 = *(_QWORD *)&v27[40];
      if ( *(_QWORD *)&v27[40] )
      {
        *(_QWORD *)v27 = 0LL;
        core::panicking::assert_failed(0LL, &v37, &unk_692D0, v27, &off_42DAB8);
      }
      v34 = *(_QWORD *)&v35[16];
      v33 = *(_OWORD *)v35;
      goto LABEL_13;
    }
    goto LABEL_10;
  }
  v3 = *(_QWORD *)(*a2 + 16 * v2);
  v4 = *(_QWORD *)(*a2 + 16 * v2 + 8);
  if ( !(unsigned __int8)<char as core::str::pattern::Pattern>::is_contained_in(58LL, v3, v4) )
  {
    v9 = just::argument_parser::ArgumentParser::rest(a2);
    just::argument_parser::ArgumentParser::resolve_recipe(v27, a2[2], v9, v10);
    result = v27[0];
    if ( v27[0] == 56 )
    {
      v8 = *(_QWORD *)&v27[32];
      v2 += *(_QWORD *)&v27[40];
      v33 = *(_OWORD *)&v27[8];
      v34 = *(_QWORD *)&v27[24];
      a2[3] = v2;
      goto LABEL_13;
    }
LABEL_10:
    v11 = *(_OWORD *)&v27[32];
    v12 = v28;
    *(_OWORD *)((char *)&v26.m256i_u64[1] + 7) = *(_OWORD *)&v27[16];
    *(_OWORD *)v26.m256i_i8 = *(_OWORD *)&v27[1];
    *(_QWORD *)(a1 + 96) = v31;
    *(_OWORD *)(a1 + 80) = v30;
    *(_OWORD *)(a1 + 64) = v29;
    *(_OWORD *)(a1 + 48) = v12;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)((char *)&v26.m256i_u64[1] + 7);
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v26.m256i_i8;
    *(_BYTE *)a1 = result;
    *(_OWORD *)(a1 + 32) = v11;
    return result;
  }
  *(_QWORD *)v35 = v3;
  *(_QWORD *)&v35[8] = v4;
  <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from(v27, v35, 1LL);
  if ( __OFSUB__(-*(_QWORD *)v27, 1LL) )
  {
    result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 40, v3);
    *(_BYTE *)a1 = 52;
    *(_QWORD *)(a1 + 8) = 0LL;
    return result;
  }
  v26 = *(__m256i *)v27;
  just::argument_parser::ArgumentParser::resolve_recipe(v27, a2[2], *(_QWORD *)&v27[8], *(_QWORD *)&v27[16]);
  v13 = v27[0];
  if ( v27[0] != 56 )
  {
    v24 = *(_OWORD *)&v27[32];
    v25 = v28;
    *(_OWORD *)&v35[15] = *(_OWORD *)&v27[16];
    *(_OWORD *)v35 = *(_OWORD *)&v27[1];
    *(_QWORD *)(a1 + 96) = v31;
    *(_OWORD *)(a1 + 80) = v30;
    *(_OWORD *)(a1 + 64) = v29;
    *(_OWORD *)(a1 + 48) = v25;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v35[15];
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v35;
    *(_BYTE *)a1 = v13;
    *(_OWORD *)(a1 + 32) = v24;
    return core::ptr::drop_in_place<just::module_path::ModulePath>(&v26);
  }
  v8 = *(_QWORD *)&v27[32];
  v33 = *(_OWORD *)&v27[8];
  v34 = *(_QWORD *)&v27[24];
  a2[3] = ++v2;
  core::ptr::drop_in_place<just::module_path::ModulePath>(&v26);
LABEL_13:
  v32 = just::argument_parser::ArgumentParser::rest(a2);
  v15 = v14;
  just::recipe::Recipe<D>::argument_range(&v26, *(_QWORD *)(v8 + 80), *(_QWORD *)(v8 + 88));
  v16 = just::recipe::Recipe<D>::max_arguments(*(_QWORD *)(v8 + 80), *(_QWORD *)(v8 + 88));
  v17 = core::cmp::Ord::min(v15, v16);
  if ( (unsigned __int8)<core::ops::range::RangeInclusive<T> as just::range_ext::RangeExt<T>>::range_contains(
                          v26.m256i_i64[0],
                          v26.m256i_i64[1],
                          v17) )
  {
    v18 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v17, v32, v15);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v38, v18);
    a2[3] = v17 + v2;
    *(_QWORD *)&v27[40] = v34;
    *(_OWORD *)&v27[24] = v33;
    *(_QWORD *)&v27[16] = v39;
    *(_OWORD *)v27 = v38;
    *(_OWORD *)(a1 + 8) = v38;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v27[16];
    *(_QWORD *)(a1 + 40) = *(_QWORD *)&v27[32];
    result = *(_QWORD *)&v27[40];
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v27[40];
    *(_BYTE *)a1 = 56;
  }
  else
  {
    v32 = just::token::Token::lexeme(v8 + 144);
    v36 = v19;
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v27, *(_QWORD *)(v8 + 80), *(_QWORD *)(v8 + 88));
    v20 = *(_QWORD *)(v8 + 80);
    v21 = *(_QWORD *)(v8 + 88);
    v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v20, v20 + 208 * v21);
    v23 = just::recipe::Recipe<D>::max_arguments(v20, v21);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)v27;
    *(_QWORD *)(a1 + 64) = *(_QWORD *)&v27[16];
    *(_BYTE *)a1 = 1;
    *(_QWORD *)(a1 + 8) = v15;
    *(_QWORD *)(a1 + 16) = v22;
    *(_QWORD *)(a1 + 24) = v23;
    *(_QWORD *)(a1 + 32) = v32;
    *(_QWORD *)(a1 + 40) = v36;
    return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v33);
  }
  return result;
}