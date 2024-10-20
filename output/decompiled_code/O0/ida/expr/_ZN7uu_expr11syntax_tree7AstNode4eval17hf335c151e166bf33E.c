__int64 __fastcall uu_expr::syntax_tree::AstNode::eval(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int64 v4; // rdx
  __int64 v5; // r15
  _BYTE *v6; // r14
  __int64 *v7; // r12
  __int128 *v8; // rax
  __int128 v9; // xmm0
  __int128 *v10; // rax
  __int64 v11; // rax
  __int64 v13; // r14
  char v14; // al
  __int128 v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r15
  __int128 v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // r13
  void *v27; // rbp
  __int64 v28; // rcx
  const void *v29; // r13
  __int64 v30; // r12
  void *v31; // rbp
  bool v32; // r15
  char v33; // al
  __int64 v34; // rdx
  __int64 v35; // r15
  bool v36; // r14
  char v37; // al
  bool v38; // cf
  char v39; // al
  __int128 *v40; // rcx
  __int128 v41; // xmm0
  __int128 v42; // xmm0
  char v43; // [rsp+Fh] [rbp-509h]
  __int128 v44; // [rsp+10h] [rbp-508h] BYREF
  __int128 v45; // [rsp+20h] [rbp-4F8h]
  void *src[2]; // [rsp+30h] [rbp-4E8h] BYREF
  __int128 v47; // [rsp+40h] [rbp-4D8h] BYREF
  _BYTE v48[24]; // [rsp+50h] [rbp-4C8h] BYREF
  __int128 v49; // [rsp+68h] [rbp-4B0h]
  _BYTE v50[40]; // [rsp+80h] [rbp-498h] BYREF
  void *v51[2]; // [rsp+B0h] [rbp-468h] BYREF
  __int128 v52; // [rsp+C0h] [rbp-458h] BYREF
  __int128 v53; // [rsp+D0h] [rbp-448h] BYREF
  __int128 v54; // [rsp+E0h] [rbp-438h] BYREF
  __int128 v55; // [rsp+F0h] [rbp-428h] BYREF
  __int128 v56; // [rsp+100h] [rbp-418h] BYREF
  __int128 v57; // [rsp+110h] [rbp-408h] BYREF
  __int128 v58; // [rsp+120h] [rbp-3F8h] BYREF
  __int128 v59; // [rsp+130h] [rbp-3E8h] BYREF
  __int128 v60; // [rsp+140h] [rbp-3D8h] BYREF
  __int128 v61; // [rsp+150h] [rbp-3C8h] BYREF
  __int128 v62; // [rsp+160h] [rbp-3B8h] BYREF
  __int64 v63; // [rsp+170h] [rbp-3A8h]
  char v64[8]; // [rsp+178h] [rbp-3A0h] BYREF
  __int64 v65; // [rsp+180h] [rbp-398h]
  __int64 v66; // [rsp+188h] [rbp-390h] BYREF
  __int128 v67; // [rsp+190h] [rbp-388h] BYREF
  __int128 v68; // [rsp+1A0h] [rbp-378h]
  __int128 v69; // [rsp+1B0h] [rbp-368h]
  __int64 v70; // [rsp+1C0h] [rbp-358h]
  __int128 v71; // [rsp+1D0h] [rbp-348h] BYREF
  __int128 v72; // [rsp+1E0h] [rbp-338h]
  char v73[8]; // [rsp+1F8h] [rbp-320h] BYREF
  __int64 v74; // [rsp+200h] [rbp-318h]
  __int64 v75; // [rsp+208h] [rbp-310h] BYREF
  _BYTE v76[40]; // [rsp+210h] [rbp-308h] BYREF
  __int128 v77; // [rsp+240h] [rbp-2D8h] BYREF
  __int128 v78; // [rsp+250h] [rbp-2C8h]
  __int64 v79; // [rsp+260h] [rbp-2B8h] BYREF
  __int64 v80; // [rsp+268h] [rbp-2B0h]
  __int64 v81; // [rsp+270h] [rbp-2A8h]
  _QWORD v82[4]; // [rsp+278h] [rbp-2A0h] BYREF
  __int64 v83; // [rsp+298h] [rbp-280h] BYREF
  __int64 v84; // [rsp+2A0h] [rbp-278h] BYREF
  __int128 v85; // [rsp+2A8h] [rbp-270h]
  __int64 v86; // [rsp+2B8h] [rbp-260h]
  __int64 v87; // [rsp+2C0h] [rbp-258h] BYREF
  __int64 v88; // [rsp+2C8h] [rbp-250h] BYREF
  __int128 v89; // [rsp+2D0h] [rbp-248h]
  __int64 v90; // [rsp+2E0h] [rbp-238h]
  __int128 v91; // [rsp+2E8h] [rbp-230h] BYREF
  __int64 v92; // [rsp+2F8h] [rbp-220h]
  __int128 v93; // [rsp+300h] [rbp-218h] BYREF
  __int64 v94; // [rsp+310h] [rbp-208h]
  __int64 v95; // [rsp+318h] [rbp-200h] BYREF
  __int128 v96; // [rsp+320h] [rbp-1F8h] BYREF
  __int128 v97; // [rsp+330h] [rbp-1E8h]
  __int128 v98[2]; // [rsp+340h] [rbp-1D8h] BYREF
  __int128 v99[2]; // [rsp+360h] [rbp-1B8h] BYREF
  __int128 v100[2]; // [rsp+380h] [rbp-198h] BYREF
  __int128 v101[2]; // [rsp+3A0h] [rbp-178h] BYREF
  __int128 v102[2]; // [rsp+3C0h] [rbp-158h] BYREF
  __int128 v103[2]; // [rsp+3E0h] [rbp-138h] BYREF
  _OWORD v104[2]; // [rsp+400h] [rbp-118h] BYREF
  _OWORD v105[2]; // [rsp+420h] [rbp-F8h] BYREF
  __int64 v106; // [rsp+448h] [rbp-D0h] BYREF
  _OWORD v107[2]; // [rsp+450h] [rbp-C8h] BYREF
  __int64 v108; // [rsp+470h] [rbp-A8h] BYREF
  _OWORD v109[2]; // [rsp+478h] [rbp-A0h] BYREF
  __int64 v110; // [rsp+498h] [rbp-80h] BYREF
  __int128 v111; // [rsp+4A0h] [rbp-78h]
  __int128 v112; // [rsp+4B0h] [rbp-68h]
  __int64 v113; // [rsp+4C0h] [rbp-58h] BYREF
  __int128 v114; // [rsp+4C8h] [rbp-50h]
  __int128 v115; // [rsp+4D8h] [rbp-40h]

  switch ( *(_BYTE *)a2 )
  {
    case 0:
      <alloc::string::String as core::clone::Clone>::clone(&v91, a2 + 8);
      *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
      *(_OWORD *)(a1 + 16) = v91;
      *(_QWORD *)(a1 + 32) = v92;
      goto LABEL_3;
    case 1:
      v4 = *(_QWORD *)(a2 + 8);
      v5 = *(_QWORD *)(a2 + 16);
      v6 = (_BYTE *)(a2 + 2);
      if ( !*(_BYTE *)(a2 + 1) )
      {
        v7 = &v95;
        uu_expr::syntax_tree::AstNode::eval(&v95, v4);
        if ( v95 )
        {
LABEL_25:
          v2 = *(_OWORD *)(v7 + 1);
          v3 = *(_OWORD *)(v7 + 3);
          goto LABEL_26;
        }
        v47 = v97;
        *(_OWORD *)src = v96;
        uu_expr::syntax_tree::AstNode::eval(v48, v5);
        if ( *(_QWORD *)v48 )
        {
          v15 = *(_OWORD *)&v48[8];
          *(_OWORD *)(a1 + 24) = v49;
          *(_OWORD *)(a1 + 8) = v15;
          *(_QWORD *)a1 = 1LL;
          if ( src[0] == (void *)0x8000000000000000LL )
          {
            alloc::raw_vec::RawVec<T,A>::current_memory(v50, &src[1]);
            v16 = *(_QWORD *)&v50[8];
            if ( !*(_QWORD *)&v50[8] )
              return a1;
            v17 = *(_QWORD *)v50;
            v18 = *(_QWORD *)&v50[16];
LABEL_118:
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate((char *)&v47 + 8, v17, v16, v18);
            return a1;
          }
          alloc::raw_vec::RawVec<T,A>::current_memory(v50, src);
          v23 = *(_QWORD *)&v50[8];
          if ( !*(_QWORD *)&v50[8] )
            return a1;
          v24 = *(_QWORD *)v50;
          v25 = *(_QWORD *)&v50[16];
          goto LABEL_121;
        }
        v52 = v49;
        *(_OWORD *)v51 = *(_OWORD *)&v48[8];
        if ( src[0] == (void *)0x8000000000000000LL )
        {
          if ( !(_QWORD)v47 || v47 < 0 )
            goto LABEL_132;
          num_bigint::bigint::convert::<impl num_traits::Num for num_bigint::bigint::BigInt>::from_str_radix(
            &v53,
            v47,
            *((_QWORD *)&v47 + 1),
            10LL);
        }
        else
        {
          if ( !src[1] || ((__int64)src[1] & 7) != 0 || (unsigned __int64)v47 > 0xFFFFFFFFFFFFFFFLL )
            goto LABEL_133;
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(v50, v47, 0LL);
          v26 = *(_QWORD *)&v50[8];
          if ( *(_QWORD *)v50 )
            alloc::raw_vec::handle_error(*(_QWORD *)&v50[8], *(_QWORD *)&v50[16]);
          v27 = *(void **)&v50[16];
          core::intrinsics::copy_nonoverlapping::precondition_check(src[1], *(_QWORD *)&v50[16], 8LL, 8LL, v47);
          memcpy(v27, src[1], 8 * v47);
          *(_QWORD *)&v53 = v26;
          *((_QWORD *)&v53 + 1) = v27;
          *(_QWORD *)&v54 = v47;
          BYTE8(v54) = BYTE8(v47);
        }
        if ( v51[0] == (void *)0x8000000000000000LL )
        {
          if ( (_QWORD)v52 && v52 >= 0 )
          {
            num_bigint::bigint::convert::<impl num_traits::Num for num_bigint::bigint::BigInt>::from_str_radix(
              &v55,
              v52,
              *((_QWORD *)&v52 + 1),
              10LL);
            v28 = v55;
LABEL_69:
            v32 = (_QWORD)v53 == 0x8000000000000000LL || v28 == 0x8000000000000000LL;
            if ( v32 )
            {
              *(_OWORD *)&v76[16] = v47;
              *(_OWORD *)v76 = *(_OWORD *)src;
              uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)&v59, (__int128 *)v76);
              *(_OWORD *)&v50[16] = v52;
              *(_OWORD *)v50 = *(_OWORD *)v51;
              uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)&v61, (__int128 *)v50);
              switch ( *v6 )
              {
                case 0:
                  v33 = core::cmp::PartialOrd::lt(&v59, &v61);
                  break;
                case 1:
                  v33 = core::cmp::PartialOrd::le(&v59, &v61);
                  break;
                case 2:
                  v33 = <alloc::string::String as core::cmp::PartialEq>::eq(&v59, &v61);
                  break;
                case 3:
                  v33 = core::cmp::PartialEq::ne(&v59, &v61);
                  break;
                case 4:
                  v33 = core::cmp::PartialOrd::gt(&v59, &v61);
                  break;
                case 5:
                  v33 = core::cmp::PartialOrd::ge(&v59, &v61);
                  break;
              }
              v36 = v33;
              alloc::raw_vec::RawVec<T,A>::current_memory(&v44, &v61);
              if ( *((_QWORD *)&v44 + 1) )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v62, v44, *((_QWORD *)&v44 + 1), v45);
              alloc::raw_vec::RawVec<T,A>::current_memory(&v44, &v59);
              if ( *((_QWORD *)&v44 + 1) )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v60, v44, *((_QWORD *)&v44 + 1), v45);
            }
            else
            {
              *(_QWORD *)v76 = &v53;
              *(_QWORD *)v50 = &v55;
              switch ( *v6 )
              {
                case 0:
                  v36 = (unsigned __int8)<num_bigint::bigint::BigInt as core::cmp::Ord>::cmp(&v53, &v55) == 0xFF;
                  break;
                case 1:
                  v38 = (unsigned __int8)(<num_bigint::bigint::BigInt as core::cmp::Ord>::cmp(&v53, &v55) - 3) < 0xFEu;
                  goto LABEL_89;
                case 2:
                  v37 = core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(v76, v50);
                  goto LABEL_86;
                case 3:
                  v37 = core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::ne(v76, v50);
LABEL_86:
                  v36 = v37;
                  break;
                case 4:
                  JUMPOUT(0x112351LL);
                case 5:
                  v38 = (unsigned __int8)<num_bigint::bigint::BigInt as core::cmp::Ord>::cmp(&v53, &v55) < 2u;
LABEL_89:
                  v36 = v38;
                  break;
              }
            }
            if ( (_QWORD)v55 != 0x8000000000000000LL )
            {
              alloc::raw_vec::RawVec<T,A>::current_memory(&v44, &v55);
              if ( *((_QWORD *)&v44 + 1) )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v56, v44, *((_QWORD *)&v44 + 1), v45);
            }
            if ( (_QWORD)v53 != 0x8000000000000000LL )
            {
              alloc::raw_vec::RawVec<T,A>::current_memory(&v44, &v53);
              if ( *((_QWORD *)&v44 + 1) )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v54, v44, *((_QWORD *)&v44 + 1), v45);
            }
            if ( v36 )
            {
              v44 = anon_b662377012fd38f7904545d49e3a6811_0_llvm_82966236564844942;
              *(_QWORD *)&v45 = 0LL;
              alloc::raw_vec::RawVec<T,A>::grow_one(&v44);
              **((_QWORD **)&v44 + 1) = 1LL;
              v77 = v44;
              *(_QWORD *)&v78 = 1LL;
              v39 = 2;
              v40 = &v77;
            }
            else
            {
              v39 = 1;
              v40 = &anon_52158d68de30c31dc6c97ce83134c8ee_19_llvm_10101531615377826705;
            }
            *(_QWORD *)(a1 + 24) = *((_QWORD *)v40 + 2);
            *(_OWORD *)(a1 + 8) = *v40;
            *(_BYTE *)(a1 + 32) = v39;
            *(_DWORD *)(a1 + 33) = 0;
            *(_DWORD *)(a1 + 36) = 0;
            *(_QWORD *)a1 = 0LL;
            if ( v32 )
              return a1;
            if ( v51[0] == (void *)0x8000000000000000LL )
            {
              alloc::raw_vec::RawVec<T,A>::current_memory(&v44, &v51[1]);
              if ( *((_QWORD *)&v44 + 1) )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
                  (char *)&v52 + 8,
                  v44,
                  *((_QWORD *)&v44 + 1),
                  v45);
            }
            else
            {
              alloc::raw_vec::RawVec<T,A>::current_memory(&v44, v51);
              if ( *((_QWORD *)&v44 + 1) )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v52, v44, *((_QWORD *)&v44 + 1), v45);
            }
            if ( src[0] == (void *)0x8000000000000000LL )
            {
              alloc::raw_vec::RawVec<T,A>::current_memory(&v44, &src[1]);
              v16 = *((_QWORD *)&v44 + 1);
              if ( !*((_QWORD *)&v44 + 1) )
                return a1;
              v17 = v44;
              v18 = v45;
              goto LABEL_118;
            }
            alloc::raw_vec::RawVec<T,A>::current_memory(&v44, src);
            v23 = *((_QWORD *)&v44 + 1);
            if ( !*((_QWORD *)&v44 + 1) )
              return a1;
            v24 = v44;
            v25 = v45;
LABEL_121:
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v47, v24, v23, v25);
            return a1;
          }
LABEL_132:
          core::panicking::panic_nounwind(anon_2bac4deccfcbd46877edd8deb52f270f_29_llvm_5724965477395591734, 162LL);
        }
        v29 = v51[1];
        if ( v51[1] )
        {
          if ( ((__int64)v51[1] & 7) == 0 )
          {
            v30 = v52;
            if ( (unsigned __int64)v52 <= 0xFFFFFFFFFFFFFFFLL )
            {
              v43 = BYTE8(v52);
              alloc::raw_vec::RawVec<T,A>::try_allocate_in(v50, v52, 0LL);
              v63 = *(_QWORD *)&v50[8];
              if ( *(_QWORD *)v50 )
                alloc::raw_vec::handle_error(v63, *(_QWORD *)&v50[16]);
              v31 = *(void **)&v50[16];
              core::intrinsics::copy_nonoverlapping::precondition_check(v29, *(_QWORD *)&v50[16], 8LL, 8LL, v30);
              memcpy(v31, v29, 8 * v30);
              v28 = v63;
              *(_QWORD *)&v55 = v63;
              *((_QWORD *)&v55 + 1) = v31;
              *(_QWORD *)&v56 = v30;
              BYTE8(v56) = v43;
              goto LABEL_69;
            }
          }
        }
LABEL_133:
        core::panicking::panic_nounwind(anon_3192fd2b3cdbb0a05347a2be3e369164_2_llvm_3898926832826071515, 162LL);
      }
      if ( *(_BYTE *)(a2 + 1) != 1 )
      {
        uu_expr::syntax_tree::StringOp::eval(a1, v6, v4, v5);
        return a1;
      }
      v7 = (__int64 *)v50;
      uu_expr::syntax_tree::AstNode::eval(v50, v4);
      if ( *(_QWORD *)v50 )
        goto LABEL_25;
      v102[1] = *(_OWORD *)&v50[24];
      v102[0] = *(_OWORD *)&v50[8];
      v7 = (__int64 *)v76;
      uu_expr::syntax_tree::NumOrStr::eval_as_bigint((__int64)v76, v102);
      if ( *(_QWORD *)v76 )
        goto LABEL_25;
      v58 = *(_OWORD *)&v76[24];
      v57 = *(_OWORD *)&v76[8];
      uu_expr::syntax_tree::AstNode::eval(v48, v5);
      v8 = (__int128 *)&v48[8];
      if ( *(_QWORD *)v48
        || (v103[1] = v49,
            v103[0] = *(_OWORD *)&v48[8],
            uu_expr::syntax_tree::NumOrStr::eval_as_bigint((__int64)&v95, v103),
            v8 = &v96,
            v95) )
      {
        v9 = *v8;
        *(_OWORD *)(a1 + 24) = v8[1];
        *(_OWORD *)(a1 + 8) = v9;
        *(_QWORD *)a1 = 1LL;
LABEL_15:
        alloc::raw_vec::RawVec<T,A>::current_memory(&v79, &v57);
        if ( v80 )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v58, v79, v80, v81);
      }
      else
      {
        v68 = v97;
        v67 = v96;
        switch ( *v6 )
        {
          case 0:
            v104[1] = v58;
            v104[0] = v57;
            v105[0] = v96;
            v105[1] = v97;
            num_bigint::bigint::addition::<impl core::ops::arith::Add for num_bigint::bigint::BigInt>::add(
              &v71,
              v104,
              v105);
            goto LABEL_130;
          case 1:
            v60 = v58;
            v59 = v57;
            v61 = v96;
            v62 = v97;
            num_bigint::bigint::subtraction::<impl core::ops::arith::Sub for num_bigint::bigint::BigInt>::sub(
              &v71,
              &v59,
              &v61);
            goto LABEL_130;
          case 2:
            v78 = v58;
            v77 = v57;
            v44 = v96;
            v45 = v97;
            JUMPOUT(0x112762LL);
          case 3:
            num_bigint::bigint::BigInt::checked_div(src, &v57, &v67);
            if ( src[0] == (void *)0x8000000000000000LL )
              goto LABEL_127;
            v42 = *(_OWORD *)src;
            v72 = v47;
            v71 = *(_OWORD *)src;
            *(_OWORD *)(a1 + 24) = v47;
            *(_OWORD *)(a1 + 8) = v42;
            *(_QWORD *)a1 = 0LL;
            core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&v67);
            core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&v57);
            return a1;
          case 4:
            num_bigint::bigint::BigInt::checked_div(v51, &v57, &v67);
            if ( v51[0] == (void *)0x8000000000000000LL )
            {
              core::ptr::drop_in_place<core::option::Option<num_bigint::bigint::BigInt>>(v51);
LABEL_127:
              *(_QWORD *)(a1 + 8) = 4LL;
              *(_QWORD *)a1 = 1LL;
              core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&v67);
              goto LABEL_15;
            }
            core::ptr::drop_in_place<core::option::Option<num_bigint::bigint::BigInt>>(v51);
            v54 = v58;
            v53 = v57;
            v55 = v67;
            v56 = v68;
            num_bigint::bigint::division::<impl core::ops::arith::Rem for num_bigint::bigint::BigInt>::rem(
              &v71,
              &v53,
              &v55);
LABEL_130:
            v41 = v71;
            *(_OWORD *)(a1 + 24) = v72;
            *(_OWORD *)(a1 + 8) = v41;
            break;
        }
LABEL_3:
        *(_QWORD *)a1 = 0LL;
      }
      return a1;
    case 2:
      uu_expr::syntax_tree::AstNode::eval(&v110, *(_QWORD *)(a2 + 8));
      if ( v110 )
      {
        v2 = v111;
        v3 = v112;
LABEL_26:
        *(_OWORD *)(a1 + 24) = v3;
        *(_OWORD *)(a1 + 8) = v2;
        *(_QWORD *)a1 = 1LL;
        return a1;
      }
      v98[1] = v112;
      v98[0] = v111;
      uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)v64, v98);
      uu_expr::syntax_tree::AstNode::eval(&v106, *(_QWORD *)(a2 + 16));
      v10 = v107;
      if ( v106 )
        goto LABEL_44;
      v99[1] = v107[1];
      v99[0] = v107[0];
      uu_expr::syntax_tree::NumOrStr::eval_as_bigint((__int64)&v83, v99);
      if ( v83 )
      {
        core::ptr::drop_in_place<uu_expr::ExprError>(&v84);
      }
      else if ( v84 != 0x8000000000000000LL )
      {
        *(_QWORD *)v48 = v84;
        *(_OWORD *)&v48[8] = v85;
        *(_QWORD *)&v49 = v86;
        if ( uu_expr::syntax_tree::AstNode::eval::{{closure}}(v48) )
        {
          v20 = v19;
          goto LABEL_43;
        }
      }
      v20 = 0LL;
LABEL_43:
      uu_expr::syntax_tree::AstNode::eval(&v108, *(_QWORD *)(a2 + 24));
      v10 = v109;
      if ( v108 )
      {
LABEL_44:
        v21 = *v10;
        *(_OWORD *)(a1 + 24) = v10[1];
        *(_OWORD *)(a1 + 8) = v21;
        v22 = 1LL;
      }
      else
      {
        v100[1] = v109[1];
        v100[0] = v109[0];
        uu_expr::syntax_tree::NumOrStr::eval_as_bigint((__int64)&v87, v100);
        if ( v87 )
        {
          core::ptr::drop_in_place<uu_expr::ExprError>(&v88);
        }
        else if ( v88 != 0x8000000000000000LL )
        {
          *(_QWORD *)v48 = v88;
          *(_OWORD *)&v48[8] = v89;
          *(_QWORD *)&v49 = v90;
          if ( uu_expr::syntax_tree::AstNode::eval::{{closure}}(v48) )
          {
            v38 = v20 != 0;
            v35 = v20 - 1;
            if ( v38 )
            {
              if ( v34 )
              {
                if ( v65 && v66 >= 0 )
                {
                  v82[0] = v65;
                  v82[1] = v65 + v66;
                  v82[2] = v35;
                  v82[3] = v34;
                  <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v93, v82);
                  *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
                  *(_OWORD *)(a1 + 16) = v93;
                  *(_QWORD *)(a1 + 32) = v94;
                  *(_QWORD *)a1 = 0LL;
                  core::ptr::drop_in_place<alloc::string::String>(v64);
                  return a1;
                }
                goto LABEL_132;
              }
            }
          }
        }
        *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        *(_QWORD *)(a1 + 24) = 1LL;
        *(_QWORD *)(a1 + 32) = 0LL;
        v22 = 0LL;
      }
      *(_QWORD *)a1 = v22;
      alloc::raw_vec::RawVec<T,A>::current_memory(v48, v64);
      if ( *(_QWORD *)&v48[8] )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
          &v66,
          *(_QWORD *)v48,
          *(_QWORD *)&v48[8],
          *(_QWORD *)&v48[16]);
      return a1;
    case 3:
      uu_expr::syntax_tree::AstNode::eval(&v113, *(_QWORD *)(a2 + 8));
      if ( !v113 )
      {
        v101[1] = v115;
        v101[0] = v114;
        uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)v73, v101);
        if ( v74 && v75 >= 0 )
        {
          if ( (unsigned __int64)v75 >= 0x20 )
            v11 = core::str::count::do_count_chars();
          else
            v11 = core::str::count::char_count_general_case();
          v13 = v11;
          if ( v11 )
          {
            *(_OWORD *)v48 = anon_b662377012fd38f7904545d49e3a6811_0_llvm_82966236564844942;
            *(_QWORD *)&v48[16] = 0LL;
            alloc::raw_vec::RawVec<T,A>::grow_one(v48);
            **(_QWORD **)&v48[8] = v13;
            v69 = *(_OWORD *)v48;
            v70 = 1LL;
            v14 = 2;
          }
          else
          {
            v14 = 1;
            v70 = 0LL;
            v69 = anon_52158d68de30c31dc6c97ce83134c8ee_19_llvm_10101531615377826705;
          }
          *(_QWORD *)(a1 + 24) = v70;
          *(_OWORD *)(a1 + 8) = v69;
          *(_BYTE *)(a1 + 32) = v14;
          *(_DWORD *)(a1 + 33) = 0;
          *(_DWORD *)(a1 + 36) = 0;
          *(_QWORD *)a1 = 0LL;
          alloc::raw_vec::RawVec<T,A>::current_memory(v48, v73);
          if ( *(_QWORD *)&v48[8] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v75,
              *(_QWORD *)v48,
              *(_QWORD *)&v48[8],
              *(_QWORD *)&v48[16]);
          return a1;
        }
        goto LABEL_132;
      }
      v2 = v114;
      v3 = v115;
      goto LABEL_26;
  }
}
