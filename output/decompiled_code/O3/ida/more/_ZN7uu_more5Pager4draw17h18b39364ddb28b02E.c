__int64 __fastcall uu_more::Pager::draw(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  __int64 v7; // r12
  unsigned __int64 v8; // rax
  _QWORD *v9; // rcx
  unsigned __int64 v10; // r15
  bool v11; // zf
  __int64 v12; // rbx
  bool v13; // r13
  _QWORD *v14; // r12
  unsigned __int64 v15; // rbp
  _QWORD *v16; // rbx
  __int64 v17; // rax
  _QWORD *v18; // rbx
  _QWORD *v19; // r15
  __int64 v20; // r14
  _QWORD *v21; // r12
  __int64 v22; // rsi
  __int128 *v23; // r13
  __int64 (__fastcall *v24)(); // rbp
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  bool v27; // cf
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rcx
  __m128i si128; // xmm2
  __m128d v31; // xmm1
  double v32; // xmm0_8
  __m128d v33; // xmm1
  __int128 *v34; // rax
  __int64 (__fastcall *v35)(); // rax
  __int64 v36; // rcx
  char v37; // bp
  __int64 v38; // rax
  __int64 result; // rax
  __int128 v40; // [rsp+0h] [rbp-158h] BYREF
  __int64 v41; // [rsp+10h] [rbp-148h]
  char **v42; // [rsp+18h] [rbp-140h] BYREF
  __int64 (__fastcall *v43)(); // [rsp+20h] [rbp-138h]
  __int128 *v44; // [rsp+28h] [rbp-130h]
  __int64 (__fastcall *v45)(); // [rsp+30h] [rbp-128h]
  void *v46; // [rsp+38h] [rbp-120h]
  __int64 (__fastcall *v47)(); // [rsp+40h] [rbp-118h]
  __int64 v48; // [rsp+48h] [rbp-110h]
  __int128 v49; // [rsp+50h] [rbp-108h] BYREF
  __int64 v50; // [rsp+60h] [rbp-F8h]
  __int128 *v51; // [rsp+70h] [rbp-E8h] BYREF
  __int64 (__fastcall *v52)(); // [rsp+78h] [rbp-E0h]
  char ***v53; // [rsp+80h] [rbp-D8h]
  __int64 (__fastcall *v54)(); // [rsp+88h] [rbp-D0h]
  __int64 v55; // [rsp+90h] [rbp-C8h]
  _QWORD *v56; // [rsp+A0h] [rbp-B8h]
  __int64 v57; // [rsp+A8h] [rbp-B0h]
  __int64 v58; // [rsp+B0h] [rbp-A8h]
  int v59; // [rsp+B8h] [rbp-A0h]
  int v60; // [rsp+BCh] [rbp-9Ch] BYREF
  __int128 v61; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-88h]
  unsigned __int64 v63; // [rsp+D8h] [rbp-80h]
  __int128 v64; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v65; // [rsp+F0h] [rbp-68h]
  __int128 v66; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v67; // [rsp+108h] [rbp-50h]
  __int128 v68; // [rsp+110h] [rbp-48h] BYREF
  __int64 v69; // [rsp+120h] [rbp-38h]

  v4 = a1;
  v58 = a2;
  v5 = <std::io::stdio::Stdout as std::io::Write>::write_all(
         a2,
         anon_d58bd02a723bd021606085005bc52729_42_llvm_16558445346262642515,
         4LL);
  if ( v5 || (v5 = <std::io::stdio::Stdout as std::io::Write>::flush(v58)) != 0 )
  {
    v42 = (char **)v5;
    core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v42, &off_117D00, &off_117EF8);
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)&v40 = 0LL;
  *((_QWORD *)&v40 + 1) = 8LL;
  v41 = 0LL;
  v6 = *(unsigned __int16 *)(a1 + 64);
  if ( *(_WORD *)(a1 + 64) )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)(a1 + 16);
    v9 = (_QWORD *)(v7 + 24 * v8);
    v10 = *(_QWORD *)(a1 + 24);
    v11 = *(_BYTE *)(a1 + 67) == 0;
    v57 = a1;
    v59 = a3;
    if ( !v11 )
    {
      if ( v10 )
      {
        if ( v8 > v10 )
        {
          v7 += 24 * v10;
          goto LABEL_12;
        }
      }
      else if ( v8 )
      {
LABEL_12:
        v56 = v9;
        v12 = *(_QWORD *)(v7 + 16);
        alloc::raw_vec::RawVec<T,A>::grow_one(&v40);
        **((_QWORD **)&v40 + 1) = v7;
        v41 = 1LL;
        if ( (_DWORD)v6 != 1 )
        {
          v13 = v12 == 0;
          v14 = (_QWORD *)(v7 + 24);
          v15 = 1LL;
          v48 = 0LL;
          v16 = v56;
          while ( v14 != v16 )
          {
            if ( v14[2] )
            {
              if ( v13 )
                v13 = 0;
              if ( v15 == (_QWORD)v40 )
                alloc::raw_vec::RawVec<T,A>::grow_one(&v40);
              *(_QWORD *)(*((_QWORD *)&v40 + 1) + 8 * v15++) = v14;
              v41 = v15;
            }
            else if ( v13 )
            {
              v17 = v57;
              *(_QWORD *)(v57 + 56) = ++v48;
              *(_QWORD *)(v17 + 24) = ++v10;
            }
            else
            {
              if ( v15 == (_QWORD)v40 )
                alloc::raw_vec::RawVec<T,A>::grow_one(&v40);
              *(_QWORD *)(*((_QWORD *)&v40 + 1) + 8 * v15++) = v14;
              v41 = v15;
              v13 = 1;
            }
            v14 += 3;
            if ( v15 >= v6 )
              goto LABEL_38;
          }
LABEL_36:
          v4 = v57;
LABEL_37:
          *(_QWORD *)(v4 + 24) = *(_QWORD *)(v4 + 48);
LABEL_38:
          v19 = (_QWORD *)*((_QWORD *)&v40 + 1);
          v22 = v40;
          if ( !v15 )
            goto LABEL_46;
          v48 = v40;
          v63 = v6;
          v20 = *((_QWORD *)&v40 + 1) + 8 * v15;
LABEL_40:
          v56 = v19;
          do
          {
            *(_QWORD *)&v66 = *v19;
            *(_QWORD *)&v49 = &v66;
            *((_QWORD *)&v49 + 1) = <&T as core::fmt::Display>::fmt;
            v42 = (char **)&off_117F10;
            v43 = (__int64 (__fastcall *)())(&dword_0 + 2);
            v46 = 0LL;
            v44 = &v49;
            v45 = (__int64 (__fastcall *)())(&dword_0 + 1);
            alloc::fmt::format::format_inner(&v51, &v42);
            v23 = v51;
            v24 = v52;
            v25 = <std::io::stdio::Stdout as std::io::Write>::write_all(v58, v52, v53);
            if ( v25 )
            {
              v42 = (char **)v25;
              core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v42, &off_117D00, &off_117F30);
            }
            if ( v23 )
              _rust_dealloc(v24, v23, 1LL);
            ++v19;
          }
          while ( v19 != (_QWORD *)v20 );
          v6 = v63;
          v22 = v48;
          v19 = v56;
LABEL_46:
          a3 = v59;
          v4 = v57;
          if ( v22 )
            _rust_dealloc(v19, 8 * v22, 8LL);
          goto LABEL_48;
        }
        goto LABEL_29;
      }
LABEL_30:
      v15 = 0LL;
      goto LABEL_37;
    }
    if ( v10 )
    {
      if ( v8 <= v10 )
        goto LABEL_30;
      v7 += 24 * v10;
    }
    else if ( !v8 )
    {
      goto LABEL_30;
    }
    v18 = v9;
    alloc::raw_vec::RawVec<T,A>::grow_one(&v40);
    **((_QWORD **)&v40 + 1) = v7;
    v41 = 1LL;
    if ( (_DWORD)v6 != 1 )
    {
      v21 = (_QWORD *)(v7 + 24);
      v15 = 1LL;
      while ( v21 != v18 )
      {
        if ( v15 == (_QWORD)v40 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v40);
        *(_QWORD *)(*((_QWORD *)&v40 + 1) + 8 * v15++) = v21;
        v41 = v15;
        v21 += 3;
        if ( v6 == v15 )
        {
          v15 = v6;
          goto LABEL_38;
        }
      }
      goto LABEL_36;
    }
LABEL_29:
    v63 = v6;
    v19 = (_QWORD *)*((_QWORD *)&v40 + 1);
    v48 = v40;
    v20 = *((_QWORD *)&v40 + 1) + 8LL;
    goto LABEL_40;
  }
LABEL_48:
  v26 = *(_QWORD *)(v4 + 48);
  v27 = __CFADD__(*(_QWORD *)(v4 + 24), v6);
  v28 = *(_QWORD *)(v4 + 24) + v6;
  v29 = -1LL;
  if ( !v27 )
    v29 = v28;
  if ( v26 <= v29 )
  {
    v35 = *(__int64 (__fastcall **)())(v4 + 32);
    v36 = 1LL;
    if ( v35 )
    {
      v36 = *(_QWORD *)(v4 + 32);
      v35 = *(__int64 (__fastcall **)())(v4 + 40);
    }
    v51 = (__int128 *)v36;
    v52 = v35;
    *(_QWORD *)&v40 = &v51;
    *((_QWORD *)&v40 + 1) = <&T as core::fmt::Display>::fmt;
    v42 = &off_117F68;
    v43 = (__int64 (__fastcall *)())(&dword_0 + 1);
    v46 = 0LL;
    v34 = &v40;
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_14BA0);
    v31 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v29, si128), (__m128d)xmmword_14B20);
    v32 = _mm_unpackhi_pd(v31, v31).m128d_f64[0] + v31.m128d_f64[0];
    v33 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v26, si128), (__m128d)xmmword_14B20);
    LOWORD(v40) = (int)fmin(
                         65535.0,
                         fmax(0.0, round(v32 / (_mm_unpackhi_pd(v33, v33).m128d_f64[0] + v33.m128d_f64[0]) * 100.0)));
    v51 = &v40;
    v52 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v42 = (char **)&unk_117F48;
    v43 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v46 = 0LL;
    v34 = (__int128 *)&v51;
  }
  v44 = v34;
  v45 = (__int64 (__fastcall *)())(&dword_0 + 1);
  alloc::fmt::format::format_inner(&v68, &v42);
  v65 = v69;
  v64 = v68;
  v51 = &v64;
  v52 = <alloc::string::String as core::fmt::Display>::fmt;
  v42 = &off_117F78;
  v43 = (__int64 (__fastcall *)())(&dword_0 + 2);
  v46 = 0LL;
  v44 = (__int128 *)&v51;
  v45 = (__int64 (__fastcall *)())(&dword_0 + 1);
  alloc::fmt::format::format_inner(&v66, &v42);
  v61 = v66;
  v62 = v67;
  if ( *(_BYTE *)(v4 + 66) )
  {
    if ( a3 == (_DWORD)&loc_110000 )
    {
      v51 = &v61;
      v52 = <alloc::string::String as core::fmt::Display>::fmt;
      v42 = (char **)&unk_117FA8;
      v43 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v46 = 0LL;
      v44 = (__int128 *)&v51;
      v45 = (__int64 (__fastcall *)())(&dword_0 + 1);
    }
    else
    {
      v60 = a3;
      v51 = &v61;
      v52 = <alloc::string::String as core::fmt::Display>::fmt;
      v53 = (char ***)&v60;
      v54 = <char as core::fmt::Display>::fmt;
      v42 = (char **)&unk_117FC8;
      v43 = (__int64 (__fastcall *)())(&dword_0 + 3);
      v46 = 0LL;
      v44 = (__int128 *)&v51;
      v45 = (__int64 (__fastcall *)())(&dword_0 + 2);
    }
    alloc::fmt::format::format_inner(&v40, &v42);
  }
  else
  {
    if ( a3 == (_DWORD)&loc_110000 )
    {
      v50 = v67;
      v49 = v66;
      v37 = 1;
      goto LABEL_64;
    }
    v51 = &v61;
    v52 = <alloc::string::String as core::fmt::Display>::fmt;
    v53 = (char ***)&off_117F98;
    v54 = <&T as core::fmt::Display>::fmt;
    v42 = (char **)&unk_19990;
    v43 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v46 = 0LL;
    v44 = (__int128 *)&v51;
    v45 = (__int64 (__fastcall *)())(&dword_0 + 2);
    alloc::fmt::format::format_inner(&v40, &v42);
  }
  v49 = v40;
  v50 = v41;
  v37 = 0;
LABEL_64:
  v42 = (char **)&unk_1F1E9;
  v43 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
  v44 = &v49;
  v45 = <alloc::string::String as core::fmt::Display>::fmt;
  v46 = &unk_1F1EA;
  v47 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
  v51 = (__int128 *)&off_117FF8;
  v52 = (__int64 (__fastcall *)())(&dword_0 + 3);
  v55 = 0LL;
  v53 = &v42;
  v54 = (__int64 (__fastcall *)())(&dword_0 + 3);
  v38 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(v58, &v51);
  if ( v38 )
  {
    v51 = (__int128 *)v38;
    core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v51, &off_117D00, &off_118028);
  }
  if ( (_QWORD)v49 )
    _rust_dealloc(*((_QWORD *)&v49 + 1), v49, 1LL);
  if ( !v37 && (_QWORD)v61 )
    _rust_dealloc(*((_QWORD *)&v61 + 1), v61, 1LL);
  if ( (_QWORD)v64 )
    _rust_dealloc(*((_QWORD *)&v64 + 1), v64, 1LL);
  result = <std::io::stdio::Stdout as std::io::Write>::flush(v58);
  if ( result )
  {
    v42 = (char **)result;
    core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v42, &off_117D00, &off_117EE0);
  }
  return result;
}
