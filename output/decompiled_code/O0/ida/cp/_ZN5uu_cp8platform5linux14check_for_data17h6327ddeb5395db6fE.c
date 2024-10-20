__int64 __fastcall uu_cp::platform::linux::check_for_data(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  __off_t v7; // rax
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  int fd; // [rsp+Ch] [rbp-FCh] BYREF
  __int64 v15; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v16; // [rsp+18h] [rbp-F0h]
  __int64 v17; // [rsp+20h] [rbp-E8h]
  _DWORD v18[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+30h] [rbp-D8h]
  _QWORD v20[10]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+88h] [rbp-80h]
  __int64 v22; // [rsp+90h] [rbp-78h]
  __int64 v23; // [rsp+98h] [rbp-70h]

  v15 = 0x1B600000000LL;
  LODWORD(v16) = 1;
  WORD2(v16) = 0;
  std::fs::OpenOptions::_open(v18, &v15, a2, a3);
  if ( !v18[0] )
  {
    fd = v18[1];
    std::fs::File::metadata(v20, &fd);
    if ( v20[0] == 2LL )
    {
      v3 = v20[1];
    }
    else
    {
      v5 = v21;
      if ( !v21 )
      {
        v8 = v22;
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v15, v22, 1LL);
        v9 = v16;
        if ( v15 )
          alloc::raw_vec::handle_error(v16, v17);
        v10 = v17;
        if ( !v17 || v8 < 0 )
          core::panicking::panic_nounwind(anon_60fe5ecc8a5a6f6a64f7c14fee2afab1_17_llvm_16066862953719322457, 166LL);
        if ( <std::fs::File as std::io::Read>::read(&fd, v17, v8) )
        {
          *(_QWORD *)a1 = v11;
          *(_BYTE *)(a1 + 8) = 2;
          if ( !v9 )
            goto LABEL_6;
        }
        else
        {
          v12 = 0LL;
          do
          {
            v13 = v12;
            if ( v8 == v12 )
              break;
            ++v12;
          }
          while ( !*(_BYTE *)(v10 + v13) );
          *(_QWORD *)a1 = 0LL;
          *(_BYTE *)(a1 + 8) = v8 != v13;
          *(_QWORD *)(a1 + 16) = 0LL;
          if ( !v9 )
            goto LABEL_6;
        }
        _rust_dealloc(v10, v9, 1LL);
LABEL_6:
        std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
        close(fd);
        return a1;
      }
      v6 = v23;
      v7 = lseek(fd, 0LL, 3);
      if ( v7 == -1 )
      {
        *(_QWORD *)a1 = v5;
        *(_BYTE *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 16) = v6;
        goto LABEL_6;
      }
      if ( v7 >= 0 )
      {
        *(_QWORD *)a1 = v5;
        *(_BYTE *)(a1 + 8) = 1;
        *(_QWORD *)(a1 + 16) = v6;
        goto LABEL_6;
      }
      v3 = (std::sys::pal::unix::os::errno() << 32) | 2;
    }
    *(_QWORD *)a1 = v3;
    *(_BYTE *)(a1 + 8) = 2;
    goto LABEL_6;
  }
  *(_QWORD *)a1 = v19;
  *(_BYTE *)(a1 + 8) = 2;
  return a1;
}
