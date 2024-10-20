_OWORD *__fastcall uu_sleep::sleep(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  _QWORD *v4; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int128 v8; // rdi
  int v9; // eax
  unsigned int v10; // edx
  __int8 v11; // cl
  char *v12; // r8
  __int64 v13; // rcx
  __int64 *v14; // r15
  __int64 v15; // r9
  __int128 *v16; // rsi
  char *v17; // rsi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  bool v20; // cf
  __int64 v21; // rsi
  __int64 v22; // r15
  void *v23; // r13
  char v24; // r14
  void *v25; // r13
  void *v26; // r13
  unsigned int v27; // eax
  __int64 v28; // rdx
  void *v29; // r13
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // r13
  unsigned __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rbx
  __int64 v38; // r14
  _OWORD *result; // rax
  __int128 v40; // xmm0
  __int64 v41; // [rsp+0h] [rbp-3F8h]
  __int64 v42; // [rsp+10h] [rbp-3E8h]
  _BYTE v43[7]; // [rsp+18h] [rbp-3E0h]
  char v44; // [rsp+20h] [rbp-3D8h]
  unsigned int v45; // [rsp+2Ch] [rbp-3CCh]
  _BYTE v46[7]; // [rsp+30h] [rbp-3C8h]
  __int64 v47; // [rsp+38h] [rbp-3C0h]
  __int128 v48; // [rsp+40h] [rbp-3B8h] BYREF
  __int64 v49; // [rsp+50h] [rbp-3A8h] BYREF
  __int128 v50; // [rsp+60h] [rbp-398h] BYREF
  _QWORD v51[2]; // [rsp+70h] [rbp-388h] BYREF
  _BYTE v52[48]; // [rsp+80h] [rbp-378h] BYREF
  __int128 v53; // [rsp+B0h] [rbp-348h]
  __int128 v54; // [rsp+C0h] [rbp-338h]
  __int128 v55; // [rsp+D0h] [rbp-328h]
  __int128 v56; // [rsp+E0h] [rbp-318h]
  __int64 *v57; // [rsp+F0h] [rbp-308h]
  __int128 v58; // [rsp+100h] [rbp-2F8h] BYREF
  int v59; // [rsp+110h] [rbp-2E8h]
  unsigned int v60; // [rsp+114h] [rbp-2E4h]
  unsigned __int8 v61; // [rsp+118h] [rbp-2E0h]
  _BYTE v62[7]; // [rsp+119h] [rbp-2DFh]
  char *v63; // [rsp+120h] [rbp-2D8h]
  __m256i v64; // [rsp+128h] [rbp-2D0h] BYREF
  char *v65; // [rsp+148h] [rbp-2B0h]
  __m256i v66; // [rsp+150h] [rbp-2A8h] BYREF
  char *v67; // [rsp+170h] [rbp-288h]
  __int128 v68; // [rsp+180h] [rbp-278h] BYREF
  char *v69; // [rsp+190h] [rbp-268h] BYREF
  _QWORD *v70; // [rsp+198h] [rbp-260h]
  __int64 v71; // [rsp+1A0h] [rbp-258h]
  __int64 v72; // [rsp+1A8h] [rbp-250h]
  _QWORD *v73; // [rsp+1B0h] [rbp-248h] BYREF
  __int64 v74; // [rsp+1B8h] [rbp-240h] BYREF
  __int64 v75; // [rsp+1C0h] [rbp-238h] BYREF
  int v76; // [rsp+1C8h] [rbp-230h]
  unsigned int v77; // [rsp+1CCh] [rbp-22Ch]
  __int8 v78; // [rsp+1D0h] [rbp-228h]
  char v79; // [rsp+1D1h] [rbp-227h] BYREF
  __int64 v80; // [rsp+1D8h] [rbp-220h] BYREF
  int v81; // [rsp+1E0h] [rbp-218h]
  unsigned int v82; // [rsp+1E4h] [rbp-214h]
  unsigned __int8 v83; // [rsp+1E8h] [rbp-210h]
  _BYTE v84[7]; // [rsp+1E9h] [rbp-20Fh]
  _BYTE v85[48]; // [rsp+1F0h] [rbp-208h] BYREF
  __int128 v86; // [rsp+220h] [rbp-1D8h]
  __int128 v87; // [rsp+230h] [rbp-1C8h]
  __int128 v88; // [rsp+240h] [rbp-1B8h]
  __int128 v89; // [rsp+250h] [rbp-1A8h]
  __int64 v90; // [rsp+260h] [rbp-198h] BYREF
  __int64 v91; // [rsp+268h] [rbp-190h]
  __int64 v92; // [rsp+270h] [rbp-188h]
  __int64 v93; // [rsp+278h] [rbp-180h]
  __int64 v94; // [rsp+280h] [rbp-178h]
  _OWORD v95[3]; // [rsp+2A0h] [rbp-158h] BYREF
  __int128 v96; // [rsp+2D0h] [rbp-128h]
  __int16 v97; // [rsp+2E0h] [rbp-118h] BYREF
  char v98; // [rsp+2E2h] [rbp-116h]
  int v99; // [rsp+2E3h] [rbp-115h]
  _WORD v100[4]; // [rsp+2E7h] [rbp-111h] BYREF
  _QWORD v101[2]; // [rsp+2F0h] [rbp-108h] BYREF
  _QWORD v102[2]; // [rsp+300h] [rbp-F8h] BYREF
  _QWORD v103[4]; // [rsp+310h] [rbp-E8h] BYREF
  _QWORD v104[4]; // [rsp+330h] [rbp-C8h] BYREF
  __int128 v105; // [rsp+350h] [rbp-A8h] BYREF
  __int64 v106; // [rsp+360h] [rbp-98h]
  _QWORD v107[6]; // [rsp+368h] [rbp-90h] BYREF
  _QWORD v108[12]; // [rsp+398h] [rbp-60h] BYREF

  v72 = a1;
  v98 = 10;
  v97 = 2570;
  memset(v100, 10, 3);
  v99 = 100992003;
  v95[0] = anon_167cb1f6d0bb36a02fb1e0f8131d6db1_3_llvm_11514404006715048016;
  v95[1] = xmmword_107698;
  v95[2] = *(_OWORD *)&off_1076A8;
  v96 = xmmword_1076B8;
  if ( !a2 )
  {
    v35 = 0LL;
    v36 = 0LL;
    goto LABEL_88;
  }
  if ( a2 < 0 )
    core::panicking::panic_nounwind(aUnsafePrecondi_3, 71LL);
  v2 = a2;
  v70 = &v52[16];
  v44 = 0;
  v47 = 0LL;
  v45 = 0;
  v3 = 0LL;
  v71 = a2;
  do
  {
    v4 = (_QWORD *)(v72 + 16 * v3);
    v73 = v4;
    v5 = core::str::<impl str>::trim_matches(*v4, v4[1]);
    if ( (BYTE5(v96) & 1) != 0 )
    {
      v50 = 0LL;
      v51[0] = 0LL;
      v13 = v5;
      if ( !v6 )
        v13 = 0LL;
      v90 = v5;
      v91 = v6;
      v92 = 0LL;
      v93 = v13;
      v94 = 0LL;
      v14 = &v90;
      do
      {
        fundu_core::parse::ReprParserTemplate::parse(
          (unsigned int)v52,
          (_DWORD)v14,
          (unsigned int)v95,
          (unsigned int)&v97,
          (unsigned int)&unk_1070C0,
          0,
          v41,
          0LL,
          v42);
        if ( *(_QWORD *)v52 == 2LL )
        {
          v8 = *(_OWORD *)&v52[8];
          v9 = *(_DWORD *)&v52[24];
          v10 = *(_DWORD *)&v52[28];
          v11 = v52[32];
          *(_DWORD *)v43 = *(_DWORD *)&v52[33];
          *(_DWORD *)&v43[3] = *(_DWORD *)&v52[36];
          v12 = *(char **)&v52[40];
          goto LABEL_42;
        }
        v89 = v56;
        v88 = v55;
        v87 = v54;
        v86 = v53;
        v14 = v57;
        *(_OWORD *)&v85[24] = *(_OWORD *)&v52[24];
        *(_QWORD *)&v85[40] = *(_QWORD *)&v52[40];
        *(_OWORD *)&v85[8] = *(_OWORD *)&v52[8];
        *(_QWORD *)v85 = *(_QWORD *)v52;
        fundu_core::parse::DurationRepr::parse(&v58, v85);
        v8 = v58;
        v9 = v59;
        v10 = v60;
        v11 = v61;
        if ( (_QWORD)v58 != 8LL )
        {
          v12 = v63;
          *(_DWORD *)v43 = *(_DWORD *)v62;
          *(_DWORD *)&v43[3] = *(_DWORD *)&v62[3];
          goto LABEL_42;
        }
        if ( (BYTE6(v96) & 1) == 0 && (v61 & 1) != 0 )
        {
          *(_QWORD *)&v8 = 6LL;
          goto LABEL_42;
        }
        v15 = v50;
        if ( *((_QWORD *)&v58 + 1) || v59 )
        {
          if ( (_QWORD)v50 || DWORD2(v50) )
          {
            *(_DWORD *)&v84[3] = *(_DWORD *)&v62[3];
            *(_DWORD *)v84 = *(_DWORD *)v62;
            v80 = *((_QWORD *)&v58 + 1);
            v81 = v59;
            v82 = v60;
            v83 = v61;
            fundu_core::time::Duration::checked_add(&v75, &v50, &v80);
            v9 = v76;
            if ( v76 == 1000000000 )
            {
              v11 = v51[0] & 1;
              v16 = &anon_167cb1f6d0bb36a02fb1e0f8131d6db1_37_llvm_11514404006715048016;
              if ( (v51[0] & 1) == 0 )
                v16 = &anon_167cb1f6d0bb36a02fb1e0f8131d6db1_36_llvm_11514404006715048016;
              v17 = (char *)v16 + 17;
              v9 = 999999999;
              v15 = -1LL;
            }
            else
            {
              v15 = v75;
              v10 = v77;
              v11 = v78;
              v17 = &v79;
            }
            *(_DWORD *)&v46[3] = *(_DWORD *)(v17 + 3);
            *(_DWORD *)v46 = *(_DWORD *)v17;
          }
          else
          {
            *(_DWORD *)&v46[3] = *(_DWORD *)&v62[3];
            *(_DWORD *)v46 = *(_DWORD *)v62;
            v15 = *((_QWORD *)&v58 + 1);
          }
          v12 = (char *)v51 + 1;
        }
        else
        {
          v9 = DWORD2(v50);
          v10 = HIDWORD(v50);
          v11 = v51[0];
          v12 = (char *)v51 + 1;
          *(_DWORD *)v46 = *(_DWORD *)((char *)v51 + 1);
          *(_DWORD *)&v46[3] = HIDWORD(v51[0]);
        }
        *(_QWORD *)&v50 = v15;
        *((_QWORD *)&v50 + 1) = __PAIR64__(v10, v9);
        LOBYTE(v51[0]) = v11;
        HIDWORD(v51[0]) = *(_DWORD *)&v46[3];
        *(_DWORD *)((char *)v51 + 1) = *(_DWORD *)v46;
      }
      while ( v14 );
      *(_DWORD *)&v43[3] = *(_DWORD *)&v46[3];
      *(_DWORD *)v43 = *(_DWORD *)v46;
      *(_QWORD *)&v8 = 8LL;
      *((_QWORD *)&v8 + 1) = v15;
LABEL_42:
      if ( (_QWORD)v8 != 8LL )
        goto LABEL_52;
    }
    else
    {
      v7 = v5;
      if ( !v6 )
        v7 = 0LL;
      v90 = v5;
      v91 = v6;
      v92 = 0LL;
      v93 = v7;
      v94 = 0LL;
      fundu_core::parse::ReprParserTemplate::parse(
        (unsigned int)v85,
        (unsigned int)&v90,
        (unsigned int)v95,
        (unsigned int)&v97,
        (unsigned int)&unk_1070C0,
        0,
        v41,
        0LL,
        v42);
      if ( *(_QWORD *)v85 == 2LL )
      {
        v8 = *(_OWORD *)&v85[8];
        v9 = *(_DWORD *)&v85[24];
        v10 = *(_DWORD *)&v85[28];
        v11 = v85[32];
        *(_DWORD *)v43 = *(_DWORD *)&v85[33];
        *(_DWORD *)&v43[3] = *(_DWORD *)&v85[36];
        v12 = *(char **)&v85[40];
        if ( *(_QWORD *)&v85[8] != 8LL )
          goto LABEL_52;
      }
      else
      {
        v56 = v89;
        v55 = v88;
        v54 = v87;
        v53 = v86;
        *(_OWORD *)&v52[32] = *(_OWORD *)&v85[32];
        *(_OWORD *)&v52[16] = *(_OWORD *)&v85[16];
        *(_OWORD *)v52 = *(_OWORD *)v85;
        *((_QWORD *)&v8 + 1) = v52;
        fundu_core::parse::DurationRepr::parse(&v58, v52);
        *(_QWORD *)&v8 = v58;
        if ( (_QWORD)v58 != 8LL )
        {
          *((_QWORD *)&v8 + 1) = *((_QWORD *)&v58 + 1);
          v9 = v59;
          v10 = v60;
          v11 = v61;
          *(_DWORD *)v43 = *(_DWORD *)v62;
          *(_DWORD *)&v43[3] = *(_DWORD *)&v62[3];
          v12 = v63;
LABEL_52:
          *(_OWORD *)v64.m256i_i8 = v8;
          v64.m256i_i64[2] = __PAIR64__(v10, v9);
          v64.m256i_i8[24] = v11;
          v64.m256i_i32[7] = *(_DWORD *)&v43[3];
          *(__int32 *)((char *)&v64.m256i_i32[6] + 1) = *(_DWORD *)v43;
          v65 = v12;
          switch ( (__int64)v8 )
          {
            case 0LL:
              if ( v4[1] )
              {
                alloc::raw_vec::RawVec<T,A>::try_allocate_in(v52, 30LL, 0LL);
                v22 = *(_QWORD *)&v52[8];
                if ( *(_QWORD *)v52 )
                  goto LABEL_90;
                v25 = *(void **)&v52[16];
                core::intrinsics::copy_nonoverlapping::precondition_check(
                  &xmmword_1E7D0,
                  *(_QWORD *)&v52[16],
                  1LL,
                  1LL,
                  30LL);
                qmemcpy(v25, "Found only whitespace in input", 30);
                *(_QWORD *)&v48 = v22;
                *((_QWORD *)&v48 + 1) = v25;
                v49 = 30LL;
              }
              else
              {
                alloc::raw_vec::RawVec<T,A>::try_allocate_in(v52, 15LL, 0LL);
                v22 = *(_QWORD *)&v52[8];
                if ( *(_QWORD *)v52 )
LABEL_90:
                  alloc::raw_vec::handle_error(v22, *v70);
                v29 = *(void **)&v52[16];
                core::intrinsics::copy_nonoverlapping::precondition_check(
                  &unk_1E7EE,
                  *(_QWORD *)&v52[16],
                  1LL,
                  1LL,
                  15LL);
                qmemcpy(v29, "Input was empty", 15);
                *(_QWORD *)&v48 = v22;
                *((_QWORD *)&v48 + 1) = v29;
                v49 = 15LL;
              }
LABEL_74:
              v24 = 0;
LABEL_75:
              v30 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
              v31 = *(_QWORD *)(v30 + 8);
              v32 = *(_QWORD *)(v30 + 16);
              core::slice::raw::from_raw_parts::precondition_check(v31, 1LL, 1LL, v32);
              v102[0] = v31;
              v102[1] = v32;
              v101[0] = v102;
              v101[1] = <&T as core::fmt::Display>::fmt;
              v107[0] = &unk_1071F0;
              v107[1] = 2LL;
              v107[4] = 0LL;
              v107[2] = v101;
              v107[3] = 1LL;
              std::io::stdio::_eprint(v107);
              v104[0] = &v73;
              v104[1] = <&T as core::fmt::Display>::fmt;
              v104[2] = &v48;
              v104[3] = <alloc::string::String as core::fmt::Display>::fmt;
              v108[0] = &off_107210;
              v108[1] = 3LL;
              v108[4] = 0LL;
              v108[2] = v104;
              v108[3] = 2LL;
              std::io::stdio::_eprint(v108);
              alloc::raw_vec::RawVec<T,A>::current_memory(v52, &v48);
              if ( *(_QWORD *)&v52[8] )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
                  &v49,
                  *(_QWORD *)v52,
                  *(_QWORD *)&v52[8],
                  *(_QWORD *)&v52[16]);
              if ( !v24 && (v64.m256i_i64[0] | 2) != 3 )
                core::ptr::drop_in_place<fundu_core::error::ParseError>(&v64);
              v44 = 1;
              v2 = v71;
              break;
            case 1LL:
            case 3LL:
              v69 = v65;
              v68 = *(_OWORD *)&v64.m256i_u64[2];
              v21 = *((_QWORD *)&v8 + 1) + 1LL;
              if ( !v21 )
                v21 = -1LL;
              v74 = v21;
              v103[0] = &v68;
              v103[1] = <alloc::string::String as core::fmt::Display>::fmt;
              v103[2] = &v74;
              v103[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
              *(_QWORD *)v52 = &unk_1071D0;
              *(_QWORD *)&v52[8] = 2LL;
              *(_QWORD *)&v52[16] = v103;
              *(_QWORD *)&v52[24] = 2LL;
              *(_QWORD *)&v52[32] = 0LL;
              alloc::fmt::format::format_inner(&v105, v52);
              v48 = v105;
              v49 = v106;
              alloc::raw_vec::RawVec<T,A>::current_memory(v52, &v68);
              if ( *(_QWORD *)&v52[8] )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
                  &v69,
                  *(_QWORD *)v52,
                  *(_QWORD *)&v52[8],
                  *(_QWORD *)&v52[16]);
              goto LABEL_74;
            case 4LL:
            case 5LL:
              alloc::raw_vec::RawVec<T,A>::try_allocate_in(v52, 26LL, 0LL);
              v22 = *(_QWORD *)&v52[8];
              if ( *(_QWORD *)v52 )
                goto LABEL_90;
              v23 = *(void **)&v52[16];
              core::intrinsics::copy_nonoverlapping::precondition_check(
                &xmmword_1E80A,
                *(_QWORD *)&v52[16],
                1LL,
                1LL,
                26LL);
              qmemcpy(v23, "Exponent was out of bounds", 26);
              *(_QWORD *)&v48 = v22;
              *((_QWORD *)&v48 + 1) = v23;
              v49 = 26LL;
              goto LABEL_74;
            case 6LL:
              alloc::raw_vec::RawVec<T,A>::try_allocate_in(v52, 19LL, 0LL);
              v22 = *(_QWORD *)&v52[8];
              if ( *(_QWORD *)v52 )
                goto LABEL_90;
              v26 = *(void **)&v52[16];
              core::intrinsics::copy_nonoverlapping::precondition_check(
                &xmmword_1E824,
                *(_QWORD *)&v52[16],
                1LL,
                1LL,
                19LL);
              qmemcpy(v26, "Number was negative", 19);
              *(_QWORD *)&v48 = v22;
              *((_QWORD *)&v48 + 1) = v26;
              v49 = 19LL;
              goto LABEL_74;
            default:
              v67 = v65;
              v66 = v64;
              *(_QWORD *)v85 = 0LL;
              *(_QWORD *)&v85[8] = 1LL;
              *(_QWORD *)&v85[16] = 0LL;
              *(_QWORD *)&v53 = 32LL;
              BYTE8(v53) = 3;
              *(_QWORD *)v52 = 0LL;
              *(_QWORD *)&v52[16] = 0LL;
              *(_QWORD *)&v52[32] = v85;
              *(_QWORD *)&v52[40] = &off_107050;
              if ( (unsigned __int8)<fundu_core::error::ParseError as core::fmt::Display>::fmt(&v66, v52) )
                core::result::unwrap_failed(
                  aADisplayImplem,
                  55LL,
                  &v90,
                  &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
                  &off_107080);
              v48 = *(_OWORD *)v85;
              v49 = *(_QWORD *)&v85[16];
              v24 = 1;
              core::ptr::drop_in_place<fundu_core::error::ParseError>(&v66);
              goto LABEL_75;
          }
          goto LABEL_5;
        }
        v11 = v61;
        if ( (BYTE6(v96) & 1) == 0 )
        {
          v9 = v61;
          *(_QWORD *)&v8 = 6LL;
          LOBYTE(v9) = v61 & 1;
          if ( (v61 & 1) != 0 )
            goto LABEL_52;
        }
        *((_QWORD *)&v8 + 1) = *((_QWORD *)&v58 + 1);
        v9 = v59;
        v12 = (char *)*(unsigned int *)&v62[3];
        *(_DWORD *)v43 = *(_DWORD *)v62;
        *(_DWORD *)&v43[3] = *(_DWORD *)&v62[3];
      }
    }
    if ( v9 == 1000000000 )
      goto LABEL_5;
    if ( !*((_QWORD *)&v8 + 1) && !v9 )
    {
      v18 = 0LL;
      goto LABEL_49;
    }
    if ( (v11 & 1) == 0 )
    {
      v18 = *((_QWORD *)&v8 + 1) & 0xFFFFFFFFFFFFFF00LL;
LABEL_49:
      v19 = v18 | BYTE8(v8);
      v20 = __CFADD__(v19, v47);
      v47 += v19;
      if ( v20 )
        goto LABEL_69;
      goto LABEL_67;
    }
    v9 = 0;
LABEL_67:
    v27 = v45 + v9;
    if ( v27 > 0x3B9AC9FF )
    {
      if ( v47 == -1 )
      {
LABEL_69:
        v45 = 999999999;
        v47 = -1LL;
        goto LABEL_5;
      }
      v27 -= 1000000000;
      v28 = v47 + 1;
      if ( v27 >= 0x3B9ACA00 )
      {
        v33 = v27 / 0x3B9ACA00uLL;
        v20 = __CFADD__(v33, v28);
        v34 = v33 + v28;
        v47 = v34;
        if ( v20 )
        {
          *(_QWORD *)v52 = &off_107098;
          *(_QWORD *)&v52[8] = 1LL;
          *(_QWORD *)&v52[16] = 8LL;
          *(_OWORD *)&v52[24] = 0LL;
          core::panicking::panic_fmt(v52, &off_1070A8, v34, v33, v12);
        }
        v27 %= 0x3B9ACA00u;
      }
      else
      {
        ++v47;
      }
    }
    v45 = v27;
LABEL_5:
    ++v3;
  }
  while ( v3 != v2 );
  v35 = v47;
  v36 = v45;
  if ( (v44 & 1) == 0 )
  {
LABEL_88:
    std::thread::sleep(v35, v36);
    return 0LL;
  }
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v52, 0LL, 0LL);
  v37 = *(_QWORD *)&v52[8];
  if ( *(_QWORD *)v52 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v52[8], *(_QWORD *)&v52[16]);
  v38 = *(_QWORD *)&v52[16];
  core::intrinsics::copy_nonoverlapping::precondition_check(1LL, *(_QWORD *)&v52[16], 1LL, 1LL, 0LL);
  *(_DWORD *)&v52[24] = 1;
  *(_QWORD *)v52 = v37;
  *(_QWORD *)&v52[8] = v38;
  *(_QWORD *)&v52[16] = 0LL;
  result = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !result )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v40 = *(_OWORD *)v52;
  result[1] = *(_OWORD *)&v52[16];
  *result = v40;
  return result;
}
