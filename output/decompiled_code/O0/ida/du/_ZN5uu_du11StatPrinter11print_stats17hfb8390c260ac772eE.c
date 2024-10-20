_OWORD *__fastcall uu_du::StatPrinter::print_stats(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r14
  void (__fastcall **v8)(__int64); // rax
  void (__fastcall *v9)(__int64); // rsi
  unsigned __int64 v10; // r12
  bool v11; // cf
  __int64 v12; // rcx
  bool v13; // dl
  __int64 v14; // rax
  __int64 v15; // rsi
  char *v16; // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  _OWORD *v21; // rax
  __int128 v22; // xmm0
  _OWORD *v23; // rbx
  char v24; // [rsp+Fh] [rbp-4C9h] BYREF
  __int64 v25; // [rsp+10h] [rbp-4C8h]
  __int64 v26; // [rsp+18h] [rbp-4C0h] BYREF
  void (__fastcall **v27)(__int64); // [rsp+20h] [rbp-4B8h]
  __int64 v28; // [rsp+28h] [rbp-4B0h] BYREF
  int v29; // [rsp+30h] [rbp-4A8h]
  __int128 v30; // [rsp+38h] [rbp-4A0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-490h]
  char *v32; // [rsp+50h] [rbp-488h]
  __int64 v33; // [rsp+58h] [rbp-480h]
  __int64 v34; // [rsp+60h] [rbp-478h]
  __int64 v35; // [rsp+68h] [rbp-470h] BYREF
  __int64 v36; // [rsp+74h] [rbp-464h] BYREF
  int v37; // [rsp+7Ch] [rbp-45Ch]
  __int128 v38; // [rsp+80h] [rbp-458h] BYREF
  __int128 v39; // [rsp+90h] [rbp-448h]
  __int128 *v40; // [rsp+A0h] [rbp-438h]
  __int64 (__fastcall **v41)(); // [rsp+A8h] [rbp-430h]
  __int64 v42; // [rsp+B0h] [rbp-428h]
  char v43; // [rsp+B8h] [rbp-420h]
  __int128 v44; // [rsp+C0h] [rbp-418h] BYREF
  __int64 v45; // [rsp+D0h] [rbp-408h]
  __int64 v46; // [rsp+D8h] [rbp-400h] BYREF
  int v47; // [rsp+E0h] [rbp-3F8h]
  int v48; // [rsp+E4h] [rbp-3F4h]
  _QWORD v49[3]; // [rsp+E8h] [rbp-3F0h] BYREF
  __int64 v50; // [rsp+100h] [rbp-3D8h] BYREF
  char v51; // [rsp+108h] [rbp-3D0h] BYREF
  _QWORD v52[3]; // [rsp+118h] [rbp-3C0h] BYREF
  _QWORD v53[2]; // [rsp+130h] [rbp-3A8h] BYREF
  _QWORD v54[2]; // [rsp+140h] [rbp-398h] BYREF
  _QWORD v55[2]; // [rsp+150h] [rbp-388h] BYREF
  _QWORD v56[2]; // [rsp+160h] [rbp-378h] BYREF
  _QWORD v57[2]; // [rsp+170h] [rbp-368h] BYREF
  _QWORD v58[4]; // [rsp+180h] [rbp-358h] BYREF
  _QWORD v59[4]; // [rsp+1A0h] [rbp-338h] BYREF
  __int128 v60; // [rsp+1C0h] [rbp-318h]
  __int128 v61; // [rsp+1D0h] [rbp-308h]
  __int128 v62; // [rsp+1E0h] [rbp-2F8h]
  __int128 v63; // [rsp+1F0h] [rbp-2E8h]
  __int128 v64; // [rsp+200h] [rbp-2D8h]
  __int128 v65; // [rsp+210h] [rbp-2C8h]
  __int128 v66; // [rsp+220h] [rbp-2B8h]
  __int128 v67; // [rsp+230h] [rbp-2A8h]
  _QWORD v68[6]; // [rsp+240h] [rbp-298h] BYREF
  _QWORD v69[6]; // [rsp+270h] [rbp-268h] BYREF
  _QWORD v70[6]; // [rsp+2A0h] [rbp-238h] BYREF
  _QWORD v71[6]; // [rsp+2D0h] [rbp-208h] BYREF
  _QWORD v72[6]; // [rsp+300h] [rbp-1D8h] BYREF
  _QWORD v73[6]; // [rsp+330h] [rbp-1A8h] BYREF
  __m128i v74; // [rsp+360h] [rbp-178h]
  __int64 v75; // [rsp+370h] [rbp-168h]
  __int64 v76; // [rsp+378h] [rbp-160h]
  __int128 v77; // [rsp+380h] [rbp-158h]
  __int128 v78; // [rsp+390h] [rbp-148h]
  __int128 v79; // [rsp+3A0h] [rbp-138h] BYREF
  __int128 v80; // [rsp+3B0h] [rbp-128h]
  __int128 v81; // [rsp+3C0h] [rbp-118h]
  __int128 v82; // [rsp+3D0h] [rbp-108h]
  __int128 v83; // [rsp+3E0h] [rbp-F8h]
  __int128 v84; // [rsp+3F0h] [rbp-E8h]
  __m128i v85; // [rsp+400h] [rbp-D8h] BYREF
  __int64 v86; // [rsp+410h] [rbp-C8h] BYREF
  __int64 v87; // [rsp+418h] [rbp-C0h]
  __int128 v88; // [rsp+420h] [rbp-B8h]
  __int128 v89; // [rsp+430h] [rbp-A8h]
  __int128 v90; // [rsp+440h] [rbp-98h]
  __int128 v91; // [rsp+450h] [rbp-88h]
  __int128 v92; // [rsp+460h] [rbp-78h]
  __int128 v93; // [rsp+470h] [rbp-68h]
  __int128 v94; // [rsp+480h] [rbp-58h]
  __int128 v95; // [rsp+490h] [rbp-48h]

  v32 = (char *)&v44 + 8;
  v25 = a1;
  v33 = a1 + 77;
  v34 = 0LL;
  while ( 1 )
  {
    v4 = a2[1];
    if ( *a2 )
    {
      if ( *a2 == 1LL )
        std::sync::mpmc::list::Channel<T>::recv(&v85, v4, a3, 1000000000LL);
      else
        std::sync::mpmc::zero::Channel<T>::recv(&v85, v4, a3, 1000000000LL);
    }
    else
    {
      std::sync::mpmc::array::Channel<T>::recv(&v85, v4, a3, 1000000000LL);
    }
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v85), (__m128i)xmmword_1DA70)) == 0xFFFF )
      break;
    v60 = v88;
    v61 = v89;
    v62 = v90;
    v63 = v91;
    v64 = v92;
    v65 = v93;
    v66 = v94;
    v67 = v95;
    if ( v85.m128i_i64[1] | v85.m128i_i64[0] ^ 2 )
    {
      v74 = v85;
      v75 = v86;
      v76 = v87;
      v84 = v67;
      v83 = v66;
      v82 = v65;
      v81 = v64;
      v80 = v63;
      v79 = v62;
      v78 = v61;
      v77 = v60;
      if ( (*(_BYTE *)(v25 + 73) & 1) != 0 )
      {
        v10 = *((_QWORD *)&v81 + 1);
      }
      else if ( (*(_BYTE *)(v25 + 74) & 1) != 0 )
      {
        v10 = *((_QWORD *)&v80 + 1);
      }
      else
      {
        if ( (unsigned __int64)v81 >> 55 )
          core::panicking::panic_const::panic_const_mul_overflow(
            &off_164E10,
            v85.m128i_i64[1] | v85.m128i_i64[0] ^ 2,
            v85.m128i_i64[1]);
        v10 = (_QWORD)v81 << 9;
      }
      if ( !(_QWORD)v84 )
      {
        v11 = __CFADD__(v10, v34);
        v34 += v10;
        if ( v11 )
          core::panicking::panic_const::panic_const_add_overflow(&off_164E28);
      }
      v12 = *(_QWORD *)(v25 + 16);
      if ( v12 == 2 )
        goto LABEL_28;
      v13 = v10 > *(_QWORD *)(v25 + 24);
      if ( !v12 )
        v13 = v10 < *(_QWORD *)(v25 + 24);
      if ( !v13 )
      {
LABEL_28:
        if ( (!*(_QWORD *)v25 || (unsigned __int64)v84 <= *(_QWORD *)(v25 + 8))
          && (!(_QWORD)v84 || (*(_BYTE *)(v25 + 75) & 1) == 0) )
        {
          switch ( *(_BYTE *)(v25 + 76) )
          {
            case 0:
              v14 = 14LL;
              goto LABEL_35;
            case 1:
              v14 = 15LL;
              goto LABEL_35;
            case 2:
              v14 = 7LL;
              if ( !(_QWORD)v78 )
              {
                *(_QWORD *)&v38 = 3LL;
                v21 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
                if ( !v21 )
                  alloc::alloc::handle_alloc_error(8LL, 32LL);
                v22 = v38;
                v21[1] = v39;
                *v21 = v22;
                v23 = v21;
                <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v79);
                return v23;
              }
LABEL_35:
              v17 = <std::time::SystemTime as core::ops::arith::Add<core::time::Duration>>::add(
                      0LL,
                      0LL,
                      v74.m128i_i64[v14],
                      0LL);
              <chrono::datetime::DateTime<chrono::offset::utc::Utc> as core::convert::From<std::time::SystemTime>>::from(
                &v36,
                v17);
              v29 = v37;
              v28 = v36;
              v24 = 0;
              std::thread::local::LocalKey<T>::try_with(
                &v38,
                &anon_3f273f3c4772dc55a54bdec9062ccb39_6_llvm_3469199380322658755,
                &v36,
                &v24);
              core::result::Result<T,E>::expect(
                &v30,
                &v38,
                anon_6b18f3ca19b16514212961b62c614770_0_llvm_3964607150695535679,
                70LL,
                &anon_6b18f3ca19b16514212961b62c614770_2_llvm_3964607150695535679);
              v18 = chrono::offset::LocalResult<T>::unwrap(
                      &v30,
                      &anon_4b66f08430e3b2971a63e8fbb00d0ebe_106_llvm_5877677624257021904);
              v46 = v28;
              v47 = v29;
              v48 = v18;
              if ( !*(_QWORD *)(v25 + 56) || *(__int64 *)(v25 + 64) < 0 )
                goto LABEL_60;
              chrono::datetime::DateTime<Tz>::format(&v85, &v46);
              *(_QWORD *)&v30 = 0LL;
              *((_QWORD *)&v30 + 1) = 1LL;
              v31 = 0LL;
              v42 = 32LL;
              v43 = 3;
              *(_QWORD *)&v38 = 0LL;
              *(_QWORD *)&v39 = 0LL;
              v40 = &v30;
              v41 = &anon_a41ba54122c99b21b4a0fdce4f788f47_14_llvm_960596293609237022;
              if ( (unsigned __int8)<chrono::format::formatting::DelayedFormat<I> as core::fmt::Display>::fmt(
                                      &v85,
                                      &v38) )
                core::result::unwrap_failed(
                  anon_a41ba54122c99b21b4a0fdce4f788f47_15_llvm_960596293609237022,
                  55LL,
                  &v28,
                  &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
                  &anon_a41ba54122c99b21b4a0fdce4f788f47_17_llvm_960596293609237022);
              v44 = v30;
              v45 = v31;
              if ( v85.m128i_i64[0] != 0x8000000000000000LL )
              {
                alloc::raw_vec::RawVec<T,A>::current_memory(&v38, &v85);
                if ( *((_QWORD *)&v38 + 1) )
                  <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v86, v38, *((_QWORD *)&v38 + 1), v39);
              }
              uu_du::StatPrinter::convert_size(v49, v25, v10);
              v59[0] = v49;
              v59[1] = <alloc::string::String as core::fmt::Display>::fmt;
              v59[2] = &v44;
              v59[3] = <alloc::string::String as core::fmt::Display>::fmt;
              v71[0] = &unk_164E90;
              v71[1] = 3LL;
              v71[4] = 0LL;
              v71[2] = v59;
              v71[3] = 2LL;
              std::io::stdio::_print(v71);
              if ( v49[0] )
                _rust_dealloc(v49[1], v49[0], 1LL);
              v15 = v44;
              v16 = (char *)&v44 + 8;
LABEL_44:
              if ( v15 )
                _rust_dealloc(*(_QWORD *)v16, v15, 1LL);
              *(_QWORD *)&v38 = std::io::stdio::stdout();
              if ( !*((_QWORD *)&v79 + 1) || (__int64)v80 < 0 )
LABEL_60:
                core::panicking::panic_nounwind(
                  anon_8085cf7280ca5a7279da5d96bb8c0362_48_llvm_11242443447069085683,
                  162LL);
              v19 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v38);
              if ( v19 )
              {
                v35 = v19;
                core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v35, &off_164AD0, &off_164EE0);
              }
              v57[0] = v33;
              v57[1] = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
              v73[0] = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
              v73[1] = 1LL;
              v73[4] = 0LL;
              v73[2] = v57;
              v73[3] = 1LL;
              std::io::stdio::_print(v73);
              break;
            case 3:
              uu_du::StatPrinter::convert_size(&v50, v25, v10);
              v56[0] = &v50;
              v56[1] = <alloc::string::String as core::fmt::Display>::fmt;
              v72[0] = &unk_164EC0;
              v72[1] = 2LL;
              v72[4] = 0LL;
              v72[2] = v56;
              v72[3] = 1LL;
              std::io::stdio::_print(v72);
              v15 = v50;
              v16 = &v51;
              goto LABEL_44;
          }
        }
      }
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v79);
    }
    else
    {
      v26 = v86;
      v27 = (void (__fastcall **)(__int64))v87;
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, (*(__int64 (**)(void))(v87 + 96))());
      v5 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v6 = *(_QWORD *)(v5 + 8);
      v7 = *(_QWORD *)(v5 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v6, 1LL, 1LL, v7);
      v53[0] = v6;
      v53[1] = v7;
      v58[0] = v53;
      v58[1] = <&T as core::fmt::Display>::fmt;
      v58[2] = &v26;
      v58[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v68[0] = &unk_164E40;
      v68[1] = 3LL;
      v68[4] = 0LL;
      v68[2] = v58;
      v68[3] = 2LL;
      std::io::stdio::_eprint(v68);
      v8 = v27;
      if ( *v27 )
      {
        (*v27)(v26);
        v8 = v27;
      }
      v9 = v8[1];
      if ( v9 )
        _rust_dealloc(v26, v9, v8[2]);
    }
  }
  if ( (*(_BYTE *)(v25 + 72) & 1) != 0 )
  {
    uu_du::StatPrinter::convert_size(v52, v25, v34);
    v54[0] = v52;
    v54[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v69[0] = &unk_164E70;
    v69[1] = 2LL;
    v69[4] = 0LL;
    v69[2] = v54;
    v69[3] = 1LL;
    std::io::stdio::_print(v69);
    if ( v52[0] )
      _rust_dealloc(v52[1], v52[0], 1LL);
    v55[0] = v33;
    v55[1] = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v70[0] = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
    v70[1] = 1LL;
    v70[4] = 0LL;
    v70[2] = v55;
    v70[3] = 1LL;
    std::io::stdio::_print(v70);
  }
  return 0LL;
}
