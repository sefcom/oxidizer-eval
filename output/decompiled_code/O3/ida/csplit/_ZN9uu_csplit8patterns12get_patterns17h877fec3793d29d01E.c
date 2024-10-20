__int64 *__fastcall uu_csplit::patterns::get_patterns(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  __int64 v35; // r15
  __int64 v36; // r12
  __int64 v37; // rbp
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  __int64 *v40; // rbp
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // r14
  __int64 v45; // r12
  __int64 v46; // r13
  __int64 v47; // rbx
  __int128 v48; // kr30_16
  __int64 v49; // r14
  __int64 v50; // r15
  __int128 v51; // xmm0
  __m256i v53; // [rsp+10h] [rbp-248h] BYREF
  __int128 v54; // [rsp+30h] [rbp-228h]
  __int64 v55; // [rsp+40h] [rbp-218h]
  __int128 v56; // [rsp+48h] [rbp-210h] BYREF
  __int64 v57; // [rsp+58h] [rbp-200h]
  __m256i v58; // [rsp+60h] [rbp-1F8h] BYREF
  __int128 v59; // [rsp+80h] [rbp-1D8h]
  __int128 v60; // [rsp+90h] [rbp-1C8h] BYREF
  unsigned __int64 v61; // [rsp+A0h] [rbp-1B8h]
  __m256i v62; // [rsp+B0h] [rbp-1A8h] BYREF
  __int128 v63; // [rsp+D0h] [rbp-188h]
  __int128 v64; // [rsp+E0h] [rbp-178h] BYREF
  unsigned __int64 v65; // [rsp+F0h] [rbp-168h]
  __int128 v66; // [rsp+100h] [rbp-158h]
  __int64 v67; // [rsp+110h] [rbp-148h]
  __int64 *v68; // [rsp+120h] [rbp-138h]
  __int64 v69; // [rsp+128h] [rbp-130h]
  __int128 v70; // [rsp+130h] [rbp-128h]
  __int64 v71; // [rsp+140h] [rbp-118h]
  __int64 v72; // [rsp+148h] [rbp-110h]
  __int128 v73; // [rsp+150h] [rbp-108h]
  __int64 v74; // [rsp+160h] [rbp-F8h]
  __int128 v75; // [rsp+168h] [rbp-F0h] BYREF
  __int64 v76; // [rsp+178h] [rbp-E0h]
  __m256i v77; // [rsp+180h] [rbp-D8h] BYREF
  __int64 v78; // [rsp+1A8h] [rbp-B0h]
  __m256i v79; // [rsp+1B0h] [rbp-A8h] BYREF
  __int128 v80; // [rsp+1D0h] [rbp-88h]
  __int64 v81; // [rsp+1E0h] [rbp-78h]
  __int128 v82; // [rsp+1F0h] [rbp-68h]
  __int64 v83; // [rsp+200h] [rbp-58h]

  v4 = a2;
  if ( a3 )
  {
    if ( a3 > 0x249249249249249LL )
    {
      v5 = 0LL;
      goto LABEL_148;
    }
    v5 = 8LL;
    v6 = _rust_alloc(56 * a3, 8LL);
    if ( !v6 )
LABEL_148:
      alloc::raw_vec::handle_error(v5, 56 * a3);
  }
  else
  {
    v6 = 8LL;
  }
  *(_QWORD *)&v56 = a3;
  *((_QWORD *)&v56 + 1) = v6;
  v57 = 0LL;
  regex::regex::string::Regex::new(&v58, aPUptoPSkiptoPO, 56LL);
  v68 = a1;
  if ( !v58.m256i_i64[0] )
  {
    v62.m256i_i64[2] = v58.m256i_i64[3];
    *(_OWORD *)v62.m256i_i8 = *(_OWORD *)&v58.m256i_u64[1];
    core::result::unwrap_failed(aCalledResultUn_5, 43LL, &v62, &off_2756E8, &off_275788);
  }
  v79 = v58;
  regex::regex::string::Regex::new(&v58, aPTimesD, 23LL);
  if ( !v58.m256i_i64[0] )
  {
    v62.m256i_i64[2] = v58.m256i_i64[3];
    *(_OWORD *)v62.m256i_i8 = *(_OWORD *)&v58.m256i_u64[1];
    core::result::unwrap_failed(aCalledResultUn_5, 43LL, &v62, &off_2756E8, &off_2757A0);
  }
  v77 = v58;
  v7 = a2 + 24 * a3;
  v69 = 0LL;
  v78 = v7;
LABEL_33:
  if ( v4 != v7 )
  {
    v8 = v4 + 24;
    v9 = v4;
    if ( v4 + 24 == v7 )
    {
LABEL_35:
      v69 = 1LL;
      v4 = v7;
      v72 = 0LL;
      v11 = 1LL;
      v12 = 1LL;
      goto LABEL_36;
    }
    while ( 1 )
    {
      regex::regex::string::Regex::captures_at(&v62, &v77, *(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16));
      v10 = 1LL;
      v11 = 1LL;
      v12 = 1LL;
      if ( v62.m256i_i32[0] != 2 )
      {
        v61 = v65;
        v60 = v64;
        v59 = v63;
        v58 = v62;
        regex_automata::util::captures::Captures::get_group_by_name(&v53, &v58.m256i_u64[2], aTimes, 5LL);
        if ( v53.m256i_i64[0] )
        {
          if ( v53.m256i_i64[2] < (unsigned __int64)v53.m256i_i64[1] )
            goto LABEL_142;
          if ( v53.m256i_i64[1] )
          {
            if ( v53.m256i_i64[1] >= v61 )
            {
              if ( v53.m256i_i64[1] != v61 )
                goto LABEL_142;
            }
            else if ( *(char *)(*((_QWORD *)&v60 + 1) + v53.m256i_i64[1]) <= -65 )
            {
              goto LABEL_142;
            }
          }
          if ( v53.m256i_i64[2] )
          {
            if ( v53.m256i_i64[2] >= v61 )
            {
              if ( v53.m256i_i64[2] != v61 )
LABEL_142:
                core::str::slice_error_fail(*((_QWORD *)&v60 + 1), v61, v53.m256i_i64[1], v53.m256i_i64[2], &off_2757B8);
            }
            else if ( *(char *)(*((_QWORD *)&v60 + 1) + v53.m256i_i64[2]) <= -65 )
            {
              goto LABEL_142;
            }
          }
          core::num::<impl core::str::traits::FromStr for usize>::from_str(
            &v53,
            v53.m256i_i64[1] + *((_QWORD *)&v60 + 1),
            v53.m256i_i64[2] - v53.m256i_i64[1]);
          if ( v53.m256i_i8[0] )
          {
            LOBYTE(v75) = v53.m256i_i8[1];
            core::result::unwrap_failed(aCalledResultUn_5, 43LL, &v75, &unk_275708, &off_2757D0);
          }
          v11 = v53.m256i_i64[1] + 1;
          v12 = 1LL;
        }
        else
        {
          v12 = 0LL;
        }
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v60) )
          alloc::sync::Arc<T,A>::drop_slow(&v60);
        if ( v58.m256i_i64[2] )
          _rust_dealloc(v58.m256i_i64[3], 8 * v58.m256i_i64[2], 8LL);
        v10 = 0LL;
      }
      v69 = v10;
      v4 = v8 + 24;
      v72 = v8;
LABEL_36:
      v13 = *(_QWORD *)(v9 + 8);
      v14 = *(_QWORD *)(v9 + 16);
      regex::regex::string::Regex::captures_at(&v62, &v79, v13, v14);
      if ( v62.m256i_i32[0] != 2 )
        break;
      core::num::<impl core::str::traits::FromStr for usize>::from_str(&v53, v13, v14);
      if ( v53.m256i_i8[0] )
      {
        <alloc::string::String as core::clone::Clone>::clone(&v58, v9);
        v67 = v58.m256i_i64[2];
        v66 = *(_OWORD *)v58.m256i_i8;
        if ( v62.m256i_i32[0] != 2 )
        {
          if ( !_InterlockedDecrement64((volatile signed __int64 *)v64) )
            alloc::sync::Arc<T,A>::drop_slow(&v64);
          v41 = v62.m256i_i64[2];
          if ( v62.m256i_i64[2] )
          {
            v42 = v62.m256i_i64[3];
            goto LABEL_131;
          }
        }
        goto LABEL_132;
      }
      v15 = v53.m256i_i64[1];
      v16 = v57;
      if ( v57 == (_QWORD)v56 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v56);
      v17 = *((_QWORD *)&v56 + 1);
      v18 = 56 * v16;
      *(_DWORD *)(*((_QWORD *)&v56 + 1) + v18) = 0;
      *(_QWORD *)(v17 + v18 + 8) = v15;
      *(_QWORD *)(v17 + v18 + 16) = v12;
      *(_QWORD *)(v17 + v18 + 24) = v11;
      v57 = v16 + 1;
      if ( v62.m256i_i32[0] != 2 )
      {
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v64) )
          alloc::sync::Arc<T,A>::drop_slow(&v64);
        v19 = v62.m256i_i64[2];
        if ( v62.m256i_i64[2] )
        {
          v20 = v62.m256i_i64[3];
LABEL_95:
          _rust_dealloc(v20, 8 * v19, 8LL);
        }
      }
LABEL_96:
      v7 = v78;
      if ( !v69 )
        goto LABEL_33;
      v8 = v4;
      v9 = v72;
      if ( !v72 )
        goto LABEL_98;
      if ( v4 == v78 )
        goto LABEL_35;
    }
    v61 = v65;
    v60 = v64;
    v59 = v63;
    v58 = v62;
    regex_automata::util::captures::Captures::get_group_by_name(&v53, &v58.m256i_u64[2], aOffset, 6LL);
    if ( v53.m256i_i64[0] )
    {
      v21 = *((_QWORD *)&v60 + 1);
      v22 = v61;
      v24 = v53.m256i_i64[2];
      v23 = v53.m256i_i64[1];
      if ( v53.m256i_i64[2] < (unsigned __int64)v53.m256i_i64[1] )
        goto LABEL_141;
      if ( v53.m256i_i64[1] )
      {
        if ( v53.m256i_i64[1] >= v61 )
        {
          if ( v53.m256i_i64[1] != v61 )
            goto LABEL_141;
        }
        else if ( *(char *)(*((_QWORD *)&v60 + 1) + v53.m256i_i64[1]) <= -65 )
        {
          goto LABEL_141;
        }
      }
      if ( v53.m256i_i64[2] )
      {
        if ( v53.m256i_i64[2] >= v61 )
        {
          if ( v53.m256i_i64[2] != v61 )
            goto LABEL_141;
        }
        else if ( *(char *)(*((_QWORD *)&v60 + 1) + v53.m256i_i64[2]) <= -65 )
        {
          goto LABEL_141;
        }
      }
      v26 = core::num::<impl core::str::traits::FromStr for i32>::from_str(
              v53.m256i_i64[1] + *((_QWORD *)&v60 + 1),
              v53.m256i_i64[2] - v53.m256i_i64[1]);
      if ( (v26 & 1) != 0 )
      {
        v53.m256i_i8[0] = BYTE1(v26);
        core::result::unwrap_failed(aCalledResultUn_5, 43LL, &v53, &unk_275708, &off_2757E8);
      }
      v25 = HIDWORD(v26);
    }
    else
    {
      LODWORD(v25) = 0;
    }
    regex_automata::util::captures::Captures::get_group_by_name(&v53, &v58.m256i_u64[2], aUpto, 4LL);
    if ( v53.m256i_i64[0] )
    {
      v21 = *((_QWORD *)&v60 + 1);
      v22 = v61;
      v24 = v53.m256i_i64[2];
      v23 = v53.m256i_i64[1];
      if ( v53.m256i_i64[2] < (unsigned __int64)v53.m256i_i64[1] )
        goto LABEL_141;
      if ( v53.m256i_i64[1] )
      {
        if ( v53.m256i_i64[1] >= v61 )
        {
          if ( v53.m256i_i64[1] != v61 )
            goto LABEL_141;
        }
        else if ( *(char *)(*((_QWORD *)&v60 + 1) + v53.m256i_i64[1]) <= -65 )
        {
          goto LABEL_141;
        }
      }
      if ( v53.m256i_i64[2] )
      {
        if ( v53.m256i_i64[2] >= v61 )
        {
          if ( v53.m256i_i64[2] != v61 )
            goto LABEL_141;
        }
        else if ( *(char *)(*((_QWORD *)&v60 + 1) + v53.m256i_i64[2]) <= -65 )
        {
          goto LABEL_141;
        }
      }
      regex::regex::string::Regex::new(
        &v53,
        v53.m256i_i64[1] + *((_QWORD *)&v60 + 1),
        v53.m256i_i64[2] - v53.m256i_i64[1]);
      if ( !v53.m256i_i64[0] )
        goto LABEL_125;
      v27 = v53.m256i_i64[3];
      v80 = *(_OWORD *)v53.m256i_i8;
      v81 = v53.m256i_i64[2];
      v53.m256i_i64[3] = v53.m256i_i64[2];
      *(_OWORD *)&v53.m256i_u64[1] = *(_OWORD *)v53.m256i_i8;
      *(_QWORD *)&v54 = v27;
      v53.m256i_i32[1] = v25;
      *((_QWORD *)&v54 + 1) = v12;
      v55 = v11;
      v53.m256i_i32[0] = 1;
      v28 = v57;
      if ( v57 != (_QWORD)v56 )
        goto LABEL_90;
    }
    else
    {
      regex_automata::util::captures::Captures::get_group_by_name(&v53, &v58.m256i_u64[2], aSkipto, 6LL);
      if ( !v53.m256i_i64[0] )
      {
LABEL_91:
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v60) )
          alloc::sync::Arc<T,A>::drop_slow(&v60);
        v19 = v58.m256i_i64[2];
        if ( !v58.m256i_i64[2] )
          goto LABEL_96;
        v20 = v58.m256i_i64[3];
        goto LABEL_95;
      }
      v21 = *((_QWORD *)&v60 + 1);
      v22 = v61;
      v24 = v53.m256i_i64[2];
      v23 = v53.m256i_i64[1];
      if ( v53.m256i_i64[2] < (unsigned __int64)v53.m256i_i64[1] )
        goto LABEL_141;
      if ( v53.m256i_i64[1] )
      {
        if ( v53.m256i_i64[1] >= v61 )
        {
          if ( v53.m256i_i64[1] != v61 )
            goto LABEL_141;
        }
        else if ( *(char *)(*((_QWORD *)&v60 + 1) + v53.m256i_i64[1]) <= -65 )
        {
          goto LABEL_141;
        }
      }
      if ( v53.m256i_i64[2] )
      {
        if ( v53.m256i_i64[2] >= v61 )
        {
          if ( v53.m256i_i64[2] != v61 )
LABEL_141:
            core::str::slice_error_fail(v21, v22, v23, v24, &off_2757B8);
        }
        else if ( *(char *)(*((_QWORD *)&v60 + 1) + v53.m256i_i64[2]) <= -65 )
        {
          goto LABEL_141;
        }
      }
      regex::regex::string::Regex::new(
        &v53,
        v53.m256i_i64[1] + *((_QWORD *)&v60 + 1),
        v53.m256i_i64[2] - v53.m256i_i64[1]);
      if ( !v53.m256i_i64[0] )
      {
LABEL_125:
        v48 = *(_OWORD *)&v53.m256i_u64[1];
        <alloc::string::String as core::clone::Clone>::clone(&v75, v9);
        v74 = v76;
        v73 = v75;
        if ( 2LL * (_QWORD)v48 )
          _rust_dealloc(*((_QWORD *)&v48 + 1), v48, 1LL);
        v66 = v73;
        v67 = v74;
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v60) )
          alloc::sync::Arc<T,A>::drop_slow(&v60);
        v41 = v58.m256i_i64[2];
        if ( v58.m256i_i64[2] )
        {
          v42 = v58.m256i_i64[3];
LABEL_131:
          _rust_dealloc(v42, 8 * v41, 8LL);
        }
LABEL_132:
        core::ptr::drop_in_place<regex::regex::string::Regex>(&v77);
        core::ptr::drop_in_place<regex::regex::string::Regex>(&v79);
        v40 = v68;
        if ( v57 )
        {
          v49 = *((_QWORD *)&v56 + 1) + 64LL;
          v50 = 1 - v57;
          do
          {
            if ( *(_DWORD *)(v49 - 64) )
              core::ptr::drop_in_place<regex::regex::string::Regex>(v49 - 56);
            v49 += 56LL;
            ++v50;
          }
          while ( v50 != 1 );
        }
        if ( (_QWORD)v56 )
          _rust_dealloc(*((_QWORD *)&v56 + 1), 56 * v56, 8LL);
        v51 = v66;
        v82 = v66;
        v83 = v67;
        v40[3] = v67;
        *(_OWORD *)(v40 + 1) = v51;
        *v40 = 7LL;
        return v40;
      }
      v29 = v53.m256i_i64[3];
      v80 = *(_OWORD *)v53.m256i_i8;
      v81 = v53.m256i_i64[2];
      v53.m256i_i64[3] = v53.m256i_i64[2];
      *(_OWORD *)&v53.m256i_u64[1] = *(_OWORD *)v53.m256i_i8;
      *(_QWORD *)&v54 = v29;
      v53.m256i_i32[1] = v25;
      *((_QWORD *)&v54 + 1) = v12;
      v55 = v11;
      v53.m256i_i32[0] = 2;
      v28 = v57;
      if ( v57 != (_QWORD)v56 )
      {
LABEL_90:
        v30 = *((_QWORD *)&v56 + 1);
        v31 = 56 * v28;
        v32 = *(_OWORD *)v53.m256i_i8;
        v33 = *(_OWORD *)&v53.m256i_u64[2];
        v34 = v54;
        *(_QWORD *)(*((_QWORD *)&v56 + 1) + v31 + 48) = v55;
        *(_OWORD *)(v30 + v31 + 32) = v34;
        *(_OWORD *)(v30 + v31 + 16) = v33;
        *(_OWORD *)(v30 + v31) = v32;
        v57 = v28 + 1;
        goto LABEL_91;
      }
    }
    alloc::raw_vec::RawVec<T,A>::grow_one(&v56);
    goto LABEL_90;
  }
LABEL_98:
  v67 = v57;
  v66 = v56;
  core::ptr::drop_in_place<regex::regex::string::Regex>(&v77);
  core::ptr::drop_in_place<regex::regex::string::Regex>(&v79);
  v83 = v67;
  v71 = v67;
  v70 = v66;
  if ( !v67 )
  {
LABEL_109:
    v40 = v68;
    v68[3] = v71;
    *(_OWORD *)(v40 + 1) = v70;
    *v40 = 12LL;
    return v40;
  }
  v35 = *((_QWORD *)&v70 + 1);
  v36 = 56 * v67;
  v37 = 0LL;
  v38 = 0LL;
  while ( *(_DWORD *)(v35 + v37) )
  {
LABEL_100:
    v37 += 56LL;
    if ( v36 == v37 )
      goto LABEL_109;
  }
  v39 = *(_QWORD *)(v35 + v37 + 8);
  if ( !v39 )
  {
    v43 = 5LL;
    v39 = v38;
    goto LABEL_118;
  }
  if ( v39 == v38 )
  {
    v77.m256i_i64[0] = v38;
    if ( uucore::UTIL_NAME != 2 )
      once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    *(_OWORD *)v62.m256i_i8 = xmmword_2B2C00;
    v53.m256i_i64[0] = (__int64)&v62;
    v53.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v58.m256i_i64[0] = (__int64)&unk_275800;
    v58.m256i_i64[1] = 2LL;
    *(_QWORD *)&v59 = 0LL;
    v58.m256i_i64[2] = (__int64)&v53;
    v58.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v58);
    v62.m256i_i64[0] = (__int64)&v77;
    v62.m256i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v58.m256i_i64[0] = (__int64)&off_275820;
    v58.m256i_i64[1] = 2LL;
    *(_QWORD *)&v59 = 0LL;
    v58.m256i_i64[2] = (__int64)&v62;
    v58.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v58);
    v38 = v77.m256i_i64[0];
    goto LABEL_100;
  }
  if ( v39 >= v38 )
  {
    v38 = *(_QWORD *)(v35 + v37 + 8);
    goto LABEL_100;
  }
  v43 = 6LL;
LABEL_118:
  v40 = v68;
  *v68 = v43;
  v40[1] = v39;
  v40[2] = v38;
  v44 = *((_QWORD *)&v70 + 1);
  if ( v71 )
  {
    v45 = 1 - v71;
    v46 = -64LL;
    v47 = 0LL;
    do
    {
      if ( *(_DWORD *)(v44 + v47) )
        core::ptr::drop_in_place<regex::regex::string::Regex>(v44 + v47 + 8);
      v46 -= 56LL;
      ++v45;
      v47 += 56LL;
    }
    while ( v45 != 1 );
  }
  if ( (_QWORD)v70 )
    _rust_dealloc(v44, 56 * v70, 8LL);
  return v40;
}
