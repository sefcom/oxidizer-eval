_OWORD *__fastcall uu_truncate::truncate(char a1, __int64 a2, _QWORD *a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v8; // bp
  __int64 v9; // rsi
  __int64 v10; // rax
  __int128 *v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  _OWORD *v18; // rbx
  __int128 *v19; // rdx
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // rbx
  _OWORD *v23; // rax
  __int128 v24; // xmm0
  __int64 v25; // r15
  __int64 v26; // r12
  __int64 v27; // rbx
  _OWORD *v28; // rax
  __int128 v29; // xmm0
  _OWORD *v30; // rax
  __int128 v31; // xmm0
  __int64 v32; // r12
  __int64 v33; // r13
  __int64 v34; // rdi
  __int64 v35; // rsi
  _OWORD *v36; // rax
  _OWORD *v37; // rax
  __int128 v38; // xmm0
  __int64 v39; // rdx
  char *v40; // rdi
  __int64 v41; // rbx
  void *v42; // r14
  _OWORD *v43; // rax
  __int128 v44; // xmm0
  _OWORD *v45; // rax
  __int128 v46; // xmm0
  unsigned __int64 v48; // r12
  __int64 v49; // r13
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rcx
  _OWORD *v54; // rax
  __int128 v55; // xmm0
  _OWORD *v56; // rax
  __int128 v57; // xmm0
  _OWORD v58[11]; // [rsp+0h] [rbp-278h] BYREF
  __int128 v59; // [rsp+B8h] [rbp-1C0h] BYREF
  __int64 v60; // [rsp+C8h] [rbp-1B0h]
  __int128 v61; // [rsp+D0h] [rbp-1A8h] BYREF
  __int128 v62; // [rsp+E0h] [rbp-198h]
  __int128 v63; // [rsp+F0h] [rbp-188h] BYREF
  __int128 v64; // [rsp+100h] [rbp-178h]
  _QWORD v65[2]; // [rsp+110h] [rbp-168h] BYREF
  __int128 *v66; // [rsp+120h] [rbp-158h] BYREF
  __int64 (__fastcall *v67)(); // [rsp+128h] [rbp-150h]
  __int64 v68; // [rsp+130h] [rbp-148h] BYREF
  __int128 v69; // [rsp+138h] [rbp-140h] BYREF
  __int64 v70; // [rsp+148h] [rbp-130h] BYREF
  __int128 v71; // [rsp+150h] [rbp-128h] BYREF
  __int64 v72; // [rsp+160h] [rbp-118h] BYREF
  __int128 v73; // [rsp+168h] [rbp-110h] BYREF
  __int64 v74; // [rsp+178h] [rbp-100h] BYREF
  __int128 v75; // [rsp+180h] [rbp-F8h] BYREF
  _OWORD dest[14]; // [rsp+190h] [rbp-E8h] BYREF

  v8 = a1 ^ 1;
  v9 = *a3;
  v10 = *a4;
  v11 = (__int128 *)(a4 + 1);
  if ( *a3 == 0x8000000000000000LL )
  {
    if ( v10 == 0x8000000000000000LL )
      core::panicking::panic(aInternalErrorE_3, 40LL, &off_1067F0, v11);
    v74 = v10;
    v75 = *v11;
    if ( !(_QWORD)v75 || v75 < 0 )
      goto LABEL_93;
    uu_truncate::parse_mode_and_size(&v63);
    if ( (_QWORD)v63 == 3LL )
    {
      v65[0] = *((_QWORD *)&v63 + 1);
      v65[1] = v64;
      if ( (*((_QWORD *)&v63 + 1) == 5LL || *((_QWORD *)&v63 + 1) == 6LL) && !(_QWORD)v64 )
      {
        v18 = (_OWORD *)uucore::mods::error::USimpleError::new(1LL, aDivisionByZero, 16LL);
        goto LABEL_59;
      }
      v12 = 24 * a6;
      while ( 1 )
      {
        if ( !v12 || !a5 )
        {
          v18 = 0LL;
          goto LABEL_59;
        }
        core::slice::raw::from_raw_parts::precondition_check(*(_QWORD *)(a5 + 8), 1LL, 1LL, *(_QWORD *)(a5 + 16));
        std::sys::pal::unix::fs::stat(v58);
        if ( *(_QWORD *)&v58[0] == 2LL )
          break;
        memcpy(dest, v58, 0xB0uLL);
        if ( *(_QWORD *)&dest[0] == 2LL )
        {
          v13 = *((_QWORD *)&dest[0] + 1);
          goto LABEL_16;
        }
        if ( (WORD4(dest[3]) & 0xF000) == 0x1000 )
        {
          v52 = *(_QWORD *)(a5 + 8);
          if ( v52 )
          {
            v53 = *(_QWORD *)(a5 + 16);
            if ( v53 >= 0 )
            {
              *(_QWORD *)&v61 = 0LL;
              *((_QWORD *)&v61 + 1) = v52;
              *(_QWORD *)&v62 = v53;
              BYTE8(v62) = 1;
              v66 = &v61;
              v67 = <os_display::Quoted as core::fmt::Display>::fmt;
              *(_QWORD *)&v58[0] = &off_106780;
              *((_QWORD *)&v58[0] + 1) = 2LL;
              *(_QWORD *)&v58[1] = &v66;
              *((_QWORD *)&v58[1] + 1) = 1LL;
              *(_QWORD *)&v58[2] = 0LL;
              alloc::fmt::format::format_inner(&v59, v58);
              *(_QWORD *)&v58[1] = v60;
              v58[0] = v59;
              DWORD2(v58[1]) = 1;
              v54 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
              v18 = v54;
              if ( !v54 )
                alloc::alloc::handle_alloc_error(8LL, 32LL);
              v55 = v58[0];
              v54[1] = v58[1];
              *v54 = v55;
              if ( *(_QWORD *)&dest[0] == 2LL )
              {
                std::io::error::repr_bitpacked::decode_repr(v58, *((_QWORD *)&dest[0] + 1));
                if ( LOBYTE(v58[0]) >= 3u )
                  core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)v58 + 8);
              }
              goto LABEL_59;
            }
          }
LABEL_93:
          core::panicking::panic_nounwind(aUnsafePrecondi_6, 162LL);
        }
        v14 = *(_QWORD *)&dest[5];
LABEL_21:
        v15 = uu_truncate::TruncateMode::to_size(v65, v14);
        v16 = *(_QWORD *)(a5 + 8);
        if ( !v16 )
          goto LABEL_93;
        v17 = *(_QWORD *)(a5 + 16);
        if ( v17 < 0 )
          goto LABEL_93;
        v18 = uu_truncate::file_truncate(v16, v17, v8, v15);
        a5 += 24LL;
        v12 -= 24LL;
        if ( v18 )
          goto LABEL_59;
      }
      v13 = *((_QWORD *)&v58[0] + 1);
      dest[0] = __PAIR128__(*((unsigned __int64 *)&v58[0] + 1), 2LL);
LABEL_16:
      std::io::error::repr_bitpacked::decode_repr(v58, v13);
      if ( LOBYTE(v58[0]) >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)v58 + 8);
      v14 = 0LL;
      goto LABEL_21;
    }
    dest[1] = v64;
    dest[0] = v63;
    *(_QWORD *)&v59 = dest;
    *((_QWORD *)&v59 + 1) = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
    *(_QWORD *)&v58[0] = &off_1067C0;
    *((_QWORD *)&v58[0] + 1) = 1LL;
    *(_QWORD *)&v58[1] = &v59;
    *((_QWORD *)&v58[1] + 1) = 1LL;
    *(_QWORD *)&v58[2] = 0LL;
    alloc::fmt::format::format_inner(&v61, v58);
    *(_QWORD *)&v58[1] = v62;
    v58[0] = v61;
    DWORD2(v58[1]) = 1;
    v30 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    v18 = v30;
    if ( !v30 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v31 = v58[0];
    v30[1] = v58[1];
    *v30 = v31;
    core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(dest);
LABEL_59:
    alloc::raw_vec::RawVec<T,A>::current_memory(v58, &v74);
    v39 = *((_QWORD *)&v58[0] + 1);
    if ( *((_QWORD *)&v58[0] + 1) )
    {
      v40 = (char *)&v75 + 8;
LABEL_73:
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v40, *(_QWORD *)&v58[0], v39, *(_QWORD *)&v58[1]);
    }
  }
  else
  {
    v19 = (__int128 *)(a3 + 1);
    if ( v10 == 0x8000000000000000LL )
    {
      v72 = v9;
      v73 = *v19;
      v20 = v73;
      if ( !(_QWORD)v73 )
        goto LABEL_93;
      v21 = *((_QWORD *)&v73 + 1);
      if ( v73 < 0 )
        goto LABEL_93;
      std::sys::pal::unix::fs::stat(v58);
      if ( *(_QWORD *)&v58[0] == 2LL )
      {
        v22 = *((_QWORD *)&v58[0] + 1);
        *(_QWORD *)&v59 = *((_QWORD *)&v58[0] + 1);
        if ( (unsigned __int8)std::io::error::Error::kind(&v59) )
        {
          *(_QWORD *)&v58[0] = 0LL;
          *((_QWORD *)&v58[0] + 1) = 1LL;
          *(_QWORD *)&v58[1] = 0LL;
          *((_QWORD *)&v58[1] + 1) = v22;
          v23 = (_OWORD *)_rust_alloc(32LL, 8LL);
          if ( !v23 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v18 = v23;
          v24 = v58[0];
          v23[1] = v58[1];
          *v23 = v24;
        }
        else
        {
          *(_QWORD *)&dest[0] = 0LL;
          *((_QWORD *)&dest[0] + 1) = v20;
          *(_QWORD *)&dest[1] = v21;
          BYTE8(dest[1]) = 1;
          *(_QWORD *)&v63 = dest;
          *((_QWORD *)&v63 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&v58[0] = &off_1067D0;
          *((_QWORD *)&v58[0] + 1) = 2LL;
          *(_QWORD *)&v58[1] = &v63;
          *((_QWORD *)&v58[1] + 1) = 1LL;
          *(_QWORD *)&v58[2] = 0LL;
          alloc::fmt::format::format_inner(&v61, v58);
          *(_QWORD *)&v58[1] = v62;
          v58[0] = v61;
          DWORD2(v58[1]) = 1;
          v45 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
          v18 = v45;
          if ( !v45 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v46 = v58[0];
          v45[1] = v58[1];
          *v45 = v46;
          std::io::error::repr_bitpacked::decode_repr(v58, v59);
          if ( LOBYTE(v58[0]) >= 3u )
            core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)v58 + 8);
        }
      }
      else
      {
        v32 = *(_QWORD *)&v58[5];
        v33 = 24 * a6;
        v18 = 0LL;
        while ( v33 && a5 )
        {
          v34 = *(_QWORD *)(a5 + 8);
          if ( !v34 )
            goto LABEL_93;
          v35 = *(_QWORD *)(a5 + 16);
          if ( v35 < 0 )
            goto LABEL_93;
          v36 = uu_truncate::file_truncate(v34, v35, v8, v32);
          a5 += 24LL;
          v33 -= 24LL;
          if ( v36 )
          {
            v18 = v36;
            break;
          }
        }
      }
      alloc::raw_vec::RawVec<T,A>::current_memory(v58, &v72);
      v39 = *((_QWORD *)&v58[0] + 1);
      if ( *((_QWORD *)&v58[0] + 1) )
      {
        v40 = (char *)&v73 + 8;
        goto LABEL_73;
      }
    }
    else
    {
      v68 = v9;
      v69 = *v19;
      v70 = v10;
      v71 = *v11;
      v25 = v69;
      if ( !(_QWORD)v69 )
        goto LABEL_93;
      v26 = *((_QWORD *)&v69 + 1);
      if ( v69 < 0 || !(_QWORD)v71 || v71 < 0 )
        goto LABEL_93;
      uu_truncate::parse_mode_and_size(&v61);
      if ( (_QWORD)v61 == 3LL )
      {
        if ( *((_QWORD *)&v61 + 1) )
        {
          v66 = (__int128 *)*((_QWORD *)&v61 + 1);
          v67 = (__int64 (__fastcall *)())v62;
          if ( (*((_QWORD *)&v61 + 1) == 5LL || *((_QWORD *)&v61 + 1) == 6LL) && !(_QWORD)v62 )
          {
            v18 = (_OWORD *)uucore::mods::error::USimpleError::new(1LL, aDivisionByZero, 16LL);
          }
          else
          {
            std::sys::pal::unix::fs::stat(v58);
            if ( *(_QWORD *)&v58[0] == 2LL )
            {
              v27 = *((_QWORD *)&v58[0] + 1);
              v65[0] = *((_QWORD *)&v58[0] + 1);
              if ( (unsigned __int8)std::io::error::Error::kind(v65) )
              {
                *(_QWORD *)&v58[0] = 0LL;
                *((_QWORD *)&v58[0] + 1) = 1LL;
                *(_QWORD *)&v58[1] = 0LL;
                *((_QWORD *)&v58[1] + 1) = v27;
                v28 = (_OWORD *)_rust_alloc(32LL, 8LL);
                if ( !v28 )
                  alloc::alloc::handle_alloc_error(8LL, 32LL);
                v18 = v28;
                v29 = v58[0];
                v28[1] = v58[1];
                *v28 = v29;
              }
              else
              {
                *(_QWORD *)&dest[0] = 0LL;
                *((_QWORD *)&dest[0] + 1) = v25;
                *(_QWORD *)&dest[1] = v26;
                BYTE8(dest[1]) = 1;
                *(_QWORD *)&v59 = dest;
                *((_QWORD *)&v59 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
                *(_QWORD *)&v58[0] = &off_1067D0;
                *((_QWORD *)&v58[0] + 1) = 2LL;
                *(_QWORD *)&v58[1] = &v59;
                *((_QWORD *)&v58[1] + 1) = 1LL;
                *(_QWORD *)&v58[2] = 0LL;
                alloc::fmt::format::format_inner(&v63, v58);
                *(_QWORD *)&v58[1] = v64;
                v58[0] = v63;
                DWORD2(v58[1]) = 1;
                v56 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
                v18 = v56;
                if ( !v56 )
                  alloc::alloc::handle_alloc_error(8LL, 32LL);
                v57 = v58[0];
                v56[1] = v58[1];
                *v56 = v57;
                std::io::error::repr_bitpacked::decode_repr(v58, v65[0]);
                if ( LOBYTE(v58[0]) >= 3u )
                  core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)v58 + 8);
              }
            }
            else
            {
              v48 = uu_truncate::TruncateMode::to_size(&v66, *(unsigned __int64 *)&v58[5]);
              v49 = 24 * a6;
              while ( v49 && a5 )
              {
                v50 = *(_QWORD *)(a5 + 8);
                if ( !v50 )
                  goto LABEL_93;
                v51 = *(_QWORD *)(a5 + 16);
                if ( v51 < 0 )
                  goto LABEL_93;
                v18 = uu_truncate::file_truncate(v50, v51, v8, v48);
                a5 += 24LL;
                v49 -= 24LL;
                if ( v18 )
                  goto LABEL_64;
              }
              v18 = 0LL;
            }
          }
        }
        else
        {
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(v58, 55LL, 0LL);
          v41 = *((_QWORD *)&v58[0] + 1);
          if ( *(_QWORD *)&v58[0] )
            alloc::raw_vec::handle_error(*((_QWORD *)&v58[0] + 1), *(_QWORD *)&v58[1]);
          v42 = *(void **)&v58[1];
          core::intrinsics::copy_nonoverlapping::precondition_check(&unk_1E7F7, *(_QWORD *)&v58[1], 1LL, 1LL, 55LL);
          qmemcpy(v42, "you must specify a relative '--size' with '--reference'", 55);
          *(_QWORD *)&v58[0] = v41;
          *((_QWORD *)&v58[0] + 1) = v42;
          *(_QWORD *)&v58[1] = 55LL;
          DWORD2(v58[1]) = 1;
          v43 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
          v18 = v43;
          if ( !v43 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v44 = v58[0];
          v43[1] = v58[1];
          *v43 = v44;
        }
      }
      else
      {
        dest[1] = v62;
        dest[0] = v61;
        *(_QWORD *)&v59 = dest;
        *((_QWORD *)&v59 + 1) = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
        *(_QWORD *)&v58[0] = &off_1067C0;
        *((_QWORD *)&v58[0] + 1) = 1LL;
        *(_QWORD *)&v58[1] = &v59;
        *((_QWORD *)&v58[1] + 1) = 1LL;
        *(_QWORD *)&v58[2] = 0LL;
        alloc::fmt::format::format_inner(&v63, v58);
        *(_QWORD *)&v58[1] = v64;
        v58[0] = v63;
        DWORD2(v58[1]) = 1;
        v37 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        v18 = v37;
        if ( !v37 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v38 = v58[0];
        v37[1] = v58[1];
        *v37 = v38;
        core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(dest);
      }
LABEL_64:
      alloc::raw_vec::RawVec<T,A>::current_memory(v58, &v70);
      if ( *((_QWORD *)&v58[0] + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
          (char *)&v71 + 8,
          *(_QWORD *)&v58[0],
          *((_QWORD *)&v58[0] + 1),
          *(_QWORD *)&v58[1]);
      alloc::raw_vec::RawVec<T,A>::current_memory(v58, &v68);
      v39 = *((_QWORD *)&v58[0] + 1);
      if ( *((_QWORD *)&v58[0] + 1) )
      {
        v40 = (char *)&v69 + 8;
        goto LABEL_73;
      }
    }
  }
  return v18;
}
