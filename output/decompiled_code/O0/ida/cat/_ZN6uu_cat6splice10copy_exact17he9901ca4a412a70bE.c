__int64 __fastcall uu_cat::splice::copy_exact(int fd, unsigned __int64 a2)
{
  unsigned __int64 v2; // r12
  __int64 result; // rax
  _QWORD *v4; // r13
  ssize_t v5; // rax
  unsigned __int64 v6; // r12
  _QWORD *v7; // r14
  unsigned __int64 v8; // r13
  ssize_t v9; // rax
  bool v10; // cf
  bool v11; // zf
  int *v12; // rax
  unsigned __int64 v13; // [rsp+8h] [rbp-4070h]
  ssize_t v14; // [rsp+10h] [rbp-4068h] BYREF
  _QWORD v15[3]; // [rsp+18h] [rbp-4060h] BYREF
  __int128 v16; // [rsp+30h] [rbp-4048h]
  _QWORD s[2054]; // [rsp+48h] [rbp-4030h] BYREF

  v2 = a2;
  memset(s, 0, 0x4000uLL);
  result = 134LL;
  if ( a2 )
  {
    v4 = s;
LABEL_3:
    v13 = v2;
    v5 = read(fd, v4, 0x4000uLL);
    if ( v5 != -1 )
    {
      v6 = v5;
      v14 = v5;
      if ( !v5 )
      {
        v15[0] = &off_1088F8;
        v15[1] = 1LL;
        v15[2] = 8LL;
        v16 = 0LL;
        core::panicking::assert_failed(1LL, &v14, &unk_18100, v15, &off_108908);
      }
      v7 = v4;
      v8 = 0LL;
      while ( 1 )
      {
        if ( v6 >= 0x4001 )
          core::slice::index::slice_end_index_len_fail(v6, 0x4000LL, &off_1088B0);
        v9 = write(1, (char *)s + v8, v6 - v8);
        if ( v9 == -1 )
          break;
        if ( !v9 )
          uu_cat::splice::copy_exact::panic_cold_explicit();
        v10 = __CFADD__(v9, v8);
        v8 += v9;
        if ( v10 )
          core::panicking::panic_const::panic_const_add_overflow(&off_1088E0);
        if ( v8 >= v6 )
        {
          v11 = v13 == v6;
          if ( v13 < v6 )
            core::panicking::panic_const::panic_const_sub_overflow(&off_108898);
          v2 = v13 - v6;
          v4 = v7;
          if ( v11 )
            return 134LL;
          goto LABEL_3;
        }
      }
    }
    v12 = _errno_location();
    if ( ((unsigned __int8)v12 & 3) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(
        4LL,
        v12,
        &anon_77e16c7defca1adeda749c3345405d55_238_llvm_10211869485132708612);
    return nix::errno::consts::from_i32((unsigned int)*v12);
  }
  return result;
}
