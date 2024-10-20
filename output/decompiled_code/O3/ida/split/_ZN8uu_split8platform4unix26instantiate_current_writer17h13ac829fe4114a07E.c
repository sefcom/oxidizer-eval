        char a5)
{
  __int64 v5; // rax
  __int64 v6; // r15
  _DWORD *v9; // rax
  __int64 v10; // r12
  _DWORD *v11; // r14
  __int64 v12; // rbp
  _DWORD *v13; // rax
  _DWORD *v14; // r13
  __int64 v15; // r14
  int v16; // ebp
  _DWORD *v17; // rax
  _DWORD *v18; // r14
  __int64 v19; // rax
  __int64 (__fastcall **v20)(); // rax
  __int64 v21; // r14
  int v22; // ebp
  __int64 v23; // r14
  _OWORD *v24; // rax
  _OWORD *v25; // r14
  __int128 v26; // xmm0
  __int64 v27; // rax
  __int64 v29; // [rsp+0h] [rbp-2A8h] BYREF
  __int64 v30; // [rsp+8h] [rbp-2A0h]
  __int128 v31; // [rsp+10h] [rbp-298h]
  __int128 v32; // [rsp+20h] [rbp-288h] BYREF
  int v33; // [rsp+30h] [rbp-278h] BYREF
  _BYTE v34[24]; // [rsp+34h] [rbp-274h]
  _OWORD v35[2]; // [rsp+50h] [rbp-258h] BYREF
  __int64 v36; // [rsp+70h] [rbp-238h]
  _DWORD *v37; // [rsp+78h] [rbp-230h]
  __int64 v38; // [rsp+80h] [rbp-228h]
  __int64 v39; // [rsp+88h] [rbp-220h]
  _QWORD v40[2]; // [rsp+90h] [rbp-218h] BYREF
  _BYTE v41[28]; // [rsp+A4h] [rbp-204h]
  _OWORD src[13]; // [rsp+C0h] [rbp-1E8h] BYREF
  _BYTE dest[280]; // [rsp+190h] [rbp-118h] BYREF

  v40[0] = a3;
  v40[1] = a4;
  if ( *a2 != 0x8000000000000000LL )
  {
    v39 = a2[1];
    v6 = a2[2];
    std::env::_var(src, &unk_13B80, 4LL);
    std::env::set_var(&unk_13B80, 4LL, a3, a4);
    v9 = (_DWORD *)_rust_alloc(4LL, 1LL);
    if ( !v9 )
      alloc::raw_vec::handle_error(1LL, 4LL);
    *v9 = 1162627398;
    v35[1] = src[1];
    v35[0] = src[0];
    v36 = 4LL;
    v37 = v9;
    v38 = 4LL;
    std::env::_var(src, aShell, 5LL);
    v10 = *((_QWORD *)&src[0] + 1);
    v11 = *(_DWORD **)&src[1];
    if ( *(_QWORD *)&src[0] )
    {
      v12 = 7LL;
      v13 = (_DWORD *)_rust_alloc(7LL, 1LL);
      if ( !v13 )
        alloc::raw_vec::handle_error(1LL, 7LL);
      v14 = v13;
      *(_DWORD *)((char *)v13 + 3) = 1752379246;
      *v13 = 1852400175;
      if ( 2 * v10 )
        _rust_dealloc(v11, v10, 1LL);
      v11 = v14;
      v10 = 7LL;
    }
    else
    {
      v12 = *((_QWORD *)&src[1] + 1);
    }
    std::sys::pal::unix::process::process_common::Command::new(src, v11, v12);
    memcpy(dest, src, 0xD0uLL);
    if ( v10 )
      _rust_dealloc(v11, v10, 1LL);
    std::sys::pal::unix::process::process_common::Command::arg(dest, aC, 2LL);
    std::sys::pal::unix::process::process_common::Command::arg(dest, v39, v6);
    std::sys::pal::unix::process::process_common::Command::stdin(dest, 2LL);
    std::process::Command::spawn(&v29, dest);
    if ( (_DWORD)v29 )
    {
      v21 = v30;
      core::ptr::drop_in_place<std::process::Command>(dest);
      core::ptr::drop_in_place<uu_split::platform::unix::WithEnvVarSet>(v35);
      *(_QWORD *)(a1 + 8) = v21;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      return a1;
    }
    v22 = HIDWORD(v29);
    v23 = v30;
    v33 = HIDWORD(v29);
    *(_QWORD *)v34 = v30;
    *(_OWORD *)&v34[8] = v31;
    core::ptr::drop_in_place<std::process::Command>(dest);
    v32 = *(_OWORD *)&v34[8];
    core::ptr::drop_in_place<uu_split::platform::unix::WithEnvVarSet>(v35);
    *(_DWORD *)v41 = v22;
    *(_QWORD *)&v41[4] = v23;
    *(_OWORD *)&v41[12] = v32;
    v24 = (_OWORD *)_rust_alloc(28LL, 4LL);
    if ( !v24 )
      alloc::alloc::handle_alloc_error(4LL, 28LL);
    v25 = v24;
    v26 = *(_OWORD *)v41;
    *(_OWORD *)((char *)v24 + 12) = *(_OWORD *)&v41[12];
    *v24 = v26;
    v27 = _rust_alloc(0x2000LL, 1LL);
    if ( !v27 )
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    *(_QWORD *)a1 = 0x2000LL;
    *(_QWORD *)(a1 + 8) = v27;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_BYTE *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 32) = v25;
    v20 = &off_10BF38;
LABEL_25:
    *(_QWORD *)(a1 + 40) = v20;
    return a1;
  }
  if ( !a5 )
  {
    v29 = 0x1B600000000LL;
    LODWORD(v30) = 0x10000;
    WORD2(v30) = 0;
    std::fs::OpenOptions::_open(&v33, &v29, a3, a4);
    if ( v33 )
    {
      *(_QWORD *)&v32 = *(_QWORD *)&v34[4];
      *(_QWORD *)&v35[0] = v40;
      *((_QWORD *)&v35[0] + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&src[0] = &off_10BFA8;
      *((_QWORD *)&src[0] + 1) = 2LL;
      *(_QWORD *)&src[2] = 0LL;
      *(_QWORD *)&src[1] = v35;
      *((_QWORD *)&src[1] + 1) = 1LL;
      alloc::fmt::format::format_inner(dest, src);
      v5 = std::io::error::Error::new(39LL, dest);
      goto LABEL_13;
    }
    goto LABEL_14;
  }
  v29 = 0x1B600000000LL;
  LODWORD(v30) = 16777472;
  WORD2(v30) = 1;
  std::fs::OpenOptions::_open(&v33, &v29, a3, a4);
  if ( !v33 )
  {
LABEL_14:
    v16 = *(_DWORD *)v34;
    v17 = (_DWORD *)_rust_alloc(4LL, 4LL);
    if ( !v17 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    v18 = v17;
    *v17 = v16;
    v19 = _rust_alloc(0x2000LL, 1LL);
    if ( !v19 )
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    *(_QWORD *)a1 = 0x2000LL;
    *(_QWORD *)(a1 + 8) = v19;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_BYTE *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 32) = v18;
    v20 = &off_10BEE8;
    goto LABEL_25;
  }
  *(_QWORD *)&v32 = *(_QWORD *)&v34[4];
  *(_QWORD *)&v35[0] = v40;
  *((_QWORD *)&v35[0] + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&src[0] = &off_10BF88;
  *((_QWORD *)&src[0] + 1) = 2LL;
  *(_QWORD *)&src[2] = 0LL;
  *(_QWORD *)&src[1] = v35;
  *((_QWORD *)&src[1] + 1) = 1LL;
  alloc::fmt::format::format_inner(dest, src);
  v5 = std::io::error::Error::new(39LL, dest);
LABEL_13:
  v15 = v5;
  core::ptr::drop_in_place<std::io::error::Error>(&v32);
  *(_QWORD *)(a1 + 8) = v15;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return a1;
}
