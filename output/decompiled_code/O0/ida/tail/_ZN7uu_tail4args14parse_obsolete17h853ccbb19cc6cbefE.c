_OWORD *__fastcall uu_tail::args::parse_obsolete(_QWORD *a1, __int64 a2, __int64 a3)
{
  _OWORD *v4; // r13
  char v5; // bl
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r15
  _BYTE *v9; // r14
  __int64 v10; // r12
  char v11; // r13
  char v12; // bp
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r15
  void *v17; // r12
  _OWORD *v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int128 v24; // xmm4
  __int64 v25; // r14
  __int64 v26; // r15
  int v27; // edx
  __int64 v28; // r14
  __int64 v29; // r15
  _OWORD *v30; // rax
  __int128 v31; // xmm0
  void *v33; // rcx
  __int64 v34; // rdx
  __int128 v35; // [rsp+0h] [rbp-278h] BYREF
  __int128 v36; // [rsp+10h] [rbp-268h] BYREF
  __int128 v37; // [rsp+20h] [rbp-258h]
  __int128 v38; // [rsp+30h] [rbp-248h]
  __int128 v39; // [rsp+40h] [rbp-238h]
  __int64 v40; // [rsp+50h] [rbp-228h] BYREF
  __int64 v41; // [rsp+58h] [rbp-220h]
  __int64 v42; // [rsp+60h] [rbp-218h] BYREF
  int v43; // [rsp+6Ch] [rbp-20Ch] BYREF
  __int64 v44; // [rsp+70h] [rbp-208h] BYREF
  char v45; // [rsp+78h] [rbp-200h]
  char v46; // [rsp+79h] [rbp-1FFh]
  char v47; // [rsp+7Ah] [rbp-1FEh]
  __int128 v48; // [rsp+80h] [rbp-1F8h] BYREF
  __int128 v49; // [rsp+90h] [rbp-1E8h]
  __int128 v50; // [rsp+A0h] [rbp-1D8h]
  __int128 v51; // [rsp+B0h] [rbp-1C8h] BYREF
  __int128 v52; // [rsp+C0h] [rbp-1B8h]
  __int128 v53; // [rsp+D0h] [rbp-1A8h]
  _QWORD v54[2]; // [rsp+E0h] [rbp-198h] BYREF
  _QWORD v55[2]; // [rsp+F0h] [rbp-188h] BYREF
  _QWORD v56[2]; // [rsp+100h] [rbp-178h] BYREF
  _QWORD v57[2]; // [rsp+110h] [rbp-168h] BYREF
  _QWORD v58[2]; // [rsp+120h] [rbp-158h] BYREF
  _QWORD v59[3]; // [rsp+130h] [rbp-148h] BYREF
  char v60; // [rsp+148h] [rbp-130h]
  _QWORD v61[3]; // [rsp+150h] [rbp-128h] BYREF
  char v62; // [rsp+168h] [rbp-110h]
  __int128 v63; // [rsp+170h] [rbp-108h]
  __int64 v64; // [rsp+180h] [rbp-F8h]
  __int128 v65; // [rsp+190h] [rbp-E8h]
  __int128 v66; // [rsp+1A0h] [rbp-D8h]
  __int128 v67; // [rsp+1B0h] [rbp-C8h]
  __int128 v68; // [rsp+1C0h] [rbp-B8h]
  __int128 v69; // [rsp+1D0h] [rbp-A8h]
  _BYTE v70[24]; // [rsp+1E8h] [rbp-90h] BYREF
  _BYTE v71[24]; // [rsp+200h] [rbp-78h] BYREF
  _BYTE v72[24]; // [rsp+218h] [rbp-60h] BYREF
  _BYTE v73[72]; // [rsp+230h] [rbp-48h] BYREF

  v4 = a1;
  uu_tail::parse::parse_obsolete(&v44, a2);
  v5 = v47;
  if ( v47 == 2 )
  {
    if ( !*(_QWORD *)(a2 + 8) || *(__int64 *)(a2 + 16) < 0 )
      core::panicking::panic_nounwind(anon_25ca73c7ec58fbee70b780a6cb8b0c0a_11_llvm_4725413469243929574, 162LL);
    v6 = (unsigned __int8)v44;
    std::sys::os_str::bytes::Slice::to_string_lossy(&v40);
    switch ( v6 )
    {
      case 0LL:
        v7 = v41;
        v8 = v42;
        if ( v40 != 0x8000000000000000LL )
          core::slice::raw::from_raw_parts::precondition_check(v41, 1LL, 1LL, v42);
        v59[0] = 0LL;
        v59[1] = v7;
        v59[2] = v8;
        v60 = 1;
        v55[0] = v59;
        v55[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v35 = &off_18A650;
        *((_QWORD *)&v35 + 1) = 2LL;
        *(_QWORD *)&v36 = v55;
        *((_QWORD *)&v36 + 1) = 1LL;
        *(_QWORD *)&v37 = 0LL;
        v9 = v70;
        alloc::fmt::format::format_inner(v70, &v35);
        break;
      case 1LL:
        v28 = v41;
        v29 = v42;
        if ( v40 != 0x8000000000000000LL )
          core::slice::raw::from_raw_parts::precondition_check(v41, 1LL, 1LL, v42);
        v61[0] = 0LL;
        v61[1] = v28;
        v61[2] = v29;
        v62 = 1;
        v56[0] = v61;
        v56[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v35 = &off_18A670;
        *((_QWORD *)&v35 + 1) = 1LL;
        *(_QWORD *)&v36 = v56;
        *((_QWORD *)&v36 + 1) = 1LL;
        *(_QWORD *)&v37 = 0LL;
        v9 = v71;
        alloc::fmt::format::format_inner(v71, &v35);
        break;
      case 2LL:
        v25 = v41;
        v26 = v42;
        if ( v40 != 0x8000000000000000LL )
          core::slice::raw::from_raw_parts::precondition_check(v41, 1LL, 1LL, v42);
        v54[0] = v25;
        v54[1] = v25 + v26;
        if ( <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(v54, 1LL)
          || !(unsigned int)core::str::validations::next_code_point(v54) )
        {
          goto LABEL_25;
        }
        if ( (v27 ^ 0xD800u) - 2048 >= 0x10F800 )
          core::panicking::panic_nounwind(anon_6c54eb1e7b215b8ed1966ba3419445bf_11_llvm_11417008648433573330, 57LL);
        if ( v27 == (_DWORD)&loc_110000 )
LABEL_25:
          v27 = 0;
        v43 = v27;
        v57[0] = &v43;
        v57[1] = <char as core::fmt::Display>::fmt;
        *(_QWORD *)&v35 = &off_18A680;
        *((_QWORD *)&v35 + 1) = 1LL;
        *(_QWORD *)&v36 = v57;
        *((_QWORD *)&v36 + 1) = 1LL;
        *(_QWORD *)&v37 = 0LL;
        v9 = v72;
        alloc::fmt::format::format_inner(v72, &v35);
        break;
      case 3LL:
        v58[0] = &v40;
        v58[1] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
        *(_QWORD *)&v35 = &off_18A690;
        *((_QWORD *)&v35 + 1) = 2LL;
        *(_QWORD *)&v36 = v58;
        *((_QWORD *)&v36 + 1) = 1LL;
        *(_QWORD *)&v37 = 0LL;
        v9 = v73;
        alloc::fmt::format::format_inner(v73, &v35);
        break;
    }
    v64 = *((_QWORD *)v9 + 2);
    v63 = *(_OWORD *)v9;
    *(_QWORD *)&v36 = v64;
    v35 = v63;
    DWORD2(v36) = 1;
    v30 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !v30 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v31 = v35;
    v30[1] = v36;
    *v30 = v31;
    a1[1] = v30;
    a1[2] = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
    *a1 = 6LL;
    if ( v40 != 0x8000000000000000LL )
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(&v35, &v40);
      if ( *((_QWORD *)&v35 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v42, v35, *((_QWORD *)&v35 + 1), v36);
    }
  }
  else if ( v47 == 3 )
  {
    *a1 = 5LL;
  }
  else
  {
    v10 = v44;
    v11 = v45;
    v12 = v46;
    core::time::Duration::try_from_secs_f32(&v48, 1.0);
    if ( DWORD2(v48) == 1000000000 )
    {
      v33 = &anon_ccaa1bf9f263435b6bcc65734e6162bc_16_llvm_3342634398492896223;
      if ( (v48 & 1) == 0 )
        v33 = &anon_ccaa1bf9f263435b6bcc65734e6162bc_15_llvm_3342634398492896223;
      v34 = 72LL;
      if ( (v48 & 1) == 0 )
        v34 = 59LL;
      *(_QWORD *)&v35 = v33;
      *((_QWORD *)&v35 + 1) = v34;
      core::time::Duration::from_secs_f32::panic_cold_display(
        &v35,
        &anon_ccaa1bf9f263435b6bcc65734e6162bc_18_llvm_3342634398492896223);
    }
    BYTE12(v39) = 2;
    *(_QWORD *)&v39 = 5LL;
    *(_QWORD *)&v38 = v48;
    DWORD2(v38) = DWORD2(v48);
    DWORD2(v39) = 0;
    *((_QWORD *)&v36 + 1) = 0LL;
    v37 = 8uLL;
    if ( (v5 & 1) != 0 )
      BYTE12(v39) = a3 != 0;
    v13 = v11 & 1;
    v14 = 10LL;
    if ( (v12 & 1) == 0 )
    {
      v14 = v10;
      v10 = v13;
    }
    v15 = 4LL;
    if ( (v12 & 1) != 0 )
      v15 = v13;
    *(_QWORD *)&v35 = v15;
    *((_QWORD *)&v35 + 1) = v10;
    *(_QWORD *)&v36 = v14;
    if ( a3 )
    {
      uu_tail::paths::Input::from(&v51, a3);
      v4 = a1;
    }
    else
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v48, 14LL, 0LL);
      v16 = *((_QWORD *)&v48 + 1);
      if ( (_QWORD)v48 )
        alloc::raw_vec::handle_error(*((_QWORD *)&v48 + 1), v49);
      v4 = a1;
      v17 = (void *)v49;
      core::intrinsics::copy_nonoverlapping::precondition_check(
        &anon_ab742581333cf5e7f01380032d71b570_108_llvm_1562610066123874583,
        v49,
        1LL,
        1LL,
        14LL);
      qmemcpy(v17, "standard input", 14);
      *((_QWORD *)&v52 + 1) = 0x8000000000000000LL;
      *(_QWORD *)&v51 = v16;
      *((_QWORD *)&v51 + 1) = v17;
      *(_QWORD *)&v52 = 14LL;
    }
    v50 = v53;
    v49 = v52;
    v48 = v51;
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v36 + 8);
    v18 = (_OWORD *)v37;
    v19 = v51;
    v20 = v52;
    *(_OWORD *)(v37 + 32) = v53;
    v18[1] = v20;
    *v18 = v19;
    *((_QWORD *)&v37 + 1) = 1LL;
    v21 = v35;
    v22 = v36;
    v23 = v38;
    v65 = v35;
    v66 = v36;
    v68 = v38;
    v69 = v39;
    v24 = v37;
    v67 = v37;
    v4[4] = v39;
    v4[3] = v23;
    v4[2] = v24;
    v4[1] = v22;
    *v4 = v21;
  }
  return v4;
}
