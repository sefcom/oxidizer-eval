_QWORD *__fastcall uu_du::StatPrinter::print_stats(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 *v3; // r12
  int v4; // r15d
  unsigned int v5; // eax
  __int64 v6; // r14
  __m128i v7; // xmm0
  __m128i v8; // kr10_16
  __int64 v9; // rsi
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  bool v14; // r8
  __int64 v15; // rax
  __int8 *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  unsigned int v20; // ebp
  int v21; // r14d
  __int64 *v22; // r15
  __int32 v23; // r12d
  __int64 v24; // rax
  _QWORD *result; // rax
  _QWORD *v26; // rbx
  char v27; // [rsp+5h] [rbp-2A3h]
  char v28; // [rsp+6h] [rbp-2A2h]
  char v29; // [rsp+7h] [rbp-2A1h] BYREF
  __m128i v30; // [rsp+8h] [rbp-2A0h] BYREF
  __m128i *v31; // [rsp+18h] [rbp-290h]
  __m128i v32; // [rsp+20h] [rbp-288h] BYREF
  __m128i *v33; // [rsp+30h] [rbp-278h]
  __int64 (__fastcall *v34)(); // [rsp+38h] [rbp-270h]
  __int64 v35; // [rsp+40h] [rbp-268h]
  __int64 v36; // [rsp+48h] [rbp-260h]
  __int64 v37; // [rsp+50h] [rbp-258h]
  __int64 v38; // [rsp+58h] [rbp-250h]
  int v39; // [rsp+60h] [rbp-248h]
  unsigned __int64 v40; // [rsp+64h] [rbp-244h]
  __int32 v41; // [rsp+6Ch] [rbp-23Ch]
  __m128i v42; // [rsp+78h] [rbp-230h] BYREF
  __m128i *v43; // [rsp+88h] [rbp-220h]
  __int64 (__fastcall *v44)(); // [rsp+90h] [rbp-218h]
  __m128i *v45; // [rsp+98h] [rbp-210h]
  __int64 (__fastcall **v46)(); // [rsp+A0h] [rbp-208h]
  __int64 v47; // [rsp+A8h] [rbp-200h]
  char v48; // [rsp+B0h] [rbp-1F8h]
  __int64 v49; // [rsp+B8h] [rbp-1F0h]
  __m128i v50; // [rsp+C0h] [rbp-1E8h] BYREF
  __m128i *v51; // [rsp+D0h] [rbp-1D8h]
  __int64 v52; // [rsp+D8h] [rbp-1D0h]
  __int64 v53; // [rsp+E0h] [rbp-1C8h]
  __int64 v54; // [rsp+E8h] [rbp-1C0h]
  __int64 v55; // [rsp+F0h] [rbp-1B8h] BYREF
  __int32 v56; // [rsp+F8h] [rbp-1B0h]
  unsigned int v57; // [rsp+FCh] [rbp-1ACh] BYREF
  __m128i v58; // [rsp+100h] [rbp-1A8h] BYREF
  __m128i v59; // [rsp+110h] [rbp-198h] BYREF
  __m128i v60; // [rsp+120h] [rbp-188h]
  __m128i v61; // [rsp+130h] [rbp-178h] BYREF
  __int128 v62; // [rsp+140h] [rbp-168h]
  __int128 v63; // [rsp+150h] [rbp-158h]
  __int128 v64; // [rsp+160h] [rbp-148h]
  __int128 v65; // [rsp+170h] [rbp-138h]
  __int128 v66; // [rsp+180h] [rbp-128h]
  __int128 v67; // [rsp+190h] [rbp-118h]
  __int64 v68; // [rsp+1A0h] [rbp-108h]
  __int64 v69; // [rsp+1A8h] [rbp-100h]
  __int64 v70; // [rsp+1B0h] [rbp-F8h]
  unsigned __int64 v71; // [rsp+1B8h] [rbp-F0h]
  __int64 v72; // [rsp+1C0h] [rbp-E8h]
  unsigned __int64 v73; // [rsp+1C8h] [rbp-E0h]
  __int64 v74; // [rsp+1D0h] [rbp-D8h]
  unsigned __int64 v75; // [rsp+1D8h] [rbp-D0h]
  __m128i v76; // [rsp+1E0h] [rbp-C8h] BYREF
  __m128i v77; // [rsp+1F0h] [rbp-B8h] BYREF
  __int128 v78; // [rsp+200h] [rbp-A8h]
  __int128 v79; // [rsp+210h] [rbp-98h]
  __int128 v80; // [rsp+220h] [rbp-88h]
  __int128 v81; // [rsp+230h] [rbp-78h]
  __int128 v82; // [rsp+240h] [rbp-68h]
  __int128 v83; // [rsp+250h] [rbp-58h]
  __m128i v84[4]; // [rsp+260h] [rbp-48h] BYREF

  v3 = a1;
  v4 = *((unsigned __int8 *)a1 + 73);
  v27 = *((_BYTE *)a1 + 74);
  v74 = a1[2];
  v73 = a1[3];
  v72 = *a1;
  v71 = a1[1];
  v28 = *((_BYTE *)a1 + 75);
  v5 = *((unsigned __int8 *)a1 + 76);
  v69 = a1[7];
  v68 = a1[8];
  v6 = *a2;
  v49 = a2[1];
  v70 = v5;
  v52 = (__int64)a1 + 77;
  v53 = 0LL;
  v54 = v6;
  while ( 1 )
  {
    if ( v6 )
    {
      if ( (_DWORD)v6 == 1 )
        std::sync::mpmc::list::Channel<T>::recv(&v58, v49, a3, 1000000000LL);
      else
        std::sync::mpmc::zero::Channel<T>::recv(&v58, v49, a3, 1000000000LL);
    }
    else
    {
      std::sync::mpmc::array::Channel<T>::recv(&v58, v49, a3, 1000000000LL);
    }
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v58), (__m128i)xmmword_167B0)) == 0xFFFF )
      break;
    v7 = _mm_load_si128(&v59);
    v76 = v60;
    v77 = v61;
    v78 = v62;
    v79 = v63;
    v80 = v64;
    v81 = v65;
    v82 = v66;
    v83 = v67;
    a3 = v58.m128i_i64[1] | v58.m128i_i64[0] ^ 2;
    if ( a3 )
    {
      v59 = v7;
      v67 = v83;
      v66 = v82;
      v65 = v81;
      v64 = v80;
      v10 = _mm_load_si128(&v76);
      v11 = _mm_load_si128(&v77);
      v63 = v79;
      v62 = v78;
      v61 = v11;
      v60 = v10;
      if ( (_BYTE)v4 )
      {
        v12 = *((_QWORD *)&v64 + 1);
      }
      else if ( v27 )
      {
        v12 = *((_QWORD *)&v63 + 1);
      }
      else
      {
        v12 = (_QWORD)v64 << 9;
      }
      LOBYTE(a3) = (_QWORD)v67 == 0LL;
      v13 = 0LL;
      if ( !(_QWORD)v67 )
        v13 = v12;
      v75 = v13;
      v14 = v12 <= v73;
      if ( !v74 )
        v14 = v12 >= v73;
      if ( (v74 == 2 || v14) && ((unsigned __int64)v67 <= v71 || v72 == 0) && (unsigned __int8)a3 | (v28 == 0) )
      {
        switch ( v70 )
        {
          case 0LL:
            v15 = 112LL;
            goto LABEL_35;
          case 1LL:
            v15 = 120LL;
LABEL_35:
            v16 = &v58.m128i_i8[v15];
            goto LABEL_36;
          case 2LL:
            v16 = &v61.m128i_i8[8];
            if ( !v61.m128i_i64[0] )
            {
              result = (_QWORD *)_rust_alloc(32LL, 8LL);
              if ( !result )
                alloc::alloc::handle_alloc_error(8LL, 32LL);
              *result = 3LL;
              if ( (_QWORD)v62 )
              {
                v26 = result;
                _rust_dealloc(*((_QWORD *)&v62 + 1), v62, 1LL);
                return v26;
              }
              return result;
            }
LABEL_36:
            v19 = <std::time::SystemTime as core::ops::arith::Add<core::time::Duration>>::add(
                    0LL,
                    0LL,
                    *(_QWORD *)v16,
                    0LL);
            <chrono::datetime::DateTime<chrono::offset::utc::Utc> as core::convert::From<std::time::SystemTime>>::from(
              &v42,
              v19);
            v56 = v42.m128i_i32[2];
            v55 = v42.m128i_i64[0];
            chrono::offset::local::inner::offset(&v32, v42.m128i_u32[0], v42.m128i_u32[1], 0LL);
            v20 = chrono::offset::LocalResult<T>::unwrap(
                    &v32,
                    &anon_3869212414b5457cc63f24db2867581c_4_llvm_9258729937902843688);
            v57 = v20;
            chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v50, &v55, v20);
            v21 = v4;
            v22 = v3;
            v23 = v50.m128i_i32[0];
            v84[0] = _mm_loadl_epi64((const __m128i *)((char *)v50.m128i_i64 + 4));
            v30.m128i_i64[0] = 0LL;
            v30.m128i_i64[1] = 1LL;
            v31 = 0LL;
            v47 = 32LL;
            v48 = 3;
            v42.m128i_i64[0] = 0LL;
            v43 = 0LL;
            v45 = &v30;
            v46 = &anon_57debe80ab30915c14c7a5fd16c25bbe_0_llvm_668824409882284616;
            if ( (unsigned __int8)<chrono::offset::fixed::FixedOffset as core::fmt::Debug>::fmt(&v57, &v42) )
              core::result::unwrap_failed(
                anon_57debe80ab30915c14c7a5fd16c25bbe_1_llvm_668824409882284616,
                55LL,
                &v29,
                &anon_57debe80ab30915c14c7a5fd16c25bbe_4_llvm_668824409882284616,
                &anon_57debe80ab30915c14c7a5fd16c25bbe_3_llvm_668824409882284616);
            v32 = v30;
            v33 = v31;
            v41 = v23;
            v39 = 1;
            v40 = _mm_load_si128(v84).m128i_u64[0];
            LODWORD(v34) = v20;
            v35 = v69;
            v36 = v68;
            v37 = 8LL;
            v38 = 0LL;
            v30.m128i_i64[0] = 0LL;
            v30.m128i_i64[1] = 1LL;
            v31 = 0LL;
            v47 = 32LL;
            v48 = 3;
            v42.m128i_i64[0] = 0LL;
            v43 = 0LL;
            v45 = &v30;
            v46 = &off_134628;
            if ( (unsigned __int8)<chrono::format::formatting::DelayedFormat<I> as core::fmt::Display>::fmt(&v32, &v42) )
              core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v29, &unk_134690, &off_134658);
            v3 = v22;
            v50 = _mm_loadu_si128(&v30);
            v51 = v31;
            v4 = v21;
            if ( v32.m128i_i64[0] != 0x8000000000000000LL && v32.m128i_i64[0] )
              _rust_dealloc(v32.m128i_i64[1], v32.m128i_i64[0], 1LL);
            uu_du::StatPrinter::convert_size(&v30, v3, v12);
            v6 = v54;
            v42.m128i_i64[0] = (__int64)&v30;
            v42.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
            v43 = &v50;
            v44 = <alloc::string::String as core::fmt::Display>::fmt;
            v32.m128i_i64[0] = (__int64)&unk_134A80;
            v32.m128i_i64[1] = 3LL;
            v35 = 0LL;
            v33 = &v42;
            v34 = (__int64 (__fastcall *)())(&dword_0 + 2);
            std::io::stdio::_print(&v32);
            if ( v30.m128i_i64[0] )
              _rust_dealloc(v30.m128i_i64[1], v30.m128i_i64[0], 1LL);
            v17 = v50.m128i_i64[0];
            if ( v50.m128i_i64[0] )
            {
              v18 = v50.m128i_i64[1];
LABEL_45:
              _rust_dealloc(v18, v17, 1LL);
            }
LABEL_46:
            v32.m128i_i64[0] = std::io::stdio::stdout();
            v24 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v32, *((_QWORD *)&v62 + 1), v63);
            if ( v24 )
            {
              v32.m128i_i64[0] = v24;
              core::result::unwrap_failed(
                aCalledResultUn_5,
                43LL,
                &v32,
                &anon_1ab022c5e154520fe3b672b83b9efe41_8_llvm_5730390425059400399,
                &off_134AD0);
            }
            v42.m128i_i64[0] = v52;
            v42.m128i_i64[1] = (__int64)<uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
            v32.m128i_i64[0] = (__int64)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
            v32.m128i_i64[1] = 1LL;
            v35 = 0LL;
            v33 = &v42;
            v34 = (__int64 (__fastcall *)())(&dword_0 + 1);
            std::io::stdio::_print(&v32);
            break;
          case 3LL:
            uu_du::StatPrinter::convert_size(&v42, v3, v12);
            v30.m128i_i64[0] = (__int64)&v42;
            v30.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
            v32.m128i_i64[0] = (__int64)&unk_134AB0;
            v32.m128i_i64[1] = 2LL;
            v35 = 0LL;
            v33 = &v30;
            v34 = (__int64 (__fastcall *)())(&dword_0 + 1);
            std::io::stdio::_print(&v32);
            v17 = v42.m128i_i64[0];
            if ( !v42.m128i_i64[0] )
              goto LABEL_46;
            v18 = v42.m128i_i64[1];
            goto LABEL_45;
        }
      }
      if ( (_QWORD)v62 )
        _rust_dealloc(*((_QWORD *)&v62 + 1), v62, 1LL);
      v53 += v75;
    }
    else
    {
      v30 = v7;
      _InterlockedExchange(
        &uucore::mods::error::EXIT_CODE,
        (*(__int64 (__fastcall **)(__int64))(_mm_shuffle_epi32(v7, 238).m128i_u64[0] + 96))(v7.m128i_i64[0]));
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v42 = _mm_loadu_si128((const __m128i *)&xmmword_13B278);
      v32.m128i_i64[0] = (__int64)&v42;
      v32.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v33 = &v30;
      v34 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v58.m128i_i64[0] = (__int64)&unk_134A30;
      v58.m128i_i64[1] = 3LL;
      v60.m128i_i64[0] = 0LL;
      v59.m128i_i64[0] = (__int64)&v32;
      v59.m128i_i64[1] = 2LL;
      std::io::stdio::_eprint(&v58);
      v8 = v30;
      if ( *(_QWORD *)v30.m128i_i64[1] )
        (*(void (__fastcall **)(__int64))v30.m128i_i64[1])(v30.m128i_i64[0]);
      v9 = *(_QWORD *)(v8.m128i_i64[1] + 8);
      if ( v9 )
        _rust_dealloc(v8.m128i_i64[0], v9, *(_QWORD *)(v8.m128i_i64[1] + 16));
      v6 = v54;
    }
  }
  if ( *((_BYTE *)v3 + 72) )
  {
    uu_du::StatPrinter::convert_size(&v76, v3, v53);
    v32.m128i_i64[0] = (__int64)&v76;
    v32.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
    v58.m128i_i64[0] = (__int64)&unk_134A60;
    v58.m128i_i64[1] = 2LL;
    v60.m128i_i64[0] = 0LL;
    v59.m128i_i64[0] = (__int64)&v32;
    v59.m128i_i64[1] = 1LL;
    std::io::stdio::_print(&v58);
    if ( v76.m128i_i64[0] )
      _rust_dealloc(v76.m128i_i64[1], v76.m128i_i64[0], 1LL);
    v76.m128i_i64[0] = v52;
    v76.m128i_i64[1] = (__int64)<uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v58.m128i_i64[0] = (__int64)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
    v58.m128i_i64[1] = 1LL;
    v60.m128i_i64[0] = 0LL;
    v59.m128i_i64[0] = (__int64)&v76;
    v59.m128i_i64[1] = 1LL;
    std::io::stdio::_print(&v58);
  }
  return 0LL;
}
