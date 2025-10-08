__int64 __fastcall just::evaluator::Evaluator::evaluate_expression(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 *v3; // r14
  __int64 v5; // r13
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  void (__fastcall *v8)(__m256i *, _BYTE *); // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 result; // rax
  char v13; // al
  void (__fastcall *v14)(__m256i *, _BYTE *, _QWORD, __int64, _QWORD, __int64); // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  _DWORD *v18; // rdx
  __int64 v19; // r8
  void (__fastcall *v20)(__m256i *, _BYTE *, _QWORD, __int64, __int64); // rax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int64 v24; // rbp
  __int64 v25; // r12
  __int64 v26; // rbp
  char v27; // al
  void (__fastcall *v28)(__m256i *, _BYTE *, _QWORD, __int64, _QWORD, __int64); // rax
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int128 *v32; // rdi
  void (__fastcall *v33)(__m256i *, _BYTE *, _QWORD, __int64); // rax
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  char v37; // al
  __int64 v38; // rbp
  __int64 v39; // r12
  __int64 v40; // rbp
  char v41; // al
  void (__fastcall *v42)(__m256i *, _BYTE *, _QWORD, __int64, _QWORD, __int64, _QWORD, __int64); // rax
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm2
  char v46; // al
  void (__fastcall *v47)(__m256i *, _BYTE *, _QWORD, __int64, _QWORD, __int64, _QWORD, __int64); // rax
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm2
  __int64 v51; // rcx
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  __int128 v55; // xmm1
  __int128 v56; // xmm2
  __int128 v57; // xmm3
  __int128 v58; // xmm2
  __int128 v59; // xmm3
  __int128 v60; // xmm0
  __int128 v61; // xmm0
  __int128 v62; // xmm2
  __int128 v63; // xmm3
  __int128 *v64; // rdi
  __int128 v65; // xmm2
  __int128 v66; // xmm3
  __int128 v67; // xmm2
  __int128 v68; // xmm3
  __int128 v69; // xmm2
  __int128 v70; // xmm3
  __int128 v71; // xmm2
  __int128 v72; // xmm3
  __int128 v73; // xmm2
  __int128 v74; // xmm3
  char v75; // cl
  __int128 v76; // xmm0
  __int64 v77; // rcx
  char v78; // al
  __int128 v79; // xmm0
  __int128 v80; // xmm2
  __int128 v81; // xmm3
  __int64 v82; // rdx
  __int128 v83; // xmm0
  __int128 v84; // xmm1
  __int128 v85; // xmm2
  __int128 v86; // rax
  __int128 v87; // kr10_16
  __int64 v88; // rax
  __int64 v89; // rdx
  _QWORD *v90; // rax
  __int64 v91; // rax
  int v92; // ecx
  __int128 v93; // xmm0
  __int128 v94; // xmm2
  __int128 v95; // xmm3
  _BYTE v96[104]; // [rsp+10h] [rbp-1C8h] BYREF
  _BYTE v97[31]; // [rsp+80h] [rbp-158h] BYREF
  __int128 v98; // [rsp+A0h] [rbp-138h] BYREF
  __int64 v99; // [rsp+B0h] [rbp-128h]
  __m256i v100; // [rsp+C0h] [rbp-118h] BYREF
  __int128 v101; // [rsp+E0h] [rbp-F8h] BYREF
  __int64 v102; // [rsp+F0h] [rbp-E8h]
  __int128 v103; // [rsp+100h] [rbp-D8h] BYREF
  __int64 v104; // [rsp+110h] [rbp-C8h]
  __int128 v105; // [rsp+120h] [rbp-B8h] BYREF
  __int64 v106; // [rsp+130h] [rbp-A8h]
  __int128 v107; // [rsp+140h] [rbp-98h] BYREF
  __int64 v108; // [rsp+150h] [rbp-88h]
  __int128 v109; // [rsp+160h] [rbp-78h] BYREF
  __int64 v110; // [rsp+170h] [rbp-68h]
  __int128 v111; // [rsp+178h] [rbp-60h] BYREF
  __int64 v112; // [rsp+188h] [rbp-50h]
  __int128 v113; // [rsp+190h] [rbp-48h] BYREF
  __int64 v114; // [rsp+1A0h] [rbp-38h]

  v3 = a3;
  v5 = *a3;
  v6 = *a3 - 7;
  if ( v6 >= 0xB )
    v6 = 3LL;
  v7 = 8LL;
  switch ( v6 )
  {
    case 0uLL:
      just::evaluator::Evaluator::evaluate_expression(v96, a2, a3[1]);
      result = v96[0];
      if ( v96[0] != 56 )
        goto LABEL_53;
      *(_OWORD *)v97 = *(_OWORD *)&v96[8];
      *(_QWORD *)&v97[16] = *(_QWORD *)&v96[24];
      if ( *(_QWORD *)&v96[24] )
        goto LABEL_51;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 1LL;
      *(_QWORD *)(a1 + 24) = 0LL;
      goto LABEL_55;
    case 1uLL:
      just::evaluator::Evaluator::evaluate_condition(v96, a2, a3 + 2);
      v75 = v96[0];
      result = v96[1];
      if ( v96[0] != 56 )
        goto LABEL_81;
      if ( (v96[1] & 1) != 0 )
      {
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 1LL;
        *(_QWORD *)(a1 + 24) = 0LL;
        *(_BYTE *)a1 = 56;
        return result;
      }
      just::evaluator::Evaluator::evaluate_expression(v96, a2, v3[1]);
      result = v96[0];
      if ( v96[0] != 56 )
        goto LABEL_53;
      *(__int64 *)((char *)&v100.m256i_i64[2] + 7) = *(_QWORD *)&v96[24];
      *(_OWORD *)((char *)&v100.m256i_u32[1] + 3) = *(_OWORD *)&v96[8];
      *(_OWORD *)&v97[7] = *(_OWORD *)&v96[8];
      *(_QWORD *)&v97[23] = *(_QWORD *)&v96[24];
      *(_BYTE *)a1 = 2;
      v76 = *(_OWORD *)v97;
      result = *(_QWORD *)&v97[15];
      v77 = *(_QWORD *)&v97[23];
      goto LABEL_63;
    case 2uLL:
      *(_QWORD *)v97 = a3 + 1;
      if ( *(_BYTE *)(*a2 + 408LL) )
      {
        v100.m256i_i64[0] = (__int64)v97;
        v100.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        *(_QWORD *)v96 = &off_42FB20;
        *(_QWORD *)&v96[8] = 2LL;
        *(_QWORD *)&v96[32] = 0LL;
        *(_QWORD *)&v96[16] = &v100;
        *(_QWORD *)&v96[24] = 1LL;
        core::option::Option<T>::map_or_else(&v109, 0LL, a3, v96);
        result = v110;
        *(_QWORD *)(a1 + 24) = v110;
        v61 = v109;
        goto LABEL_68;
      }
      just::evaluator::Evaluator::run_backtick(v96, a2, a3[2], a3[3], a3 + 4);
      result = v96[0];
      if ( v96[0] != 56 )
        goto LABEL_53;
      result = *(_QWORD *)&v96[24];
      *(__int64 *)((char *)&v100.m256i_i64[2] + 7) = *(_QWORD *)&v96[24];
      v61 = *(_OWORD *)&v96[8];
      *(_OWORD *)((char *)&v100.m256i_u32[1] + 3) = *(_OWORD *)&v96[8];
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v96[24];
      goto LABEL_68;
    case 3uLL:
      switch ( v5 )
      {
        case 0LL:
          v8 = (void (__fastcall *)(__m256i *, _BYTE *))a3[1];
          *(_QWORD *)&v96[72] = a3[10];
          v9 = *((_OWORD *)a3 + 1);
          v10 = *((_OWORD *)a3 + 2);
          v11 = *((_OWORD *)a3 + 3);
          *(_OWORD *)&v96[56] = *((_OWORD *)a3 + 4);
          *(_OWORD *)&v96[40] = v11;
          *(_OWORD *)&v96[24] = v10;
          *(_OWORD *)&v96[8] = v9;
          *(_QWORD *)v96 = a2;
          v8(&v100, v96);
          goto LABEL_35;
        case 1LL:
          just::evaluator::Evaluator::evaluate_expression(v96, a2, a3[2]);
          result = v96[0];
          if ( v96[0] != 56 )
            goto LABEL_37;
          v98 = *(_OWORD *)&v96[8];
          v99 = *(_QWORD *)&v96[24];
          v33 = (void (__fastcall *)(__m256i *, _BYTE *, _QWORD, __int64))v3[1];
          *(_QWORD *)&v96[72] = v3[11];
          v34 = *(_OWORD *)(v3 + 3);
          v35 = *(_OWORD *)(v3 + 5);
          v36 = *(_OWORD *)(v3 + 7);
          *(_OWORD *)&v96[56] = *(_OWORD *)(v3 + 9);
          *(_OWORD *)&v96[40] = v36;
          *(_OWORD *)&v96[24] = v35;
          *(_OWORD *)&v96[8] = v34;
          *(_QWORD *)v96 = a2;
          v33(&v100, v96, *((_QWORD *)&v98 + 1), v99);
          v32 = &v98;
          goto LABEL_34;
        case 2LL:
          just::evaluator::Evaluator::evaluate_expression(v96, a2, a3[2]);
          result = v96[0];
          if ( v96[0] != 56 )
            goto LABEL_37;
          v101 = *(_OWORD *)&v96[8];
          v102 = *(_QWORD *)&v96[24];
          v18 = (_DWORD *)v3[3];
          if ( *v18 == 18 )
          {
            *(_QWORD *)&v98 = 0x8000000000000000LL;
            v19 = 0LL;
LABEL_12:
            v20 = (void (__fastcall *)(__m256i *, _BYTE *, _QWORD, __int64, __int64))v3[1];
            *(_QWORD *)&v96[72] = v3[12];
            v21 = *((_OWORD *)v3 + 2);
            v22 = *((_OWORD *)v3 + 3);
            v23 = *((_OWORD *)v3 + 4);
            *(_OWORD *)&v96[56] = *((_OWORD *)v3 + 5);
            *(_OWORD *)&v96[40] = v23;
            *(_OWORD *)&v96[24] = v22;
            *(_OWORD *)&v96[8] = v21;
            *(_QWORD *)v96 = a2;
            v20(&v100, v96, *((_QWORD *)&v101 + 1), v102, v19);
            core::ptr::drop_in_place<regex::error::Error>(&v98);
            goto LABEL_19;
          }
          just::evaluator::Evaluator::evaluate_expression(v96, a2, v18);
          v13 = v96[0];
          if ( v96[0] == 56 )
          {
            v98 = *(_OWORD *)&v96[8];
            v99 = *(_QWORD *)&v96[24];
            v19 = 0LL;
            if ( !__OFSUB__(0LL, *(_QWORD *)&v96[8]) )
              v19 = *((_QWORD *)&v98 + 1);
            goto LABEL_12;
          }
LABEL_43:
          v65 = *(_OWORD *)&v96[32];
          v66 = *(_OWORD *)&v96[48];
          *(_OWORD *)&v97[15] = *(_OWORD *)&v96[16];
          *(_OWORD *)v97 = *(_OWORD *)&v96[1];
          *(_QWORD *)(a1 + 96) = *(_QWORD *)&v96[96];
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v96[80];
          *(_OWORD *)(a1 + 64) = *(_OWORD *)&v96[64];
          *(_OWORD *)(a1 + 48) = v66;
          *(_OWORD *)(a1 + 32) = v65;
          *(_OWORD *)(a1 + 16) = *(_OWORD *)&v97[15];
          *(_OWORD *)(a1 + 1) = *(_OWORD *)v97;
          *(_BYTE *)a1 = v13;
          v64 = &v101;
          break;
        case 3LL:
          just::evaluator::Evaluator::evaluate_expression(v96, a2, a3[11]);
          result = v96[0];
          if ( v96[0] != 56 )
            goto LABEL_37;
          v101 = *(_OWORD *)&v96[8];
          v102 = *(_QWORD *)&v96[24];
          *(_QWORD *)&v98 = 0LL;
          *((_QWORD *)&v98 + 1) = 8LL;
          v99 = 0LL;
          v24 = v3[14];
          if ( !v24 )
            goto LABEL_18;
          v25 = v3[13];
          v26 = v24 << 7;
          do
          {
            just::evaluator::Evaluator::evaluate_expression(v96, a2, v25);
            v27 = v96[0];
            if ( v96[0] != 56 )
            {
              v67 = *(_OWORD *)&v96[32];
              v68 = *(_OWORD *)&v96[48];
              *(_OWORD *)&v97[15] = *(_OWORD *)&v96[16];
              *(_OWORD *)v97 = *(_OWORD *)&v96[1];
              *(_QWORD *)(a1 + 96) = *(_QWORD *)&v96[96];
              *(_OWORD *)(a1 + 80) = *(_OWORD *)&v96[80];
              *(_OWORD *)(a1 + 64) = *(_OWORD *)&v96[64];
              *(_OWORD *)(a1 + 48) = v68;
              *(_OWORD *)(a1 + 32) = v67;
              *(_OWORD *)(a1 + 16) = *(_OWORD *)&v97[15];
              *(_OWORD *)(a1 + 1) = *(_OWORD *)v97;
              *(_BYTE *)a1 = v27;
              core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v98);
              v64 = &v101;
              return core::ptr::drop_in_place<alloc::string::String>(v64);
            }
            *(_QWORD *)&v97[23] = *(_QWORD *)&v96[24];
            *(_OWORD *)&v97[7] = *(_OWORD *)&v96[8];
            v105 = *(_OWORD *)&v96[8];
            v106 = *(_QWORD *)&v96[24];
            alloc::vec::Vec<T,A>::push(&v98, &v105, &off_42FB60);
            v25 += 128LL;
            v26 -= 128LL;
          }
          while ( v26 );
LABEL_18:
          v28 = (void (__fastcall *)(__m256i *, _BYTE *, _QWORD, __int64, _QWORD, __int64))v3[1];
          *(_QWORD *)&v96[72] = v3[10];
          v29 = *((_OWORD *)v3 + 1);
          v30 = *((_OWORD *)v3 + 2);
          v31 = *((_OWORD *)v3 + 3);
          *(_OWORD *)&v96[56] = *((_OWORD *)v3 + 4);
          *(_OWORD *)&v96[40] = v31;
          *(_OWORD *)&v96[24] = v30;
          *(_OWORD *)&v96[8] = v29;
          *(_QWORD *)v96 = a2;
          v28(&v100, v96, *((_QWORD *)&v101 + 1), v102, *((_QWORD *)&v98 + 1), v99);
          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v98);
LABEL_19:
          v32 = &v101;
          goto LABEL_34;
        case 4LL:
          just::evaluator::Evaluator::evaluate_expression(v96, a2, a3[2]);
          result = v96[0];
          if ( v96[0] != 56 )
            goto LABEL_37;
          v101 = *(_OWORD *)&v96[8];
          v102 = *(_QWORD *)&v96[24];
          just::evaluator::Evaluator::evaluate_expression(v96, a2, v3[3]);
          v13 = v96[0];
          if ( v96[0] != 56 )
            goto LABEL_43;
          v98 = *(_OWORD *)&v96[8];
          v99 = *(_QWORD *)&v96[24];
          v14 = (void (__fastcall *)(__m256i *, _BYTE *, _QWORD, __int64, _QWORD, __int64))v3[1];
          *(_QWORD *)&v96[72] = v3[12];
          v15 = *((_OWORD *)v3 + 2);
          v16 = *((_OWORD *)v3 + 3);
          v17 = *((_OWORD *)v3 + 4);
          *(_OWORD *)&v96[56] = *((_OWORD *)v3 + 5);
          *(_OWORD *)&v96[40] = v17;
          *(_OWORD *)&v96[24] = v16;
          *(_OWORD *)&v96[8] = v15;
          *(_QWORD *)v96 = a2;
          v14(&v100, v96, *((_QWORD *)&v101 + 1), v102, *((_QWORD *)&v98 + 1), v99);
          core::ptr::drop_in_place<alloc::string::String>(&v98);
          goto LABEL_19;
        case 5LL:
          just::evaluator::Evaluator::evaluate_expression(v96, a2, a3[11]);
          result = v96[0];
          if ( v96[0] != 56 )
            goto LABEL_37;
          v103 = *(_OWORD *)&v96[8];
          v104 = *(_QWORD *)&v96[24];
          just::evaluator::Evaluator::evaluate_expression(v96, a2, v3[12]);
          v37 = v96[0];
          if ( v96[0] != 56 )
            goto LABEL_39;
          v101 = *(_OWORD *)&v96[8];
          v102 = *(_QWORD *)&v96[24];
          *(_QWORD *)&v98 = 0LL;
          *((_QWORD *)&v98 + 1) = 8LL;
          v99 = 0LL;
          v38 = v3[15];
          if ( !v38 )
            goto LABEL_28;
          v39 = v3[14];
          v40 = v38 << 7;
          do
          {
            just::evaluator::Evaluator::evaluate_expression(v96, a2, v39);
            v41 = v96[0];
            if ( v96[0] != 56 )
            {
              v71 = *(_OWORD *)&v96[32];
              v72 = *(_OWORD *)&v96[48];
              *(_OWORD *)&v97[15] = *(_OWORD *)&v96[16];
              *(_OWORD *)v97 = *(_OWORD *)&v96[1];
              *(_QWORD *)(a1 + 96) = *(_QWORD *)&v96[96];
              *(_OWORD *)(a1 + 80) = *(_OWORD *)&v96[80];
              *(_OWORD *)(a1 + 64) = *(_OWORD *)&v96[64];
              *(_OWORD *)(a1 + 48) = v72;
              *(_OWORD *)(a1 + 32) = v71;
              *(_OWORD *)(a1 + 16) = *(_OWORD *)&v97[15];
              *(_OWORD *)(a1 + 1) = *(_OWORD *)v97;
              *(_BYTE *)a1 = v41;
              core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v98);
LABEL_47:
              core::ptr::drop_in_place<alloc::string::String>(&v101);
              v64 = &v103;
              return core::ptr::drop_in_place<alloc::string::String>(v64);
            }
            *(_QWORD *)&v97[23] = *(_QWORD *)&v96[24];
            *(_OWORD *)&v97[7] = *(_OWORD *)&v96[8];
            v107 = *(_OWORD *)&v96[8];
            v108 = *(_QWORD *)&v96[24];
            alloc::vec::Vec<T,A>::push(&v98, &v107, &off_42FB78);
            v39 += 128LL;
            v40 -= 128LL;
          }
          while ( v40 );
LABEL_28:
          v42 = (void (__fastcall *)(__m256i *, _BYTE *, _QWORD, __int64, _QWORD, __int64, _QWORD, __int64))v3[1];
          *(_QWORD *)&v96[72] = v3[10];
          v43 = *((_OWORD *)v3 + 1);
          v44 = *((_OWORD *)v3 + 2);
          v45 = *((_OWORD *)v3 + 3);
          *(_OWORD *)&v96[56] = *((_OWORD *)v3 + 4);
          *(_OWORD *)&v96[40] = v45;
          *(_OWORD *)&v96[24] = v44;
          *(_OWORD *)&v96[8] = v43;
          *(_QWORD *)v96 = a2;
          v42(&v100, v96, *((_QWORD *)&v103 + 1), v104, *((_QWORD *)&v101 + 1), v102, *((_QWORD *)&v98 + 1), v99);
          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v98);
LABEL_33:
          core::ptr::drop_in_place<alloc::string::String>(&v101);
          v32 = &v103;
LABEL_34:
          core::ptr::drop_in_place<alloc::string::String>(v32);
LABEL_35:
          result = (__int64)&v100.m256i_i64[1];
          if ( (v100.m256i_i8[0] & 1) != 0 )
          {
            v51 = qword_9FA78[v5];
            *(_QWORD *)&v96[71] = *(__int64 *)((char *)v3 + v51 + 64);
            v52 = *(_OWORD *)((char *)v3 + v51);
            v53 = *(_OWORD *)((char *)v3 + v51 + 16);
            v54 = *(_OWORD *)((char *)v3 + v51 + 32);
            *(_OWORD *)&v96[55] = *(_OWORD *)((char *)v3 + v51 + 48);
            *(_OWORD *)&v96[39] = v54;
            *(_OWORD *)&v96[23] = v53;
            *(_OWORD *)&v96[7] = v52;
            *(_QWORD *)(a1 + 96) = v100.m256i_i64[3];
            *(_OWORD *)(a1 + 80) = *(_OWORD *)&v100.m256i_u64[1];
            *(_BYTE *)a1 = 25;
            v55 = *(_OWORD *)&v96[16];
            v56 = *(_OWORD *)&v96[32];
            v57 = *(_OWORD *)&v96[48];
            *(_OWORD *)(a1 + 1) = *(_OWORD *)v96;
            *(_OWORD *)(a1 + 17) = v55;
            *(_OWORD *)(a1 + 33) = v56;
            *(_OWORD *)(a1 + 49) = v57;
            *(_OWORD *)(a1 + 64) = *(_OWORD *)&v96[63];
          }
          else
          {
            *(_QWORD *)(a1 + 24) = v100.m256i_i64[3];
            v61 = *(_OWORD *)&v100.m256i_u64[1];
LABEL_68:
            *(_OWORD *)(a1 + 8) = v61;
            *(_BYTE *)a1 = 56;
          }
          return result;
        case 6LL:
          just::evaluator::Evaluator::evaluate_expression(v96, a2, a3[2]);
          result = v96[0];
          if ( v96[0] != 56 )
          {
LABEL_37:
            v58 = *(_OWORD *)&v96[32];
            v59 = *(_OWORD *)&v96[48];
            *(_OWORD *)&v97[15] = *(_OWORD *)&v96[16];
            *(_OWORD *)v97 = *(_OWORD *)&v96[1];
            *(_QWORD *)(a1 + 96) = *(_QWORD *)&v96[96];
            *(_OWORD *)(a1 + 80) = *(_OWORD *)&v96[80];
            *(_OWORD *)(a1 + 64) = *(_OWORD *)&v96[64];
            *(_OWORD *)(a1 + 48) = v59;
            *(_OWORD *)(a1 + 32) = v58;
            *(_OWORD *)(a1 + 16) = *(_OWORD *)&v97[15];
            v60 = *(_OWORD *)v97;
            goto LABEL_54;
          }
          v103 = *(_OWORD *)&v96[8];
          v104 = *(_QWORD *)&v96[24];
          just::evaluator::Evaluator::evaluate_expression(v96, a2, v3[3]);
          v37 = v96[0];
          if ( v96[0] != 56 )
          {
LABEL_39:
            v62 = *(_OWORD *)&v96[32];
            v63 = *(_OWORD *)&v96[48];
            *(_OWORD *)&v97[15] = *(_OWORD *)&v96[16];
            *(_OWORD *)v97 = *(_OWORD *)&v96[1];
            *(_QWORD *)(a1 + 96) = *(_QWORD *)&v96[96];
            *(_OWORD *)(a1 + 80) = *(_OWORD *)&v96[80];
            *(_OWORD *)(a1 + 64) = *(_OWORD *)&v96[64];
            *(_OWORD *)(a1 + 48) = v63;
            *(_OWORD *)(a1 + 32) = v62;
            *(_OWORD *)(a1 + 16) = *(_OWORD *)&v97[15];
            *(_OWORD *)(a1 + 1) = *(_OWORD *)v97;
            *(_BYTE *)a1 = v37;
            v64 = &v103;
            return core::ptr::drop_in_place<alloc::string::String>(v64);
          }
          v101 = *(_OWORD *)&v96[8];
          v102 = *(_QWORD *)&v96[24];
          just::evaluator::Evaluator::evaluate_expression(v96, a2, v3[4]);
          v46 = v96[0];
          if ( v96[0] == 56 )
          {
            v98 = *(_OWORD *)&v96[8];
            v99 = *(_QWORD *)&v96[24];
            v47 = (void (__fastcall *)(__m256i *, _BYTE *, _QWORD, __int64, _QWORD, __int64, _QWORD, __int64))v3[1];
            *(_QWORD *)&v96[72] = v3[13];
            v48 = *(_OWORD *)(v3 + 5);
            v49 = *(_OWORD *)(v3 + 7);
            v50 = *(_OWORD *)(v3 + 9);
            *(_OWORD *)&v96[56] = *(_OWORD *)(v3 + 11);
            *(_OWORD *)&v96[40] = v50;
            *(_OWORD *)&v96[24] = v49;
            *(_OWORD *)&v96[8] = v48;
            *(_QWORD *)v96 = a2;
            v47(&v100, v96, *((_QWORD *)&v103 + 1), v104, *((_QWORD *)&v101 + 1), v102, *((_QWORD *)&v98 + 1), v99);
            core::ptr::drop_in_place<alloc::string::String>(&v98);
            goto LABEL_33;
          }
          v69 = *(_OWORD *)&v96[32];
          v70 = *(_OWORD *)&v96[48];
          *(_OWORD *)&v97[15] = *(_OWORD *)&v96[16];
          *(_OWORD *)v97 = *(_OWORD *)&v96[1];
          *(_QWORD *)(a1 + 96) = *(_QWORD *)&v96[96];
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v96[80];
          *(_OWORD *)(a1 + 64) = *(_OWORD *)&v96[64];
          *(_OWORD *)(a1 + 48) = v70;
          *(_OWORD *)(a1 + 32) = v69;
          *(_OWORD *)(a1 + 16) = *(_OWORD *)&v97[15];
          *(_OWORD *)(a1 + 1) = *(_OWORD *)v97;
          *(_BYTE *)a1 = v46;
          goto LABEL_47;
      }
      return core::ptr::drop_in_place<alloc::string::String>(v64);
    case 4uLL:
      just::evaluator::Evaluator::evaluate_expression(v96, a2, a3[1]);
      result = v96[0];
      if ( v96[0] != 56 )
        goto LABEL_53;
      v98 = *(_OWORD *)&v96[8];
      v99 = *(_QWORD *)&v96[24];
      just::evaluator::Evaluator::evaluate_expression(v96, a2, v3[2]);
      v78 = v96[0];
      if ( v96[0] != 56 )
        goto LABEL_73;
      *(__int64 *)((char *)&v100.m256i_i64[2] + 7) = *(_QWORD *)&v96[24];
      *(_OWORD *)v97 = *(_OWORD *)&v96[8];
      *(_QWORD *)&v97[16] = *(_QWORD *)&v96[24];
      *(_QWORD *)&v96[16] = v99;
      *(_OWORD *)v96 = v98;
      <alloc::string::String as core::ops::arith::Add<&str>>::add(&v100, v96, *(_QWORD *)&v97[8], *(_QWORD *)&v96[24]);
      *(_QWORD *)(a1 + 24) = v100.m256i_i64[2];
      v79 = *(_OWORD *)v100.m256i_i8;
      goto LABEL_72;
    case 5uLL:
      just::evaluator::Evaluator::evaluate_condition(v96, a2, a3 + 3);
      v75 = v96[0];
      result = v96[1];
      if ( v96[0] != 56 )
      {
LABEL_81:
        *(_QWORD *)(a1 + 96) = *(_QWORD *)&v96[96];
        *(_OWORD *)(a1 + 82) = *(_OWORD *)&v96[82];
        *(_OWORD *)(a1 + 66) = *(_OWORD *)&v96[66];
        v83 = *(_OWORD *)&v96[2];
        v84 = *(_OWORD *)&v96[18];
        v85 = *(_OWORD *)&v96[34];
        *(_OWORD *)(a1 + 50) = *(_OWORD *)&v96[50];
        *(_OWORD *)(a1 + 34) = v85;
        *(_OWORD *)(a1 + 18) = v84;
        *(_OWORD *)(a1 + 2) = v83;
        *(_BYTE *)a1 = v75;
        *(_BYTE *)(a1 + 1) = result;
        return result;
      }
      v7 = 8LL * ((v96[1] & 1) == 0) + 8;
LABEL_76:
      v3 = *(__int64 **)((char *)v3 + v7);
LABEL_82:
      just::evaluator::Evaluator::evaluate_expression(v96, a2, v3[1]);
      result = v96[0];
      if ( v96[0] != 56 )
        goto LABEL_53;
      *(_OWORD *)v97 = *(_OWORD *)&v96[8];
      *(_QWORD *)&v97[16] = *(_QWORD *)&v96[24];
      if ( !*(_QWORD *)&v96[24] )
      {
LABEL_51:
        just::evaluator::Evaluator::evaluate_expression(a1, a2, v3[2]);
        goto LABEL_56;
      }
      result = *(_QWORD *)&v97[16];
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v97[16];
      v61 = *(_OWORD *)v97;
      goto LABEL_68;
    case 6uLL:
      goto LABEL_76;
    case 7uLL:
      v82 = a3[2];
      if ( v82 )
      {
        just::evaluator::Evaluator::evaluate_expression(v96, a2, v82);
        result = v96[0];
        if ( v96[0] != 56 )
        {
LABEL_53:
          v73 = *(_OWORD *)&v96[32];
          v74 = *(_OWORD *)&v96[48];
          *(_OWORD *)((char *)&v100.m256i_u64[1] + 7) = *(_OWORD *)&v96[16];
          *(_OWORD *)v100.m256i_i8 = *(_OWORD *)&v96[1];
          *(_QWORD *)(a1 + 96) = *(_QWORD *)&v96[96];
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v96[80];
          *(_OWORD *)(a1 + 64) = *(_OWORD *)&v96[64];
          *(_OWORD *)(a1 + 48) = v74;
          *(_OWORD *)(a1 + 32) = v73;
          *(_OWORD *)(a1 + 16) = *(_OWORD *)((char *)&v100.m256i_u64[1] + 7);
          v60 = *(_OWORD *)v100.m256i_i8;
LABEL_54:
          *(_OWORD *)(a1 + 1) = v60;
          *(_BYTE *)a1 = result;
          return result;
        }
        v98 = *(_OWORD *)&v96[8];
        v99 = *(_QWORD *)&v96[24];
        just::evaluator::Evaluator::evaluate_expression(v96, a2, v3[1]);
        v78 = v96[0];
        if ( v96[0] == 56 )
        {
          *(_OWORD *)v97 = *(_OWORD *)&v96[8];
          *(_QWORD *)&v97[16] = *(_QWORD *)&v96[24];
          *(_QWORD *)&v96[16] = v99;
          *(_OWORD *)v96 = v98;
          <alloc::string::String as core::ops::arith::Add<&str>>::add(&v100, v96, asc_6C111, 1LL);
          <alloc::string::String as core::ops::arith::Add<&str>>::add(
            v96,
            &v100,
            *(_QWORD *)&v97[8],
            *(_QWORD *)&v97[16]);
          *(_QWORD *)(a1 + 24) = *(_QWORD *)&v96[16];
          v79 = *(_OWORD *)v96;
          goto LABEL_72;
        }
LABEL_73:
        v80 = *(_OWORD *)&v96[32];
        v81 = *(_OWORD *)&v96[48];
        *(_OWORD *)((char *)&v100.m256i_u64[1] + 7) = *(_OWORD *)&v96[16];
        *(_OWORD *)v100.m256i_i8 = *(_OWORD *)&v96[1];
        *(_QWORD *)(a1 + 96) = *(_QWORD *)&v96[96];
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v96[80];
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v96[64];
        *(_OWORD *)(a1 + 48) = v81;
        *(_OWORD *)(a1 + 32) = v80;
        *(_OWORD *)(a1 + 16) = *(_OWORD *)((char *)&v100.m256i_u64[1] + 7);
        *(_OWORD *)(a1 + 1) = *(_OWORD *)v100.m256i_i8;
        *(_BYTE *)a1 = v78;
        v64 = &v98;
        return core::ptr::drop_in_place<alloc::string::String>(v64);
      }
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v98, asc_6C111);
      just::evaluator::Evaluator::evaluate_expression(v96, a2, v3[1]);
      v78 = v96[0];
      if ( v96[0] != 56 )
        goto LABEL_73;
      *(__int64 *)((char *)&v100.m256i_i64[2] + 7) = *(_QWORD *)&v96[24];
      *(_OWORD *)((char *)&v100.m256i_u32[1] + 3) = *(_OWORD *)&v96[8];
      *(_OWORD *)v97 = *(_OWORD *)&v96[8];
      *(_QWORD *)&v97[16] = *(_QWORD *)&v96[24];
      <alloc::string::String as core::ops::arith::Add<&str>>::add(&v101, &v98, *(_QWORD *)&v96[16], *(_QWORD *)&v96[24]);
      *(_QWORD *)(a1 + 24) = v102;
      v79 = v101;
LABEL_72:
      *(_OWORD *)(a1 + 8) = v79;
LABEL_55:
      *(_BYTE *)a1 = 56;
LABEL_56:
      v64 = (__int128 *)v97;
      return core::ptr::drop_in_place<alloc::string::String>(v64);
    case 8uLL:
      goto LABEL_82;
    case 9uLL:
      <alloc::string::String as core::clone::Clone>::clone(v96, a3 + 1);
      result = *(_QWORD *)&v96[16];
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v96[16];
      v61 = *(_OWORD *)v96;
      goto LABEL_68;
    case 0xAuLL:
      *(_QWORD *)&v86 = just::token::Token::lexeme(a3 + 1);
      v87 = v86;
      *(_OWORD *)v97 = v86;
      v88 = just::scope::Scope::value(a2 + 5, v86, *((_QWORD *)&v86 + 1));
      if ( v88 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v113, v88);
        result = v114;
        *(_QWORD *)(a1 + 24) = v114;
        v61 = v113;
        goto LABEL_68;
      }
      v90 = (_QWORD *)a2[4];
      if ( v90
        && (v91 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*v90, v90[1], v87, *((_QWORD *)&v87 + 1))) != 0 )
      {
        just::evaluator::Evaluator::evaluate_assignment((__int64)v96, (__int64)a2, v91);
        result = v96[0];
        if ( v96[0] == 56 )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v100, *(_QWORD *)&v96[8]);
          result = v100.m256i_i64[2];
          *(_QWORD *)(a1 + 24) = v100.m256i_i64[2];
          v61 = *(_OWORD *)v100.m256i_i8;
          goto LABEL_68;
        }
        v92 = *(_DWORD *)&v96[1];
        *(_DWORD *)(a1 + 4) = *(_DWORD *)&v96[4];
        *(_DWORD *)(a1 + 1) = v92;
        v93 = *(_OWORD *)&v96[8];
        v94 = *(_OWORD *)&v96[40];
        v95 = *(_OWORD *)&v96[56];
        *(_OWORD *)(a1 + 24) = *(_OWORD *)&v96[24];
        *(_OWORD *)(a1 + 40) = v94;
        *(_OWORD *)(a1 + 56) = v95;
        *(_OWORD *)(a1 + 72) = *(_OWORD *)&v96[72];
        *(_OWORD *)(a1 + 88) = *(_OWORD *)&v96[88];
        *(_BYTE *)a1 = result;
        *(_OWORD *)(a1 + 8) = v93;
      }
      else
      {
        v100.m256i_i64[0] = (__int64)v97;
        v100.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        *(_QWORD *)v96 = &off_42FB40;
        *(_QWORD *)&v96[8] = 2LL;
        *(_QWORD *)&v96[32] = 0LL;
        *(_QWORD *)&v96[16] = &v100;
        *(_QWORD *)&v96[24] = 1LL;
        core::option::Option<T>::map_or_else(&v111, 0LL, v89, v96);
        *(_OWORD *)&v96[7] = v111;
        *(_QWORD *)&v96[23] = v112;
        *(_BYTE *)a1 = 29;
        v76 = *(_OWORD *)v96;
        result = *(_QWORD *)&v96[15];
        v77 = *(_QWORD *)&v96[23];
LABEL_63:
        *(_OWORD *)(a1 + 1) = v76;
        *(_QWORD *)(a1 + 16) = result;
        *(_QWORD *)(a1 + 24) = v77;
      }
      return result;
  }
}