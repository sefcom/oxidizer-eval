        __int64 *a9)
{
  signed __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  unsigned __int64 v15; // rdi
  __int128 *v16; // rdi
  char v17; // bl
  __int64 v18; // rdx
  char v19; // bp
  __int64 result; // rax
  __int64 v21; // rax
  double v22; // xmm0_8
  __int64 v23; // rbx
  signed __int64 v24; // rbx
  __int64 (__fastcall *v25)(); // rbp
  char *v26; // rax
  const void *v27; // r14
  signed __int64 v28; // r15
  size_t v29; // r13
  signed __int64 v30; // rbp
  __int64 v31; // r15
  __int64 (__fastcall *v32)(); // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  signed __int64 v36; // rax
  signed __int64 v37; // rax
  signed __int64 v38; // rax
  signed __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rbx
  __int64 v42; // rbx
  __int64 v43; // rdi
  bool v44; // zf
  __int64 v45; // rbx
  __int64 v46; // rdi
  char v47; // [rsp+7h] [rbp-1D1h]
  __int64 v48; // [rsp+8h] [rbp-1D0h] BYREF
  __int128 v49; // [rsp+10h] [rbp-1C8h] BYREF
  __int128 v50; // [rsp+20h] [rbp-1B8h]
  __int128 *v51; // [rsp+30h] [rbp-1A8h]
  __int64 v52; // [rsp+38h] [rbp-1A0h]
  __int128 v53; // [rsp+40h] [rbp-198h] BYREF
  __int128 v54; // [rsp+50h] [rbp-188h]
  __int128 *v55; // [rsp+60h] [rbp-178h]
  __int64 v56; // [rsp+68h] [rbp-170h]
  char v57; // [rsp+70h] [rbp-168h]
  __int64 (__fastcall *v58)(); // [rsp+78h] [rbp-160h]
  __int128 v59; // [rsp+80h] [rbp-158h] BYREF
  __int128 v60; // [rsp+90h] [rbp-148h]
  __int128 *v61; // [rsp+A0h] [rbp-138h]
  __int128 *v62; // [rsp+B0h] [rbp-128h] BYREF
  __int64 (__fastcall *v63)(); // [rsp+B8h] [rbp-120h]
  __int128 v64; // [rsp+C0h] [rbp-118h]
  __int128 *v65; // [rsp+D0h] [rbp-108h]
  __int64 v66; // [rsp+D8h] [rbp-100h]
  __int128 v67; // [rsp+E0h] [rbp-F8h] BYREF
  __int128 *v68; // [rsp+F0h] [rbp-E8h]
  unsigned __int64 v69; // [rsp+F8h] [rbp-E0h]
  void *src[2]; // [rsp+100h] [rbp-D8h] BYREF
  __int128 v71; // [rsp+110h] [rbp-C8h]
  __int128 *v72; // [rsp+120h] [rbp-B8h]
  __int128 *v73; // [rsp+128h] [rbp-B0h]
  __int128 *v74; // [rsp+130h] [rbp-A8h]
  __int64 v75; // [rsp+138h] [rbp-A0h]
  unsigned __int64 v76; // [rsp+140h] [rbp-98h]
  __int128 *v77; // [rsp+148h] [rbp-90h] BYREF
  _OWORD v78[2]; // [rsp+150h] [rbp-88h] BYREF
  __int64 v79; // [rsp+170h] [rbp-68h]
  __int64 v80; // [rsp+178h] [rbp-60h]
  __int64 v81; // [rsp+180h] [rbp-58h] BYREF
  _QWORD v82[2]; // [rsp+188h] [rbp-50h] BYREF
  _QWORD v83[8]; // [rsp+198h] [rbp-40h] BYREF

  v69 = a2;
  v82[0] = a3;
  v82[1] = a4;
  v83[0] = a5;
  v83[1] = a6;
  v81 = std::io::stdio::stdout();
  v10 = std::io::stdio::Stdout::lock(&v81);
  v11 = a8;
  v48 = v10;
  v61 = (__int128 *)*((_QWORD *)a1 + 4);
  v12 = *a1;
  v60 = a1[1];
  v59 = v12;
  v72 = (__int128 *)*((_QWORD *)a1 + 9);
  v13 = *(__int128 *)((char *)a1 + 40);
  v71 = *(__int128 *)((char *)a1 + 56);
  *(_OWORD *)src = v13;
  v79 = *((_QWORD *)a1 + 14);
  v14 = a1[5];
  v78[1] = a1[6];
  v15 = a2 + 1;
  if ( !a2 )
    v15 = 0LL;
  v78[0] = v14;
  v16 = (__int128 *)(a8 + v15);
  if ( !a7 )
    v16 = 0LL;
  v74 = v16;
  v80 = *a9;
  v76 = 0x8000000000000000LL;
  v17 = 1;
  v75 = 0x8000000000000002LL;
  while ( 2 )
  {
    v54 = xmmword_170D0;
    v53 = anon_9bfcc4441dc8fd90e2398af1e0d4f74b_0_llvm_8484012111238486492;
    v55 = 0LL;
    if ( (unsigned __int8)<uu_seq::extendedbigdecimal::ExtendedBigDecimal as core::cmp::PartialOrd>::partial_cmp(
                            src,
                            &v53,
                            v11) >= 2u )
    {
      if ( (_QWORD)v53 )
        _rust_dealloc(*((_QWORD *)&v53 + 1), 8 * v53, 8LL);
      v19 = -1;
    }
    else
    {
      if ( (_QWORD)v53 )
        _rust_dealloc(*((_QWORD *)&v53 + 1), 8 * v53, 8LL);
      v19 = 1;
    }
    if ( (unsigned __int8)<uu_seq::extendedbigdecimal::ExtendedBigDecimal as core::cmp::PartialOrd>::partial_cmp(
                            &v59,
                            v78,
                            v18) != v19 )
    {
      if ( (v17 & 1) != 0 )
        goto LABEL_33;
      v62 = (__int128 *)v82;
      v63 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v53 = &anon_f941c7d894c550ecfedd045c68d8a012_33_llvm_4119223083302802398;
      *((_QWORD *)&v53 + 1) = 1LL;
      v55 = 0LL;
      *(_QWORD *)&v54 = &v62;
      *((_QWORD *)&v54 + 1) = 1LL;
      result = std::io::Write::write_fmt(&v48, &v53);
      if ( !result )
      {
LABEL_33:
        if ( v80 == v76 )
        {
          v77 = &v59;
          v62 = (__int128 *)&v77;
          v63 = <&T as core::fmt::Display>::fmt;
          v64 = v69;
          v65 = v74;
          v66 = 0LL;
          *(_QWORD *)&v53 = 1LL;
          *((_QWORD *)&v53 + 1) = 1LL;
          *(_QWORD *)&v54 = 1LL;
          *((_QWORD *)&v54 + 1) = 2LL;
          v55 = 0LL;
          if ( (__int64)v59 >= v75 )
            v56 = 0x800000020LL;
          else
            v56 = 32LL;
          v57 = 1;
          *(_QWORD *)&v49 = &anon_f941c7d894c550ecfedd045c68d8a012_33_llvm_4119223083302802398;
          *((_QWORD *)&v49 + 1) = 1LL;
          v51 = &v53;
          v52 = 1LL;
          *(_QWORD *)&v50 = &v62;
          *((_QWORD *)&v50 + 1) = 3LL;
          alloc::fmt::format::format_inner(&v67, &v49);
          v62 = &v67;
          v63 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v53 = &anon_f941c7d894c550ecfedd045c68d8a012_33_llvm_4119223083302802398;
          *((_QWORD *)&v53 + 1) = 1LL;
          v55 = 0LL;
          *(_QWORD *)&v54 = &v62;
          *((_QWORD *)&v54 + 1) = 1LL;
          result = std::io::Write::write_fmt(&v48, &v53);
          if ( (_QWORD)v67 )
          {
            v23 = result;
            _rust_dealloc(*((_QWORD *)&v67 + 1), v67, 1LL);
            result = v23;
          }
        }
        else
        {
          v21 = v59 - 0x7FFFFFFFFFFFFFFFLL;
          if ( (__int64)v59 >= (__int64)0x8000000000000004LL )
            v21 = 0LL;
          v22 = INFINITY;
          switch ( v21 )
          {
            case 0LL:
              if ( !bigdecimal::impl_num::<impl num_traits::cast::ToPrimitive for bigdecimal::BigDecimal>::to_f64(
                      &v59,
                      INFINITY) )
                core::option::unwrap_failed(&off_107418);
              return result;
            case 1LL:
              break;
            case 2LL:
              v22 = -INFINITY;
              break;
            case 3LL:
              v22 = -0.0;
              break;
            case 4LL:
              v22 = NAN;
              break;
          }
          result = uucore::features::format::Format<F>::fmt(a9, &v48, v22);
        }
        if ( !result )
        {
          v25 = (__int64 (__fastcall *)())*((_QWORD *)&v59 + 1);
          v24 = v59;
          v67 = v60;
          v68 = v61;
          v26 = (char *)src[0] - 0x7FFFFFFFFFFFFFFFLL;
          if ( (__int64)src[0] >= (__int64)0x8000000000000004LL )
            v26 = 0LL;
          switch ( (unsigned __int64)v26 )
          {
            case 0uLL:
              v47 = BYTE8(v71);
              v27 = src[1];
              v28 = v71;
              if ( (_QWORD)v71 )
              {
                v58 = (__int64 (__fastcall *)())*((_QWORD *)&v59 + 1);
                v29 = 8 * v71;
                if ( (unsigned __int64)v71 >> 60 )
                {
                  v31 = 0LL;
                }
                else
                {
                  v30 = v71;
                  v31 = 8LL;
                  v32 = (__int64 (__fastcall *)())_rust_alloc(v29, 8LL);
                  if ( v32 )
                  {
                    v28 = v30;
                    v25 = v58;
LABEL_52:
                    v58 = v32;
                    memcpy(v32, v27, v29);
                    v73 = v72;
                    v9 = v28;
LABEL_53:
                    v36 = v24 - 0x7FFFFFFFFFFFFFFFLL;
                    if ( v24 >= (__int64)0x8000000000000004LL )
                      v36 = 0LL;
                    switch ( v36 )
                    {
                      case 0LL:
                        goto LABEL_56;
                      case 1LL:
                        goto LABEL_61;
                      case 2LL:
                        goto LABEL_65;
                      case 3LL:
                        goto LABEL_6;
                      case 4LL:
                        goto LABEL_69;
                    }
                  }
                }
                alloc::raw_vec::handle_error(v31, v29);
              }
              v32 = (__int64 (__fastcall *)())&byte_8;
              v29 = 0LL;
              goto LABEL_52;
            case 1uLL:
              v28 = v76;
              goto LABEL_53;
            case 2uLL:
              v28 = 0x8000000000000001LL;
              v34 = v59 - 0x7FFFFFFFFFFFFFFFLL;
              if ( (__int64)v59 >= (__int64)0x8000000000000004LL )
                v34 = 0LL;
              switch ( v34 )
              {
                case 0LL:
                  goto LABEL_56;
                case 1LL:
                  goto LABEL_61;
                case 2LL:
                  goto LABEL_65;
                case 3LL:
                  goto LABEL_6;
                case 4LL:
                  goto LABEL_69;
              }
            case 3uLL:
              v35 = v59 - 0x7FFFFFFFFFFFFFFFLL;
              if ( (__int64)v59 >= (__int64)0x8000000000000004LL )
                v35 = 0LL;
              v28 = v75;
              switch ( v35 )
              {
                case 0LL:
                  goto LABEL_56;
                case 1LL:
                  goto LABEL_61;
                case 2LL:
                  goto LABEL_65;
                case 3LL:
                  goto LABEL_6;
                case 4LL:
                  goto LABEL_69;
              }
            case 4uLL:
              v33 = v59 - 0x7FFFFFFFFFFFFFFFLL;
              if ( (__int64)v59 >= (__int64)0x8000000000000004LL )
                v33 = 0LL;
              v28 = 0x8000000000000003LL;
              switch ( v33 )
              {
                case 0LL:
LABEL_56:
                  v37 = v28 - 0x7FFFFFFFFFFFFFFFLL;
                  if ( v28 >= (__int64)0x8000000000000004LL )
                    v37 = 0LL;
                  switch ( v37 )
                  {
                    case 0LL:
                      v62 = (__int128 *)v24;
                      v63 = v25;
                      v65 = v68;
                      v64 = v67;
                      *(_QWORD *)&v53 = v28;
                      *((_QWORD *)&v53 + 1) = v58;
                      *(_QWORD *)&v54 = v9;
                      BYTE8(v54) = v47;
                      v55 = v73;
                      JUMPOUT(0x9459ALL);
                    case 1LL:
                      goto LABEL_64;
                    case 2LL:
                      goto LABEL_68;
                    case 3LL:
                      *(_QWORD *)&v49 = v24;
                      *((_QWORD *)&v49 + 1) = v25;
                      v51 = v68;
                      v50 = v67;
                      goto LABEL_76;
                    case 4LL:
                      goto LABEL_69;
                  }
                case 1LL:
LABEL_61:
                  v38 = v28 - 0x7FFFFFFFFFFFFFFFLL;
                  if ( v28 >= (__int64)0x8000000000000004LL )
                    v38 = 0LL;
                  switch ( v38 )
                  {
                    case 0LL:
                    case 1LL:
                    case 3LL:
LABEL_64:
                      *(_QWORD *)&v49 = 0x8000000000000000LL;
                      break;
                    case 2LL:
                    case 4LL:
                      goto LABEL_69;
                  }
                  goto LABEL_70;
                case 2LL:
LABEL_65:
                  v39 = v28 - 0x7FFFFFFFFFFFFFFFLL;
                  if ( v28 >= (__int64)0x8000000000000004LL )
                    v39 = 0LL;
                  switch ( v39 )
                  {
                    case 0LL:
                    case 2LL:
                    case 3LL:
LABEL_68:
                      *(_QWORD *)&v49 = 0x8000000000000001LL;
                      break;
                    case 1LL:
                    case 4LL:
                      goto LABEL_69;
                  }
                  goto LABEL_70;
                case 3LL:
LABEL_6:
                  *(_QWORD *)&v49 = v28;
                  *((_QWORD *)&v49 + 1) = v58;
                  *(_QWORD *)&v50 = v9;
                  BYTE8(v50) = v47;
                  v51 = v73;
                  if ( v24 >= (__int64)0x8000000000000004LL && v24 )
                    goto LABEL_78;
                  goto LABEL_7;
                case 4LL:
LABEL_69:
                  *(_QWORD *)&v49 = 0x8000000000000003LL;
LABEL_70:
                  if ( v24 >= (__int64)0x8000000000000004LL && v24 )
                    _rust_dealloc(v25, 8 * v24, 8LL);
LABEL_76:
                  if ( v28 >= (__int64)0x8000000000000004LL )
                  {
                    v25 = v58;
                    v24 = v28;
                    if ( v28 )
LABEL_78:
                      _rust_dealloc(v25, 8 * v24, 8LL);
                  }
LABEL_7:
                  v11 = v50;
                  v59 = v49;
                  v60 = v50;
                  v61 = v51;
                  v17 = 0;
                  break;
              }
              continue;
          }
        }
      }
      goto LABEL_82;
    }
    break;
  }
  if ( (v17 & 1) == 0 )
  {
    v62 = (__int128 *)v83;
    v63 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v53 = &anon_f941c7d894c550ecfedd045c68d8a012_33_llvm_4119223083302802398;
    *((_QWORD *)&v53 + 1) = 1LL;
    v55 = 0LL;
    *(_QWORD *)&v54 = &v62;
    *((_QWORD *)&v54 + 1) = 1LL;
    result = std::io::Write::write_fmt(&v48, &v53);
    if ( result )
      goto LABEL_82;
  }
  result = <std::io::stdio::StdoutLock as std::io::Write>::flush(&v48);
  if ( result )
  {
LABEL_82:
    if ( (__int64)v59 > (__int64)0x8000000000000003LL && (_QWORD)v59 )
    {
      v40 = result;
      _rust_dealloc(*((_QWORD *)&v59 + 1), 8 * v59, 8LL);
      result = v40;
    }
    if ( *(__int64 *)&v78[0] > (__int64)0x8000000000000003LL && *(_QWORD *)&v78[0] )
    {
      v41 = result;
      _rust_dealloc(*((_QWORD *)&v78[0] + 1), 8LL * *(_QWORD *)&v78[0], 8LL);
      result = v41;
    }
    if ( (__int64)src[0] > (__int64)0x8000000000000003LL && src[0] )
    {
      v42 = result;
      _rust_dealloc(src[1], 8 * (__int64)src[0], 8LL);
      result = v42;
    }
    v43 = v48;
    v44 = (*(_DWORD *)(v48 + 12))-- == 1;
    if ( v44 )
    {
      *(_QWORD *)v43 = 0LL;
      if ( _InterlockedExchange((volatile __int32 *)(v43 + 8), 0) == 2 )
      {
        v45 = result;
        std::sys::sync::mutex::futex::Mutex::wake(v43 + 8);
        return v45;
      }
    }
    return result;
  }
  if ( (__int64)v59 > (__int64)0x8000000000000003LL && (_QWORD)v59 )
    _rust_dealloc(*((_QWORD *)&v59 + 1), 8 * v59, 8LL);
  if ( *(__int64 *)&v78[0] > (__int64)0x8000000000000003LL && *(_QWORD *)&v78[0] )
    _rust_dealloc(*((_QWORD *)&v78[0] + 1), 8LL * *(_QWORD *)&v78[0], 8LL);
  if ( (__int64)src[0] > (__int64)0x8000000000000003LL && src[0] )
    _rust_dealloc(src[1], 8 * (__int64)src[0], 8LL);
  v46 = v48;
  v44 = (*(_DWORD *)(v48 + 12))-- == 1;
  if ( v44 )
  {
    *(_QWORD *)v46 = 0LL;
    if ( _InterlockedExchange((volatile __int32 *)(v46 + 8), 0) == 2 )
      std::sys::sync::mutex::futex::Mutex::wake(v46 + 8);
  }
  return 0LL;
}
