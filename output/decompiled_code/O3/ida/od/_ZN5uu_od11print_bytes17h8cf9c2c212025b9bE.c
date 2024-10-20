__int64 __fastcall uu_od::print_bytes(__int64 a1, unsigned __int64 a2, __int64 *a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // r13
  int v8; // eax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rax
  void (__fastcall *v15)(void **); // rbx
  void *v16; // rbx
  size_t v17; // r14
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rsi
  __int64 uint; // rax
  unsigned __int64 v21; // rax
  void **v22; // rbx
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  char v25; // [rsp+7h] [rbp-171h] BYREF
  __int64 v26; // [rsp+8h] [rbp-170h] BYREF
  __int64 v27; // [rsp+10h] [rbp-168h]
  unsigned __int64 v28; // [rsp+18h] [rbp-160h]
  int v29; // [rsp+24h] [rbp-154h]
  __int64 *v30; // [rsp+28h] [rbp-150h] BYREF
  __int64 (__fastcall *v31)(); // [rsp+30h] [rbp-148h]
  void **v32; // [rsp+38h] [rbp-140h]
  __int64 (__fastcall *v33)(); // [rsp+40h] [rbp-138h]
  void **v34; // [rsp+48h] [rbp-130h]
  __int64 v35; // [rsp+50h] [rbp-128h]
  __int64 v36; // [rsp+58h] [rbp-120h]
  __int64 *v37; // [rsp+60h] [rbp-118h]
  void *v38; // [rsp+68h] [rbp-110h] BYREF
  void *src; // [rsp+70h] [rbp-108h]
  size_t n; // [rsp+78h] [rbp-100h]
  __int64 v41; // [rsp+80h] [rbp-F8h]
  __int64 v42; // [rsp+88h] [rbp-F0h]
  __int64 v43; // [rsp+90h] [rbp-E8h]
  char v44; // [rsp+98h] [rbp-E0h]
  __int64 v45; // [rsp+A0h] [rbp-D8h]
  __int64 v46; // [rsp+B0h] [rbp-C8h]
  __int64 v47; // [rsp+C0h] [rbp-B8h]
  __int64 v48; // [rsp+C8h] [rbp-B0h]
  char v49; // [rsp+D0h] [rbp-A8h]
  unsigned __int64 v50; // [rsp+D8h] [rbp-A0h]
  void *v51; // [rsp+E0h] [rbp-98h] BYREF
  __int64 (__fastcall *v52)(); // [rsp+E8h] [rbp-90h]
  _QWORD *v53; // [rsp+F0h] [rbp-88h]
  __int64 v54; // [rsp+F8h] [rbp-80h]
  void **v55; // [rsp+100h] [rbp-78h]
  __int64 v56; // [rsp+108h] [rbp-70h]
  __int64 v57; // [rsp+110h] [rbp-68h] BYREF
  unsigned __int64 v58; // [rsp+118h] [rbp-60h]
  unsigned __int64 v59; // [rsp+120h] [rbp-58h]
  __int64 v60; // [rsp+128h] [rbp-50h]
  _QWORD v61[9]; // [rsp+130h] [rbp-48h] BYREF

  v37 = a3;
  v57 = a1;
  v58 = a2;
  result = a4[2];
  if ( result )
  {
    v7 = a4[1];
    v60 = v7 + 104 * result;
    v8 = (int)v37;
    v36 = *v37;
    v9 = v37[1];
    v59 = a4[4];
    v10 = a4[5];
    v11 = v9 + v37[2];
    LOBYTE(v8) = 1;
    v29 = v8;
    v50 = v11;
    while ( 1 )
    {
      v26 = 0LL;
      v27 = 1LL;
      v28 = 0LL;
      if ( v9 )
        break;
LABEL_25:
      if ( *(_BYTE *)(v7 + 96) )
      {
        if ( v28 >= 0x20 )
          v21 = core::str::count::do_count_chars(v27);
        else
          v21 = core::str::count::char_count_general_case(v27);
        v22 = (void **)(v59 - v21);
        if ( v59 < v21 )
          v22 = 0LL;
        v23 = *(_QWORD *)(v36 + 16);
        if ( v9 > v23 )
          core::slice::index::slice_end_index_len_fail(
            v9,
            v23,
            &anon_a94949093028d2d8e47277762c52d369_2_llvm_199664298606218765);
        uu_od::prn_char::format_ascii_dump(v61, *(_QWORD *)(v36 + 8), v9);
        v30 = (__int64 *)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
        v31 = <&T as core::fmt::Display>::fmt;
        v32 = (void **)v61;
        v33 = <alloc::string::String as core::fmt::Display>::fmt;
        v34 = v22;
        v35 = 0LL;
        v38 = &dword_0 + 2;
        n = 1LL;
        v41 = 2LL;
        v42 = 0LL;
        v43 = 32LL;
        v44 = 1;
        v45 = 2LL;
        v46 = 2LL;
        v47 = 1LL;
        v48 = 32LL;
        v49 = 3;
        v51 = &unk_103248;
        v52 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v55 = &v38;
        v56 = 2LL;
        v53 = &v30;
        v54 = 3LL;
        if ( (unsigned __int8)core::fmt::write(&v26, &off_1030D8, &v51) )
          core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v25, &unk_103078, &off_103268);
        if ( v61[0] )
          _rust_dealloc(v61[1], v61[0], 1LL);
      }
      if ( (v29 & 1) != 0 )
      {
        v30 = &v57;
        v31 = <&T as core::fmt::Display>::fmt;
        v38 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
        src = &dword_0 + 1;
        v42 = 0LL;
        n = (size_t)&v30;
        v41 = 1LL;
        std::io::stdio::_print(&v38);
        v29 = 0;
      }
      else
      {
        if ( v58 >= 0x20 )
          v24 = core::str::count::do_count_chars(v57);
        else
          v24 = core::str::count::char_count_general_case(v57);
        v51 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
        v52 = <&T as core::fmt::Display>::fmt;
        v53 = (_QWORD *)v24;
        v54 = 0LL;
        v38 = &dword_0 + 2;
        n = 1LL;
        v41 = 1LL;
        v42 = 0LL;
        v43 = 32LL;
        v44 = 1;
        v30 = (__int64 *)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
        v31 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v34 = &v38;
        v35 = 1LL;
        v32 = &v51;
        v33 = (__int64 (__fastcall *)())(&dword_0 + 2);
        std::io::stdio::_print(&v30);
      }
      v30 = &v26;
      v31 = <alloc::string::String as core::fmt::Display>::fmt;
      v38 = &unk_103280;
      src = &dword_0 + 2;
      v42 = 0LL;
      n = (size_t)&v30;
      v41 = 1LL;
      result = std::io::stdio::_print(&v38);
      if ( v26 )
        result = _rust_dealloc(v27, v26, 1LL);
      v7 += 104LL;
      if ( v7 == v60 )
        return result;
    }
    if ( !v10 )
      core::panicking::panic_const::panic_const_rem_by_zero(&off_1032A0);
    v12 = 0LL;
    while ( 1 )
    {
      if ( (v10 | v12) >> 32 )
      {
        v13 = v12 % v10;
        if ( v12 % v10 >= 8 )
          goto LABEL_44;
      }
      else
      {
        v13 = (unsigned int)v12 % (unsigned int)v10;
        if ( (unsigned int)v13 >= 8uLL )
LABEL_44:
          core::panicking::panic_bounds_check(v13, 8LL, &off_1032B8, a4, a5, a6);
      }
      v14 = *(_QWORD **)(v7 + 8 * v13 + 32);
      v51 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
      v52 = <&T as core::fmt::Display>::fmt;
      v53 = v14;
      v54 = 0LL;
      v38 = &dword_0 + 2;
      n = 1LL;
      v41 = 1LL;
      v42 = 0LL;
      v43 = 32LL;
      v44 = 1;
      v30 = (__int64 *)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
      v31 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v34 = &v38;
      v35 = 1LL;
      v32 = &v51;
      v33 = (__int64 (__fastcall *)())(&dword_0 + 2);
      if ( (unsigned __int8)core::fmt::write(&v26, &off_1030D8, &v30) )
        core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v25, &unk_103078, &off_1032D0);
      v15 = *(void (__fastcall **)(void **))(v7 + 8);
      if ( *(_QWORD *)v7 == 2LL )
        break;
      if ( (unsigned int)*(_QWORD *)v7 == 1 )
      {
        uu_od::inputdecoder::MemoryDecoder::read_float(v37, v12, *(_QWORD *)(v7 + 16));
        v15(&v38);
        v16 = src;
        v17 = n;
        v18 = v28;
        if ( v26 - v28 < n )
          goto LABEL_22;
      }
      else
      {
        uint = uu_od::inputdecoder::MemoryDecoder::read_uint(v37, v12, *(_QWORD *)(v7 + 16));
        ((void (__fastcall *)(void **, __int64))v15)(&v38, uint);
        v16 = src;
        v17 = n;
        v18 = v28;
        if ( v26 - v28 < n )
          goto LABEL_22;
      }
LABEL_23:
      memcpy((void *)(v27 + v18), v16, v17);
      v28 += v17;
      if ( v38 )
        _rust_dealloc(v16, v38, 1LL);
      v12 += *(_QWORD *)(v7 + 16);
      if ( v12 >= v9 )
        goto LABEL_25;
    }
    if ( v50 < v12 )
      core::slice::index::slice_index_order_fail(
        v12,
        v50,
        &anon_a94949093028d2d8e47277762c52d369_3_llvm_199664298606218765);
    v19 = *(_QWORD *)(v36 + 16);
    if ( v50 > v19 )
      core::slice::index::slice_end_index_len_fail(
        v50,
        v19,
        &anon_a94949093028d2d8e47277762c52d369_3_llvm_199664298606218765);
    ((void (__fastcall *)(void **, unsigned __int64, unsigned __int64))v15)(&v38, v12 + *(_QWORD *)(v36 + 8), v50 - v12);
    v16 = src;
    v17 = n;
    v18 = v28;
    if ( v26 - v28 >= n )
      goto LABEL_23;
LABEL_22:
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v26, v18, n);
    v18 = v28;
    goto LABEL_23;
  }
  return result;
}
