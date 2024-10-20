        __int64 a6)
{
  double *v8; // r12
  const void *v10; // rdi
  signed __int64 v11; // rdx
  _BYTE *v12; // r15
  double *v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  const void *v16; // rax
  size_t v17; // rdx
  char *v18; // rsi
  unsigned __int64 v19; // r15
  __int64 v20; // rbp
  double **v21; // r12
  int v22; // eax
  char v23; // r15
  int v24; // edx
  char v25; // al
  int v26; // edx
  unsigned int v27; // edx
  char v28; // al
  __int64 v29; // r15
  _BYTE *v30; // rcx
  __m128d v31; // xmm1
  __m128d v32; // xmm2
  char v33; // al
  unsigned __int8 v34; // dl
  bool v35; // cl
  bool v36; // dl
  char v37; // si
  const char *v38; // rdx
  __m128d v39; // xmm0
  __m128d v40; // xmm0
  char v41; // r12
  char v42; // cl
  __int64 v43; // r13
  unsigned __int8 v44; // r12
  double *v45; // rax
  double v46; // xmm0_8
  __int64 v47; // rbp
  char v48; // r15
  __m128d v49; // xmm0
  double v50; // xmm1_8
  double v51; // xmm0_8
  double v52; // xmm2_8
  double v53; // xmm0_8
  double v54; // xmm0_8
  double v55; // xmm1_8
  __int64 *v56; // rbp
  __m128d v57; // xmm0
  __int128 v58; // xmm2
  __m128d v59; // xmm0
  double v60; // xmm1_8
  double v61; // xmm0_8
  char *v62; // r12
  __int64 v63; // rax
  __int64 v64; // r13
  __int128 *v65; // r12
  __int64 v66; // rbp
  __int128 *v67; // r12
  _BYTE *v68; // r15
  unsigned __int8 v70; // [rsp+Ch] [rbp-6ECh]
  int v71; // [rsp+Ch] [rbp-6ECh]
  __int64 v72; // [rsp+10h] [rbp-6E8h]
  double v73; // [rsp+10h] [rbp-6E8h]
  __int16 v74; // [rsp+1Ah] [rbp-6DEh] BYREF
  __int16 v75; // [rsp+1Ch] [rbp-6DCh] BYREF
  __int16 v76; // [rsp+1Eh] [rbp-6DAh] BYREF
  __int128 v77; // [rsp+20h] [rbp-6D8h]
  double v78; // [rsp+38h] [rbp-6C0h]
  __int128 v79; // [rsp+40h] [rbp-6B8h] BYREF
  double **v80; // [rsp+50h] [rbp-6A8h]
  __int64 v81; // [rsp+58h] [rbp-6A0h]
  _QWORD *v82; // [rsp+60h] [rbp-698h]
  __int64 v83; // [rsp+68h] [rbp-690h]
  char v84; // [rsp+70h] [rbp-688h]
  __int64 v85; // [rsp+78h] [rbp-680h]
  __int64 v86; // [rsp+88h] [rbp-670h]
  __int64 v87; // [rsp+98h] [rbp-660h]
  __int64 v88; // [rsp+A0h] [rbp-658h]
  char v89; // [rsp+A8h] [rbp-650h]
  const char *v90; // [rsp+B0h] [rbp-648h] BYREF
  __int64 v91; // [rsp+B8h] [rbp-640h]
  double **v92; // [rsp+C0h] [rbp-638h]
  __int64 v93; // [rsp+C8h] [rbp-630h]
  __int64 *v94; // [rsp+D0h] [rbp-628h]
  __int64 v95; // [rsp+D8h] [rbp-620h]
  __int64 v96; // [rsp+E0h] [rbp-618h]
  double v97; // [rsp+E8h] [rbp-610h] BYREF
  double *v98; // [rsp+F0h] [rbp-608h] BYREF
  __int64 (__fastcall *v99)(); // [rsp+F8h] [rbp-600h]
  __int64 v100; // [rsp+100h] [rbp-5F8h]
  __int64 v101; // [rsp+108h] [rbp-5F0h]
  __int128 v102; // [rsp+110h] [rbp-5E8h] BYREF
  __int64 v103; // [rsp+120h] [rbp-5D8h] BYREF
  __int64 v104; // [rsp+128h] [rbp-5D0h]
  double *v105; // [rsp+130h] [rbp-5C8h] BYREF
  __int64 (__fastcall *v106)(); // [rsp+138h] [rbp-5C0h]
  __int16 *v107; // [rsp+140h] [rbp-5B8h]
  __int64 (__fastcall *v108)(); // [rsp+148h] [rbp-5B0h]
  _QWORD *v109; // [rsp+150h] [rbp-5A8h] BYREF
  __int64 (__fastcall *v110)(); // [rsp+158h] [rbp-5A0h]
  __int16 *v111; // [rsp+160h] [rbp-598h]
  __int64 (__fastcall *v112)(); // [rsp+168h] [rbp-590h]
  __int128 v113; // [rsp+170h] [rbp-588h] BYREF
  __int64 v114; // [rsp+180h] [rbp-578h] BYREF
  __int128 v115; // [rsp+190h] [rbp-568h] BYREF
  __int64 v116; // [rsp+1A0h] [rbp-558h] BYREF
  double *v117; // [rsp+1A8h] [rbp-550h] BYREF
  __int64 (__fastcall *v118)(); // [rsp+1B0h] [rbp-548h]
  __int16 *v119; // [rsp+1B8h] [rbp-540h]
  __int64 (__fastcall *v120)(); // [rsp+1C0h] [rbp-538h]
  __int64 v121; // [rsp+1C8h] [rbp-530h]
  __int64 v122; // [rsp+1D0h] [rbp-528h]
  __int64 v123; // [rsp+1D8h] [rbp-520h] BYREF
  __int64 v124; // [rsp+1E0h] [rbp-518h]
  __int64 v125; // [rsp+1E8h] [rbp-510h]
  __int64 v126; // [rsp+1F8h] [rbp-500h]
  __int64 v127; // [rsp+200h] [rbp-4F8h]
  char v128; // [rsp+208h] [rbp-4F0h]
  __int128 v129; // [rsp+210h] [rbp-4E8h] BYREF
  __int64 v130; // [rsp+220h] [rbp-4D8h]
  __int64 v131; // [rsp+230h] [rbp-4C8h] BYREF
  double v132; // [rsp+238h] [rbp-4C0h] BYREF
  double **v133; // [rsp+240h] [rbp-4B8h] BYREF
  __int64 (__fastcall *v134)(); // [rsp+248h] [rbp-4B0h]
  _QWORD *v135; // [rsp+250h] [rbp-4A8h]
  __int64 (__fastcall *v136)(); // [rsp+258h] [rbp-4A0h]
  _QWORD **v137; // [rsp+260h] [rbp-498h]
  __int64 (__fastcall *v138)(); // [rsp+268h] [rbp-490h]
  char v139; // [rsp+270h] [rbp-488h]
  __int64 v140; // [rsp+278h] [rbp-480h]
  __int64 v141; // [rsp+288h] [rbp-470h]
  __int64 v142; // [rsp+298h] [rbp-460h]
  __int64 v143; // [rsp+2A0h] [rbp-458h]
  char v144; // [rsp+2A8h] [rbp-450h]
  __int64 v145; // [rsp+2B0h] [rbp-448h]
  _QWORD v146[3]; // [rsp+2B8h] [rbp-440h] BYREF
  double **v147; // [rsp+2D0h] [rbp-428h] BYREF
  __int64 (__fastcall *v148)(); // [rsp+2D8h] [rbp-420h]
  _BYTE *v149; // [rsp+2E0h] [rbp-418h]
  __int64 (__fastcall *v150)(); // [rsp+2E8h] [rbp-410h]
  __int64 v151; // [rsp+2F0h] [rbp-408h]
  __int64 v152; // [rsp+2F8h] [rbp-400h]
  char v153; // [rsp+300h] [rbp-3F8h]
  __int64 v154; // [rsp+308h] [rbp-3F0h]
  __int64 v155; // [rsp+318h] [rbp-3E0h]
  __int64 v156; // [rsp+328h] [rbp-3D0h]
  __int64 v157; // [rsp+330h] [rbp-3C8h]
  char v158; // [rsp+338h] [rbp-3C0h]
  _QWORD v159[4]; // [rsp+340h] [rbp-3B8h] BYREF
  _QWORD v160[4]; // [rsp+360h] [rbp-398h] BYREF
  _QWORD v161[4]; // [rsp+380h] [rbp-378h] BYREF
  _QWORD v162[4]; // [rsp+3A0h] [rbp-358h] BYREF
  _QWORD v163[4]; // [rsp+3C0h] [rbp-338h] BYREF
  _QWORD v164[4]; // [rsp+3E0h] [rbp-318h] BYREF
  _QWORD v165[6]; // [rsp+400h] [rbp-2F8h] BYREF
  _QWORD v166[6]; // [rsp+430h] [rbp-2C8h] BYREF
  _QWORD v167[6]; // [rsp+460h] [rbp-298h] BYREF
  __m128d v168; // [rsp+490h] [rbp-268h]
  __int128 v169; // [rsp+4A8h] [rbp-250h] BYREF
  __int64 v170; // [rsp+4B8h] [rbp-240h]
  _QWORD v171[6]; // [rsp+4C0h] [rbp-238h] BYREF
  char v172; // [rsp+4F0h] [rbp-208h]
  _QWORD v173[6]; // [rsp+4F8h] [rbp-200h] BYREF
  char v174; // [rsp+528h] [rbp-1D0h]
  _QWORD v175[6]; // [rsp+530h] [rbp-1C8h] BYREF
  char v176; // [rsp+560h] [rbp-198h]
  _QWORD v177[6]; // [rsp+568h] [rbp-190h] BYREF
  char v178; // [rsp+598h] [rbp-160h]
  _QWORD v179[6]; // [rsp+5A0h] [rbp-158h] BYREF
  char v180; // [rsp+5D0h] [rbp-128h]
  __int128 v181; // [rsp+5D8h] [rbp-120h] BYREF
  __int64 v182; // [rsp+5E8h] [rbp-110h]
  _BYTE v183[24]; // [rsp+5F0h] [rbp-108h] BYREF
  _BYTE v184[24]; // [rsp+608h] [rbp-F0h] BYREF
  _BYTE v185[24]; // [rsp+620h] [rbp-D8h] BYREF
  _BYTE v186[24]; // [rsp+638h] [rbp-C0h] BYREF
  _BYTE v187[24]; // [rsp+650h] [rbp-A8h] BYREF
  _BYTE v188[24]; // [rsp+668h] [rbp-90h] BYREF
  char v189; // [rsp+680h] [rbp-78h] BYREF
  char v190; // [rsp+698h] [rbp-60h] BYREF
  char v191; // [rsp+6B0h] [rbp-48h] BYREF

  v96 = a6;
  v104 = a5;
  v8 = a2;
  if ( *(_QWORD *)(a4 + 136) != 0x8000000000000000LL )
  {
    v10 = *(const void **)(a4 + 144);
    if ( !v10 || (v11 = *(_QWORD *)(a4 + 152), v11 < 0) )
      core::panicking::panic_nounwind(anon_b059a92c305f842a453962f602edcc08_22_llvm_14020448505035660279, 162LL);
    v12 = &a3[-v11];
    if ( (unsigned __int64)a3 >= v11 )
    {
      v14 = bcmp(v10, &v12[(_QWORD)a2], v11);
      v13 = 0LL;
      if ( !v14 )
        v13 = a2;
    }
    else
    {
      v13 = 0LL;
    }
    if ( v13 )
    {
      v8 = v13;
      a3 = v12;
    }
  }
  if ( *(_QWORD *)(a4 + 16) == 1LL )
  {
    v15 = *(_QWORD *)(a4 + 24);
  }
  else if ( *(_BYTE *)(a4 + 176) == 5
         && *(_BYTE *)(a4 + 177) == 5
         && (core::str::<impl str>::split_once(&v79, v8, a3, 46LL), (_QWORD)v79) )
  {
    v133 = v80;
    v134 = (__int64 (__fastcall *)())((char *)v80 + v81);
    LOBYTE(v135) = 0;
    v15 = <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::try_fold(
            &v133,
            0LL);
  }
  else
  {
    v15 = 0LL;
  }
  v72 = v15;
  if ( !a3 )
  {
    v19 = 18LL;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v79, 18LL, 0LL);
    v20 = *((_QWORD *)&v79 + 1);
    if ( (_QWORD)v79 )
LABEL_200:
      alloc::raw_vec::handle_error(v20, v80);
    v21 = v80;
    core::intrinsics::copy_nonoverlapping::precondition_check(aInvalidNumber, v80, 1LL, 1LL, 18LL);
    *(_OWORD *)v21 = *(_OWORD *)aInvalidNumber;
    *((_WORD *)v21 + 8) = 10023;
LABEL_34:
    if ( v20 != 0x8000000000000000LL )
      goto LABEL_196;
    goto LABEL_58;
  }
  LODWORD(v79) = 0;
  v16 = (const void *)core::char::methods::encode_utf8_raw(105LL, &v79, 4LL);
  v18 = &a3[-v17];
  if ( (unsigned __int64)a3 < v17 )
  {
    v98 = v8;
    v99 = (__int64 (__fastcall *)())&a3[(_QWORD)v8];
LABEL_23:
    v23 = 0;
    goto LABEL_24;
  }
  v18 = &v18[(_QWORD)v8];
  v22 = bcmp(v16, v18, v17);
  v98 = v8;
  v99 = (__int64 (__fastcall *)())&a3[(_QWORD)v8];
  if ( v22 )
    goto LABEL_23;
  v23 = 1;
  if ( (unsigned int)core::str::validations::next_code_point_reverse(&v98) && (v26 ^ 0xD800u) - 2048 >= 0x10F800 )
LABEL_30:
    core::panicking::panic_nounwind(anon_b059a92c305f842a453962f602edcc08_8_llvm_14020448505035660279, 57LL);
LABEL_24:
  if ( !(unsigned int)core::str::validations::next_code_point_reverse(&v98) )
  {
LABEL_33:
    v147 = 0LL;
    v148 = (__int64 (__fastcall *)())v8;
    v149 = a3;
    LOBYTE(v150) = 1;
    v105 = (double *)&v147;
    v106 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v79 = &off_11F2B0;
    *((_QWORD *)&v79 + 1) = 1LL;
    v80 = &v105;
    v81 = 1LL;
    v82 = 0LL;
    alloc::fmt::format::format_inner(&v90, &v79);
    v20 = (__int64)v90;
    v21 = (double **)v91;
    v19 = (unsigned __int64)v92;
    goto LABEL_34;
  }
  if ( (v24 ^ 0xD800u) - 2048 >= 0x10F800 )
    goto LABEL_30;
  switch ( v24 )
  {
    case 'E':
      v25 = 5;
      goto LABEL_45;
    case 'F':
    case 'H':
    case 'I':
    case 'J':
    case 'L':
    case 'N':
    case 'O':
    case 'Q':
    case 'R':
    case 'S':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
      goto LABEL_32;
    case 'G':
      v25 = 2;
      goto LABEL_45;
    case 'K':
      v70 = 0;
      if ( !v23 )
        goto LABEL_39;
      goto LABEL_46;
    case 'M':
      v25 = 1;
      goto LABEL_45;
    case 'P':
      v25 = 4;
      goto LABEL_45;
    case 'T':
      v25 = 3;
      goto LABEL_45;
    case 'Y':
      v25 = 7;
      goto LABEL_45;
    case 'Z':
      v25 = 6;
LABEL_45:
      v70 = v25;
      if ( v23 )
      {
LABEL_46:
        if ( a3 == (_BYTE *)&dword_0 + 1 )
          core::panicking::panic_const::panic_const_sub_overflow(&off_11F280, v18);
        v29 = 256LL;
        v28 = 0;
        v30 = a3 - 2;
        if ( a3 == (_BYTE *)&dword_0 + 2 )
          goto LABEL_52;
      }
      else
      {
LABEL_39:
        v28 = 0;
        v29 = 0LL;
        v30 = a3 - 1;
        if ( a3 == (_BYTE *)&dword_0 + 1 )
          goto LABEL_52;
      }
LABEL_48:
      if ( v30 >= a3 )
      {
        if ( !v28 )
          goto LABEL_198;
      }
      else if ( (char)v30[(_QWORD)v8] < -64 )
      {
        goto LABEL_198;
      }
LABEL_52:
      if ( v30 > a3 )
        core::panicking::panic_nounwind(anon_ff765ffa8c564fe4079308b568cc8f06_8_llvm_17873003023693898768, 102LL);
      if ( !v8 )
LABEL_198:
        core::str::slice_error_fail(v8, a3, 0LL, v30, &off_11F298);
      core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(&v109, v8, v30);
      if ( ((unsigned __int8)v109 & 1) != 0 )
      {
        v133 = 0LL;
        v134 = (__int64 (__fastcall *)())v8;
        v135 = a3;
        LOBYTE(v136) = 1;
        v117 = (double *)&v133;
        v118 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v79 = &anon_b059a92c305f842a453962f602edcc08_39_llvm_14020448505035660279;
        *((_QWORD *)&v79 + 1) = 1LL;
        v80 = &v117;
        v81 = 1LL;
        v82 = 0LL;
        alloc::fmt::format::format_inner(&v123, &v79);
        v20 = v123;
        v21 = (double **)v124;
        if ( v123 != 0x8000000000000000LL )
        {
          v19 = v125;
          goto LABEL_196;
        }
      }
      else
      {
        v21 = (double **)v110;
      }
      v19 = v70 | (unsigned __int64)v29;
      break;
    default:
      if ( v24 == (_DWORD)&loc_110000 )
        goto LABEL_33;
LABEL_32:
      v27 = v24 - 58;
      if ( (v27 < 0xFFFFFFF6) | (unsigned __int8)v23 )
        goto LABEL_33;
      v29 = 512LL;
      v28 = 1;
      v70 = v27;
      v30 = a3;
      goto LABEL_48;
  }
LABEL_58:
  v31 = _mm_sub_pd(
          (__m128d)_mm_unpacklo_ps((__m128)*(unsigned __int64 *)(a4 + 160), (__m128)xmmword_16C50),
          (__m128d)xmmword_16B90);
  v32 = _mm_unpackhi_pd(v31, v31);
  v32.m128d_f64[0] = (v32.m128d_f64[0] + v31.m128d_f64[0]) * *(double *)&v21;
  v98 = *(double **)&v32.m128d_f64[0];
  v33 = *(_BYTE *)(a4 + 176);
  v34 = v33 - 2;
  if ( BYTE1(v19) != 2 )
  {
    v37 = 2;
    if ( v34 < 4u )
      v37 = v33 - 2;
    switch ( v37 )
    {
      case 0:
        if ( (v19 & 0x100) != 0 )
          goto LABEL_113;
        goto LABEL_78;
      case 1:
        if ( (v19 & 0x100) != 0 )
          goto LABEL_81;
LABEL_78:
        switch ( (char)v19 )
        {
          case 0:
            v32.m128d_f64[0] = v32.m128d_f64[0] * 1000.0;
            break;
          case 1:
            JUMPOUT(0xA1D46LL);
          case 2:
            JUMPOUT(0xA1CF8LL);
          case 3:
            v32.m128d_f64[0] = v32.m128d_f64[0] * 1.0e12;
            break;
          case 4:
            v32.m128d_f64[0] = v32.m128d_f64[0] * 1.0e15;
            break;
          case 5:
            v32.m128d_f64[0] = v32.m128d_f64[0] * 1.0e18;
            break;
          case 6:
            v32.m128d_f64[0] = v32.m128d_f64[0] * 1.0e21;
            break;
          case 7:
            JUMPOUT(0xA1D39LL);
        }
        goto LABEL_84;
      case 2:
        if ( (v19 & 0x100) == 0 )
        {
          if ( (v33 & 1) != 0 )
          {
            v183[0] = v19;
            v147 = &v98;
            v148 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
            v149 = v183;
            v150 = <uu_numfmt::units::RawSuffix as core::fmt::Debug>::fmt;
            *(_QWORD *)&v79 = &off_11F2F0;
            *((_QWORD *)&v79 + 1) = 3LL;
            v80 = (double **)&v147;
            v81 = 2LL;
            v82 = 0LL;
            alloc::fmt::format::format_inner(&v90, &v79);
            v20 = (__int64)v90;
            v21 = (double **)v91;
            v19 = (unsigned __int64)v92;
            if ( v90 != (const char *)0x8000000000000000LL )
              break;
            goto LABEL_83;
          }
LABEL_113:
          switch ( (char)v19 )
          {
            case 0:
              v32.m128d_f64[0] = v32.m128d_f64[0] * 1024.0;
              break;
            case 1:
              v32.m128d_f64[0] = v32.m128d_f64[0] * 1048576.0;
              break;
            case 2:
              JUMPOUT(0xA1CF3LL);
            case 3:
              JUMPOUT(0xA1D05LL);
            case 4:
              JUMPOUT(0xA1CD9LL);
            case 5:
              v32.m128d_f64[0] = v32.m128d_f64[0] * 1.152921504606847e18;
              break;
            case 6:
              v32.m128d_f64[0] = v32.m128d_f64[0] * 1.180591620717411e21;
              break;
            case 7:
              JUMPOUT(0xA1D12LL);
          }
          goto LABEL_84;
        }
        if ( (v33 & 1) != 0 )
          goto LABEL_113;
LABEL_81:
        v19 = 45LL;
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v79, 45LL, 0LL);
        v20 = *((_QWORD *)&v79 + 1);
        if ( (_QWORD)v79 )
          goto LABEL_200;
        v21 = v80;
        core::intrinsics::copy_nonoverlapping::precondition_check(&unk_24A9D, v80, 1LL, 1LL, 45LL);
        qmemcpy(v21, "This suffix is unsupported for specified unit", 45);
        if ( v20 == 0x8000000000000000LL )
          goto LABEL_83;
        break;
      case 3:
        LOBYTE(v146[0]) = v19;
        v38 = (_BYTE *)(&dword_0 + 1);
        if ( (v19 & 0x100) != 0 )
          v38 = "iUnit 'auto' isn't supported with --to options";
        v109 = v38;
        v110 = (__int64 (__fastcall *)())((v19 >> 8) & 1);
        v133 = &v98;
        v134 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v135 = v146;
        v136 = <uu_numfmt::units::RawSuffix as core::fmt::Debug>::fmt;
        v137 = &v109;
        v138 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v79 = &off_11F320;
        *((_QWORD *)&v79 + 1) = 4LL;
        v80 = (double **)&v133;
        v81 = 3LL;
        v82 = 0LL;
        alloc::fmt::format::format_inner(&v123, &v79);
        v20 = v123;
        v21 = (double **)v124;
        v19 = v125;
        if ( v123 != 0x8000000000000000LL )
          break;
        goto LABEL_83;
    }
LABEL_196:
    *(_QWORD *)(a1 + 8) = v20;
    *(double *)(a1 + 16) = *(double *)&v21;
    *(_QWORD *)(a1 + 24) = v19;
    *(_QWORD *)a1 = 1LL;
    return a1;
  }
  v35 = v34 < 4u;
  v36 = v34 != 2;
  if ( (v33 & 1) == 0 || v36 && v35 )
    goto LABEL_84;
  v105 = (double *)&v98;
  v106 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
  *(_QWORD *)&v79 = &off_11F2D0;
  *((_QWORD *)&v79 + 1) = 2LL;
  v80 = &v105;
  v81 = 1LL;
  v82 = 0LL;
  alloc::fmt::format::format_inner(&v117, &v79);
  v20 = (__int64)v117;
  v21 = (double **)v118;
  v19 = (unsigned __int64)v119;
  if ( v117 != (double *)0x8000000000000000LL )
    goto LABEL_196;
LABEL_83:
  v33 = *(_BYTE *)(a4 + 176);
  v32 = (__m128d)(unsigned __int64)v21;
LABEL_84:
  if ( v33 == 5 )
  {
    if ( v32.m128d_f64[0] == 0.0 )
      v32 = 0LL;
  }
  else if ( v32.m128d_f64[0] >= 0.0 )
  {
    v40.m128d_f64[1] = v32.m128d_f64[1];
    v40.m128d_f64[0] = ceil(v32.m128d_f64[0]);
    v32 = v40;
  }
  else
  {
    v39 = _mm_and_pd(v32, (__m128d)xmmword_16BA0);
    v32.m128d_f64[0] = -ceil(v39.m128d_f64[0]);
    v32.m128d_f64[1] = -v39.m128d_f64[1];
  }
  v71 = *(unsigned __int8 *)(a4 + 201);
  v145 = 0x706050403020100LL;
  v41 = *(_BYTE *)(a4 + 177);
  v42 = 2;
  if ( (unsigned __int8)(v41 - 2) < 4u )
    v42 = v41 - 2;
  LOWORD(v19) = 512;
  switch ( v42 )
  {
    case 0:
      v19 = 45LL;
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v90, 45LL, 0LL);
      v20 = v91;
      if ( v90 )
        alloc::raw_vec::handle_error(v91, v92);
      v21 = v92;
      core::intrinsics::copy_nonoverlapping::precondition_check(
        "Unit 'auto' isn't supported with --to options",
        v92,
        1LL,
        1LL,
        45LL);
      qmemcpy(v21, "Unit 'auto' isn't supported with --to options", 45);
      if ( v20 != 0x8000000000000000LL )
        goto LABEL_196;
      goto LABEL_95;
    case 1:
      v45 = (double *)&unk_24B88;
      v44 = 0;
      goto LABEL_98;
    case 2:
      v44 = v41 & 1;
      v45 = (double *)&unk_24AD0;
LABEL_98:
      v46 = fabs(v32.m128d_f64[0]);
      if ( v45[1] + -1.0 >= v46 )
        goto LABEL_112;
      v47 = 1LL;
      v48 = 1;
      if ( v45[2] > v46 )
        goto LABEL_108;
      v47 = 2LL;
      if ( v45[3] > v46 )
        goto LABEL_108;
      v47 = 3LL;
      if ( v45[4] > v46 )
        goto LABEL_108;
      v47 = 4LL;
      if ( v45[5] > v46 )
        goto LABEL_108;
      v47 = 5LL;
      if ( v45[6] > v46 )
        goto LABEL_108;
      v47 = 6LL;
      if ( v45[7] > v46 )
        goto LABEL_108;
      v47 = 7LL;
      if ( v45[8] > v46 )
        goto LABEL_108;
      if ( v45[9] <= v46 )
      {
        <str as alloc::string::ToString>::to_string(v146, aNumberIsTooBig, 33LL);
        v20 = v146[0];
        v21 = (double **)v146[1];
        v19 = v146[2];
        if ( v146[0] != 0x8000000000000000LL )
          goto LABEL_196;
LABEL_95:
        v43 = v72;
      }
      else
      {
        v47 = 8LL;
        v48 = 0;
LABEL_108:
        v32.m128d_f64[0] = v32.m128d_f64[0] / v45[v47];
        v43 = v72;
        *(double *)&v77 = v45[1];
        if ( v72 )
        {
          v49 = _mm_sub_pd(
                  (__m128d)_mm_unpacklo_epi32((__m128i)(unsigned __int64)v72, (__m128i)xmmword_16C50),
                  (__m128d)xmmword_16B90);
          v168 = v32;
          v49.m128d_f64[0] = pow(10.0, _mm_unpackhi_pd(v49, v49).m128d_f64[0] + v49.m128d_f64[0]);
          v50 = v168.m128d_f64[0] * v49.m128d_f64[0];
          v78 = v49.m128d_f64[0];
          switch ( v71 )
          {
            case 0:
              goto LABEL_124;
            case 1:
              goto LABEL_111;
            case 2:
              if ( v50 < 0.0 )
                goto LABEL_111;
              goto LABEL_124;
            case 3:
              if ( v50 >= 0.0 )
LABEL_111:
                v51 = floor(v50);
              else
LABEL_124:
                v51 = ceil(v50);
              v32.m128d_f64[0] = v51 / v78;
              break;
          }
        }
        else
        {
          if ( fabs(v32.m128d_f64[0]) >= 10.0 )
          {
            switch ( v71 )
            {
              case 0:
                ceil(v32.m128d_f64[0]);
                JUMPOUT(0xA1C99LL);
              case 1:
                v54 = floor(v32.m128d_f64[0]);
                goto LABEL_194;
              case 2:
                if ( v32.m128d_f64[0] < 0.0 )
                  goto LABEL_138;
                goto LABEL_192;
              case 3:
                if ( v32.m128d_f64[0] >= 0.0 )
LABEL_138:
                  v32.m128d_f64[0] = floor(v32.m128d_f64[0]);
                else
LABEL_192:
                  v32.m128d_f64[0] = ceil(v32.m128d_f64[0]);
                goto LABEL_142;
              case 4:
                v54 = round(v32.m128d_f64[0]);
LABEL_194:
                v55 = *(double *)&v77;
                v32.m128d_f64[0] = v54;
                goto LABEL_143;
            }
          }
          v52 = v32.m128d_f64[0] * 10.0;
          switch ( v71 )
          {
            case 0:
              goto LABEL_140;
            case 1:
              goto LABEL_118;
            case 2:
              if ( v52 < 0.0 )
                goto LABEL_118;
              goto LABEL_140;
            case 3:
              if ( v52 >= 0.0 )
LABEL_118:
                v53 = floor(v52);
              else
LABEL_140:
                v53 = ceil(v52);
              break;
            case 4:
              v53 = round(v52);
              break;
          }
          v32.m128d_f64[0] = v53 / 10.0;
        }
LABEL_142:
        v55 = *(double *)&v77;
LABEL_143:
        if ( fabs(v32.m128d_f64[0]) >= v55 )
        {
          if ( !v48 )
            core::panicking::panic_bounds_check(v47, 8LL, &off_11F360);
          v32.m128d_f64[0] = v32.m128d_f64[0] / v55;
        }
        else
        {
          --v47;
        }
        LOWORD(v19) = *((unsigned __int8 *)&v146[-1] + v47) | (v44 << 8);
LABEL_148:
        v21 = *(double ***)&v32.m128d_f64[0];
      }
      v56 = (__int64 *)(a4 + 136);
      v58 = (unsigned __int64)v21;
      v57 = _mm_sub_pd(
              (__m128d)_mm_unpacklo_ps((__m128)*(unsigned __int64 *)(a4 + 168), (__m128)xmmword_16C50),
              (__m128d)xmmword_16B90);
      *(double *)&v58 = *(double *)&v21 / (_mm_unpackhi_pd(v57, v57).m128d_f64[0] + v57.m128d_f64[0]);
      v97 = *(double *)&v58;
      if ( BYTE1(v19) == 2 )
      {
        v59 = _mm_sub_pd(
                (__m128d)_mm_unpacklo_epi32((__m128i)(unsigned __int64)v43, (__m128i)xmmword_16C50),
                (__m128d)xmmword_16B90);
        v77 = v58;
        v59.m128d_f64[0] = pow(10.0, _mm_unpackhi_pd(v59, v59).m128d_f64[0] + v59.m128d_f64[0]);
        v60 = *(double *)&v58 * v59.m128d_f64[0];
        v73 = v59.m128d_f64[0];
        switch ( v71 )
        {
          case 0:
            goto LABEL_159;
          case 1:
            goto LABEL_152;
          case 2:
            if ( v60 < 0.0 )
              goto LABEL_152;
            goto LABEL_159;
          case 3:
            if ( v60 >= 0.0 )
LABEL_152:
              v61 = floor(v60);
            else
LABEL_159:
              v61 = ceil(v60);
            break;
          case 4:
            v61 = round(v60);
            break;
        }
        v132 = v61 / v73;
        v98 = &v132;
        v99 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v100 = v43;
        v101 = 0LL;
        v123 = 1LL;
        v124 = 1LL;
        v125 = 2LL;
        v126 = 0LL;
        v127 = 32LL;
        v128 = 3;
        v90 = anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
        v91 = 1LL;
        v92 = &v98;
        v93 = 2LL;
        v94 = &v123;
        v95 = 1LL;
        v62 = &v189;
      }
      else if ( v43 )
      {
        v74 = v19 & 0x1FF;
        v117 = &v97;
        v118 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v119 = &v74;
        v120 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
        v121 = v43;
        v122 = 0LL;
        v147 = (double **)(&dword_0 + 1);
        v148 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v149 = (_BYTE *)(&dword_0 + 2);
        v151 = 0LL;
        v152 = 32LL;
        v153 = 3;
        v154 = 2LL;
        v155 = 2LL;
        v156 = 1LL;
        v157 = 32LL;
        v158 = 3;
        v90 = "\x01";
        v91 = 2LL;
        v92 = &v117;
        v93 = 3LL;
        v94 = (__int64 *)&v147;
        v95 = 2LL;
        v62 = &v190;
      }
      else if ( fabs(*(double *)&v58) >= 10.0 )
      {
        v76 = v19 & 0x1FF;
        v109 = &v97;
        v110 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v111 = &v76;
        v112 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
        v79 = 0LL;
        v80 = (double **)(&dword_0 + 2);
        v82 = 0LL;
        v83 = 32LL;
        v84 = 3;
        v85 = 2LL;
        v86 = 2LL;
        v87 = 1LL;
        v88 = 32LL;
        v89 = 3;
        v90 = "\x01";
        v91 = 2LL;
        v92 = (double **)&v109;
        v93 = 2LL;
        v94 = (__int64 *)&v79;
        v95 = 2LL;
        v62 = v183;
      }
      else
      {
        v75 = v19 & 0x1FF;
        v105 = &v97;
        v106 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v107 = &v75;
        v108 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
        v133 = 0LL;
        v134 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v135 = (_QWORD *)(&dword_0 + 2);
        v137 = 0LL;
        v138 = (__int64 (__fastcall *)())&qword_20;
        v139 = 3;
        v140 = 2LL;
        v141 = 2LL;
        v142 = 1LL;
        v143 = 32LL;
        v144 = 3;
        v90 = "\x01";
        v91 = 2LL;
        v92 = &v105;
        v93 = 2LL;
        v94 = (__int64 *)&v133;
        v95 = 2LL;
        v62 = &v191;
      }
      alloc::fmt::format::format_inner(v62, &v90);
      v63 = *((_QWORD *)v62 + 2);
      v115 = *(_OWORD *)v62;
      v116 = v63;
      v64 = *v56;
      if ( *v56 == 0x8000000000000000LL )
      {
        v65 = &v115;
      }
      else
      {
        v131 = a4 + 136;
        v159[0] = &v115;
        v159[1] = <alloc::string::String as core::fmt::Display>::fmt;
        v159[2] = &v131;
        v159[3] = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v79 = "\x01";
        *((_QWORD *)&v79 + 1) = 2LL;
        v80 = (double **)v159;
        v81 = 2LL;
        v82 = 0LL;
        v65 = (__int128 *)v184;
        alloc::fmt::format::format_inner(v184, &v79);
      }
      v103 = *((_QWORD *)v65 + 2);
      v102 = *v65;
      if ( *(_QWORD *)a4 )
      {
        v66 = *(_QWORD *)(a4 + 8);
      }
      else
      {
        v66 = v96;
        if ( !v104 )
          v66 = *(_QWORD *)(a4 + 184);
      }
      if ( !v66 )
      {
        v67 = &v102;
        goto LABEL_179;
      }
      if ( v66 <= 0 )
      {
        v164[0] = &v102;
        v164[1] = <alloc::string::String as core::fmt::Display>::fmt;
        v164[2] = -v66;
        v164[3] = 0LL;
        v179[0] = 2LL;
        v179[2] = 1LL;
        v179[3] = 1LL;
        v179[4] = 0LL;
        v179[5] = 32LL;
        v180 = 0;
        *(_QWORD *)&v79 = anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
        *((_QWORD *)&v79 + 1) = 1LL;
        v80 = (double **)v164;
        v81 = 2LL;
        v82 = v179;
        v83 = 1LL;
        v67 = (__int128 *)v188;
        alloc::fmt::format::format_inner(v188, &v79);
        goto LABEL_179;
      }
      if ( (*(_BYTE *)(a4 + 81) & 1) == 0 )
      {
        v163[0] = &v102;
        v163[1] = <alloc::string::String as core::fmt::Display>::fmt;
        v163[2] = v66;
        v163[3] = 0LL;
        v177[0] = 2LL;
        v177[2] = 1LL;
        v177[3] = 1LL;
        v177[4] = 0LL;
        v177[5] = 32LL;
        v178 = 1;
        *(_QWORD *)&v79 = anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
        *((_QWORD *)&v79 + 1) = 1LL;
        v80 = (double **)v163;
        v81 = 2LL;
        v82 = v177;
        v83 = 1LL;
        v67 = (__int128 *)v187;
        alloc::fmt::format::format_inner(v187, &v79);
LABEL_179:
        v114 = *((_QWORD *)v67 + 2);
        v113 = *v67;
        goto LABEL_180;
      }
      v160[0] = &v102;
      v160[1] = <alloc::string::String as core::fmt::Display>::fmt;
      v160[2] = v66;
      v160[3] = 0LL;
      v171[0] = 2LL;
      v171[2] = 1LL;
      v171[3] = 1LL;
      v171[4] = 0LL;
      v171[5] = 48LL;
      v172 = 1;
      *(_QWORD *)&v79 = anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
      *((_QWORD *)&v79 + 1) = 1LL;
      v80 = (double **)v160;
      v81 = 2LL;
      v82 = v171;
      v83 = 1LL;
      v67 = &v169;
      alloc::fmt::format::format_inner(&v169, &v79);
      v130 = v170;
      v129 = v169;
      if ( !v104 )
        v96 = *(_QWORD *)(a4 + 184);
      if ( !v96 )
        goto LABEL_179;
      if ( v96 <= 0 )
      {
        v162[0] = &v129;
        v162[1] = <alloc::string::String as core::fmt::Display>::fmt;
        v162[2] = -v96;
        v162[3] = 0LL;
        v175[0] = 2LL;
        v175[2] = 1LL;
        v175[3] = 1LL;
        v175[4] = 0LL;
        v175[5] = 32LL;
        v176 = 0;
        v166[0] = anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
        v166[1] = 1LL;
        v166[4] = v175;
        v166[5] = 1LL;
        v166[2] = v162;
        v166[3] = 2LL;
        v68 = v186;
        alloc::fmt::format(v186, v166);
      }
      else
      {
        v161[0] = &v129;
        v161[1] = <alloc::string::String as core::fmt::Display>::fmt;
        v161[2] = v96;
        v161[3] = 0LL;
        v173[0] = 2LL;
        v173[2] = 1LL;
        v173[3] = 1LL;
        v173[4] = 0LL;
        v173[5] = 32LL;
        v174 = 1;
        v165[0] = anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
        v165[1] = 1LL;
        v165[4] = v173;
        v165[5] = 1LL;
        v165[2] = v161;
        v165[3] = 2LL;
        v68 = v185;
        alloc::fmt::format(v185, v165);
      }
      v114 = *((_QWORD *)v68 + 2);
      v113 = *(_OWORD *)v68;
      core::ptr::drop_in_place<alloc::string::String>(&v129);
LABEL_180:
      v167[0] = a4 + 32;
      v167[1] = <alloc::string::String as core::fmt::Display>::fmt;
      v167[2] = &v113;
      v167[3] = <alloc::string::String as core::fmt::Display>::fmt;
      v167[4] = a4 + 56;
      v167[5] = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v79 = &unk_24C00;
      *((_QWORD *)&v79 + 1) = 3LL;
      v80 = (double **)v167;
      v81 = 3LL;
      v82 = 0LL;
      alloc::fmt::format::format_inner(&v181, &v79);
      *(_QWORD *)(a1 + 24) = v182;
      *(_OWORD *)(a1 + 8) = v181;
      *(_QWORD *)a1 = 0LL;
      alloc::raw_vec::RawVec<T,A>::current_memory(&v79, &v113);
      if ( *((_QWORD *)&v79 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v114, v79, *((_QWORD *)&v79 + 1), v80);
      if ( v66 )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(&v79, &v102);
        if ( *((_QWORD *)&v79 + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v103, v79, *((_QWORD *)&v79 + 1), v80);
      }
      if ( v64 != 0x8000000000000000LL )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(&v79, &v115);
        if ( *((_QWORD *)&v79 + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v116, v79, *((_QWORD *)&v79 + 1), v80);
      }
      return a1;
    case 3:
LABEL_112:
      v43 = v72;
      goto LABEL_148;
  }
}
