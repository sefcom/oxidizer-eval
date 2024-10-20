__int64 __fastcall uu_df::table::RowFormatter::get_values(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r9
  double *v7; // r10
  double *v8; // r11
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  double *v11; // rcx
  double *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r15
  __int64 v15; // rax
  _BYTE *v16; // r14
  __int64 v17; // rbx
  _BYTE *v18; // rax
  __int64 v19; // r15
  __int64 v20; // rbx
  _BYTE *v21; // rax
  __int128 *v22; // rsi
  unsigned __int64 v23; // rsi
  unsigned __int8 v24; // al
  __m128i si128; // xmm3
  __m128d v26; // xmm2
  __m128d v27; // xmm1
  __int64 v28; // rax
  __int64 v30; // rax
  double v31; // rsi
  __int64 (__fastcall *v32)(_QWORD, _QWORD); // rdx
  unsigned __int8 v33; // al
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rcx
  __int64 result; // rax
  char v39; // [rsp+Fh] [rbp-189h]
  __int128 v40; // [rsp+10h] [rbp-188h] BYREF
  double *v41; // [rsp+20h] [rbp-178h]
  double v42; // [rsp+30h] [rbp-168h] BYREF
  __int64 (__fastcall *v43)(_QWORD, _QWORD); // [rsp+38h] [rbp-160h]
  __int64 v44; // [rsp+40h] [rbp-158h] BYREF
  __int64 v45; // [rsp+48h] [rbp-150h]
  __int64 v46; // [rsp+50h] [rbp-148h]
  double v47; // [rsp+58h] [rbp-140h] BYREF
  __int128 v48; // [rsp+60h] [rbp-138h] BYREF
  double *v49; // [rsp+70h] [rbp-128h]
  __int64 v50; // [rsp+78h] [rbp-120h]
  __int128 *v51; // [rsp+80h] [rbp-118h]
  __int64 v52; // [rsp+88h] [rbp-110h]
  __int128 v53; // [rsp+90h] [rbp-108h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-F8h]
  __int128 *v55; // [rsp+B0h] [rbp-E8h]
  __int64 (__fastcall **v56)(); // [rsp+B8h] [rbp-E0h]
  __int64 v57; // [rsp+C0h] [rbp-D8h]
  char v58; // [rsp+C8h] [rbp-D0h]
  __int64 v59; // [rsp+D8h] [rbp-C0h]
  __int128 *v60; // [rsp+E0h] [rbp-B8h]
  __int64 v61; // [rsp+E8h] [rbp-B0h]
  _QWORD *v62; // [rsp+F0h] [rbp-A8h]
  _QWORD *v63; // [rsp+F8h] [rbp-A0h]
  _QWORD *v64; // [rsp+100h] [rbp-98h]
  double *v65; // [rsp+108h] [rbp-90h]
  double *v66; // [rsp+110h] [rbp-88h]
  double *v67; // [rsp+118h] [rbp-80h]
  _QWORD *v68; // [rsp+120h] [rbp-78h]
  __int64 v69; // [rsp+128h] [rbp-70h]
  __int64 v70; // [rsp+130h] [rbp-68h]
  _QWORD *v71; // [rsp+138h] [rbp-60h]
  double *v72; // [rsp+140h] [rbp-58h]
  double *v73; // [rsp+148h] [rbp-50h]
  _QWORD *v74; // [rsp+150h] [rbp-48h]
  __int64 v75; // [rsp+158h] [rbp-40h]
  __int64 v76; // [rsp+160h] [rbp-38h]

  v62 = a1;
  v44 = 0LL;
  v45 = 8LL;
  v46 = 0LL;
  v2 = a2[1];
  v3 = *(_QWORD *)(v2 + 16);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v2 + 8);
    v76 = v4 + v3;
    v5 = *a2;
    v6 = *a2 + 104;
    v60 = (__int128 *)(*a2 + 152);
    v7 = (double *)(v5 + 24);
    v67 = (double *)(v5 + 64);
    v66 = (double *)(v5 + 48);
    v8 = (double *)(v5 + 32);
    v39 = *((_BYTE *)a2 + 16);
    v59 = v5 + 128;
    v65 = (double *)(v5 + 8);
    v64 = (_QWORD *)(v5 + 192);
    v63 = (_QWORD *)(v5 + 184);
    v9 = (_QWORD *)(v5 + 176);
    v68 = (_QWORD *)v5;
    v70 = v5 + 80;
    v69 = v4;
    v61 = v4 + 1;
    v71 = v9;
    v74 = (_QWORD *)(v5 + 16);
    v10 = (_QWORD *)(v5 + 16);
    v73 = v7;
    v11 = v7;
    v72 = v8;
    v12 = v8;
    v75 = v6;
    v13 = v6;
    switch ( (unsigned __int64)v9 )
    {
      case 0uLL:
        while ( 2 )
        {
          if ( v39 )
          {
            v14 = 5LL;
            v15 = _rust_alloc(5LL, 1LL);
            if ( !v15 )
LABEL_44:
              alloc::raw_vec::handle_error(1LL, v14);
            v16 = (_BYTE *)v15;
            *(_BYTE *)(v15 + 4) = 108;
            *(_DWORD *)v15 = 1635020660;
            *(_QWORD *)&v40 = 5LL;
LABEL_32:
            v17 = 5LL;
            v19 = 5LL;
          }
          else
          {
            v13 = v70;
LABEL_29:
            <alloc::string::String as core::clone::Clone>::clone(&v40, v13);
LABEL_39:
            v16 = (_BYTE *)*((_QWORD *)&v40 + 1);
            v19 = v40;
            v17 = (__int64)v41;
          }
LABEL_40:
          v34 = v46;
          if ( v46 == v44 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v44);
          v35 = v45;
          v36 = 3 * v34;
          *(_QWORD *)(v45 + 8 * v36) = v19;
          *(_QWORD *)(v35 + 8 * v36 + 8) = v16;
          *(_QWORD *)(v35 + 8 * v36 + 16) = v17;
          v46 = v34 + 1;
          if ( v61 != v76 )
          {
            ++v61;
            v9 = v71;
            v10 = v74;
            v11 = v73;
            v12 = v72;
            v13 = v75;
            switch ( (unsigned __int64)v71 )
            {
              case 0uLL:
                continue;
              case 1uLL:
                goto LABEL_20;
              case 2uLL:
                goto LABEL_18;
              case 3uLL:
                goto LABEL_19;
              case 4uLL:
                goto LABEL_8;
              case 5uLL:
                goto LABEL_24;
              case 6uLL:
                goto LABEL_35;
              case 7uLL:
                goto LABEL_33;
              case 8uLL:
                goto LABEL_34;
              case 9uLL:
                goto LABEL_9;
              case 0xAuLL:
                goto LABEL_13;
              case 0xBuLL:
                goto LABEL_29;
            }
          }
          break;
        }
        break;
      case 1uLL:
        goto LABEL_20;
      case 2uLL:
LABEL_18:
        v9 = v63;
        goto LABEL_20;
      case 3uLL:
LABEL_19:
        v9 = v64;
LABEL_20:
        v23 = *v9;
        v24 = *(_BYTE *)(v2 + 84);
        if ( v24 != 2 )
        {
          uu_df::blocks::to_magnitude_and_suffix(&v40, v23, 0LL, v24);
          goto LABEL_39;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_A980);
        v26 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v23, si128), (__m128d)xmmword_A8F0);
        v27 = _mm_sub_pd(
                (__m128d)_mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)(v2 + 72)), si128),
                (__m128d)xmmword_A8F0);
        v42 = ceil(
                (_mm_unpackhi_pd(v26, v26).m128d_f64[0] + v26.m128d_f64[0])
              / (_mm_unpackhi_pd(v27, v27).m128d_f64[0] + v27.m128d_f64[0]));
        *(_QWORD *)&v48 = 0LL;
        *((_QWORD *)&v48 + 1) = 1LL;
        v49 = 0LL;
        v57 = 32LL;
        v58 = 3;
        *(_QWORD *)&v53 = 0LL;
        v54 = 0LL;
        v55 = &v48;
        v56 = &off_100090;
        if ( (unsigned __int8)core::fmt::float::<impl core::fmt::Display for f64>::fmt(&v42, &v53) )
          core::result::unwrap_failed(aADisplayImplem_2, 55LL, &v47, &unk_1000D8, &off_1000C0);
        goto LABEL_37;
      case 4uLL:
LABEL_8:
        v10 = v68;
        v11 = v65;
        goto LABEL_9;
      case 5uLL:
LABEL_24:
        if ( !v39 )
          goto LABEL_28;
        v28 = 0LL;
        while ( v3 != v28 )
        {
          if ( *(_BYTE *)(v69 + v28++) == 0 )
          {
LABEL_28:
            v13 = v59;
            goto LABEL_29;
          }
        }
        v14 = 5LL;
        v30 = _rust_alloc(5LL, 1LL);
        if ( !v30 )
          goto LABEL_44;
        v16 = (_BYTE *)v30;
        *(_BYTE *)(v30 + 4) = 108;
        *(_DWORD *)v30 = 1635020660;
        *(_QWORD *)&v40 = 5LL;
        *((_QWORD *)&v40 + 1) = v30;
        goto LABEL_32;
      case 6uLL:
        goto LABEL_35;
      case 7uLL:
LABEL_33:
        v12 = v66;
        goto LABEL_35;
      case 8uLL:
LABEL_34:
        v12 = v67;
LABEL_35:
        v31 = *v12;
        v32 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v12 + 1);
        v43 = v32;
        v42 = v31;
        v33 = *(_BYTE *)(v2 + 84);
        if ( v33 == 2 )
        {
          *(_QWORD *)&v48 = 0LL;
          *((_QWORD *)&v48 + 1) = 1LL;
          v49 = 0LL;
          v57 = 32LL;
          v58 = 3;
          *(_QWORD *)&v53 = 0LL;
          v54 = 0LL;
          v55 = &v48;
          v56 = &off_100090;
          if ( (unsigned __int8)core::fmt::num::<impl core::fmt::Display for u128>::fmt(&v42, &v53, v32, v11) )
            core::result::unwrap_failed(aADisplayImplem_2, 55LL, &v47, &unk_1000D8, &off_1000C0);
LABEL_37:
          v40 = v48;
          v41 = v49;
        }
        else
        {
          uu_df::blocks::to_magnitude_and_suffix(&v40, *(_QWORD *)&v31, v32, v33);
        }
        goto LABEL_39;
      case 9uLL:
LABEL_9:
        if ( *v10 )
        {
          v47 = ceil(*v11 * 100.0);
          v42 = COERCE_DOUBLE(&v47);
          v43 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
          v53 = 0LL;
          v54 = 2LL;
          v55 = 0LL;
          v56 = (__int64 (__fastcall **)())&qword_20;
          LOBYTE(v57) = 3;
          *(_QWORD *)&v48 = &unk_1000F8;
          *((_QWORD *)&v48 + 1) = 2LL;
          v51 = &v53;
          v52 = 1LL;
          v49 = &v42;
          v50 = 1LL;
          alloc::fmt::format::format_inner(&v40, &v48);
          goto LABEL_39;
        }
        v17 = 1LL;
        v18 = (_BYTE *)_rust_alloc(1LL, 1LL);
        if ( !v18 )
          alloc::raw_vec::handle_error(1LL, 1LL);
        v16 = v18;
        *v18 = 45;
        *(_QWORD *)&v40 = 1LL;
        *((_QWORD *)&v40 + 1) = v18;
        v19 = 1LL;
        goto LABEL_40;
      case 0xAuLL:
LABEL_13:
        v20 = *(_QWORD *)v60;
        v14 = 1LL;
        v21 = (_BYTE *)_rust_alloc(1LL, 1LL);
        if ( !v21 )
          goto LABEL_44;
        v22 = &v53;
        if ( v20 != 0x8000000000000000LL )
          v22 = v60;
        *v21 = 45;
        *(_QWORD *)&v53 = 1LL;
        *((_QWORD *)&v53 + 1) = v21;
        v54 = 1LL;
        <alloc::string::String as core::clone::Clone>::clone(&v40, v22);
        if ( (_QWORD)v53 )
          _rust_dealloc(*((_QWORD *)&v53 + 1), v53, 1LL);
        goto LABEL_39;
      case 0xBuLL:
        goto LABEL_29;
    }
  }
  v37 = v62;
  v62[2] = v46;
  *v37 = v44;
  result = v45;
  v37[1] = v45;
  return result;
}
