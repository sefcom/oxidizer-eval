__int64 __fastcall uu_tail::args::Settings::check_warnings::{{closure}}(__int64 a1)
{
  unsigned int v1; // ebp
  int *v3; // rbx
  int v4; // edi
  _BYTE v6[8]; // [rsp+8h] [rbp-E0h] BYREF
  _BYTE v7[8]; // [rsp+10h] [rbp-D8h] BYREF
  _QWORD v8[7]; // [rsp+18h] [rbp-D0h] BYREF
  int v9; // [rsp+50h] [rbp-98h]

  if ( *(_DWORD *)(a1 + 16) == -1 )
    core::option::unwrap_failed(&anon_3a851dbf6eb312812694bd4154fcfdc0_33_llvm_5498030807014029073);
  v3 = (int *)(a1 + 16);
  std::fs::File::metadata(v8, a1 + 16);
  if ( v8[0] == 2LL )
  {
    std::io::error::repr_bitpacked::decode_repr(v6, v8[1]);
    if ( v6[0] >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v7);
    v1 = 0;
  }
  else
  {
    LOBYTE(v1) = (v9 & 0xF000) != 0x8000;
  }
  v4 = *(_DWORD *)(a1 + 16);
  if ( (*(_BYTE *)(a1 + 20) & 1) != 0 )
  {
    *v3 = -1;
    if ( v4 == -1 )
      core::option::unwrap_failed(&anon_3a851dbf6eb312812694bd4154fcfdc0_29_llvm_5498030807014029073);
  }
  else if ( v4 != -1 )
  {
    std::sys::pal::unix::fs::debug_assert_fd_is_open();
    close(*v3);
  }
  return v1;
}
