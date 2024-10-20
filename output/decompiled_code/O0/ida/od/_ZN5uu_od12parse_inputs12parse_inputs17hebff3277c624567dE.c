__int64 __fastcall uu_od::parse_inputs::parse_inputs(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v4)(__int64, char **, __int64); // r12
  char **v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // r14
  __int64 v8; // r15
  _BYTE *v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char v12; // al
  __int64 v13; // rbp
  char *v14; // r14
  size_t v15; // r12
  const void *v16; // rax
  size_t v17; // rdx
  char *v18; // r12
  size_t v19; // r15
  __int64 v20; // r14
  void *v21; // r13
  char **v22; // rax
  __int64 v23; // rbp
  __int64 v24; // r12
  _BYTE *v25; // r15
  __int128 v26; // xmm0
  _BYTE *v27; // r15
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rcx
  char *v32; // r12
  size_t v33; // r15
  void *v34; // r13
  __int64 v35; // r13
  char *v36; // r12
  size_t v37; // r15
  void *v38; // r13
  char **v39; // [rsp+8h] [rbp-1F0h] BYREF
  __int64 v40; // [rsp+10h] [rbp-1E8h]
  void *dest; // [rsp+18h] [rbp-1E0h]
  __int64 v42; // [rsp+20h] [rbp-1D8h]
  __int64 v43; // [rsp+28h] [rbp-1D0h]
  unsigned __int64 v44; // [rsp+38h] [rbp-1C0h] BYREF
  char **v45; // [rsp+40h] [rbp-1B8h]
  unsigned __int64 v46; // [rsp+48h] [rbp-1B0h]
  __int64 v47; // [rsp+50h] [rbp-1A8h]
  _QWORD v48[2]; // [rsp+58h] [rbp-1A0h] BYREF
  _QWORD v49[2]; // [rsp+68h] [rbp-190h] BYREF
  _QWORD v50[2]; // [rsp+78h] [rbp-180h] BYREF
  _QWORD v51[2]; // [rsp+88h] [rbp-170h] BYREF
  _QWORD v52[2]; // [rsp+98h] [rbp-160h] BYREF
  _QWORD v53[2]; // [rsp+A8h] [rbp-150h] BYREF
  _QWORD v54[2]; // [rsp+B8h] [rbp-140h] BYREF
  _QWORD v55[2]; // [rsp+C8h] [rbp-130h] BYREF
  _QWORD v56[2]; // [rsp+D8h] [rbp-120h] BYREF
  _QWORD v57[2]; // [rsp+E8h] [rbp-110h] BYREF
  _QWORD v58[3]; // [rsp+F8h] [rbp-100h] BYREF
  __int128 v59; // [rsp+110h] [rbp-E8h]
  __int64 v60; // [rsp+120h] [rbp-D8h]
  __int64 v61; // [rsp+128h] [rbp-D0h]
  __int128 v62; // [rsp+138h] [rbp-C0h] BYREF
  __int64 v63; // [rsp+148h] [rbp-B0h]
  __int128 v64; // [rsp+150h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+160h] [rbp-98h]
  __int128 v66; // [rsp+168h] [rbp-90h] BYREF
  __int64 v67; // [rsp+178h] [rbp-80h]
  __int128 v68; // [rsp+180h] [rbp-78h] BYREF
  __int64 v69; // [rsp+190h] [rbp-68h]
  __int128 v70; // [rsp+198h] [rbp-60h] BYREF
  __int64 v71; // [rsp+1A8h] [rbp-50h]
  __int128 v72; // [rsp+1B0h] [rbp-48h] BYREF
  __int64 v73; // [rsp+1C0h] [rbp-38h]

  (*(void (__fastcall **)(unsigned __int64 *))(a3 + 24))(&v44);
  v4 = *(__int64 (__fastcall **)(__int64, char **, __int64))(a3 + 32);
  if ( !(unsigned __int8)v4(a2, &off_12C878, 1LL) )
  {
    v11 = v46;
    if ( v46 - 1 > 1 )
      goto LABEL_28;
    v12 = v4(a2, &off_12C888, 6LL);
    v11 = v46;
    if ( v12 )
      goto LABEL_28;
    if ( !v46 )
      core::panicking::panic_const::panic_const_sub_overflow(&off_12C8E8);
    if ( v46 > 0x7FFFFFFFFFFFFFFLL || !v45 || ((unsigned __int8)v45 & 7) != 0 )
      goto LABEL_67;
    uu_od::parse_inputs::parse_offset_operand(v48, v45[2 * v46 - 2], v45[2 * v46 - 1]);
    v11 = v46;
    if ( v48[0] )
      goto LABEL_28;
    v13 = v48[1];
    if ( v46 == 1 )
    {
      if ( !v45 || ((unsigned __int8)v45 & 7) != 0 )
        goto LABEL_67;
      v14 = *v45;
      v15 = (size_t)v45[1];
      LODWORD(v39) = 0;
      v16 = (const void *)core::char::methods::encode_utf8_raw(43LL, &v39, 4LL);
      if ( v17 <= v15 && !bcmp(v16, v14, v17) )
      {
        <str as alloc::string::ToString>::to_string(&v62, asc_23C73, 1LL);
        *(_QWORD *)(a1 + 16) = v63;
        *(_OWORD *)a1 = v62;
        goto LABEL_27;
      }
      v11 = v46;
    }
    if ( v11 != 2 )
    {
LABEL_28:
      if ( !v11 )
      {
        if ( !v44 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v44);
        v22 = v45;
        *v45 = asc_23C73;
        v22[1] = (_BYTE *)(&dword_0 + 1);
        v46 = 1LL;
        v11 = 1LL;
      }
      if ( v45 && ((unsigned __int8)v45 & 7) == 0 && v11 <= 0x7FFFFFFFFFFFFFFLL )
      {
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(
          &v64,
          v45,
          &v45[2 * v11]);
        v60 = v65;
        v59 = v64;
        *(_OWORD *)a1 = v64;
        *(_QWORD *)(a1 + 16) = v60;
        *(_QWORD *)(a1 + 24) = v61;
        *(_QWORD *)(a1 + 32) = 2LL;
        goto LABEL_53;
      }
    }
    else if ( v45 && ((unsigned __int8)v45 & 7) == 0 )
    {
      v18 = *v45;
      v19 = (size_t)v45[1];
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v39, v19, 0LL);
      v20 = v40;
      if ( v39 )
        goto LABEL_69;
      v21 = dest;
      core::intrinsics::copy_nonoverlapping::precondition_check(v18, dest, 1LL, 1LL, v19);
      memcpy(v21, v18, v19);
      *(_QWORD *)a1 = v20;
      *(_QWORD *)(a1 + 8) = v21;
      *(_QWORD *)(a1 + 16) = v19;
LABEL_27:
      *(_QWORD *)(a1 + 24) = v13;
      *(_QWORD *)(a1 + 32) = 0LL;
      goto LABEL_53;
    }
LABEL_67:
    core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
  }
  v5 = v45;
  if ( !v45 || ((unsigned __int8)v45 & 7) != 0 || v46 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_67;
  switch ( v46 )
  {
    case 0uLL:
      v6 = _rust_alloc(24LL, 8LL);
      if ( !v6 )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      v7 = (_QWORD *)v6;
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v39, 1LL, 0LL);
      v8 = v40;
      if ( v39 )
        alloc::raw_vec::handle_error(v40, dest);
      v9 = dest;
      core::intrinsics::copy_nonoverlapping::precondition_check(asc_23C73, dest, 1LL, 1LL, 1LL);
      *v9 = 45;
      *v7 = v8;
      v7[1] = v9;
      v7[2] = 1LL;
      *(_QWORD *)a1 = 1LL;
      *(_QWORD *)(a1 + 8) = v7;
      *(_QWORD *)(a1 + 16) = 1LL;
      v10 = 2LL;
      goto LABEL_52;
    case 1uLL:
      uu_od::parse_inputs::parse_offset_operand(v49, *v45, v45[1]);
      if ( v49[0] )
      {
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v58, v5, v5 + 2);
        v20 = v58[0];
        v27 = (_BYTE *)v58[1];
        v10 = 2LL;
        v28 = v58[2];
LABEL_48:
        *(_QWORD *)a1 = v20;
        *(_QWORD *)(a1 + 8) = v27;
        *(_QWORD *)(a1 + 16) = v28;
        *(_QWORD *)(a1 + 24) = v4;
LABEL_52:
        *(_QWORD *)(a1 + 32) = v10;
        goto LABEL_53;
      }
      v4 = (__int64 (__fastcall *)(__int64, char **, __int64))v49[1];
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v39, 1LL, 0LL);
      v20 = v40;
      if ( !v39 )
      {
        v27 = dest;
        v28 = 1LL;
        core::intrinsics::copy_nonoverlapping::precondition_check(asc_23C73, dest, 1LL, 1LL, 1LL);
        *v27 = 45;
        v10 = 0LL;
        goto LABEL_48;
      }
      goto LABEL_69;
    case 2uLL:
      uu_od::parse_inputs::parse_offset_operand(v50, *v45, v45[1]);
      uu_od::parse_inputs::parse_offset_operand(v51, v5[2], v5[3]);
      v23 = v51[1];
      if ( v51[0] | v50[0] )
      {
        if ( v51[0] )
        {
          v52[0] = v5 + 2;
          v52[1] = <&T as core::fmt::Display>::fmt;
          v39 = &off_12C900;
          v40 = 1LL;
          dest = v52;
          v42 = 1LL;
          v43 = 0LL;
          alloc::fmt::format::format_inner(&v66, &v39);
          *(_QWORD *)(a1 + 16) = v67;
          v26 = v66;
          goto LABEL_51;
        }
        v32 = *v5;
        v33 = (size_t)v5[1];
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v39, v33, 0LL);
        v20 = v40;
        if ( !v39 )
        {
          v34 = dest;
          core::intrinsics::copy_nonoverlapping::precondition_check(v32, dest, 1LL, 1LL, v33);
          memcpy(v34, v32, v33);
          *(_QWORD *)a1 = v20;
          *(_QWORD *)(a1 + 8) = v34;
          *(_QWORD *)(a1 + 16) = v33;
          *(_QWORD *)(a1 + 24) = v23;
          *(_QWORD *)(a1 + 32) = 0LL;
          goto LABEL_53;
        }
LABEL_69:
        alloc::raw_vec::handle_error(v20, dest);
      }
      v24 = v50[1];
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v39, 1LL, 0LL);
      v20 = v40;
      if ( v39 )
        goto LABEL_69;
      v25 = dest;
      core::intrinsics::copy_nonoverlapping::precondition_check(asc_23C73, dest, 1LL, 1LL, 1LL);
      *v25 = 45;
      *(_QWORD *)a1 = v20;
      *(_QWORD *)(a1 + 8) = v25;
      *(_QWORD *)(a1 + 16) = 1LL;
      *(_QWORD *)(a1 + 24) = v24;
LABEL_65:
      *(_QWORD *)(a1 + 32) = 1LL;
      *(_QWORD *)(a1 + 40) = v23;
LABEL_53:
      if ( v44 )
      {
        if ( v44 >> 60 )
          core::panicking::panic_nounwind(anon_e45d65516cdf6c355a9aa2094419ed73_18_llvm_7530283562111826792, 69LL);
        v29 = 16 * v44;
        v39 = v45;
        v40 = 8LL;
        v30 = 2LL;
      }
      else
      {
        v30 = 1LL;
        v29 = 0LL;
      }
      (&v39)[v30] = (char **)v29;
      if ( v40 && dest )
        _rust_dealloc(v39, dest, v40);
      return a1;
    case 3uLL:
      uu_od::parse_inputs::parse_offset_operand(v53, v45[2], v45[3]);
      uu_od::parse_inputs::parse_offset_operand(v54, v5[4], v5[5]);
      if ( v53[0] )
      {
        v55[0] = v5 + 2;
        v55[1] = <&T as core::fmt::Display>::fmt;
        v39 = &off_12C900;
        v40 = 1LL;
        dest = v55;
        v42 = 1LL;
        v43 = 0LL;
        alloc::fmt::format::format_inner(&v68, &v39);
        *(_QWORD *)(a1 + 16) = v69;
        v26 = v68;
LABEL_51:
        *(_OWORD *)a1 = v26;
        v10 = 3LL;
        goto LABEL_52;
      }
      if ( v54[0] )
      {
        v56[0] = v5 + 4;
        v56[1] = <&T as core::fmt::Display>::fmt;
        v39 = &off_12C910;
        v40 = 1LL;
        dest = v56;
        v42 = 1LL;
        v43 = 0LL;
        alloc::fmt::format::format_inner(&v70, &v39);
        *(_QWORD *)(a1 + 16) = v71;
        v26 = v70;
        goto LABEL_51;
      }
      v35 = v53[1];
      v23 = v54[1];
      v36 = *v5;
      v37 = (size_t)v5[1];
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v39, v37, 0LL);
      v47 = v35;
      v20 = v40;
      if ( !v39 )
      {
        v38 = dest;
        core::intrinsics::copy_nonoverlapping::precondition_check(v36, dest, 1LL, 1LL, v37);
        memcpy(v38, v36, v37);
        *(_QWORD *)a1 = v20;
        *(_QWORD *)(a1 + 8) = v38;
        *(_QWORD *)(a1 + 16) = v37;
        *(_QWORD *)(a1 + 24) = v47;
        goto LABEL_65;
      }
      goto LABEL_69;
    default:
      v57[0] = v45 + 6;
      v57[1] = <&T as core::fmt::Display>::fmt;
      v39 = &off_12C920;
      v40 = 1LL;
      dest = v57;
      v42 = 1LL;
      v43 = 0LL;
      alloc::fmt::format::format_inner(&v72, &v39);
      *(_QWORD *)(a1 + 16) = v73;
      v26 = v72;
      goto LABEL_51;
  }
}
