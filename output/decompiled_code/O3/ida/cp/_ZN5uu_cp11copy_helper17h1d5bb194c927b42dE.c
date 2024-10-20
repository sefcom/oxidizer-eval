        __int64 a11)
{
  __int64 v15; // rax
  __int64 **v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  unsigned __int8 v19; // bp
  unsigned __int8 v20; // r12
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // r9
  _BYTE *v29; // r13
  __int64 v30; // r12
  __int128 v31; // kr00_16
  int v32; // ebp
  __int64 v33; // r14
  __int64 v34; // rbp
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 (__fastcall *v39)(); // rcx
  __int128 v40; // xmm1
  __int128 v41; // xmm2
  char v42; // [rsp+7h] [rbp-1F1h] BYREF
  _OWORD *v43; // [rsp+8h] [rbp-1F0h] BYREF
  __int64 (__fastcall *v44)(); // [rsp+10h] [rbp-1E8h]
  __int64 *v45; // [rsp+18h] [rbp-1E0h] BYREF
  __int128 v46; // [rsp+20h] [rbp-1D8h]
  _OWORD src[11]; // [rsp+30h] [rbp-1C8h] BYREF
  _OWORD dest[11]; // [rsp+E0h] [rbp-118h] BYREF
  __int128 v49; // [rsp+190h] [rbp-68h]
  __int128 v50; // [rsp+1A0h] [rbp-58h]
  __int128 v51; // [rsp+1B0h] [rbp-48h]

  if ( a6[68] )
  {
    v15 = std::path::Path::parent(a4, a5);
    if ( !v15 )
    {
      v16 = a5;
      v15 = (__int64)a4;
    }
    LODWORD(src[0]) = 511;
    BYTE4(src[0]) = 1;
    v17 = std::fs::DirBuilder::_create(src, v15, v16);
    if ( v17 )
    {
      *(_QWORD *)a1 = 2LL;
      *(_QWORD *)(a1 + 8) = v17;
      return;
    }
  }
  if ( a5 )
  {
    v18 = *((unsigned __int8 *)a4 + (_QWORD)a5 - 1);
    if ( (v18 == 47 || v18 == 92) && !(unsigned __int8)std::path::Path::is_dir(a4, a5) )
    {
      std::path::Path::to_path_buf(a1 + 8, a4);
      *(_QWORD *)a1 = 12LL;
      return;
    }
  }
  if ( a3 == 9 && !(*(_QWORD *)a2 ^ 0x6C756E2F7665642FLL | *(unsigned __int8 *)(a2 + 8) ^ 0x6CLL) )
  {
    *(_QWORD *)&src[0] = 0x1B600000000LL;
    DWORD2(src[0]) = 16777472;
    WORD6(src[0]) = 1;
    std::fs::OpenOptions::_open(&v43, src, a4, a5);
    v45 = a4;
    *(_QWORD *)&v46 = a5;
    *(_QWORD *)&dest[0] = 0LL;
    *((_QWORD *)&dest[0] + 1) = 1LL;
    *(_QWORD *)&dest[1] = 0LL;
    *(_QWORD *)&src[3] = 32LL;
    BYTE8(src[3]) = 3;
    *(_QWORD *)&src[0] = 0LL;
    *(_QWORD *)&src[1] = 0LL;
    *(_QWORD *)&src[2] = dest;
    *((_QWORD *)&src[2] + 1) = &off_1550C8;
    if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(&v45, src) )
      core::result::unwrap_failed(aADisplayImplem, 55LL, &v42, &unk_155110, &off_1550F8);
    v31 = dest[0];
    if ( (_DWORD)v43 )
    {
      if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
      {
        v38 = *(_QWORD *)&dest[1];
        v39 = v44;
        *(_DWORD *)(a1 + 20) = HIDWORD(dest[0]);
        *(_QWORD *)(a1 + 24) = v38;
        *(_QWORD *)a1 = 3LL;
        *(_QWORD *)(a1 + 8) = v31;
        *(_DWORD *)(a1 + 16) = DWORD2(v31);
        *(_QWORD *)(a1 + 32) = v39;
        return;
      }
      v32 = DWORD2(dest[0]);
    }
    else
    {
      v32 = HIDWORD(v43);
      if ( *(_QWORD *)&dest[0] )
        _rust_dealloc(*((_QWORD *)&dest[0] + 1), *(_QWORD *)&dest[0], 1LL);
    }
    close(v32);
    *(_QWORD *)a1 = 13LL;
    return;
  }
  if ( a10 && a6[70] && !a6[63] )
  {
    v19 = a6[60];
    v20 = a6[71];
    std::sys::pal::unix::fs::stat(src);
    if ( LODWORD(src[0]) == 2 )
    {
      *((_QWORD *)&dest[0] + 1) = *((_QWORD *)&src[0] + 1);
      *(_QWORD *)&dest[0] = 2LL;
    }
    else
    {
      memcpy(dest, src, sizeof(dest));
      if ( *(_QWORD *)&dest[0] != 2LL )
      {
        uu_cp::OverwriteMode::verify((__int64)src, v19, a4, a5, v20, v28);
        v34 = *(_QWORD *)&src[0];
        if ( *(_QWORD *)&src[0] == 13LL )
        {
          v37 = std::sys::pal::unix::fs::unlink(a4, (size_t)a5);
          if ( !v37 )
            goto LABEL_27;
          v34 = 2LL;
          v33 = v37;
        }
        else
        {
          v33 = *((_QWORD *)&src[0] + 1);
          v49 = src[1];
          v50 = src[2];
          v51 = src[3];
        }
LABEL_47:
        *(_QWORD *)a1 = v34;
        *(_QWORD *)(a1 + 8) = v33;
        v40 = v50;
        v41 = v51;
        *(_OWORD *)(a1 + 16) = v49;
        *(_OWORD *)(a1 + 32) = v40;
        *(_OWORD *)(a1 + 48) = v41;
        return;
      }
    }
    core::ptr::drop_in_place<std::io::error::Error>((char *)dest + 8);
LABEL_27:
    <&[u8] as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(dest, a4, a5);
    if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    {
      src[1] = dest[1];
      src[0] = dest[0];
      core::result::unwrap_failed(aCalledResultUn_2, 43LL, src, &off_155170, &off_1556A0);
    }
    v29 = (_BYTE *)*((_QWORD *)&dest[0] + 1);
    v30 = *(_QWORD *)&dest[1];
    if ( mkfifo(*((const char **)&dest[0] + 1), 0x1B6u) != -1 )
    {
      *v29 = 0;
      if ( v30 )
        _rust_dealloc(v29, v30, 1LL);
LABEL_31:
      *(_QWORD *)a1 = 13LL;
      return;
    }
    *(_QWORD *)&dest[0] = 1LL;
    *((_QWORD *)&dest[0] + 1) = a4;
    *(_QWORD *)&dest[1] = a5;
    BYTE8(dest[1]) = 1;
    v43 = dest;
    v44 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&src[0] = &off_1556B8;
    *((_QWORD *)&src[0] + 1) = 2LL;
    *(_QWORD *)&src[2] = 0LL;
    *(_QWORD *)&src[1] = &v43;
    *((_QWORD *)&src[1] + 1) = 1LL;
    alloc::fmt::format::format_inner(&v45, src);
    v33 = (__int64)v45;
    v49 = v46;
    *v29 = 0;
    v34 = 4LL;
    if ( v30 )
      _rust_dealloc(v29, v30, 1LL);
    goto LABEL_47;
  }
  if ( a9 )
  {
    uu_cp::copy_link(src, a2, a3, a4, a5, a11);
    if ( LODWORD(src[0]) != 13 )
    {
      v21 = src[0];
      v22 = src[1];
      v23 = src[2];
      *(_OWORD *)(a1 + 48) = src[3];
      *(_OWORD *)(a1 + 32) = v23;
      *(_OWORD *)(a1 + 16) = v22;
      *(_OWORD *)a1 = v21;
      return;
    }
    goto LABEL_31;
  }
  uu_cp::platform::linux::copy_on_write(
    src,
    a2,
    a3,
    a4,
    a5,
    (unsigned __int8)a6[75],
    (unsigned __int8)a6[74],
    a7,
    a8,
    a10);
  v27 = *(_QWORD *)&src[0];
  LOWORD(dest[0]) = WORD4(src[0]);
  BYTE2(dest[0]) = BYTE10(src[0]);
  if ( *(_QWORD *)&src[0] == 13LL )
  {
    LOWORD(v45) = dest[0];
    BYTE2(v45) = BYTE2(dest[0]);
    if ( !a6[62] && a6[71] )
    {
      uu_cp::show_debug(&v45, a2, v24, BYTE10(src[0]), v25, v26);
      *(_QWORD *)a1 = 13LL;
      return;
    }
    goto LABEL_31;
  }
  *(_QWORD *)(a1 + 56) = *((_QWORD *)&src[3] + 1);
  v35 = *(_OWORD *)((char *)src + 11);
  v36 = *(_OWORD *)((char *)&src[1] + 11);
  *(_OWORD *)(a1 + 43) = *(_OWORD *)((char *)&src[2] + 11);
  *(_OWORD *)(a1 + 27) = v36;
  *(_OWORD *)(a1 + 11) = v35;
  *(_BYTE *)(a1 + 10) = BYTE2(dest[0]);
  *(_WORD *)(a1 + 8) = dest[0];
  *(_QWORD *)a1 = v27;
}
