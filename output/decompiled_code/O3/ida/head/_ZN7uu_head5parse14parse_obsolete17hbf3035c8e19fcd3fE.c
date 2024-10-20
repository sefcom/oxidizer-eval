        signed __int64 a6)
{
  int v7; // ecx
  unsigned __int8 *v8; // r8
  int v9; // edi
  int v10; // r10d
  int v11; // r9d
  unsigned __int8 *v12; // r13
  unsigned int v13; // edi
  unsigned __int8 *v14; // rcx
  int v15; // r9d
  int v16; // r11d
  int v17; // r10d
  signed __int64 v18; // r8
  int v19; // r12d
  signed __int64 v20; // rdi
  unsigned __int8 *v21; // r15
  int v22; // r10d
  int v23; // ebp
  int v24; // r11d
  unsigned __int64 v26; // rcx
  __int64 v27; // rbp
  char v28; // r14
  char v29; // dl
  unsigned __int8 *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rsi
  int v34; // edi
  int v35; // esi
  int v36; // r9d
  int v37; // r8d
  char v38; // di
  int v39; // esi
  int v40; // r9d
  int v41; // r8d
  int v42; // esi
  int v43; // r9d
  int v44; // r8d
  __int64 v45; // r12
  unsigned __int64 **v46; // r15
  __int64 v47; // r13
  __int64 v48; // rax
  void *v49; // r15
  __int64 v50; // r12
  unsigned __int64 **v51; // r13
  __int64 v52; // r14
  __int64 v53; // rax
  void *v54; // r15
  __int64 v55; // r12
  unsigned __int64 **v56; // r13
  __int64 v57; // r14
  __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // r9
  void *v61; // r15
  __int64 v62; // r12
  unsigned __int64 **v63; // r13
  __int64 v64; // r14
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // r14
  _QWORD *v68; // r15
  __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  void *v73; // r14
  __int64 v74; // r15
  unsigned __int64 **v75; // r13
  __int64 v76; // r12
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // r14
  __int64 v80; // r15
  __int64 v81; // r13
  __int64 v82; // r12
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v89; // [rsp+10h] [rbp-D8h]
  __int64 v90; // [rsp+18h] [rbp-D0h]
  void *v91; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v92; // [rsp+28h] [rbp-C0h]
  unsigned __int64 **v93; // [rsp+30h] [rbp-B8h]
  __int64 v94; // [rsp+38h] [rbp-B0h]
  __int64 v95; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v96; // [rsp+50h] [rbp-98h]
  void *v97; // [rsp+58h] [rbp-90h]
  __int64 v98; // [rsp+60h] [rbp-88h]
  unsigned __int64 *v99; // [rsp+68h] [rbp-80h] BYREF
  __int64 (__fastcall *v100)(); // [rsp+70h] [rbp-78h]
  __int64 v101; // [rsp+78h] [rbp-70h] BYREF
  __int64 v102; // [rsp+80h] [rbp-68h]
  __int64 v103; // [rsp+88h] [rbp-60h]
  unsigned __int64 v104; // [rsp+90h] [rbp-58h]
  unsigned __int64 v105; // [rsp+98h] [rbp-50h] BYREF
  unsigned __int64 v106; // [rsp+A0h] [rbp-48h] BYREF
  char v107[8]; // [rsp+A8h] [rbp-40h] BYREF
  unsigned __int64 v108; // [rsp+B0h] [rbp-38h]

  if ( !a3 )
    goto LABEL_33;
  v7 = *a2;
  if ( (v7 & 0x80u) == 0 )
  {
    v8 = a2 + 1;
    if ( v7 != 45 )
      goto LABEL_33;
    goto LABEL_12;
  }
  v9 = v7 & 0x1F;
  v10 = a2[1] & 0x3F;
  if ( (unsigned __int8)v7 <= 0xDFu )
  {
    v8 = a2 + 2;
    if ( (v10 | (v9 << 6)) == 0x2D )
      goto LABEL_12;
LABEL_33:
    *(_QWORD *)a1 = 0LL;
    return a1;
  }
  v11 = (v10 << 6) | a2[2] & 0x3F;
  if ( (unsigned __int8)v7 >= 0xF0u )
  {
    v8 = a2 + 4;
    a6 = (unsigned int)(v11 << 6);
    if ( (((v7 & 7) << 18) | (unsigned int)a6 | a2[3] & 0x3F) != 0x2D )
      goto LABEL_33;
    goto LABEL_12;
  }
  v8 = a2 + 3;
  a6 = (v9 << 12) | (unsigned int)v11;
  if ( (_DWORD)a6 != 45 )
    goto LABEL_33;
LABEL_12:
  v12 = &a2[a3];
  if ( v8 == &a2[a3] )
    goto LABEL_33;
  v13 = *v8;
  if ( (v13 & 0x80u) != 0 )
  {
    v15 = v13 & 0x1F;
    v16 = v8[1] & 0x3F;
    if ( (unsigned __int8)v13 < 0xE0u )
    {
      v14 = v8 + 2;
      a6 = v16 | (unsigned int)(v15 << 6);
      v13 = a6;
    }
    else
    {
      v17 = (v16 << 6) | v8[2] & 0x3F;
      if ( (unsigned __int8)v13 < 0xF0u )
      {
        v14 = v8 + 3;
        a6 = (unsigned int)(v15 << 12);
        v13 = a6 | v17;
      }
      else
      {
        v14 = v8 + 4;
        a6 = (unsigned __int8)(v13 & 7) << 18;
        v13 = a6 | (v17 << 6) | v8[3] & 0x3F;
      }
    }
  }
  else
  {
    v14 = v8 + 1;
  }
  if ( v13 - 48 > 9 )
    goto LABEL_33;
  v18 = v8 - a2;
  v19 = 0;
  if ( v14 == v12 )
  {
    v21 = &a2[a3];
  }
  else
  {
    a6 = v14 - a2;
    while ( 1 )
    {
      v20 = a6;
      a6 = *v14;
      if ( (a6 & 0x80u) != 0LL )
      {
        v22 = a6 & 0x1F;
        v23 = v14[1] & 0x3F;
        if ( (unsigned __int8)a6 <= 0xDFu )
        {
          v21 = v14 + 2;
          a6 = v23 | (unsigned int)(v22 << 6);
        }
        else
        {
          v24 = (v23 << 6) | v14[2] & 0x3F;
          if ( (unsigned __int8)a6 < 0xF0u )
          {
            v21 = v14 + 3;
            a6 = (v22 << 12) | (unsigned int)v24;
          }
          else
          {
            v21 = v14 + 4;
            a6 = ((a6 & 7) << 18) | (v24 << 6) | v14[3] & 0x3Fu;
          }
        }
      }
      else
      {
        v21 = v14 + 1;
      }
      if ( (unsigned int)(a6 - 48) >= 0xA )
        break;
      a6 = (signed __int64)&v21[v20 - (_QWORD)v14];
      v18 = v20;
      v14 = v21;
      if ( v21 == v12 )
      {
        v21 = &a2[a3];
        v18 = v20;
        goto LABEL_37;
      }
    }
    v19 = a6;
  }
LABEL_37:
  if ( v18 == -1 )
    core::str::traits::str_index_overflow_fail(&off_EFF18, a2, a3, v14, -1LL, a6);
  v26 = v18 + 1;
  if ( a3 != 1 && (char)a2[1] < -64 )
    goto LABEL_42;
  if ( v26 < a3 )
  {
    if ( (char)a2[v26] <= -65 )
      goto LABEL_42;
    goto LABEL_44;
  }
  if ( v26 != a3 )
LABEL_42:
    core::str::slice_error_fail(a2, a3, 1LL, v26, &off_EFF18, a6);
LABEL_44:
  core::num::<impl core::str::traits::FromStr for usize>::from_str(v107, a2 + 1, v18);
  if ( v107[0] )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_BYTE *)(a1 + 16) = 1;
LABEL_107:
    *(_QWORD *)a1 = 1LL;
    return a1;
  }
  v104 = v108;
  v105 = v108;
  v27 = 0LL;
  v98 = 0LL;
  v28 = 0;
  v29 = 0;
  while ( 2 )
  {
    v31 = (__int64)v21;
    v32 = (unsigned int)(v19 - 98);
    switch ( v19 )
    {
      case 'b':
        v27 = 1LL;
        v33 = 512LL;
        goto LABEL_62;
      case 'c':
        v96 = 1LL;
        v27 = 1LL;
        if ( v21 == v12 )
          goto LABEL_76;
        goto LABEL_64;
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
        goto LABEL_78;
      case 'k':
        v27 = 1LL;
        v33 = 1024LL;
        goto LABEL_62;
      case 'm':
        v27 = 1LL;
        v33 = 0x100000LL;
LABEL_62:
        v96 = v33;
        goto LABEL_63;
      case 'q':
        if ( v21 != v12 )
        {
          v34 = *v21;
          if ( (v34 & 0x80u) != 0 )
          {
            v42 = v34 & 0x1F;
            v21 += 2;
            v43 = *(_BYTE *)(v31 + 1) & 0x3F;
            v19 = v43 | (v42 << 6);
            v29 = 1;
            v28 = 0;
            if ( (unsigned __int8)v34 > 0xDFu )
            {
              v21 = (unsigned __int8 *)(v31 + 3);
              v44 = (v43 << 6) | *(_BYTE *)(v31 + 2) & 0x3F;
              v19 = v44 | (v42 << 12);
              v28 = 0;
              if ( (unsigned __int8)v34 >= 0xF0u )
              {
                v19 = ((v42 & 7) << 18) | (v44 << 6) | *(_BYTE *)(v31 + 3) & 0x3F;
                v28 = 0;
                v21 = (unsigned __int8 *)(v31 + 4);
              }
            }
          }
          else
          {
            v30 = v21 + 1;
            v29 = 1;
            v28 = 0;
LABEL_48:
            v21 = v30;
            v19 = v34;
          }
          continue;
        }
        v88 = 0LL;
        v89 = 8LL;
        v90 = 0LL;
        v28 = 0;
LABEL_80:
        std::sys::os_str::bytes::Slice::to_owned(&v91, aQ, 2LL, v21);
        v97 = v91;
        v45 = v92;
        v46 = v93;
        v47 = v90;
        alloc::raw_vec::RawVec<T,A>::grow_one(&v88);
        v48 = v89;
        v31 = 3 * v47;
        *(_QWORD *)(v89 + 8 * v31) = v97;
        *(_QWORD *)(v48 + 8 * v31 + 8) = v45;
        *(_QWORD *)(v48 + 8 * v31 + 16) = v46;
        v90 = v47 + 1;
LABEL_81:
        if ( (v28 & 1) != 0 )
          goto LABEL_84;
LABEL_87:
        if ( (v98 & 1) != 0 )
        {
          std::sys::os_str::bytes::Slice::to_owned(&v91, aZ, 2LL, v31);
          v54 = v91;
          v55 = v92;
          v56 = v93;
          v57 = v90;
          if ( v90 == v88 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v88);
          v58 = v89;
          v31 = 3 * v57;
          *(_QWORD *)(v89 + 8 * v31) = v54;
          *(_QWORD *)(v58 + 8 * v31 + 8) = v55;
          *(_QWORD *)(v58 + 8 * v31 + 16) = v56;
          v90 = v57 + 1;
        }
        if ( v27 != 1 )
        {
          std::sys::os_str::bytes::Slice::to_owned(&v91, aN, 2LL, v31);
          v73 = v91;
          v74 = v92;
          v75 = v93;
          v76 = v90;
          if ( v90 == v88 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v88);
          v77 = v89;
          v78 = 3 * v76;
          *(_QWORD *)(v89 + 8 * v78) = v73;
          *(_QWORD *)(v77 + 8 * v78 + 8) = v74;
          *(_QWORD *)(v77 + 8 * v78 + 16) = v75;
          v90 = v76 + 1;
          v99 = &v105;
          v100 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v91 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
          v92 = 1LL;
          v95 = 0LL;
          v93 = &v99;
          v94 = 1LL;
          alloc::fmt::format::format_inner(&v101, &v91, v70, 3 * v76, v71, v72);
          v79 = v101;
          v80 = v102;
          v81 = v103;
          v82 = v90;
          if ( v90 != v88 )
            goto LABEL_106;
          goto LABEL_105;
        }
        std::sys::os_str::bytes::Slice::to_owned(&v91, aC, 2LL, v31);
        v61 = v91;
        v62 = v92;
        v63 = v93;
        v64 = v90;
        if ( v90 == v88 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v88);
        v65 = v89;
        v66 = 3 * v64;
        *(_QWORD *)(v89 + 8 * v66) = v61;
        *(_QWORD *)(v65 + 8 * v66 + 8) = v62;
        *(_QWORD *)(v65 + 8 * v66 + 16) = v63;
        v67 = v64 + 1;
        v90 = v67;
        if ( is_mul_ok(v96, v104) )
        {
          v106 = v96 * v104;
          v99 = &v106;
          v100 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v91 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
          v92 = 1LL;
          v95 = 0LL;
          v93 = &v99;
          v94 = 1LL;
          alloc::fmt::format::format_inner(&v101, &v91, (v96 * (unsigned __int128)v104) >> 64, v66, v59, v60);
          v79 = v101;
          v80 = v102;
          v81 = v103;
          v82 = v90;
          if ( v90 != v88 )
          {
LABEL_106:
            v83 = v89;
            v84 = 3 * v82;
            *(_QWORD *)(v89 + 8 * v84) = v79;
            *(_QWORD *)(v83 + 8 * v84 + 8) = v80;
            *(_QWORD *)(v83 + 8 * v84 + 16) = v81;
            v85 = v88;
            v86 = v89;
            v87 = v89 + 24 * v82 + 24;
            *(_QWORD *)(a1 + 8) = v89;
            *(_QWORD *)(a1 + 16) = v86;
            *(_QWORD *)(a1 + 24) = v85;
            *(_QWORD *)(a1 + 32) = v87;
            goto LABEL_107;
          }
LABEL_105:
          alloc::raw_vec::RawVec<T,A>::grow_one(&v88);
          goto LABEL_106;
        }
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_BYTE *)(a1 + 16) = 1;
        *(_QWORD *)a1 = 1LL;
        if ( v67 )
        {
          v68 = (_QWORD *)(v89 + 8);
          do
          {
            v69 = *(v68 - 1);
            if ( v69 )
              _rust_dealloc(*v68, v69, 1LL);
            v68 += 3;
            --v67;
          }
          while ( v67 );
        }
        if ( v88 )
          _rust_dealloc(v89, 24 * v88, 8LL);
        return a1;
      case 'v':
        if ( v21 == v12 )
        {
          v88 = 0LL;
          v89 = 8LL;
          v90 = 0LL;
LABEL_84:
          std::sys::os_str::bytes::Slice::to_owned(&v91, aV, 2LL, v31);
          v49 = v91;
          v50 = v92;
          v51 = v93;
          v52 = v90;
          if ( v90 == v88 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v88);
          v53 = v89;
          v31 = 3 * v52;
          *(_QWORD *)(v89 + 8 * v31) = v49;
          *(_QWORD *)(v53 + 8 * v31 + 8) = v50;
          *(_QWORD *)(v53 + 8 * v31 + 16) = v51;
          v90 = v52 + 1;
          goto LABEL_87;
        }
        v34 = *v21;
        if ( (v34 & 0x80u) == 0 )
        {
          v30 = v21 + 1;
          v28 = 1;
          v29 = 0;
          goto LABEL_48;
        }
        v35 = v34 & 0x1F;
        v21 += 2;
        v36 = *(_BYTE *)(v31 + 1) & 0x3F;
        v19 = v36 | (v35 << 6);
        v28 = 1;
        v29 = 0;
        if ( (unsigned __int8)v34 > 0xDFu )
        {
          v21 = (unsigned __int8 *)(v31 + 3);
          v37 = (v36 << 6) | *(_BYTE *)(v31 + 2) & 0x3F;
          v19 = v37 | (v35 << 12);
          v29 = 0;
          if ( (unsigned __int8)v34 >= 0xF0u )
          {
            v19 = ((v35 & 7) << 18) | (v37 << 6) | *(_BYTE *)(v31 + 3) & 0x3F;
            v29 = 0;
            v21 = (unsigned __int8 *)(v31 + 4);
          }
        }
        continue;
      case 'z':
        LOBYTE(v32) = 1;
        v98 = v32;
        if ( v21 == v12 )
          goto LABEL_76;
        goto LABEL_64;
      default:
        if ( v19 )
        {
LABEL_78:
          *(_QWORD *)(a1 + 8) = 0LL;
          *(_BYTE *)(a1 + 16) = 0;
          goto LABEL_107;
        }
LABEL_63:
        if ( v21 == v12 )
        {
LABEL_76:
          v88 = 0LL;
          v89 = 8LL;
          v90 = 0LL;
          if ( (v29 & 1) != 0 )
            goto LABEL_80;
          goto LABEL_81;
        }
LABEL_64:
        ++v21;
        v38 = *(_BYTE *)v31;
        v19 = *(unsigned __int8 *)v31;
        if ( *(char *)v31 < 0 )
        {
          v39 = v38 & 0x1F;
          v21 = (unsigned __int8 *)(v31 + 2);
          v40 = *(_BYTE *)(v31 + 1) & 0x3F;
          v19 = v40 | (v39 << 6);
          if ( (unsigned __int8)v38 > 0xDFu )
          {
            v21 = (unsigned __int8 *)(v31 + 3);
            v41 = (v40 << 6) | *(_BYTE *)(v31 + 2) & 0x3F;
            v19 = v41 | (v39 << 12);
            if ( (unsigned __int8)v38 >= 0xF0u )
            {
              v19 = ((v39 & 7) << 18) | (v41 << 6) | *(_BYTE *)(v31 + 3) & 0x3F;
              v21 = (unsigned __int8 *)(v31 + 4);
            }
          }
        }
        continue;
    }
  }
}
