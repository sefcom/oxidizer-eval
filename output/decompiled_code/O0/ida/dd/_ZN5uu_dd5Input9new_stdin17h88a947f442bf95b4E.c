_QWORD *__fastcall uu_dd::Input::new_stdin(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int128 v6; // xmm0
  __int64 (__fastcall **v7)(); // rcx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r15
  int fd[2]; // [rsp+8h] [rbp-170h] BYREF
  __int128 v13; // [rsp+10h] [rbp-168h]
  __int128 v14; // [rsp+20h] [rbp-158h]
  _QWORD v15[2]; // [rsp+30h] [rbp-148h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-138h] BYREF
  _QWORD v17[6]; // [rsp+50h] [rbp-128h] BYREF
  _QWORD v18[3]; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v19; // [rsp+98h] [rbp-E0h]
  _QWORD v20[7]; // [rsp+B0h] [rbp-C8h] BYREF
  int v21; // [rsp+E8h] [rbp-90h]

  std::io::stdio::stdin();
  *(_QWORD *)fd = 1LL;
  std::fs::File::metadata(v20, &fd[1]);
  if ( v20[0] == 2LL )
  {
    *(_QWORD *)&v13 = 0x8000000000000000LL;
    *((_QWORD *)&v14 + 1) = v20[1];
    v3 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !v3 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
  }
  else
  {
    if ( (v21 & 0xF000) == 0x8000 && (*(_BYTE *)(a2 + 66) & 1) != 0 )
    {
      v9 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v10 = *(_QWORD *)(v9 + 8);
      v11 = *(_QWORD *)(v9 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v10, 1LL, 1LL, v11);
      v16[0] = v10;
      v16[1] = v11;
      v15[0] = v16;
      v15[1] = <&T as core::fmt::Display>::fmt;
      v17[0] = &unk_143C10;
      v17[1] = 2LL;
      v17[4] = 0LL;
      v17[2] = v15;
      v17[3] = 1LL;
      std::io::stdio::_eprint(v17);
      v18[0] = &off_143C50;
      v18[1] = 1LL;
      v18[2] = 8LL;
      v19 = 0LL;
      std::io::stdio::_eprint(v18);
      v3 = alloc::alloc::Global::alloc_impl(1LL, 4LL, 4LL, 0LL);
      if ( !v3 )
        alloc::alloc::handle_alloc_error(4LL, 4LL);
      *(_DWORD *)v3 = 1;
      v7 = (__int64 (__fastcall **)())&anon_f907210316a4f48a9c7de5c93e2a79ff_291_llvm_5503381581801417789;
      goto LABEL_10;
    }
    v4 = *(_QWORD *)(a2 + 128);
    if ( !v4 || !uu_dd::Source::skip(fd, v4) )
    {
      a1[1] = *(_QWORD *)fd;
      a1[2] = a2;
      *a1 = 0LL;
      return a1;
    }
    *(_QWORD *)&v13 = 0x8000000000000000LL;
    *((_QWORD *)&v14 + 1) = v5;
    v3 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !v3 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
  }
  v6 = v13;
  *(_OWORD *)(v3 + 16) = v14;
  *(_OWORD *)v3 = v6;
  v7 = &anon_f907210316a4f48a9c7de5c93e2a79ff_287_llvm_5503381581801417789;
LABEL_10:
  a1[1] = v3;
  a1[2] = v7;
  *a1 = 1LL;
  std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd[1]);
  close(fd[1]);
  return a1;
}
