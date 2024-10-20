_QWORD *__fastcall uu_head::parse::parse_obsolete(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v4; // rbx
  int v5; // edx
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r12
  int v8; // edx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r13
  int v13; // edx
  int v14; // r12d
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rbx
  int v19; // edx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int128 v23; // xmm0
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int128 v27; // xmm0
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int128 v31; // xmm0
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int128 v35; // xmm0
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int128 v39; // xmm0
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int128 v43; // xmm0
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v48; // [rsp+8h] [rbp-170h] BYREF
  __int64 v49; // [rsp+10h] [rbp-168h]
  __int64 v50; // [rsp+18h] [rbp-160h]
  int v51; // [rsp+20h] [rbp-158h]
  int v52; // [rsp+24h] [rbp-154h]
  unsigned __int64 v53; // [rsp+28h] [rbp-150h] BYREF
  unsigned __int64 v54; // [rsp+30h] [rbp-148h]
  unsigned __int64 v55; // [rsp+38h] [rbp-140h]
  __int64 v56; // [rsp+40h] [rbp-138h]
  _QWORD *v57; // [rsp+48h] [rbp-130h]
  __int128 v58; // [rsp+50h] [rbp-128h] BYREF
  unsigned __int64 **v59; // [rsp+60h] [rbp-118h]
  __int64 v60; // [rsp+68h] [rbp-110h]
  __int64 v61; // [rsp+70h] [rbp-108h]
  __int128 v62; // [rsp+80h] [rbp-F8h]
  unsigned __int64 **v63; // [rsp+90h] [rbp-E8h]
  __int64 v64; // [rsp+98h] [rbp-E0h]
  unsigned __int64 *v65; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 (__fastcall *v66)(); // [rsp+A8h] [rbp-D0h]
  unsigned __int64 v67; // [rsp+B0h] [rbp-C8h]
  unsigned __int64 v68; // [rsp+B8h] [rbp-C0h] BYREF
  unsigned __int64 v69; // [rsp+C0h] [rbp-B8h] BYREF
  __int128 v70; // [rsp+C8h] [rbp-B0h] BYREF
  unsigned __int64 **v71; // [rsp+D8h] [rbp-A0h]
  __int128 v72; // [rsp+E0h] [rbp-98h]
  unsigned __int64 **v73; // [rsp+F0h] [rbp-88h]
  __int128 v74; // [rsp+100h] [rbp-78h]
  unsigned __int64 **v75; // [rsp+110h] [rbp-68h]
  __int128 v76; // [rsp+120h] [rbp-58h]
  unsigned __int64 **v77; // [rsp+130h] [rbp-48h]
  char v78[8]; // [rsp+138h] [rbp-40h] BYREF
  unsigned __int64 v79; // [rsp+140h] [rbp-38h]

  v55 = 0LL;
  v53 = a2;
  v54 = a2 + a3;
  if ( (a3 & 0x8000000000000000LL) != 0LL )
    goto LABEL_73;
  v4 = a1;
  if ( !(unsigned int)core::str::validations::next_code_point(&v53) )
  {
LABEL_21:
    *a1 = 0LL;
    return v4;
  }
  if ( (v5 ^ 0xD800u) - 2048 >= 0x10F800 )
LABEL_75:
    core::panicking::panic_nounwind(anon_c621f48c071d704028df7430a8a2a976_24_llvm_15605710557940646298, 57LL);
  v6 = v53;
  v7 = v54;
  if ( v54 < v53 )
LABEL_73:
    core::panicking::panic_nounwind(anon_82aadc510ef785ff699953d1cb54b4b6_22_llvm_15380159803405013143, 71LL);
  v55 += v53 + a3 - v54;
  if ( v5 != 45 )
    goto LABEL_21;
  v57 = a1;
  if ( (unsigned int)core::str::validations::next_code_point(&v53) )
  {
    if ( (v8 ^ 0xD800u) - 2048 > (unsigned int)&loc_10F7FF )
LABEL_76:
      core::panicking::panic_nounwind(anon_d1a9c50c860ba6bd9a1e50e4482521ef_24_llvm_9056048350949306669, 57LL);
    v9 = v53;
    v10 = v54;
    if ( v54 < v53 )
LABEL_74:
      core::panicking::panic_nounwind(anon_c096428d0f7299e4c005482d8517c114_15_llvm_7808781712374186999, 71LL);
    v11 = v55;
    v55 += v53 + v7 - (v54 + v6);
    if ( (unsigned int)(v8 - 48) <= 9 )
    {
      do
      {
        if ( v10 < v9 )
          goto LABEL_74;
        v12 = v11;
        v14 = 0;
        if ( !(unsigned int)core::str::validations::next_code_point(&v53) )
          goto LABEL_17;
        if ( (v13 ^ 0xD800u) - 2048 >= 0x10F800 )
          goto LABEL_76;
        if ( v54 < v53 )
          goto LABEL_74;
        v11 = v55;
        v55 += v53 + v10 - (v54 + v9);
        if ( v13 == 1114112 )
          goto LABEL_17;
        v9 = v53;
        v10 = v54;
      }
      while ( (unsigned int)(v13 - 48) < 0xA );
      v14 = v13;
LABEL_17:
      if ( v12 == -1LL )
        core::str::traits::str_index_overflow_fail(&off_117E98);
      v15 = v12 + 1;
      v4 = v57;
      if ( a3 <= 1 )
      {
        if ( a3 != 1 )
          goto LABEL_77;
      }
      else if ( *(char *)(a2 + 1) <= -65 )
      {
        goto LABEL_77;
      }
      if ( v15 >= a3 )
      {
        if ( v15 != a3 )
          goto LABEL_77;
      }
      else if ( *(char *)(a2 + v15) < -64 )
      {
        goto LABEL_77;
      }
      if ( v12 >= a3 )
        core::panicking::panic_nounwind(anon_5c14c8e0fe94f958943f16684aa0fba9_9_llvm_16152083550558900114, 102LL);
      if ( a2 )
      {
        core::num::<impl core::str::traits::FromStr for usize>::from_str(v78, a2 + 1, v12);
        if ( (v78[0] & 1) == 0 )
        {
          v67 = v79;
          v68 = v79;
          v56 = 0LL;
          v64 = 0LL;
          v51 = 0;
          v52 = 0;
          while ( 1 )
          {
            v16 = (unsigned int)(v14 - 98);
            switch ( v14 )
            {
              case 'b':
                v56 = 1LL;
                v12 = 512LL;
                goto LABEL_42;
              case 'c':
                v12 = 1LL;
                v56 = 1LL;
                goto LABEL_42;
              case 'd':
              case 'e':
              case 'f':
              case 'g':
              case 'h':
              case 'i':
              case 'j':
              case 'l':
              case 'n':
              case 'o':
              case 'p':
              case 'r':
              case 's':
              case 't':
              case 'u':
              case 'w':
              case 'x':
              case 'y':
                goto LABEL_72;
              case 'k':
                v56 = 1LL;
                v12 = 1024LL;
                goto LABEL_42;
              case 'm':
                v56 = 1LL;
                v12 = 0x100000LL;
                goto LABEL_42;
              case 'q':
                LOBYTE(v16) = 1;
                v52 = v16;
                v51 = 0;
                goto LABEL_42;
              case 'v':
                LOBYTE(v16) = 1;
                v51 = v16;
                v52 = 0;
                goto LABEL_42;
              case 'z':
                LOBYTE(v16) = 1;
                v64 = v16;
                goto LABEL_42;
              default:
                if ( v14 )
                {
LABEL_72:
                  v4 = v57;
                  v57[1] = 0LL;
                  *((_BYTE *)v4 + 16) = 0;
                  goto LABEL_70;
                }
LABEL_42:
                v17 = v53;
                v18 = v54;
                if ( v54 < v53 )
                  goto LABEL_73;
                if ( !(unsigned int)core::str::validations::next_code_point(&v53) )
                {
LABEL_47:
                  v48 = 0LL;
                  v49 = 8LL;
                  v50 = 0LL;
                  if ( (v52 & 1) != 0 )
                  {
                    std::sys::os_str::bytes::Slice::to_owned(&v58, aQ, 2LL);
                    v73 = v59;
                    v72 = v58;
                    v20 = v50;
                    alloc::raw_vec::RawVec<T,A>::grow_one(&v48);
                    v21 = v49;
                    v22 = 3 * v20;
                    v23 = v72;
                    *(_QWORD *)(v49 + 8 * v22 + 16) = v73;
                    *(_OWORD *)(v21 + 8 * v22) = v23;
                    v50 = v20 + 1;
                  }
                  if ( (v51 & 1) != 0 )
                  {
                    std::sys::os_str::bytes::Slice::to_owned(&v58, aV, 2LL);
                    v75 = v59;
                    v74 = v58;
                    v24 = v50;
                    if ( v50 == v48 )
                      alloc::raw_vec::RawVec<T,A>::grow_one(&v48);
                    v25 = v49;
                    v26 = 3 * v24;
                    v27 = v74;
                    *(_QWORD *)(v49 + 8 * v26 + 16) = v75;
                    *(_OWORD *)(v25 + 8 * v26) = v27;
                    v50 = v24 + 1;
                  }
                  if ( (v64 & 1) != 0 )
                  {
                    std::sys::os_str::bytes::Slice::to_owned(&v58, aZ, 2LL);
                    v77 = v59;
                    v76 = v58;
                    v28 = v50;
                    if ( v50 == v48 )
                      alloc::raw_vec::RawVec<T,A>::grow_one(&v48);
                    v29 = v49;
                    v30 = 3 * v28;
                    v31 = v76;
                    *(_QWORD *)(v49 + 8 * v30 + 16) = v77;
                    *(_OWORD *)(v29 + 8 * v30) = v31;
                    v50 = v28 + 1;
                  }
                  if ( v56 == 1 )
                  {
                    std::sys::os_str::bytes::Slice::to_owned(&v58, aC, 2LL);
                    v63 = v59;
                    v62 = v58;
                    v32 = v50;
                    if ( v50 == v48 )
                      alloc::raw_vec::RawVec<T,A>::grow_one(&v48);
                    v33 = v49;
                    v34 = 3 * v32;
                    v35 = v62;
                    *(_QWORD *)(v49 + 8 * v34 + 16) = v63;
                    *(_OWORD *)(v33 + 8 * v34) = v35;
                    v50 = v32 + 1;
                    if ( !is_mul_ok(v12, v67) )
                    {
                      v4 = v57;
                      v57[1] = 0LL;
                      *((_BYTE *)v4 + 16) = 1;
                      *v4 = 1LL;
                      core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v48);
                      return v4;
                    }
                    v69 = v12 * v67;
                    v65 = &v69;
                    v66 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
                    *(_QWORD *)&v58 = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
                    *((_QWORD *)&v58 + 1) = 1LL;
                    v59 = &v65;
                    v60 = 1LL;
                    v61 = 0LL;
                    alloc::fmt::format::format_inner(&v70, &v58);
                    v58 = v70;
                    v59 = v71;
                    v40 = v50;
                    if ( v50 == v48 )
LABEL_68:
                      alloc::raw_vec::RawVec<T,A>::grow_one(&v48);
                  }
                  else
                  {
                    std::sys::os_str::bytes::Slice::to_owned(&v58, aN, 2LL);
                    v63 = v59;
                    v62 = v58;
                    v36 = v50;
                    if ( v50 == v48 )
                      alloc::raw_vec::RawVec<T,A>::grow_one(&v48);
                    v37 = v49;
                    v38 = 3 * v36;
                    v39 = v62;
                    *(_QWORD *)(v49 + 8 * v38 + 16) = v63;
                    *(_OWORD *)(v37 + 8 * v38) = v39;
                    v50 = v36 + 1;
                    v65 = &v68;
                    v66 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
                    *(_QWORD *)&v58 = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
                    *((_QWORD *)&v58 + 1) = 1LL;
                    v59 = &v65;
                    v60 = 1LL;
                    v61 = 0LL;
                    alloc::fmt::format::format_inner(&v70, &v58);
                    v58 = v70;
                    v59 = v71;
                    v40 = v50;
                    if ( v50 == v48 )
                      goto LABEL_68;
                  }
                  v41 = v49;
                  v42 = 24 * v40;
                  v43 = v58;
                  *(_QWORD *)(v49 + v42 + 16) = v59;
                  *(_OWORD *)(v41 + v42) = v43;
                  v44 = v48;
                  v45 = v49;
                  v46 = v49 + 24 * v40 + 24;
                  v4 = v57;
                  v57[1] = v49;
                  v4[2] = v45;
                  v4[3] = v44;
                  v4[4] = v46;
LABEL_70:
                  *v4 = 1LL;
                  return v4;
                }
                v14 = v19;
                if ( (v19 ^ 0xD800u) - 2048 >= 0x10F800 )
                  goto LABEL_75;
                if ( v54 < v53 )
                  goto LABEL_73;
                v55 += v53 + v18 - (v54 + v17);
                if ( v19 == 1114112 )
                  goto LABEL_47;
                break;
            }
          }
        }
        v4[1] = 0LL;
        *((_BYTE *)v4 + 16) = 1;
        goto LABEL_70;
      }
LABEL_77:
      core::str::slice_error_fail(a2, a3, 1LL, v15, &off_117E98);
    }
  }
  v4 = v57;
  *v57 = 0LL;
  return v4;
}
