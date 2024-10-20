__int64 __fastcall uu_cat::splice::copy_exact(int fd, __int64 a2, __int64 a3)
{
  ssize_t (**v5)(int, void *, size_t); // rax
  int v6; // ebx
  int v7; // edi
  ssize_t (**v8)(int, void *, size_t); // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r14
  ssize_t v12; // rax
  int *v14; // rax
  __int64 v15; // [rsp+8h] [rbp-4070h]
  unsigned __int64 v16; // [rsp+10h] [rbp-4068h] BYREF
  _QWORD v17[3]; // [rsp+18h] [rbp-4060h] BYREF
  __int128 v18; // [rsp+30h] [rbp-4048h]
  _QWORD s[2054]; // [rsp+48h] [rbp-4030h] BYREF

  memset(s, 0, 0x4000uLL);
  if ( !a3 )
    return 134LL;
  v5 = &read;
LABEL_3:
  v15 = a3;
  v6 = fd;
  v7 = fd;
  v8 = v5;
  v9 = ((ssize_t (__fastcall *)(int, void *, size_t))v5)(v7, s, 0x4000uLL);
  if ( v9 != -1LL )
  {
    v10 = v9;
    v16 = v9;
    if ( !v9 )
    {
      v17[0] = &anon_42361cee55f06dd1cb7425420bf289bc_11_llvm_17685125084060184286;
      v17[1] = 1LL;
      v17[2] = 8LL;
      v18 = 0LL;
      core::panicking::assert_failed(
        1LL,
        &v16,
        &anon_42361cee55f06dd1cb7425420bf289bc_7_llvm_17685125084060184286,
        v17,
        &anon_42361cee55f06dd1cb7425420bf289bc_13_llvm_17685125084060184286);
    }
    if ( v9 > 0x4000 )
      core::slice::index::slice_end_index_len_fail(
        v9,
        0x4000LL,
        &anon_42361cee55f06dd1cb7425420bf289bc_14_llvm_17685125084060184286);
    v11 = 0LL;
    while ( 1 )
    {
      v12 = write(1, (char *)s + v11, v10 - v11);
      if ( v12 == -1 )
        break;
      if ( !v12 )
        uu_cat::splice::copy_exact::panic_cold_explicit();
      v11 += v12;
      if ( v11 >= v10 )
      {
        a3 = v15 - v10;
        v5 = v8;
        fd = v6;
        if ( v15 != v10 )
          goto LABEL_3;
        return 134LL;
      }
    }
  }
  v14 = _errno_location();
  return nix::errno::consts::from_i32((unsigned int)*v14);
}
