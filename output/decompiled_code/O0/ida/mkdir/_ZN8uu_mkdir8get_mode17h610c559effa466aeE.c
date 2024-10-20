__int64 __fastcall uu_mkdir::get_mode(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 one; // rax
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned __int64 v10; // r14
  size_t v11; // rax
  char *v12; // rbx
  int v13; // edx
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  void *v18; // r14
  __int64 v19; // r12
  __mode_t v20; // r14d
  __mode_t v21; // eax
  __int16 v22; // bp
  unsigned int v24; // [rsp+Ch] [rbp-14Ch]
  char *src; // [rsp+10h] [rbp-148h]
  void *srca; // [rsp+10h] [rbp-148h]
  char v27; // [rsp+1Fh] [rbp-139h] BYREF
  __int64 v28; // [rsp+20h] [rbp-138h]
  int v29; // [rsp+2Ch] [rbp-12Ch]
  void *v30; // [rsp+30h] [rbp-128h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-120h]
  void *dest; // [rsp+40h] [rbp-118h]
  __int64 v33; // [rsp+48h] [rbp-110h]
  __int64 v34; // [rsp+50h] [rbp-108h]
  char *v35; // [rsp+60h] [rbp-F8h]
  char *v36; // [rsp+68h] [rbp-F0h]
  __int64 v37; // [rsp+70h] [rbp-E8h] BYREF
  unsigned __int64 v38; // [rsp+78h] [rbp-E0h]
  __int64 v39; // [rsp+80h] [rbp-D8h]
  __int64 v40; // [rsp+88h] [rbp-D0h]
  int v41; // [rsp+90h] [rbp-C8h]
  int v42; // [rsp+94h] [rbp-C4h]
  char v43; // [rsp+98h] [rbp-C0h]
  __int16 v44; // [rsp+A0h] [rbp-B8h]
  char *v45; // [rsp+A8h] [rbp-B0h] BYREF
  size_t n; // [rsp+B0h] [rbp-A8h]
  __int64 v47; // [rsp+B8h] [rbp-A0h]
  __int64 v48; // [rsp+C0h] [rbp-98h] BYREF
  unsigned int v49; // [rsp+C8h] [rbp-90h]
  __int64 v50; // [rsp+CCh] [rbp-8Ch]
  int v51; // [rsp+D4h] [rbp-84h]
  __int64 v52; // [rsp+D8h] [rbp-80h] BYREF
  unsigned int v53; // [rsp+E0h] [rbp-78h]
  __int64 v54; // [rsp+E4h] [rbp-74h]
  int v55; // [rsp+ECh] [rbp-6Ch]
  _QWORD v56[2]; // [rsp+F0h] [rbp-68h] BYREF
  _QWORD v57[2]; // [rsp+100h] [rbp-58h] BYREF
  _QWORD v58[9]; // [rsp+110h] [rbp-48h] BYREF

  v29 = a3;
  v3 = a1;
  one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(a2, aMode, 4LL, &off_10D950);
  if ( one )
  {
    v5 = one;
    v6 = *(_QWORD *)(one + 8);
    if ( !v6 || (v7 = *(_QWORD *)(one + 16), v7 < 0) )
LABEL_46:
      core::panicking::panic_nounwind(aUnsafePrecondi, 162LL);
    v28 = a1;
    LODWORD(v30) = 0;
    core::char::methods::encode_utf8_raw(44LL, &v30, 4LL);
    if ( v8 >= 0x100 )
      core::result::unwrap_failed(
        anon_b8e768ed0ddf17f1539d76bb5aedca5a_46_llvm_9157631453777517788,
        32LL,
        &v27,
        &anon_cf3a0699d036d4a433c5534177ef0521_7_llvm_15788873575520176247,
        &anon_02b40c0e5390e28ea90696fc8ba4da26_29_llvm_16801938774416938183);
    v35 = 0LL;
    v36 = (char *)v7;
    v37 = v6;
    v38 = v7;
    v39 = 0LL;
    v40 = v7;
    v41 = (int)v30;
    v42 = 44;
    v43 = v8;
    v44 = 1;
    v24 = 511;
    v47 = v5;
    while ( 1 )
    {
      v9 = v37;
      v10 = v38;
      <core::str::pattern::CharSearcher as core::str::pattern::Searcher>::next_match(&v30, &v37);
      if ( v30 )
      {
        v11 = v31 - (_QWORD)v35;
        if ( v31 < (unsigned __int64)v35 || v31 > v10 )
          goto LABEL_47;
        v12 = &v35[v9];
        v35 = (char *)dest;
        if ( !v12 )
          goto LABEL_39;
      }
      else
      {
        if ( (v44 & 0x100) != 0 || (HIBYTE(v44) = 1, (v44 & 1) == 0) && v36 == v35 )
        {
LABEL_39:
          v3 = v28;
          *(_DWORD *)(v28 + 8) = v24;
          goto LABEL_41;
        }
        v11 = v36 - v35;
        if ( v36 < v35 || (unsigned __int64)v36 > v38 )
LABEL_47:
          core::panicking::panic_nounwind(anon_8fd984650b32faced47dbe24bc844e61_4_llvm_1964130512766541972, 102LL);
        v12 = &v35[v37];
        if ( !&v35[v37] )
          goto LABEL_39;
      }
      v45 = v12;
      n = v11;
      v56[0] = v12;
      v56[1] = &v12[v11];
      while ( (unsigned int)core::str::validations::next_code_point(v56) )
      {
        if ( (v13 ^ 0xD800u) - 2048 >= (unsigned int)&anon_0189a34fbec377c141ee63e4369411b7_75_llvm_13586541952471341777 )
          core::panicking::panic_nounwind(aUnsafePrecondi_7, 57LL);
        if ( v13 == (_DWORD)&off_110000 )
          break;
        if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::Try>::branch((unsigned int)(v13 - 48) < 0xA) )
        {
          v14 = <core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::FromResidual>::from_residual();
          goto LABEL_25;
        }
      }
      v14 = <core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::Try>::from_output();
LABEL_25:
      LOBYTE(v30) = v14;
      if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(&v30, &unk_1EF7E) )
      {
        v15 = *(_QWORD *)(v5 + 8);
        if ( !v15 )
          goto LABEL_46;
        v16 = *(_QWORD *)(v5 + 16);
        if ( v16 < 0 )
          goto LABEL_46;
        uucore::features::mode::parse_numeric(&v48, v24, v15, v16, 1LL);
        v24 = v49;
        if ( v48 != 0x8000000000000000LL )
        {
          v3 = v28;
          *(_QWORD *)v28 = v48;
          *(_DWORD *)(v3 + 8) = v24;
          *(_QWORD *)(v3 + 12) = v50;
          *(_DWORD *)(v3 + 20) = v51;
          return v3;
        }
      }
      else
      {
        if ( (_BYTE)v29 )
        {
          v57[0] = &v45;
          v57[1] = <&T as core::fmt::Display>::fmt;
          v30 = &off_10D968;
          v31 = 1LL;
          dest = v57;
          v33 = 1LL;
          v34 = 0LL;
          alloc::fmt::format::format_inner(v58, &v30);
          v17 = v58[0];
          v18 = (void *)v58[1];
          v19 = v58[2];
        }
        else
        {
          src = v45;
          v19 = n;
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v30, n, 0LL);
          v17 = v31;
          if ( v30 )
            alloc::raw_vec::handle_error(v31, dest);
          v18 = dest;
          core::intrinsics::copy_nonoverlapping::precondition_check(src, dest, 1LL, 1LL, v19);
          memcpy(v18, src, v19);
        }
        srca = v18;
        if ( !v18 || v19 < 0 )
          goto LABEL_46;
        v20 = umask(0);
        umask(v20);
        uucore::features::mode::parse_symbolic(&v52, v24, srca, v19, v20, 1LL);
        v24 = v53;
        v5 = v47;
        if ( v52 != 0x8000000000000000LL )
        {
          v3 = v28;
          *(_QWORD *)v28 = v52;
          *(_DWORD *)(v3 + 8) = v24;
          *(_QWORD *)(v3 + 12) = v54;
          *(_DWORD *)(v3 + 20) = v55;
          if ( v17 )
            _rust_dealloc(srca, v17, 1LL);
          return v3;
        }
        if ( v17 )
          _rust_dealloc(srca, v17, 1LL);
      }
      if ( (v44 & 0x100) != 0 )
        goto LABEL_39;
    }
  }
  v21 = umask(0);
  v22 = ~(_WORD)v21;
  umask(v21);
  *(_DWORD *)(a1 + 8) = v22 & 0x1FF;
LABEL_41:
  *(_QWORD *)v3 = 0x8000000000000000LL;
  return v3;
}
