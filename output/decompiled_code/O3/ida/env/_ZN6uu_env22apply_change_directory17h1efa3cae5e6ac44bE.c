__int64 __fastcall uu_env::apply_change_directory(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rax
  void *v3; // r14
  __int64 result; // rax
  size_t v5; // r14
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD v13[3]; // [rsp+8h] [rbp-A0h] BYREF
  _QWORD v14[4]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v15[3]; // [rsp+40h] [rbp-68h] BYREF
  char v16; // [rsp+58h] [rbp-50h]
  _QWORD v17[9]; // [rsp+60h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 120);
  if ( *(_QWORD *)(a1 + 88) || !v1 )
  {
    if ( v1 && (v5 = *(_QWORD *)(a1 + 128), (v6 = std::sys::pal::unix::os::chdir(*(void **)(a1 + 120), v5)) != 0) )
    {
      v12 = v6;
      v15[0] = 1LL;
      v15[1] = v1;
      v15[2] = v5;
      v16 = 1;
      v14[0] = v15;
      v14[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v14[2] = &v12;
      v14[3] = <std::io::error::Error as core::fmt::Display>::fmt;
      v17[0] = &off_10C880;
      v17[1] = 2LL;
      v17[4] = 0LL;
      v17[2] = v14;
      v17[3] = 2LL;
      alloc::fmt::format::format_inner(v13, v17);
      v7 = v13[0];
      v8 = v13[1];
      v9 = v13[2];
      v10 = _rust_alloc(32LL, 8LL);
      if ( !v10 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      *(_QWORD *)v10 = v7;
      *(_QWORD *)(v10 + 8) = v8;
      *(_QWORD *)(v10 + 16) = v9;
      *(_DWORD *)(v10 + 24) = 125;
      v11 = v10;
      core::ptr::drop_in_place<std::io::error::Error>(&v12);
      return v11;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v2 = (void *)_rust_alloc(38LL, 1LL);
    if ( !v2 )
      alloc::raw_vec::handle_error(1LL, 38LL);
    v3 = v2;
    qmemcpy(v2, "must specify command with --chdir (-C)", 38);
    result = _rust_alloc(32LL, 8LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    *(_QWORD *)result = 38LL;
    *(_QWORD *)(result + 8) = v3;
    *(_QWORD *)(result + 16) = 38LL;
    *(_DWORD *)(result + 24) = 125;
  }
  return result;
}
