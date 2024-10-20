__int64 __fastcall uu_pr::recreate_arguments(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  void *v9; // rdx
  unsigned __int64 v10; // rbp
  __int64 *v11; // r12
  const void *v12; // r12
  size_t v13; // rdx
  size_t v14; // rbp
  void *v15; // r13
  bool v16; // cf
  __int64 v17; // r14
  __int128 v19; // [rsp+0h] [rbp-298h] BYREF
  void *dest[2]; // [rsp+10h] [rbp-288h]
  __int128 v21; // [rsp+20h] [rbp-278h]
  __int64 v22; // [rsp+30h] [rbp-268h]
  void *v23; // [rsp+38h] [rbp-260h] BYREF
  __int64 v24; // [rsp+40h] [rbp-258h]
  unsigned __int64 v25; // [rsp+48h] [rbp-250h]
  __int64 v26; // [rsp+50h] [rbp-248h]
  __int64 v27; // [rsp+58h] [rbp-240h]
  __m256i v28; // [rsp+60h] [rbp-238h] BYREF
  __m256i v29; // [rsp+80h] [rbp-218h] BYREF
  __m256i v30; // [rsp+A0h] [rbp-1F8h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-1D8h]
  __int64 v32; // [rsp+C8h] [rbp-1D0h]
  void *v33; // [rsp+D0h] [rbp-1C8h]
  size_t v34; // [rsp+D8h] [rbp-1C0h]
  _QWORD v35[2]; // [rsp+E0h] [rbp-1B8h] BYREF
  __m256i v36; // [rsp+F0h] [rbp-1A8h] BYREF
  __m256i v37; // [rsp+110h] [rbp-188h] BYREF
  __m256i v38; // [rsp+130h] [rbp-168h] BYREF
  _QWORD v39[2]; // [rsp+150h] [rbp-148h] BYREF
  _QWORD v40[2]; // [rsp+160h] [rbp-138h] BYREF
  __int128 v41; // [rsp+170h] [rbp-128h] BYREF
  __int64 v42; // [rsp+180h] [rbp-118h]
  __int128 v43; // [rsp+190h] [rbp-108h] BYREF
  __int64 v44; // [rsp+1A0h] [rbp-F8h]
  __int128 v45; // [rsp+1B0h] [rbp-E8h] BYREF
  __int64 v46; // [rsp+1C0h] [rbp-D8h]
  _OWORD v47[3]; // [rsp+1D0h] [rbp-C8h] BYREF
  _QWORD v48[3]; // [rsp+208h] [rbp-90h] BYREF
  __int128 v49; // [rsp+220h] [rbp-78h] BYREF
  __int64 v50; // [rsp+230h] [rbp-68h]
  __int128 v51; // [rsp+238h] [rbp-60h] BYREF
  __int64 v52; // [rsp+248h] [rbp-50h]
  __int64 v53[9]; // [rsp+250h] [rbp-48h] BYREF

  regex::regex::string::Regex::new(&v36, aD_1, 10LL);
  if ( !v36.m256i_i64[0] )
  {
    v46 = v36.m256i_i64[3];
    v45 = *(_OWORD *)&v36.m256i_u64[1];
    core::result::unwrap_failed(
      anon_7c75ec29d226220b36fc1f3bbd3b01ef_1_llvm_17389174869910011146,
      43LL,
      &v45,
      &off_2C7A28,
      &off_2C7AA8);
  }
  v28 = v36;
  regex::regex::string::Regex::new(&v37, aD_2, 9LL);
  if ( !v37.m256i_i64[0] )
  {
    v44 = v37.m256i_i64[3];
    v43 = *(_OWORD *)&v37.m256i_u64[1];
    core::result::unwrap_failed(
      anon_7c75ec29d226220b36fc1f3bbd3b01ef_1_llvm_17389174869910011146,
      43LL,
      &v43,
      &off_2C7A28,
      &off_2C7AC0);
  }
  v29 = v37;
  regex::regex::string::Regex::new(&v38, aNS, 7LL);
  if ( !v38.m256i_i64[0] )
  {
    v42 = v38.m256i_i64[3];
    v41 = *(_OWORD *)&v38.m256i_u64[1];
    core::result::unwrap_failed(
      anon_7c75ec29d226220b36fc1f3bbd3b01ef_1_llvm_17389174869910011146,
      43LL,
      &v41,
      &off_2C7A28,
      &off_2C7AD8);
  }
  v30 = v38;
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v23, a2, a3);
  v39[0] = a2;
  v39[1] = a2 + 24 * a3;
  *(_QWORD *)&v47[0] = &v30;
  v19 = (unsigned __int64)v39;
  v4 = core::iter::traits::iterator::Iterator::try_fold(v39, v47, (char *)&v19 + 8);
  if ( v5 )
  {
    v6 = v4;
    v7 = v4 + 1;
    if ( v4 == -1 )
      core::panicking::panic_const::panic_const_add_overflow(&off_2C7AF0);
    if ( v7 < a3 && a2 )
    {
      v8 = *(_QWORD *)(a2 + 24 * v7 + 8);
      if ( !v8 || (v9 = *(void **)(a2 + 24 * v7 + 16), (__int64)v9 < 0) )
        core::panicking::panic_nounwind(anon_475f815846da37737caa07221b879fb7_10_llvm_234892413440793941, 162LL);
      LODWORD(v19) = 0;
      *((_QWORD *)&v19 + 1) = v8;
      dest[0] = v9;
      dest[1] = 0LL;
      *(_QWORD *)&v21 = v9;
      BYTE8(v21) = 1;
      regex_automata::util::search::Input::set_span(&v19, 0LL);
      v47[2] = v21;
      v47[1] = *(_OWORD *)dest;
      v47[0] = v19;
      regex_automata::meta::regex::Regex::search_half(v53, &v29, v47);
      if ( v53[0] != 1 )
      {
        v10 = v25;
        if ( v25 <= v7 )
          alloc::vec::Vec<T,A>::remove::assert_failed(v7, v25, &off_2C7B08);
        v11 = (__int64 *)(v24 + 24 * v7);
        v22 = *v11;
        v27 = v11[1];
        v31 = v11[2];
        core::intrinsics::copy::precondition_check(v11 + 3, v11, 8LL);
        memmove(v11, v11 + 3, 24 * (v10 + ~v7));
        v25 = v10 - 1;
        LODWORD(v47[0]) = 0;
        v12 = (const void *)core::char::methods::encode_utf8_raw(9LL, v47, 4LL);
        v14 = v13;
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v19, v13, 0LL);
        v26 = *((_QWORD *)&v19 + 1);
        if ( (_QWORD)v19 )
          alloc::raw_vec::handle_error(v26, dest[0]);
        v15 = dest[0];
        core::intrinsics::copy_nonoverlapping::precondition_check(v12, dest[0], 1LL, 1LL, v14);
        memcpy(v15, v12, v14);
        v35[0] = 5LL;
        v32 = v26;
        v33 = v15;
        v34 = v14;
        v35[1] = 1LL;
        v40[0] = v35;
        v40[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        *(_QWORD *)&v19 = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
        *((_QWORD *)&v19 + 1) = 1LL;
        dest[0] = v40;
        dest[1] = &dword_0 + 1;
        *(_QWORD *)&v21 = 0LL;
        ((void (__fastcall *)(__int128 *, __int128 *))alloc::fmt::format::format_inner)(&v51, &v19);
        if ( v32 )
          _rust_dealloc(v33, v32, 1LL);
        v50 = v52;
        v49 = v51;
        alloc::vec::Vec<T,A>::insert(&v23, v7, &v49);
        v16 = __CFADD__(v6, 2LL);
        v17 = v6 + 2;
        if ( v16 )
          core::panicking::panic_const::panic_const_add_overflow(&off_2C7B20);
        v48[0] = v22;
        v48[1] = v27;
        v48[2] = v31;
        alloc::vec::Vec<T,A>::insert(&v23, v17, v48);
      }
    }
  }
  *(_QWORD *)&v19 = v24;
  *((_QWORD *)&v19 + 1) = v24;
  dest[0] = v23;
  dest[1] = (void *)(v24 + 24 * v25);
  *(_QWORD *)&v21 = &v28;
  ((void (__fastcall *)(__int64, __int128 *))alloc::vec::in_place_collect::from_iter_in_place)(a1, &v19);
  core::ptr::drop_in_place<regex_automata::meta::regex::Regex>(&v30);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v30.m256i_i64[2]) )
    alloc::sync::Arc<T,A>::drop_slow(&v30.m256i_u64[2]);
  core::ptr::drop_in_place<regex_automata::meta::regex::Regex>(&v29);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v29.m256i_i64[2]) )
    alloc::sync::Arc<T,A>::drop_slow(&v29.m256i_u64[2]);
  core::ptr::drop_in_place<regex_automata::meta::regex::Regex>(&v28);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v28.m256i_i64[2]) )
    alloc::sync::Arc<T,A>::drop_slow(&v28.m256i_u64[2]);
  return a1;
}
