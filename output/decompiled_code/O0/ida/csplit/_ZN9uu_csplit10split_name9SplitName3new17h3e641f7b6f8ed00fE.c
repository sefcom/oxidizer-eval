__int64 __fastcall uu_csplit::split_name::SplitName::new(__int64 a1, __int64 *a2, _QWORD *a3, __int64 *a4)
{
  _WORD *v7; // rbx
  signed __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rbp
  const void *v13; // r14
  _BYTE *v14; // rbx
  char v15; // bp
  __int64 v16; // rbx
  void *v17; // r15
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __int128 v20; // xmm3
  __int64 v21; // rsi
  const void *v22; // rdi
  _QWORD *v24; // [rsp+8h] [rbp-170h]
  __int64 v25; // [rsp+10h] [rbp-168h]
  void *src; // [rsp+18h] [rbp-160h]
  char **v27; // [rsp+20h] [rbp-158h] BYREF
  __int64 v28; // [rsp+28h] [rbp-150h]
  void *dest; // [rsp+30h] [rbp-148h]
  __int64 v30; // [rsp+38h] [rbp-140h]
  __int64 v31; // [rsp+40h] [rbp-138h]
  __int64 v32; // [rsp+50h] [rbp-128h] BYREF
  _QWORD v33[2]; // [rsp+58h] [rbp-120h] BYREF
  __int128 v34; // [rsp+68h] [rbp-110h]
  __int128 v35; // [rsp+78h] [rbp-100h]
  __int128 v36; // [rsp+88h] [rbp-F0h]
  __int128 v37; // [rsp+98h] [rbp-E0h]
  __int64 v38; // [rsp+A8h] [rbp-D0h]
  __int128 v39; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+C0h] [rbp-B8h]
  _OWORD v41[4]; // [rsp+C8h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+108h] [rbp-70h]
  __int128 v43; // [rsp+110h] [rbp-68h]
  __int64 v44; // [rsp+120h] [rbp-58h]
  _BYTE v45[72]; // [rsp+130h] [rbp-48h] BYREF

  if ( *a2 == 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v27, 2LL, 0LL);
    if ( v27 )
      alloc::raw_vec::handle_error(v28, dest);
    v25 = v28;
    v7 = dest;
    v8 = 2LL;
    core::intrinsics::copy_nonoverlapping::precondition_check(aXx, dest, 1LL, 1LL, 2LL);
    src = v7;
    *v7 = 30840;
  }
  else
  {
    v25 = *a2;
    src = (void *)a2[1];
    v8 = a2[2];
  }
  v9 = *a4;
  v10 = 2LL;
  if ( *a4 != 0x8000000000000000LL )
  {
    v24 = a3;
    v11 = a4[1];
    if ( !v11 || (v12 = a4[2], v12 < 0) )
      core::panicking::panic_nounwind(anon_bb214e635f3e52e586c02a5eeb538d7c_28_llvm_3235605871402522358, 162LL);
    v13 = src;
    core::num::<impl core::str::traits::FromStr for usize>::from_str(&v27, v11);
    if ( ((unsigned __int8)v27 & 1) != 0 )
    {
      *(_QWORD *)(a1 + 8) = 8LL;
      *(_QWORD *)(a1 + 16) = v9;
      *(_QWORD *)(a1 + 24) = v11;
      *(_QWORD *)(a1 + 32) = v12;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      v15 = 1;
      a3 = v24;
LABEL_23:
      if ( v25 )
        _rust_dealloc(v13, v25, 1LL);
      if ( v15 )
      {
        v21 = *a3;
        if ( 2LL * *a3 )
        {
          v22 = (const void *)a3[1];
          goto LABEL_28;
        }
      }
      return a1;
    }
    v10 = v28;
    if ( v9 )
      _rust_dealloc(v11, v9, 1LL);
    a3 = v24;
  }
  v32 = v10;
  if ( *a3 == 0x8000000000000000LL )
  {
    v33[0] = &v32;
    v33[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v27 = &off_2A51A0;
    v28 = 2LL;
    dest = v33;
    v30 = 1LL;
    v31 = 0LL;
    v14 = v45;
    v13 = src;
    alloc::fmt::format::format_inner(v45, &v27);
    v15 = 1;
  }
  else
  {
    v15 = 0;
    v14 = a3;
    v13 = src;
  }
  v44 = *((_QWORD *)v14 + 2);
  v43 = *(_OWORD *)v14;
  v39 = v43;
  v40 = v44;
  uucore::features::format::Format<F>::parse(v41, &v39);
  if ( *(_QWORD *)&v41[0] == 0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 8) = (DWORD2(v41[0]) == 10) + 9LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<core::result::Result<uucore::features::format::Format<uucore::features::format::num_format::UnsignedInt>,uucore::features::format::FormatError>>(v41);
    goto LABEL_23;
  }
  v35 = v41[1];
  v36 = v41[2];
  v37 = v41[3];
  v38 = v42;
  v34 = v41[0];
  if ( !v13 || v8 < 0 )
    core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v27, v8, 0LL);
  v16 = v28;
  if ( v27 )
    alloc::raw_vec::handle_error(v28, dest);
  v17 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(v13, dest, 1LL, 1LL, v8);
  memcpy(v17, v13, v8);
  *(_QWORD *)a1 = v16;
  *(_QWORD *)(a1 + 8) = v17;
  *(_QWORD *)(a1 + 16) = v8;
  v18 = v35;
  v19 = v36;
  v20 = v37;
  *(_OWORD *)(a1 + 24) = v34;
  *(_OWORD *)(a1 + 40) = v18;
  *(_OWORD *)(a1 + 56) = v19;
  *(_OWORD *)(a1 + 72) = v20;
  *(_QWORD *)(a1 + 88) = v38;
  v21 = v25;
  if ( v25 )
  {
    v22 = v13;
LABEL_28:
    _rust_dealloc(v22, v21, 1LL);
  }
  return a1;
}
