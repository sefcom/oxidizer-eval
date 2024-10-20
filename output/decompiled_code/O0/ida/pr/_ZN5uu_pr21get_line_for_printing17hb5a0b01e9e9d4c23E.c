        __int64 a7)
{
  unsigned __int64 v8; // r14
  _QWORD *v9; // rbp
  __int64 v10; // rax
  double v11; // xmm0_8
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rbp
  __int64 v16; // rax
  bool v17; // cf
  unsigned __int128 v18; // rax
  __int64 v19; // r15
  unsigned __int64 v20; // rcx
  __int64 v21; // r13
  __int64 *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r14
  char *v32; // r12
  unsigned __int64 v33; // r13
  __int64 v34; // rbx
  char **v36; // rax
  char **v37; // rdi
  char **v38; // [rsp+8h] [rbp-2B0h]
  __int128 v39; // [rsp+10h] [rbp-2A8h] BYREF
  __int64 v40; // [rsp+20h] [rbp-298h]
  _BYTE v41[24]; // [rsp+30h] [rbp-288h] BYREF
  __int64 v42; // [rsp+48h] [rbp-270h]
  const char **v43; // [rsp+50h] [rbp-268h]
  __int64 v44; // [rsp+58h] [rbp-260h]
  const char *v45; // [rsp+60h] [rbp-258h] BYREF
  __int64 v46; // [rsp+68h] [rbp-250h]
  _QWORD *v47; // [rsp+70h] [rbp-248h]
  __int64 v48; // [rsp+78h] [rbp-240h]
  _BYTE *v49; // [rsp+80h] [rbp-238h]
  __int64 (__fastcall **v50)(); // [rsp+88h] [rbp-230h]
  __int64 v51; // [rsp+90h] [rbp-228h]
  __int64 v52; // [rsp+98h] [rbp-220h]
  __int64 v53; // [rsp+A8h] [rbp-210h]
  __int64 v54; // [rsp+B8h] [rbp-200h]
  __int64 v55; // [rsp+C0h] [rbp-1F8h]
  char v56; // [rsp+C8h] [rbp-1F0h]
  __int128 v57; // [rsp+D0h] [rbp-1E8h] BYREF
  __int64 v58; // [rsp+E0h] [rbp-1D8h]
  _BYTE v59[24]; // [rsp+F0h] [rbp-1C8h] BYREF
  __int128 v60; // [rsp+110h] [rbp-1A8h] BYREF
  __int64 v61; // [rsp+120h] [rbp-198h]
  __int64 v62; // [rsp+130h] [rbp-188h]
  _QWORD *v63; // [rsp+138h] [rbp-180h]
  __int64 v64; // [rsp+140h] [rbp-178h] BYREF
  __int64 v65; // [rsp+148h] [rbp-170h]
  __int64 v66; // [rsp+150h] [rbp-168h]
  __int64 v67; // [rsp+158h] [rbp-160h] BYREF
  __int128 v68; // [rsp+160h] [rbp-158h] BYREF
  __int64 v69; // [rsp+170h] [rbp-148h] BYREF
  __int128 *v70; // [rsp+178h] [rbp-140h] BYREF
  __int64 (__fastcall *v71)(); // [rsp+180h] [rbp-138h]
  __int64 *v72; // [rsp+188h] [rbp-130h]
  __int64 (__fastcall *v73)(); // [rsp+190h] [rbp-128h]
  unsigned __int64 v74; // [rsp+198h] [rbp-120h]
  __int64 v75; // [rsp+1A0h] [rbp-118h]
  _QWORD *v76; // [rsp+1A8h] [rbp-110h] BYREF
  __int64 v77; // [rsp+1B0h] [rbp-108h] BYREF
  __int64 *v78; // [rsp+1B8h] [rbp-100h] BYREF
  _QWORD *v79; // [rsp+1C0h] [rbp-F8h] BYREF
  __int64 v80; // [rsp+1C8h] [rbp-F0h] BYREF
  _QWORD v81[2]; // [rsp+1D0h] [rbp-E8h] BYREF
  _QWORD v82[4]; // [rsp+1E0h] [rbp-D8h] BYREF
  _QWORD v83[6]; // [rsp+200h] [rbp-B8h] BYREF
  __int128 v84; // [rsp+230h] [rbp-88h]
  __int128 v85; // [rsp+240h] [rbp-78h] BYREF
  __int64 v86; // [rsp+250h] [rbp-68h]
  __int128 v87; // [rsp+258h] [rbp-60h] BYREF
  __int64 v88; // [rsp+268h] [rbp-50h]
  __int128 v89; // [rsp+270h] [rbp-48h] BYREF
  __int64 v90; // [rsp+280h] [rbp-38h]

  v63 = a6;
  v8 = a4;
  v9 = a3;
  v62 = a1;
  v64 = 0LL;
  v65 = 1LL;
  v66 = 0LL;
  v10 = a3[4];
  v80 = v10;
  if ( *(_QWORD *)(a2 + 216) == 0x8000000000000000LL
    || (LOBYTE(a4) = *(_QWORD *)(a2 + 16) == 1LL, LOBYTE(a3) = a5 != 0, ((a5 != 0) & (unsigned __int8)a4) != 0)
    || !v10 )
  {
    *(_QWORD *)&v57 = 0LL;
    *((_QWORD *)&v57 + 1) = 1LL;
    v58 = 0LL;
    goto LABEL_3;
  }
  *(_QWORD *)v41 = 0LL;
  *(_QWORD *)&v41[8] = 1LL;
  *(_QWORD *)&v41[16] = 0LL;
  v51 = 32LL;
  LOBYTE(v52) = 3;
  v45 = 0LL;
  v47 = 0LL;
  v49 = v41;
  v50 = &anon_4be49b5f23b11e5efadbc1996a78d621_0_llvm_1001870993357062971;
  if ( (unsigned __int8)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt(&v80, &v45) )
    core::result::unwrap_failed(
      anon_4be49b5f23b11e5efadbc1996a78d621_2_llvm_1001870993357062971,
      55LL,
      &v70,
      &anon_7f295c9beed7725822dd3881ae5006b0_15_llvm_2380350054417695862,
      &anon_4be49b5f23b11e5efadbc1996a78d621_4_llvm_1001870993357062971);
  v60 = *(_OWORD *)v41;
  v61 = *(_QWORD *)&v41[16];
  if ( *(_QWORD *)(a2 + 216) == 0x8000000000000000LL )
    core::option::unwrap_failed(&off_2C8230);
  v25 = *(_QWORD *)(a2 + 240);
  v67 = a2 + 216;
  v26 = v61 - v25;
  if ( v61 < v25 )
  {
    v70 = &v60;
    v71 = <alloc::string::String as core::fmt::Display>::fmt;
    v72 = &v67;
    v73 = <&T as core::fmt::Display>::fmt;
    v74 = v25;
    v75 = 0LL;
    v45 = (_BYTE *)(&dword_0 + 2);
    v47 = (_QWORD *)(&dword_0 + 1);
    v48 = 2LL;
    v49 = 0LL;
    v50 = (__int64 (__fastcall **)())&qword_20;
    LOBYTE(v51) = 1;
    v52 = 2LL;
    v53 = 2LL;
    v54 = 1LL;
    v55 = 32LL;
    v56 = 3;
    *(_QWORD *)v41 = "\x01";
    *(_QWORD *)&v41[8] = 2LL;
    *(_QWORD *)&v41[16] = &v70;
    v42 = 3LL;
    v43 = &v45;
    v44 = 2LL;
    alloc::fmt::format::format_inner(&v89, v41, &v45, <&T as core::fmt::Display>::fmt, v23, v24);
    goto LABEL_58;
  }
  if ( v61 < 0 || !*((_QWORD *)&v60 + 1) )
    goto LABEL_61;
  if ( v61 != v25 )
  {
    if ( v61 <= v26 )
    {
      if ( v25 )
LABEL_55:
        core::str::slice_error_fail(*((_QWORD *)&v60 + 1), v61, v26, v61, &off_2C8248);
    }
    else if ( *(char *)(*((_QWORD *)&v60 + 1) + v26) <= -65 )
    {
      goto LABEL_55;
    }
  }
  v81[0] = v26 + *((_QWORD *)&v60 + 1);
  v81[1] = v25;
  v70 = (__int128 *)v81;
  v71 = <&T as core::fmt::Display>::fmt;
  v72 = &v67;
  v73 = <&T as core::fmt::Display>::fmt;
  v74 = v25;
  v75 = 0LL;
  v45 = (_BYTE *)(&dword_0 + 2);
  v47 = (_QWORD *)(&dword_0 + 1);
  v48 = 2LL;
  v49 = 0LL;
  v50 = (__int64 (__fastcall **)())&qword_20;
  LOBYTE(v51) = 1;
  v52 = 2LL;
  v53 = 2LL;
  v54 = 1LL;
  v55 = 32LL;
  v56 = 3;
  *(_QWORD *)v41 = "\x01";
  *(_QWORD *)&v41[8] = 2LL;
  *(_QWORD *)&v41[16] = &v70;
  v42 = 3LL;
  v43 = &v45;
  v44 = 2LL;
  alloc::fmt::format::format_inner(&v89, v41, v26, <&T as core::fmt::Display>::fmt, &v45, v24);
LABEL_58:
  v58 = v90;
  v57 = v89;
  if ( (_QWORD)v60 )
    _rust_dealloc(*((_QWORD *)&v60 + 1), v60, 1LL);
LABEL_3:
  if ( *v9 == 0x8000000000000000LL )
  {
    v79 = &v9[*v9 == 0x8000000000000000LL];
    core::result::unwrap_failed(
      anon_7c75ec29d226220b36fc1f3bbd3b01ef_1_llvm_17389174869910011146,
      43LL,
      &v79,
      &unk_2C7A88,
      &off_2C81D0);
  }
  v76 = &v9[*v9 == 0x8000000000000000LL];
  v82[0] = &v57;
  v82[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v82[2] = &v76;
  v82[3] = <&T as core::fmt::Display>::fmt;
  v45 = "\x01";
  v46 = 2LL;
  v47 = v82;
  v48 = 2LL;
  v49 = 0LL;
  alloc::fmt::format::format_inner(&v85, &v45, a3, a4, a5, a6);
  v11 = *(double *)&v85;
  v39 = v85;
  v40 = v86;
  v77 = a2 + 168;
  if ( !*((_QWORD *)&v85 + 1) || v86 < 0 )
LABEL_61:
    core::panicking::panic_nounwind(anon_475f815846da37737caa07221b879fb7_10_llvm_234892413440793941, 162LL);
  v45 = (const char *)*((_QWORD *)&v85 + 1);
  v46 = *((_QWORD *)&v85 + 1) + v86;
  v15 = 0LL;
  if ( (unsigned int)core::str::validations::next_code_point(&v45) )
  {
    v38 = &anon_f7be525e746154e34cdd400086c42546_13_llvm_11761240801109542047;
    do
    {
      if ( (v12 ^ 0xD800u) - 2048 >= 0x10F800 )
        core::panicking::panic_nounwind(anon_f7be525e746154e34cdd400086c42546_11_llvm_11761240801109542047, 57LL);
      if ( v12 == (_DWORD)&loc_110000 )
        break;
      v16 = v12 == 9;
      v17 = __CFADD__(v16, v15);
      v15 += v16;
      if ( v17 )
        goto LABEL_67;
    }
    while ( (unsigned int)core::str::validations::next_code_point(&v45) );
  }
  v18 = 7 * (unsigned __int128)v15;
  if ( !is_mul_ok(7uLL, v15) )
    core::panicking::panic_const::panic_const_mul_overflow(&off_2C81E8, &v45, *((_QWORD *)&v18 + 1), 7LL, v13, v14, v11);
  v19 = v40;
  v20 = v40 + v18;
  if ( __CFADD__(v40, (_QWORD)v18) )
  {
    v36 = &off_2C8200;
LABEL_66:
    v38 = v36;
LABEL_67:
    core::panicking::panic_const::panic_const_add_overflow(v38);
  }
  v21 = a5 + 1;
  if ( !v21 )
  {
    v36 = &off_2C8218;
    goto LABEL_66;
  }
  if ( v21 == a7 )
  {
    v22 = &v64;
  }
  else
  {
    v22 = &v64;
    if ( (*(_BYTE *)(a2 + 323) & 1) == 0 )
      v22 = (__int64 *)(a2 + 192);
  }
  v27 = (unsigned __int64)v63;
  v78 = v22;
  if ( !*v63 )
  {
    v68 = v39;
    v69 = v40;
LABEL_40:
    *(_QWORD *)&v59[16] = v69;
    *(_OWORD *)v59 = v68;
    v34 = v62;
    goto LABEL_43;
  }
  if ( !v8 )
  {
    v37 = &anon_7c75ec29d226220b36fc1f3bbd3b01ef_233_llvm_17389174869910011146;
    goto LABEL_70;
  }
  v28 = v63[1];
  v27 = v8 - 1;
  v17 = v28 < v8 - 1;
  v29 = v28 - (v8 - 1);
  if ( v17 )
  {
    v37 = &anon_7c75ec29d226220b36fc1f3bbd3b01ef_234_llvm_17389174869910011146;
LABEL_70:
    core::panicking::panic_const::panic_const_sub_overflow(v37, &v45, v27, v20);
  }
  if ( (v8 | v29) >> 32 )
  {
    v30 = v29 % v8;
    v31 = v29 / v8;
  }
  else
  {
    v30 = (unsigned int)v29 % (unsigned int)v8;
    v31 = (unsigned int)v29 / (unsigned int)v8;
  }
  v32 = (char *)(v31 - v20);
  if ( v31 > v20 )
  {
    v33 = 0LL;
    do
    {
      if ( v19 == (_QWORD)v39 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v39);
      ++v33;
      *(_BYTE *)(*((_QWORD *)&v39 + 1) + v19++) = 32;
      v40 = v19;
    }
    while ( v33 < (unsigned __int64)v32 );
  }
  if ( !*((_QWORD *)&v39 + 1) || v19 < 0 )
    goto LABEL_61;
  v45 = (const char *)*((_QWORD *)&v39 + 1);
  v46 = *((_QWORD *)&v39 + 1) + v19;
  v47 = (_QWORD *)v31;
  <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(v41, &v45, v30);
  v27 = 0x8000000000000000LL;
  v84 = *(_OWORD *)&v41[8];
  v68 = v39;
  v20 = v40;
  v69 = v40;
  if ( *(_QWORD *)v41 == 0x8000000000000000LL )
    goto LABEL_40;
  *(_QWORD *)v59 = *(_QWORD *)v41;
  *(_OWORD *)&v59[8] = v84;
  alloc::raw_vec::RawVec<T,A>::current_memory(&v45, &v68);
  v34 = v62;
  v27 = v46;
  if ( v46 )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v69, v45, v46, v47);
LABEL_43:
  v83[0] = &v77;
  v83[1] = <&T as core::fmt::Display>::fmt;
  v83[2] = v59;
  v83[3] = <alloc::string::String as core::fmt::Display>::fmt;
  v83[4] = &v78;
  v83[5] = <&T as core::fmt::Display>::fmt;
  v45 = (const char *)&unk_65A10;
  v46 = 3LL;
  v47 = v83;
  v48 = 3LL;
  v49 = 0LL;
  alloc::fmt::format::format_inner(&v87, &v45, v27, v20, v13, v14);
  if ( *(_QWORD *)v59 )
    _rust_dealloc(*(_QWORD *)&v59[8], *(_QWORD *)v59, 1LL);
  *(_QWORD *)(v34 + 16) = v88;
  *(_OWORD *)v34 = v87;
  if ( (_QWORD)v57 )
    _rust_dealloc(*((_QWORD *)&v57 + 1), v57, 1LL);
  if ( v64 )
    _rust_dealloc(v65, v64, 1LL);
  return v34;
}
