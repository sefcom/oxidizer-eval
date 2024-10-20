__int64 __fastcall uu_expr::syntax_tree::StringOp::eval(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // r15
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int64 v15; // rax
  int v16; // eax
  bool v17; // si
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  unsigned int (__fastcall *v21)(_QWORD); // rax
  unsigned int (__fastcall *v22)(_QWORD); // r12
  int v23; // edx
  int v24; // r14d
  __int64 v25; // r15
  int v26; // edx
  char is_truthy; // al
  _OWORD *v28; // rcx
  __int128 v29; // xmm0
  char v30; // al
  _OWORD *v31; // rcx
  __int128 v32; // xmm0
  _BYTE *v33; // rdi
  __int128 v34; // [rsp+0h] [rbp-468h] BYREF
  __int128 v35; // [rsp+10h] [rbp-458h] BYREF
  __int64 v36; // [rsp+20h] [rbp-448h]
  void *ptr; // [rsp+38h] [rbp-430h] BYREF
  __int128 v38; // [rsp+40h] [rbp-428h] BYREF
  __int128 v39; // [rsp+50h] [rbp-418h] BYREF
  __int128 v40; // [rsp+60h] [rbp-408h] BYREF
  __int128 v41; // [rsp+70h] [rbp-3F8h] BYREF
  _BYTE v42[8]; // [rsp+80h] [rbp-3E8h] BYREF
  __int64 v43; // [rsp+88h] [rbp-3E0h]
  __int64 v44; // [rsp+90h] [rbp-3D8h] BYREF
  _BYTE v45[8]; // [rsp+98h] [rbp-3D0h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-3C8h]
  __int64 v47; // [rsp+A8h] [rbp-3C0h] BYREF
  _BYTE v48[8]; // [rsp+B0h] [rbp-3B8h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-3B0h]
  __int64 v50; // [rsp+C0h] [rbp-3A8h] BYREF
  _QWORD v51[2]; // [rsp+C8h] [rbp-3A0h] BYREF
  __int64 v52; // [rsp+D8h] [rbp-390h]
  __int128 v53; // [rsp+E0h] [rbp-388h] BYREF
  __int64 v54; // [rsp+F0h] [rbp-378h]
  _BYTE v55[16]; // [rsp+F8h] [rbp-370h] BYREF
  _BYTE v56[8]; // [rsp+108h] [rbp-360h] BYREF
  __int128 v57; // [rsp+110h] [rbp-358h] BYREF
  __int128 v58; // [rsp+120h] [rbp-348h]
  _OWORD v59[2]; // [rsp+130h] [rbp-338h] BYREF
  _QWORD v60[2]; // [rsp+150h] [rbp-318h] BYREF
  _QWORD v61[2]; // [rsp+160h] [rbp-308h] BYREF
  _BYTE v62[24]; // [rsp+170h] [rbp-2F8h] BYREF
  __int128 v63; // [rsp+188h] [rbp-2E0h] BYREF
  __int64 v64; // [rsp+198h] [rbp-2D0h]
  __int64 v65; // [rsp+1A0h] [rbp-2C8h] BYREF
  __int64 v66; // [rsp+1A8h] [rbp-2C0h]
  __int64 v67; // [rsp+1B0h] [rbp-2B8h]
  _OWORD v68[2]; // [rsp+1B8h] [rbp-2B0h] BYREF
  __int128 v69; // [rsp+1D8h] [rbp-290h] BYREF
  __int64 v70; // [rsp+1E8h] [rbp-280h]
  _OWORD v71[2]; // [rsp+1F0h] [rbp-278h] BYREF
  _OWORD v72[2]; // [rsp+210h] [rbp-258h] BYREF
  _OWORD v73[2]; // [rsp+230h] [rbp-238h] BYREF
  _OWORD v74[3]; // [rsp+250h] [rbp-218h] BYREF
  __int64 v75; // [rsp+280h] [rbp-1E8h]
  _BYTE v76[24]; // [rsp+290h] [rbp-1D8h] BYREF
  _BYTE v77[24]; // [rsp+2A8h] [rbp-1C0h] BYREF
  __int64 v78; // [rsp+2C0h] [rbp-1A8h] BYREF
  __int128 v79; // [rsp+2C8h] [rbp-1A0h]
  __int128 v80; // [rsp+2D8h] [rbp-190h]
  __int64 v81; // [rsp+2E8h] [rbp-180h] BYREF
  __int128 v82; // [rsp+2F0h] [rbp-178h]
  __int128 v83; // [rsp+300h] [rbp-168h]
  __int64 v84; // [rsp+310h] [rbp-158h] BYREF
  __int128 v85; // [rsp+318h] [rbp-150h]
  __int128 v86; // [rsp+328h] [rbp-140h]
  __int64 v87; // [rsp+338h] [rbp-130h] BYREF
  __int128 v88; // [rsp+340h] [rbp-128h]
  __int128 v89; // [rsp+350h] [rbp-118h]
  __int64 v90; // [rsp+360h] [rbp-108h] BYREF
  __int128 v91; // [rsp+368h] [rbp-100h]
  __int128 v92; // [rsp+378h] [rbp-F0h]
  __int64 v93; // [rsp+388h] [rbp-E0h] BYREF
  __int128 v94; // [rsp+390h] [rbp-D8h]
  __int128 v95; // [rsp+3A0h] [rbp-C8h]
  __int64 v96; // [rsp+3B0h] [rbp-B8h] BYREF
  __int128 v97; // [rsp+3B8h] [rbp-B0h]
  __int128 v98; // [rsp+3C8h] [rbp-A0h]
  __int64 v99; // [rsp+3D8h] [rbp-90h] BYREF
  __int128 v100; // [rsp+3E0h] [rbp-88h]
  __int128 v101; // [rsp+3F0h] [rbp-78h]
  _BYTE v102[104]; // [rsp+400h] [rbp-68h] BYREF

  switch ( *a2 )
  {
    case 0:
      v6 = &v96;
      uu_expr::syntax_tree::AstNode::eval(&v96, a3);
      if ( v96 )
        goto LABEL_13;
      v71[1] = v98;
      v71[0] = v97;
      uu_expr::syntax_tree::NumOrStr::eval_as_string(v45, v71);
      uu_expr::syntax_tree::AstNode::eval(&v84, a4);
      if ( v84 )
      {
        v7 = v85;
        *(_OWORD *)(a1 + 24) = v86;
        *(_OWORD *)(a1 + 8) = v7;
        *(_QWORD *)a1 = 1LL;
LABEL_71:
        alloc::raw_vec::RawVec<T,A>::current_memory(&v34, v45);
        if ( *((_QWORD *)&v34 + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v47, v34, *((_QWORD *)&v34 + 1), v35);
        return a1;
      }
      v72[1] = v86;
      v72[0] = v85;
      uu_expr::syntax_tree::NumOrStr::eval_as_string(v62, v72);
      v60[0] = v62;
      v60[1] = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v34 = &off_196C58;
      *((_QWORD *)&v34 + 1) = 1LL;
      *(_QWORD *)&v35 = v60;
      *((_QWORD *)&v35 + 1) = 1LL;
      v36 = 0LL;
      ((void (__fastcall *)(__int128 *, __int128 *))alloc::fmt::format::format_inner)(&v69, &v34);
      v53 = v69;
      v54 = v70;
      if ( !*((_QWORD *)&v69 + 1) || v70 < 0 )
        goto LABEL_81;
      onig::Regex::with_options_and_encoding(v68, *((_QWORD *)&v69 + 1), v70, 0LL, &OnigSyntaxGrep);
      if ( *(_QWORD *)&v68[0] != 0x8000000000000000LL )
      {
        v35 = v68[1];
        v34 = v68[0];
        alloc::raw_vec::RawVec<T,A>::current_memory(&v65, &v34);
        if ( v66 )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v35, v65, v66, v67);
        *(_QWORD *)(a1 + 8) = 5LL;
        *(_QWORD *)a1 = 1LL;
        core::ptr::drop_in_place<alloc::string::String>(&v53);
        core::ptr::drop_in_place<alloc::string::String>(v62);
        goto LABEL_71;
      }
      ptr = (void *)*((_QWORD *)&v68[0] + 1);
      v16 = onig_number_of_captures();
      v17 = v46 == 0 || v47 < 0;
      if ( v16 )
      {
        if ( !v17 )
        {
          onig::find::<impl onig::Regex>::captures(v102, &ptr);
          v18 = core::option::Option<T>::map(v102);
          v20 = 1LL;
          if ( v18 )
            v20 = v18;
          else
            v19 = 0LL;
          <str as alloc::string::ToString>::to_string(&v63, v20, v19);
          goto LABEL_77;
        }
      }
      else if ( !v17 )
      {
        onig::Regex::find_with_encoding(v76, &ptr);
        <str as alloc::string::ToString>::to_string(v77, a0_0, 1LL);
        core::option::Option<T>::map_or(&v63, v76, v77);
LABEL_77:
        *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
        *(_OWORD *)(a1 + 16) = v63;
        *(_QWORD *)(a1 + 32) = v64;
        *(_QWORD *)a1 = 0LL;
        onig_free(ptr);
        core::ptr::drop_in_place<alloc::string::String>(&v53);
        core::ptr::drop_in_place<alloc::string::String>(v62);
        v33 = v45;
LABEL_79:
        core::ptr::drop_in_place<alloc::string::String>(v33);
        return a1;
      }
LABEL_81:
      core::panicking::panic_nounwind(anon_2bac4deccfcbd46877edd8deb52f270f_29_llvm_5724965477395591734, 162LL);
    case 1:
      v6 = &v99;
      uu_expr::syntax_tree::AstNode::eval(&v99, a3);
      if ( v99 )
        goto LABEL_13;
      v73[1] = v101;
      v73[0] = v100;
      uu_expr::syntax_tree::NumOrStr::eval_as_string(v48, v73);
      uu_expr::syntax_tree::AstNode::eval(&v87, a4);
      if ( v87 )
      {
        v13 = v88;
        *(_OWORD *)(a1 + 24) = v89;
        *(_OWORD *)(a1 + 8) = v13;
        *(_QWORD *)a1 = 1LL;
        goto LABEL_57;
      }
      v74[1] = v89;
      v74[0] = v88;
      uu_expr::syntax_tree::NumOrStr::eval_as_string(v55, v74);
      if ( !v49 || v50 < 0 )
        goto LABEL_81;
      v51[0] = v49;
      v51[1] = v49 + v50;
      v52 = 0LL;
      v21 = (unsigned int (__fastcall *)(_QWORD))core::str::validations::next_code_point;
LABEL_38:
      v22 = v21;
      if ( !v21(v51) )
        goto LABEL_78;
      v24 = v23;
      if ( (v23 ^ 0xD800u) - 2048 >= 0x10F800 )
        core::panicking::panic_nounwind(anon_de7600634a84598fcf924d5d69984948_6_llvm_17515027900894029321, 57LL);
      if ( v23 == 1114112 )
      {
LABEL_78:
        *(_QWORD *)(a1 + 24) = 0LL;
        *(_OWORD *)(a1 + 8) = anon_52158d68de30c31dc6c97ce83134c8ee_19_llvm_10101531615377826705;
        *(_BYTE *)(a1 + 32) = 1;
        *(_DWORD *)(a1 + 33) = 0;
        *(_DWORD *)(a1 + 36) = 0;
        *(_QWORD *)a1 = 0LL;
        core::ptr::drop_in_place<alloc::string::String>(v55);
        v33 = v48;
        goto LABEL_79;
      }
      v25 = v52 + 1;
      if ( v52 == -1 )
        core::panicking::panic_const::panic_const_add_overflow(&anon_de7600634a84598fcf924d5d69984948_1_llvm_17515027900894029321);
      ++v52;
      <alloc::string::String as core::clone::Clone>::clone(v42, v55);
      if ( !v43 || v44 < 0 )
        goto LABEL_81;
      v61[0] = v43;
      v61[1] = v43 + v44;
      do
      {
        if ( (unsigned int)core::str::validations::next_code_point(v61) )
        {
          if ( (v26 ^ 0xD800u) - 2048 >= 0x10F800 )
            core::panicking::panic_nounwind(anon_2bac4deccfcbd46877edd8deb52f270f_25_llvm_5724965477395591734, 57LL);
          if ( v26 != 1114112 )
            continue;
        }
        alloc::raw_vec::RawVec<T,A>::current_memory(&v34, v42);
        if ( *((_QWORD *)&v34 + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v44, v34, *((_QWORD *)&v34 + 1), v35);
        v21 = v22;
        goto LABEL_38;
      }
      while ( v26 != v24 );
      v34 = anon_b662377012fd38f7904545d49e3a6811_0_llvm_82966236564844942;
      *(_QWORD *)&v35 = 0LL;
      alloc::raw_vec::RawVec<T,A>::grow_one(&v34);
      **((_QWORD **)&v34 + 1) = v25;
      v74[2] = v34;
      v75 = 1LL;
      *(_OWORD *)(a1 + 8) = v34;
      *(_QWORD *)(a1 + 24) = 1LL;
      *(_BYTE *)(a1 + 32) = 2;
      *(_DWORD *)(a1 + 33) = 0;
      *(_DWORD *)(a1 + 36) = 0;
      *(_QWORD *)a1 = 0LL;
      alloc::raw_vec::RawVec<T,A>::current_memory(&v34, v42);
      if ( *((_QWORD *)&v34 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v44, v34, *((_QWORD *)&v34 + 1), v35);
      alloc::raw_vec::RawVec<T,A>::current_memory(&v34, v55);
      if ( *((_QWORD *)&v34 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v56, v34, *((_QWORD *)&v34 + 1), v35);
LABEL_57:
      alloc::raw_vec::RawVec<T,A>::current_memory(&v34, v48);
      if ( *((_QWORD *)&v34 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v50, v34, *((_QWORD *)&v34 + 1), v35);
      return a1;
    case 2:
      v6 = &v93;
      uu_expr::syntax_tree::AstNode::eval(&v93, a3);
      if ( v93 )
        goto LABEL_13;
      v41 = v95;
      v40 = v94;
      if ( !(unsigned __int8)uu_expr::syntax_tree::is_truthy(&v40) )
      {
        *(_QWORD *)(a1 + 24) = 0LL;
        *(_OWORD *)(a1 + 8) = anon_52158d68de30c31dc6c97ce83134c8ee_19_llvm_10101531615377826705;
        *(_BYTE *)(a1 + 32) = 1;
        *(_DWORD *)(a1 + 33) = 0;
        *(_DWORD *)(a1 + 36) = 0;
        v9 = 0LL;
        goto LABEL_18;
      }
      uu_expr::syntax_tree::AstNode::eval(&v81, a4);
      if ( v81 )
      {
        v8 = v82;
        *(_OWORD *)(a1 + 24) = v83;
        *(_OWORD *)(a1 + 8) = v8;
        v9 = 1LL;
LABEL_18:
        *(_QWORD *)a1 = v9;
        goto LABEL_19;
      }
      v59[1] = v83;
      v59[0] = v82;
      is_truthy = uu_expr::syntax_tree::is_truthy(v59);
      v28 = (_OWORD *)(a1 + 8);
      if ( is_truthy )
      {
        v29 = v40;
        *(_OWORD *)(a1 + 24) = v41;
        *v28 = v29;
        *(_QWORD *)a1 = 0LL;
        core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v59);
        return a1;
      }
      *(_QWORD *)(a1 + 24) = 0LL;
      *v28 = anon_52158d68de30c31dc6c97ce83134c8ee_19_llvm_10101531615377826705;
      *(_BYTE *)(a1 + 32) = 1;
      *(_DWORD *)(a1 + 33) = 0;
      *(_DWORD *)(a1 + 36) = 0;
      *(_QWORD *)a1 = 0LL;
      core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v59);
LABEL_19:
      if ( (_QWORD)v40 == 0x8000000000000000LL )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(&v34, (char *)&v40 + 8);
        if ( *((_QWORD *)&v34 + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            (char *)&v41 + 8,
            v34,
            *((_QWORD *)&v34 + 1),
            v35);
      }
      else
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(&v34, &v40);
        if ( *((_QWORD *)&v34 + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v41, v34, *((_QWORD *)&v34 + 1), v35);
      }
      return a1;
    case 3:
      v6 = &v90;
      uu_expr::syntax_tree::AstNode::eval(&v90, a3);
      if ( v90 )
      {
LABEL_13:
        v11 = *(_OWORD *)(v6 + 1);
        *(_OWORD *)(a1 + 24) = *(_OWORD *)(v6 + 3);
        *(_OWORD *)(a1 + 8) = v11;
        *(_QWORD *)a1 = 1LL;
        return a1;
      }
      v39 = v92;
      v38 = v91;
      if ( (unsigned __int8)uu_expr::syntax_tree::is_truthy(&v38) )
      {
        v10 = v38;
        *(_OWORD *)(a1 + 24) = v39;
        *(_OWORD *)(a1 + 8) = v10;
        *(_QWORD *)a1 = 0LL;
        return a1;
      }
      uu_expr::syntax_tree::AstNode::eval(&v78, a4);
      if ( v78 )
      {
        v14 = v79;
        *(_OWORD *)(a1 + 24) = v80;
        *(_OWORD *)(a1 + 8) = v14;
        v15 = 1LL;
      }
      else
      {
        v58 = v80;
        v57 = v79;
        v30 = uu_expr::syntax_tree::is_truthy(&v57);
        v31 = (_OWORD *)(a1 + 8);
        if ( !v30 )
        {
          *(_QWORD *)(a1 + 24) = 0LL;
          *v31 = anon_52158d68de30c31dc6c97ce83134c8ee_19_llvm_10101531615377826705;
          *(_BYTE *)(a1 + 32) = 1;
          *(_DWORD *)(a1 + 33) = 0;
          *(_DWORD *)(a1 + 36) = 0;
          *(_QWORD *)a1 = 0LL;
          core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(&v57);
          core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(&v38);
          return a1;
        }
        v32 = v57;
        *(_OWORD *)(a1 + 24) = v58;
        *v31 = v32;
        v15 = 0LL;
      }
      *(_QWORD *)a1 = v15;
      if ( (_QWORD)v38 == 0x8000000000000000LL )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(&v34, (char *)&v38 + 8);
        if ( *((_QWORD *)&v34 + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            (char *)&v39 + 8,
            v34,
            *((_QWORD *)&v34 + 1),
            v35);
      }
      else
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(&v34, &v38);
        if ( *((_QWORD *)&v34 + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v39, v34, *((_QWORD *)&v34 + 1), v35);
      }
      return a1;
  }
}
