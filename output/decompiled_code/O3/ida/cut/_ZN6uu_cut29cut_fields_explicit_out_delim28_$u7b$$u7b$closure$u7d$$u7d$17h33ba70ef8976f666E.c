        unsigned __int64 a4)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r13
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  int v10; // eax
  _BYTE *v11; // rax
  _QWORD *v12; // r14
  bool v13; // cf
  unsigned __int64 v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rax
  char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 *v20; // r15
  char v21; // al
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rdi
  bool v28; // zf
  unsigned __int64 v29; // r15
  __int64 i; // r14
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r12
  __int64 v33; // rdx
  unsigned __int8 *v34; // rdx
  unsigned __int64 v35; // r15
  __int64 v36; // r14
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r12
  __int64 v39; // rdx
  unsigned __int8 *v40; // rdx
  unsigned __int64 v41; // r14
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  unsigned __int8 *v44; // rdx
  int v45; // ecx
  unsigned __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rsi
  unsigned __int64 v50; // rax
  unsigned __int8 *v51; // rdx
  int v52; // ecx
  unsigned __int64 v53; // rsi
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // r15
  unsigned __int64 v56; // r12
  unsigned __int64 v57; // r13
  __int64 v58; // rdx
  __int64 v59; // rsi
  unsigned __int64 v60; // r13
  unsigned __int8 *v61; // rdx
  int v62; // eax
  char *v63; // rax
  _BYTE *v64; // rcx
  _BYTE *v65; // rcx
  _BYTE *v66; // rcx
  bool v68; // [rsp+5h] [rbp-C3h]
  char v69; // [rsp+6h] [rbp-C2h] BYREF
  char v70; // [rsp+7h] [rbp-C1h] BYREF
  __int64 v71; // [rsp+8h] [rbp-C0h]
  unsigned __int64 *v72; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v73; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v74; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v75; // [rsp+28h] [rbp-A0h]
  _QWORD *v76; // [rsp+30h] [rbp-98h]
  char *v77; // [rsp+38h] [rbp-90h]
  unsigned __int64 v78; // [rsp+40h] [rbp-88h]
  unsigned __int64 v79; // [rsp+48h] [rbp-80h]
  unsigned __int64 v80; // [rsp+50h] [rbp-78h]
  unsigned __int64 v81; // [rsp+58h] [rbp-70h]
  unsigned __int64 v82; // [rsp+60h] [rbp-68h]
  __int64 v83; // [rsp+68h] [rbp-60h]
  __int64 v84; // [rsp+70h] [rbp-58h]
  unsigned __int64 v85; // [rsp+78h] [rbp-50h]
  unsigned __int64 v86; // [rsp+80h] [rbp-48h]
  unsigned __int64 v87; // [rsp+88h] [rbp-40h]
  __int64 v88; // [rsp+90h] [rbp-38h]

  v4 = a4;
  v5 = a3;
  v6 = a1;
  v78 = a3 + a4;
  if ( memchr::arch::x86_64::memchr::memchr2_raw::FN() )
  {
    v8 = v7 - v5;
    v9 = v8 + 1;
    if ( v8 + 1 < v4 )
    {
      while ( 1 )
      {
        v10 = *(unsigned __int8 *)(v5 + v9);
        if ( v10 != 32 && v10 != 9 )
          break;
        if ( ++v9 >= v4 )
        {
          v9 = v4;
          break;
        }
      }
    }
    v76 = (_QWORD *)a2[2];
    v18 = a2[4];
    v19 = *(_QWORD *)(v18 + 8);
    if ( v19 )
    {
      v87 = v8;
      v74 = v5;
      v71 = a1;
      v20 = *(unsigned __int64 **)v18;
      v88 = *(_QWORD *)v18 + 16 * v19;
      v77 = (char *)a2[3];
      v84 = a2[5];
      v83 = a2[6];
      v86 = v4 - 1;
      v21 = 0;
      v81 = v9;
      v22 = 1LL;
      v23 = 1LL;
      v24 = 0LL;
      v25 = 0LL;
      v73 = v4;
      while ( 1 )
      {
        v80 = v25;
        v26 = *v20;
        v27 = v20[1];
        v28 = *v20 == v23;
        v72 = v20;
        v82 = v23;
        v75 = v26;
        v79 = v27;
        if ( !v28 )
        {
          v29 = v26 + ~v23;
          LODWORD(v5) = v74;
          if ( (v21 & 1) != 0 )
          {
            if ( v29 )
            {
              for ( i = 0LL; i != v29; ++i )
              {
                v13 = v4 < v9;
                v32 = v4 - v9;
                if ( v13 )
                  goto LABEL_107;
                if ( !memchr::arch::x86_64::memchr::memchr2_raw::FN() )
                  goto LABEL_98;
                v31 = v33 - (v9 + v74) + 1;
                if ( v31 < v32 )
                {
                  v34 = (unsigned __int8 *)(v33 + 1);
                  while ( 1 )
                  {
                    v23 = *v34;
                    if ( (_DWORD)v23 != 32 && (_DWORD)v23 != 9 )
                      break;
                    ++v31;
                    ++v34;
                    if ( v31 >= v32 )
                    {
                      v31 = v32;
                      break;
                    }
                  }
                }
                v9 += v31;
                v4 = v73;
              }
            }
          }
          else
          {
            if ( !v29 )
            {
              v22 = 2LL;
              v24 = v81;
              v20 = v72;
              v26 = v75;
              v27 = v79;
              goto LABEL_55;
            }
            v35 = v29 - 1;
            if ( v35 )
            {
              v36 = 0LL;
              while ( 1 )
              {
                v13 = v4 < v9;
                v38 = v4 - v9;
                if ( v13 )
                  break;
                if ( !memchr::arch::x86_64::memchr::memchr2_raw::FN() )
                  goto LABEL_98;
                v37 = v39 - (v9 + v74) + 1;
                if ( v37 < v38 )
                {
                  v40 = (unsigned __int8 *)(v39 + 1);
                  while ( 1 )
                  {
                    v23 = *v40;
                    if ( (_DWORD)v23 != 32 && (_DWORD)v23 != 9 )
                      break;
                    ++v37;
                    ++v40;
                    if ( v37 >= v38 )
                    {
                      v37 = v38;
                      break;
                    }
                  }
                }
                v9 += v37;
                ++v36;
                v4 = v73;
                if ( v36 == v35 )
                  goto LABEL_43;
              }
LABEL_107:
              core::slice::index::slice_start_index_len_fail(
                v9,
                v73,
                &anon_df4789226972a4341794054d7353bee8_17_llvm_10989571036595044754,
                v23);
            }
          }
LABEL_43:
          v41 = v4 - v9;
          if ( v4 < v9 )
            goto LABEL_110;
          v20 = v72;
          if ( !memchr::arch::x86_64::memchr::memchr2_raw::FN() )
          {
LABEL_98:
            v6 = v71;
            v63 = v77;
            goto LABEL_100;
          }
          v43 = v42 - (v9 + v74) + 1;
          if ( v43 >= v41 )
          {
            v26 = v75;
            v27 = v79;
          }
          else
          {
            v44 = (unsigned __int8 *)(v42 + 1);
            v26 = v75;
            v27 = v79;
            while ( 1 )
            {
              v45 = *v44;
              if ( v45 != 32 && v45 != 9 )
                break;
              ++v43;
              ++v44;
              if ( v43 >= v41 )
              {
                v43 = v4 - v9;
                break;
              }
            }
          }
          v9 += v43;
          v22 = 2LL;
          v24 = v9;
        }
LABEL_55:
        v85 = v27 - v26;
        v68 = v27 != v26;
        LOBYTE(v5) = 1;
        v23 = v80;
        if ( (v80 & 1) != 0 )
        {
          v5 = v24;
          v11 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v76[1] + 56LL))(*v76, v84, v83);
          v24 = v5;
          LODWORD(v5) = v80;
          if ( v11 )
          {
LABEL_105:
            v65 = (_BYTE *)v71;
            *(_QWORD *)(v71 + 8) = v11;
            *v65 = 1;
            return (char)v11;
          }
        }
        if ( v22 == 2 )
        {
          v22 = v4 - v9;
          if ( v4 < v9 )
LABEL_110:
            core::slice::index::slice_start_index_len_fail(
              v9,
              v4,
              &anon_df4789226972a4341794054d7353bee8_17_llvm_10989571036595044754,
              v23);
          v46 = v24;
          v80 = v74 + v9;
          if ( !memchr::arch::x86_64::memchr::memchr2_raw::FN() )
            goto LABEL_93;
          v49 = v47 - v80;
          v50 = v47 - v80 + 1;
          v24 = v46;
          if ( v50 < v22 )
          {
            v51 = (unsigned __int8 *)(v47 + 1);
            while ( 1 )
            {
              v52 = *v51;
              if ( v52 != 32 && v52 != 9 )
                break;
              ++v50;
              ++v51;
              if ( v50 >= v22 )
              {
                v50 = v4 - v9;
                break;
              }
            }
          }
          v53 = v9 + v49;
          v9 += v50;
          v46 = v9;
        }
        else
        {
          v53 = v87;
          v46 = v81;
        }
        if ( v53 < v24 )
          core::slice::index::slice_index_order_fail(v24, v53, &off_F10F0);
        if ( v53 > v4 )
LABEL_108:
          core::slice::index::slice_end_index_len_fail(v53, v4, &off_F10F0);
        v11 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(v76[1] + 56LL))(
                         *v76,
                         v74 + v24,
                         v53 - v24);
        if ( v11 )
        {
LABEL_104:
          v64 = (_BYTE *)v71;
          *(_QWORD *)(v71 + 8) = v11;
          LOBYTE(v11) = 1;
          *v64 = 1;
          return (char)v11;
        }
        v82 = v79 + 1;
        if ( v79 == v75 || (v23 = v68, v54 = v85, v85 < v68) )
        {
LABEL_91:
          v20 = v72;
          goto LABEL_97;
        }
        while ( 1 )
        {
          v75 = v23;
          v55 = (v23 < v54) + v23;
          LOBYTE(v22) = 1;
          if ( (v5 & 1) != 0 )
          {
            v11 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v76[1] + 56LL))(*v76, v84, v83);
            LODWORD(v22) = v5;
            if ( v11 )
              goto LABEL_105;
          }
          v13 = v4 < v9;
          v56 = v4 - v9;
          if ( v13 )
            goto LABEL_107;
          v57 = v74 + v9;
          if ( !memchr::arch::x86_64::memchr::memchr2_raw::FN() )
            break;
          v59 = v58 - v57;
          v60 = v58 - v57 + 1;
          if ( v60 < v56 )
          {
            v61 = (unsigned __int8 *)(v58 + 1);
            while ( 1 )
            {
              v62 = *v61;
              if ( v62 != 32 && v62 != 9 )
                break;
              ++v60;
              ++v61;
              if ( v60 >= v56 )
              {
                v60 = v56;
                break;
              }
            }
          }
          v53 = v9 + v59;
          v4 = v73;
          if ( v53 < v46 )
            core::slice::index::slice_index_order_fail(v46, v53, &off_F10F0);
          if ( v53 > v73 )
            goto LABEL_108;
          v11 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(v76[1] + 56LL))(
                           *v76,
                           v74 + v46,
                           v53 - v46);
          if ( v11 )
            goto LABEL_104;
          v9 += v60;
          v54 = v85;
          if ( v75 < v85 )
          {
            v46 = v9;
            LODWORD(v5) = v22;
            v23 = v55;
            if ( v55 <= v85 )
              continue;
          }
          LODWORD(v5) = v22;
          v46 = v9;
          goto LABEL_91;
        }
        LODWORD(v5) = v22;
        v4 = v73;
        v20 = v72;
LABEL_93:
        if ( v4 < v46 )
          core::slice::index::slice_start_index_len_fail(v46, v4, &off_F10D8, v48);
        v11 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(v76[1] + 56LL))(
                         *v76,
                         v74 + v46,
                         v4 - v46);
        if ( v11 )
          goto LABEL_104;
        if ( !v4 )
          core::panicking::panic_bounds_check(v86, 0LL, &off_F10C0);
        if ( *(_BYTE *)(v74 + v4 - 1) == *v77 )
        {
          v66 = (_BYTE *)v71;
          *(_BYTE *)(v71 + 1) = 1;
          LOBYTE(v11) = 0;
          *v66 = 0;
          return (char)v11;
        }
LABEL_97:
        v20 += 2;
        v22 = 2LL;
        v21 = 1;
        v24 = v46;
        v25 = (unsigned int)v5;
        v23 = v82;
        if ( v20 == (unsigned __int64 *)v88 )
          goto LABEL_98;
      }
    }
    v63 = (char *)a2[3];
LABEL_100:
    v70 = *v63;
    v15 = *v76;
    v16 = v76[1];
    v17 = &v70;
LABEL_101:
    v11 = (_BYTE *)(*(__int64 (__fastcall **)(__int64, char *, __int64))(v16 + 56))(v15, v17, 1LL);
    if ( v11 )
      goto LABEL_102;
LABEL_103:
    *(_WORD *)v6 = 256;
    return (char)v11;
  }
  v11 = (_BYTE *)a2[1];
  if ( *v11 )
    goto LABEL_103;
  v12 = (_QWORD *)a2[2];
  v11 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(v12[1] + 56LL))(*v12, v5, v4);
  if ( !v11 )
  {
    v13 = v4 == 0;
    v14 = v4 - 1;
    if ( v13 )
      core::panicking::panic_bounds_check(v14, 0LL, &off_F1108);
    LOBYTE(v11) = *(_BYTE *)a2[3];
    if ( *(_BYTE *)(v5 + v14) == (_BYTE)v11 )
      goto LABEL_103;
    v69 = *(_BYTE *)a2[3];
    v15 = *v12;
    v16 = v12[1];
    v17 = &v69;
    goto LABEL_101;
  }
LABEL_102:
  *(_QWORD *)(v6 + 8) = v11;
  *(_BYTE *)v6 = 1;
  return (char)v11;
}
