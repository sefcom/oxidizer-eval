__int64 __fastcall uu_cp::parse_path_args(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r15
  void *v14; // r12
  unsigned __int64 v15; // rax
  const void *v16; // r13
  size_t v18; // r12
  void *v19; // rbp
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rax
  char **v25; // [rsp+8h] [rbp-170h] BYREF
  __int64 v26; // [rsp+10h] [rbp-168h]
  void *dest; // [rsp+18h] [rbp-160h]
  __int64 v28; // [rsp+20h] [rbp-158h]
  __int64 v29; // [rsp+28h] [rbp-150h]
  _BYTE v30[24]; // [rsp+38h] [rbp-140h]
  __int64 v31; // [rsp+50h] [rbp-128h]
  __int128 v32; // [rsp+58h] [rbp-120h] BYREF
  __int64 v33; // [rsp+68h] [rbp-110h]
  _QWORD v34[2]; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v35[2]; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v36; // [rsp+90h] [rbp-E8h]
  unsigned __int64 v37; // [rsp+A0h] [rbp-D8h]
  __int128 v38; // [rsp+A8h] [rbp-D0h]
  __int64 v39; // [rsp+B8h] [rbp-C0h]
  __int128 v40; // [rsp+C0h] [rbp-B8h]
  __int128 v41; // [rsp+D8h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+E8h] [rbp-90h]
  __int128 v43; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v44; // [rsp+100h] [rbp-78h]
  _BYTE v45[112]; // [rsp+108h] [rbp-70h] BYREF

  v4 = a1;
  v5 = a2[2];
  if ( v5 )
  {
    if ( v5 == 1 && *(_QWORD *)(a3 + 24) == 0x8000000000000000LL )
    {
      v6 = a2[1];
      if ( v6 && (v6 & 7) == 0 )
      {
        v34[0] = a2[1];
        v34[1] = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
        v25 = &off_182088;
        v26 = 1LL;
        dest = v34;
        v28 = 1LL;
        v29 = 0LL;
        alloc::fmt::format::format_inner(&v41, &v25);
        *(_QWORD *)a1 = 4LL;
        *(_OWORD *)(a1 + 8) = v41;
        v7 = v42;
LABEL_21:
        *(_QWORD *)(a1 + 24) = v7;
        goto LABEL_22;
      }
      goto LABEL_35;
    }
    v8 = *(_QWORD *)(a3 + 24);
    if ( (*(_BYTE *)(a3 + 66) & 1) != 0 && v5 >= 3 && v8 == 0x8000000000000000LL )
    {
      if ( v5 <= 0x555555555555555LL )
      {
        v15 = a2[1];
        if ( v15 )
        {
          if ( (v15 & 7) == 0 )
          {
            v35[0] = v15 + 48;
            v35[1] = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
            v25 = &off_1820B0;
            v26 = 1LL;
            dest = v35;
            v28 = 1LL;
            v29 = 0LL;
            alloc::fmt::format::format_inner(&v43, &v25);
            *(_QWORD *)a1 = 4LL;
            *(_OWORD *)(a1 + 8) = v43;
            v7 = v44;
            goto LABEL_21;
          }
        }
      }
LABEL_35:
      core::panicking::panic_nounwind(anon_dd6310c77d121ecce151d075805ee620_20_llvm_1613436602710632571, 162LL);
    }
    v31 = a1;
    if ( v8 == 0x8000000000000000LL )
    {
      v9 = v5 - 1;
      a2[2] = v9;
      if ( v9 >= *a2 )
        core::panicking::panic_nounwind(anon_69e5fecc8813cd2daa240795ffa1a247_11_llvm_7691381228455331083, 104LL);
      v10 = a2[1];
      v11 = 3 * v9;
      v12 = *(_QWORD *)(v10 + 24 * v9);
      v40 = *(_OWORD *)(v10 + 8 * v11 + 8);
      if ( v12 == 0x8000000000000000LL )
        core::option::unwrap_failed(&off_182098, v10, a3, 0x8000000000000000LL);
      *(_QWORD *)v30 = v12;
      *(_OWORD *)&v30[8] = v40;
      if ( (*(_BYTE *)(a3 + 69) & 1) == 0 )
        goto LABEL_33;
LABEL_25:
      v20 = a2[1];
      if ( !v20 || (v20 & 7) != 0 || (v21 = a2[2], v21 > 0x555555555555555LL) )
        core::panicking::panic_nounwind(anon_dd6310c77d121ecce151d075805ee620_25_llvm_1613436602710632571, 166LL);
      if ( v21 )
      {
        v22 = 24 * v21;
        while ( *(_QWORD *)(v20 + 8) && *(__int64 *)(v20 + 16) >= 0 )
        {
          std::path::Path::components(v45);
          v23 = std::path::Components::as_path(v45);
          std::path::Path::to_path_buf(&v32, v23);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v20);
          *(_QWORD *)(v20 + 16) = v33;
          *(_OWORD *)v20 = v32;
          v20 += 24LL;
          v22 -= 24LL;
          if ( !v22 )
            goto LABEL_33;
        }
        goto LABEL_35;
      }
LABEL_33:
      v37 = a2[2];
      v36 = *(_OWORD *)a2;
      v39 = *(_QWORD *)&v30[16];
      v38 = *(_OWORD *)v30;
      v4 = v31;
      *(_OWORD *)(v31 + 8) = v36;
      *(_QWORD *)(v4 + 24) = v37;
      *(_OWORD *)(v4 + 32) = v38;
      *(_QWORD *)(v4 + 48) = v39;
      *(_QWORD *)v4 = 13LL;
      return v4;
    }
    v16 = *(const void **)(a3 + 32);
    v18 = *(_QWORD *)(a3 + 40);
    core::slice::raw::from_raw_parts::precondition_check(v16, 1LL, 1LL, v18);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v25, v18, 0LL);
    v13 = v26;
    if ( !v25 )
    {
      v19 = dest;
      core::intrinsics::copy_nonoverlapping::precondition_check(v16, dest, 1LL, 1LL, v18);
      memcpy(v19, v16, v18);
      *(_QWORD *)v30 = v13;
      *(_QWORD *)&v30[8] = v19;
      *(_QWORD *)&v30[16] = v18;
      if ( (*(_BYTE *)(a3 + 69) & 1) == 0 )
        goto LABEL_33;
      goto LABEL_25;
    }
LABEL_36:
    alloc::raw_vec::handle_error(v13, dest);
  }
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v25, 20LL, 0LL);
  v13 = v26;
  if ( v25 )
    goto LABEL_36;
  v14 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(&xmmword_2EAAC, dest, 1LL, 1LL, 20LL);
  qmemcpy(v14, "missing file operand", 20);
  *(_QWORD *)a1 = 4LL;
  *(_QWORD *)(a1 + 8) = v13;
  *(_QWORD *)(a1 + 16) = v14;
  *(_QWORD *)(a1 + 24) = 20LL;
LABEL_22:
  core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(a2);
  return v4;
}
