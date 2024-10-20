        __int64 a8)
{
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int128 v16; // rcx
  __int64 v17; // rdx
  unsigned __int8 *v18; // rdi
  int v19; // r8d
  int v20; // r9d
  int v21; // r11d
  int v22; // r10d
  __int64 v23; // r12
  __int64 *v24; // rsi
  unsigned __int64 v25; // rsi
  unsigned int v26; // eax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r14
  __int64 v29; // rdi
  const char *v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // r13
  __int64 result; // rax
  __int128 v34; // [rsp+0h] [rbp-198h] BYREF
  __int64 v35; // [rsp+10h] [rbp-188h]
  _BYTE v36[24]; // [rsp+18h] [rbp-180h] BYREF
  __int64 (__fastcall *v37)(); // [rsp+30h] [rbp-168h]
  unsigned __int64 v38; // [rsp+38h] [rbp-160h]
  __int64 v39; // [rsp+40h] [rbp-158h]
  __int64 *v40; // [rsp+48h] [rbp-150h] BYREF
  const char *v41; // [rsp+50h] [rbp-148h] BYREF
  __int128 v42; // [rsp+58h] [rbp-140h]
  __int64 v43; // [rsp+68h] [rbp-130h]
  __int128 *v44; // [rsp+70h] [rbp-128h]
  __int64 v45; // [rsp+78h] [rbp-120h]
  __int128 v46; // [rsp+80h] [rbp-118h] BYREF
  __int64 v47; // [rsp+90h] [rbp-108h]
  __int64 v48; // [rsp+98h] [rbp-100h] BYREF
  __int128 v49; // [rsp+A0h] [rbp-F8h] BYREF
  const char **v50; // [rsp+B0h] [rbp-E8h]
  __int64 (__fastcall *v51)(); // [rsp+B8h] [rbp-E0h]
  __int64 **v52; // [rsp+C0h] [rbp-D8h]
  __int64 (__fastcall **v53)(); // [rsp+C8h] [rbp-D0h]
  __int64 v54; // [rsp+D0h] [rbp-C8h]
  __int64 v55; // [rsp+D8h] [rbp-C0h]
  __int64 v56; // [rsp+E8h] [rbp-B0h]
  __int64 v57; // [rsp+F8h] [rbp-A0h]
  __int64 v58; // [rsp+100h] [rbp-98h]
  char v59; // [rsp+108h] [rbp-90h]
  __int64 v60; // [rsp+110h] [rbp-88h] BYREF
  __int64 v61; // [rsp+118h] [rbp-80h]
  __int64 v62; // [rsp+120h] [rbp-78h]
  __int64 v63; // [rsp+128h] [rbp-70h]
  __int64 v64; // [rsp+130h] [rbp-68h]
  _BYTE v65[24]; // [rsp+138h] [rbp-60h] BYREF
  __int128 v66; // [rsp+150h] [rbp-48h] BYREF
  __int64 v67; // [rsp+160h] [rbp-38h]

  v64 = a6;
  v12 = a1;
  v60 = 0LL;
  v61 = 1LL;
  v62 = 0LL;
  v13 = a3[4];
  v48 = v13;
  if ( *(_QWORD *)(a2 + 216) == 0x8000000000000000LL || *(_QWORD *)(a2 + 16) && a5 || !v13 )
  {
    *(_QWORD *)&v46 = 0LL;
    *((_QWORD *)&v46 + 1) = 1LL;
    v47 = 0LL;
    goto LABEL_18;
  }
  v63 = a1;
  *(_QWORD *)v36 = 0LL;
  *(_QWORD *)&v36[8] = 1LL;
  *(_QWORD *)&v36[16] = 0LL;
  v54 = 32LL;
  LOBYTE(v55) = 3;
  *(_QWORD *)&v49 = 0LL;
  v50 = 0LL;
  v52 = (__int64 **)v36;
  v53 = &off_28E898;
  if ( (unsigned __int8)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt(&v48, &v49) )
    core::result::unwrap_failed(aADisplayImplem, 55LL, &v41, &unk_28E8E0, &off_28E8C8);
  v34 = *(_OWORD *)v36;
  v35 = *(_QWORD *)&v36[16];
  v14 = *(_QWORD *)(a2 + 240);
  v40 = (__int64 *)(a2 + 216);
  v15 = *(_QWORD *)&v36[16] - v14;
  if ( *(_QWORD *)&v36[16] >= v14 )
  {
    if ( *(_QWORD *)&v36[16] != v14 )
    {
      if ( v15 >= *(_QWORD *)&v36[16] )
      {
        if ( v14 )
LABEL_12:
          core::str::slice_error_fail(*((_QWORD *)&v34 + 1), *(_QWORD *)&v36[16], v15, *(_QWORD *)&v36[16], &off_28ED78);
      }
      else if ( *(char *)(*((_QWORD *)&v34 + 1) + v15) <= -65 )
      {
        goto LABEL_12;
      }
    }
    *(_QWORD *)&v46 = v15 + *((_QWORD *)&v34 + 1);
    *((_QWORD *)&v46 + 1) = v14;
    *(_QWORD *)v36 = &v46;
    *(_QWORD *)&v36[8] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v36[16] = &v40;
    v37 = <&T as core::fmt::Display>::fmt;
    v38 = v14;
    v39 = 0LL;
    *(_QWORD *)&v49 = 2LL;
    v50 = (const char **)(&dword_0 + 1);
    v51 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v52 = 0LL;
    v53 = (__int64 (__fastcall **)())&qword_20;
    LOBYTE(v54) = 1;
    v55 = 2LL;
    v56 = 2LL;
    v57 = 1LL;
    v58 = 32LL;
    v59 = 3;
    v41 = "\x01";
    *(_QWORD *)&v42 = 2LL;
    v44 = &v49;
    v45 = 2LL;
    *((_QWORD *)&v42 + 1) = v36;
    v43 = 3LL;
    alloc::fmt::format::format_inner(&v66, &v41);
    goto LABEL_15;
  }
  *(_QWORD *)v36 = &v34;
  *(_QWORD *)&v36[8] = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v36[16] = &v40;
  v37 = <&T as core::fmt::Display>::fmt;
  v38 = v14;
  v39 = 0LL;
  *(_QWORD *)&v49 = 2LL;
  v50 = (const char **)(&dword_0 + 1);
  v51 = (__int64 (__fastcall *)())(&dword_0 + 2);
  v52 = 0LL;
  v53 = (__int64 (__fastcall **)())&qword_20;
  LOBYTE(v54) = 1;
  v55 = 2LL;
  v56 = 2LL;
  v57 = 1LL;
  v58 = 32LL;
  v59 = 3;
  v41 = "\x01";
  *(_QWORD *)&v42 = 2LL;
  v44 = &v49;
  v45 = 2LL;
  *((_QWORD *)&v42 + 1) = v36;
  v43 = 3LL;
  alloc::fmt::format::format_inner(&v66, &v41);
LABEL_15:
  v47 = v67;
  v46 = v66;
  if ( (_QWORD)v34 )
    _rust_dealloc(*((_QWORD *)&v34 + 1), v34, 1LL);
  v12 = v63;
LABEL_18:
  if ( *a3 == 0x8000000000000000LL )
  {
    *(_QWORD *)&v49 = &a3[*a3 == 0x8000000000000000LL];
    core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v49, &unk_28E940, &off_28ED60);
  }
  v41 = (const char *)&a3[*a3 == 0x8000000000000000LL];
  *(_QWORD *)v36 = &v46;
  *(_QWORD *)&v36[8] = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v36[16] = &v41;
  v37 = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v49 = "\x01";
  *((_QWORD *)&v49 + 1) = 2LL;
  v52 = 0LL;
  v50 = (const char **)v36;
  v51 = (__int64 (__fastcall *)())(&dword_0 + 2);
  alloc::fmt::format::format_inner(v65, &v49);
  v34 = *(_OWORD *)v65;
  v35 = *(_QWORD *)&v65[16];
  v48 = a2 + 168;
  v16 = *(_OWORD *)&v65[8];
  if ( *(_QWORD *)&v65[16] )
  {
    v17 = 0LL;
    v18 = *(unsigned __int8 **)&v65[8];
    while ( 1 )
    {
      v19 = *v18;
      if ( (v19 & 0x80u) == 0 )
      {
        ++v18;
      }
      else
      {
        v20 = v19 & 0x1F;
        v21 = v18[1] & 0x3F;
        if ( (unsigned __int8)v19 <= 0xDFu )
        {
          v18 += 2;
          v19 = v21 | (v20 << 6);
        }
        else
        {
          v22 = (v21 << 6) | v18[2] & 0x3F;
          if ( (unsigned __int8)v19 < 0xF0u )
          {
            v18 += 3;
            v19 = (v20 << 12) | v22;
          }
          else
          {
            v19 = ((v19 & 7) << 18) | (v22 << 6) | v18[3] & 0x3F;
            if ( v19 == (_DWORD)std::io::stdio::_eprint )
              goto LABEL_31;
            v18 += 4;
          }
        }
      }
      v17 += v19 == 9;
      if ( v18 == (unsigned __int8 *)(*(_QWORD *)&v65[8] + *(_QWORD *)&v65[16]) )
        goto LABEL_31;
    }
  }
  v17 = 0LL;
LABEL_31:
  v23 = a5 + 1;
  v24 = (__int64 *)(a2 + 192);
  if ( *(_BYTE *)(a2 + 323) )
    v24 = &v60;
  if ( v23 == a8 )
    v24 = &v60;
  v40 = v24;
  if ( !v64 )
  {
    v29 = *(_QWORD *)&v65[8];
    v30 = *(const char **)v65;
    v31 = *(_QWORD *)&v65[16];
LABEL_49:
    v41 = v30;
    *(_QWORD *)&v42 = v29;
    *((_QWORD *)&v42 + 1) = v31;
    goto LABEL_52;
  }
  if ( !a4 )
    core::panicking::panic_const::panic_const_div_by_zero(&off_28EE70, v24, v17, *(_QWORD *)&v65[8]);
  v25 = *(_QWORD *)&v65[16] + 7 * v17;
  v26 = a7 - a4 + 1;
  if ( (a4 | (a7 - a4 + 1)) >> 32 )
  {
    v27 = (a7 - a4 + 1) % a4;
    v28 = (a7 - a4 + 1) / a4;
  }
  else
  {
    v27 = v26 % (unsigned int)a4;
    v28 = v26 / (unsigned int)a4;
  }
  if ( v28 > v25 )
  {
    v32 = 0LL;
    do
    {
      if ( *((_QWORD *)&v16 + 1) == (_QWORD)v34 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v34, v25, v27, v16);
      ++v32;
      *(_BYTE *)(*((_QWORD *)&v34 + 1) + (*((_QWORD *)&v16 + 1))++) = 32;
      v35 = *((_QWORD *)&v16 + 1);
    }
    while ( v32 < v28 - v25 );
    *(_QWORD *)&v16 = *((_QWORD *)&v34 + 1);
  }
  *((_QWORD *)&v16 + 1) += v16;
  v49 = v16;
  v50 = (const char **)v28;
  <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(v36, &v49, v27);
  v49 = *(_OWORD *)&v36[8];
  v29 = *((_QWORD *)&v34 + 1);
  v30 = (const char *)v34;
  if ( *(_QWORD *)v36 == 0x8000000000000000LL )
  {
    v31 = v35;
    goto LABEL_49;
  }
  v42 = v49;
  v41 = *(const char **)v36;
  if ( (_QWORD)v34 )
    _rust_dealloc(*((_QWORD *)&v34 + 1), v34, 1LL);
LABEL_52:
  *(_QWORD *)&v49 = &v48;
  *((_QWORD *)&v49 + 1) = <&T as core::fmt::Display>::fmt;
  v50 = &v41;
  v51 = <alloc::string::String as core::fmt::Display>::fmt;
  v52 = &v40;
  v53 = (__int64 (__fastcall **)())<&T as core::fmt::Display>::fmt;
  *(_QWORD *)v36 = &unk_6B450;
  *(_QWORD *)&v36[8] = 3LL;
  v38 = 0LL;
  *(_QWORD *)&v36[16] = &v49;
  v37 = (__int64 (__fastcall *)())(&dword_0 + 3);
  alloc::fmt::format::format_inner(&v66, v36);
  if ( v41 )
    _rust_dealloc(v42, v41, 1LL);
  result = v67;
  *(_QWORD *)(v12 + 16) = v67;
  *(_OWORD *)v12 = v66;
  if ( (_QWORD)v46 )
    result = _rust_dealloc(*((_QWORD *)&v46 + 1), v46, 1LL);
  if ( v60 )
    return _rust_dealloc(v61, v60, 1LL);
  return result;
}
