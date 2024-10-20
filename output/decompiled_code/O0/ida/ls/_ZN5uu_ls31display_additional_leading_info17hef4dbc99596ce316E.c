__int64 __fastcall uu_ls::display_additional_leading_info(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  _QWORD *v7; // rbp
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // rbp
  _BYTE *v13; // r14
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r12
  __int64 v19; // r15
  _QWORD *v20; // rbx
  _BYTE *v21; // r14
  __int64 v22; // rcx
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rsi
  unsigned __int8 v25; // cl
  unsigned __int64 v26; // rdi
  __int64 v27; // rdx
  char v29; // [rsp+Fh] [rbp-239h] BYREF
  void *v30; // [rsp+10h] [rbp-238h] BYREF
  __int64 v31; // [rsp+18h] [rbp-230h]
  __int128 **v32; // [rsp+20h] [rbp-228h]
  __int64 v33; // [rsp+28h] [rbp-220h]
  __int64 v34; // [rsp+30h] [rbp-218h]
  __int64 v35; // [rsp+38h] [rbp-210h]
  char v36; // [rsp+40h] [rbp-208h]
  __int64 v37; // [rsp+48h] [rbp-200h] BYREF
  _BYTE *v38; // [rsp+50h] [rbp-1F8h]
  __int64 v39; // [rsp+58h] [rbp-1F0h] BYREF
  __int128 *v40; // [rsp+60h] [rbp-1E8h] BYREF
  __int64 (__fastcall *v41)(); // [rsp+68h] [rbp-1E0h]
  __int64 v42; // [rsp+70h] [rbp-1D8h]
  __int64 v43; // [rsp+78h] [rbp-1D0h]
  __int128 v44; // [rsp+80h] [rbp-1C8h] BYREF
  __int64 v45; // [rsp+90h] [rbp-1B8h] BYREF
  __int128 v46; // [rsp+A0h] [rbp-1A8h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-198h]
  _BYTE *v48; // [rsp+B8h] [rbp-190h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-188h]
  __int128 v50; // [rsp+C8h] [rbp-180h] BYREF
  __int128 **v51; // [rsp+D8h] [rbp-170h]
  __int64 v52; // [rsp+E0h] [rbp-168h]
  void **v53; // [rsp+E8h] [rbp-160h]
  __int64 v54; // [rsp+F0h] [rbp-158h]
  __int128 v55; // [rsp+F8h] [rbp-150h] BYREF
  __int64 v56; // [rsp+108h] [rbp-140h]
  __int128 v57; // [rsp+110h] [rbp-138h] BYREF
  __int64 v58; // [rsp+120h] [rbp-128h] BYREF
  __int128 v59; // [rsp+130h] [rbp-118h] BYREF
  __int64 v60; // [rsp+140h] [rbp-108h] BYREF
  __int64 v61; // [rsp+148h] [rbp-100h]
  __int64 v62; // [rsp+150h] [rbp-F8h]
  _QWORD v63[2]; // [rsp+158h] [rbp-F0h] BYREF
  _QWORD v64[2]; // [rsp+168h] [rbp-E0h] BYREF
  _QWORD v65[2]; // [rsp+178h] [rbp-D0h] BYREF
  _QWORD v66[6]; // [rsp+188h] [rbp-C0h] BYREF
  _QWORD v67[6]; // [rsp+1B8h] [rbp-90h] BYREF
  _QWORD v68[12]; // [rsp+1E8h] [rbp-60h] BYREF

  v5 = a5;
  v6 = a4;
  v7 = a3;
  v8 = a1;
  *(_QWORD *)&v46 = 0LL;
  *((_QWORD *)&v46 + 1) = 1LL;
  v47 = 0LL;
  if ( (*(_BYTE *)(a4 + 233) & 1) != 0 )
  {
    v9 = (__int64 *)(a2 + 72);
    v10 = *(_QWORD *)(a2 + 72);
    if ( v10 == 3 )
    {
      v9 = (__int64 *)core::cell::once::OnceCell<T>::try_init(a2 + 72, a2, a5);
      v10 = *v9;
    }
    v62 = v5;
    if ( v10 == 2 )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v30, 1LL, 0LL);
      v61 = v6;
      v11 = v7;
      v12 = v31;
      if ( v30 )
        goto LABEL_43;
      v13 = v32;
      v14 = 1LL;
      core::intrinsics::copy_nonoverlapping::precondition_check(asc_3ABC0, v32, 1LL, 1LL, 1LL);
      *v13 = 63;
      *(_QWORD *)&v44 = v12;
      *((_QWORD *)&v44 + 1) = v13;
      v45 = 1LL;
      v7 = v11;
      v8 = a1;
      v6 = v61;
    }
    else
    {
      *(_QWORD *)&v55 = v9[5];
      v40 = &v55;
      v41 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v30 = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
      v31 = 1LL;
      v32 = &v40;
      v33 = 1LL;
      v34 = 0LL;
      alloc::fmt::format::format_inner(&v50, &v30);
      v44 = v50;
      v14 = (__int64)v51;
      v45 = (__int64)v51;
      v13 = (_BYTE *)*((_QWORD *)&v50 + 1);
    }
    if ( !v13 || v14 < 0 )
      goto LABEL_42;
    v15 = *v7;
    v48 = v13;
    v49 = v14;
    v40 = (__int128 *)&v48;
    v41 = <&T as core::fmt::Display>::fmt;
    v42 = v15;
    v43 = 0LL;
    v30 = &dword_0 + 2;
    v32 = (__int128 **)(&dword_0 + 1);
    v33 = 1LL;
    v34 = 0LL;
    v35 = 32LL;
    v36 = 1;
    *(_QWORD *)&v50 = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
    *((_QWORD *)&v50 + 1) = 1LL;
    v51 = &v40;
    v52 = 2LL;
    v53 = &v30;
    v54 = 1LL;
    alloc::fmt::format::format_inner(&v55, &v50);
    v5 = v62;
    v57 = v55;
    v58 = v56;
    v63[0] = &v57;
    v63[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v66[0] = &unk_1FF378;
    v66[1] = 2LL;
    v66[4] = 0LL;
    v66[2] = v63;
    v66[3] = 1LL;
    if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v46, v66) )
      core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v29, &unk_1FE5D8, &off_1FF398);
    alloc::raw_vec::RawVec<T,A>::current_memory(&v30, &v57);
    if ( v31 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v58, v30, v31, v32);
    alloc::raw_vec::RawVec<T,A>::current_memory(&v30, &v44);
    a3 = (_QWORD *)v31;
    if ( v31 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v45, v30, v31, v32);
  }
  if ( (*(_BYTE *)(v6 + 234) & 1) == 0 )
    goto LABEL_41;
  v16 = a2 + 72;
  v17 = *(_QWORD *)(a2 + 72);
  if ( v17 == 3 )
  {
    v16 = core::cell::once::OnceCell<T>::try_init(a2 + 72, a2, v5);
    v17 = *(_QWORD *)v16;
  }
  if ( v17 == 2 )
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v30, 1LL, 0LL);
    v18 = v6;
    v19 = v8;
    v20 = v7;
    v12 = v31;
    if ( !v30 )
    {
      v21 = v32;
      core::intrinsics::copy_nonoverlapping::precondition_check(asc_3ABC0, v32, 1LL, 1LL, 1LL);
      *v21 = 63;
      v37 = v12;
      v38 = v21;
      v39 = 1LL;
      v7 = v20;
      v8 = v19;
      v6 = v18;
      goto LABEL_31;
    }
LABEL_43:
    alloc::raw_vec::handle_error(v12, v32);
  }
  v22 = *(_DWORD *)(v16 + 56) & 0xB000 | 0x4000u;
  if ( (_DWORD)v22 == 24576 )
  {
    v23 = 0LL;
  }
  else
  {
    v24 = *(_QWORD *)(v16 + 96);
    if ( v24 >> 55 )
      core::panicking::panic_const::panic_const_mul_overflow(
        &anon_11f7478bcb2f9b4befb7b1d3f51baba0_363_llvm_2775220154043362954,
        v24,
        a3,
        v22);
    v23 = v24 << 9;
  }
  v25 = *(_BYTE *)(v6 + 241);
  if ( !v25 )
  {
    v26 = *(_QWORD *)(v6 + 216);
    if ( !v26 )
      core::panicking::panic_const::panic_const_div_by_zero(&anon_11f7478bcb2f9b4befb7b1d3f51baba0_364_llvm_2775220154043362954);
    if ( (v26 | v23) >> 32 )
      v23 /= v26;
    else
      v23 = (unsigned int)v23 / (unsigned int)v26;
  }
  uucore::features::format::human::human_readable(&v37, v23, v25);
LABEL_31:
  if ( *(_BYTE *)(v6 + 248) != 4 )
  {
    if ( v38 && v39 >= 0 )
    {
      v27 = v7[8];
      v48 = v38;
      v49 = v39;
      v40 = (__int128 *)&v48;
      v41 = <&T as core::fmt::Display>::fmt;
      v42 = v27;
      v43 = 0LL;
      v30 = &dword_0 + 2;
      v32 = (__int128 **)(&dword_0 + 1);
      v33 = 1LL;
      v34 = 0LL;
      v35 = 32LL;
      v36 = 1;
      *(_QWORD *)&v50 = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
      *((_QWORD *)&v50 + 1) = 1LL;
      v51 = &v40;
      v52 = 2LL;
      v53 = &v30;
      v54 = 1LL;
      alloc::fmt::format::format_inner(&v55, &v50);
      v59 = v55;
      v60 = v56;
      v65[0] = &v59;
      v65[1] = <alloc::string::String as core::fmt::Display>::fmt;
      v68[0] = &unk_1FF378;
      v68[1] = 2LL;
      v68[4] = 0LL;
      v68[2] = v65;
      v68[3] = 1LL;
      if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v46, v68) )
        core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v29, &unk_1FE5D8, &off_1FF3B0);
      alloc::raw_vec::RawVec<T,A>::current_memory(&v30, &v59);
      if ( v31 )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v60, v30, v31, v32);
      goto LABEL_39;
    }
LABEL_42:
    core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_28_llvm_13257680528908953851, 162LL);
  }
  v64[0] = &v37;
  v64[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v67[0] = &unk_1FF378;
  v67[1] = 2LL;
  v67[4] = 0LL;
  v67[2] = v64;
  v67[3] = 1LL;
  if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v46, v67) )
    core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v29, &unk_1FE5D8, &off_1FF3C8);
LABEL_39:
  alloc::raw_vec::RawVec<T,A>::current_memory(&v30, &v37);
  if ( v31 )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v39, v30, v31, v32);
LABEL_41:
  *(_QWORD *)(v8 + 16) = v47;
  *(_OWORD *)v8 = v46;
  return v8;
}
