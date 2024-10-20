__int64 __fastcall uu_dd::Input::new_stdin(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int64 (__fastcall **v6)(); // rcx
  __int64 v8; // rsi
  __m128 v9; // xmm0
  int fd[2]; // [rsp+0h] [rbp-E8h] BYREF
  _QWORD v11[2]; // [rsp+8h] [rbp-E0h] BYREF
  __int128 v12; // [rsp+18h] [rbp-D0h] BYREF
  __int128 v13; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v14[24]; // [rsp+38h] [rbp-B0h]
  int v15; // [rsp+60h] [rbp-88h]

  std::io::stdio::stdin();
  *(_QWORD *)fd = 1LL;
  std::fs::File::metadata(&v13, &fd[1]);
  if ( (_DWORD)v13 != 2 )
  {
    if ( (v15 & 0xF000) == 0x8000 && *(_BYTE *)(a2 + 66) )
    {
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v12 = xmmword_11BE68;
      v11[0] = &v12;
      v11[1] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v13 = &unk_115C08;
      *((_QWORD *)&v13 + 1) = 2LL;
      *(_QWORD *)v14 = v11;
      *(_OWORD *)&v14[8] = 1uLL;
      std::io::stdio::_eprint(&v13);
      *(_QWORD *)&v13 = &off_115C48;
      *((_QWORD *)&v13 + 1) = 1LL;
      *(_QWORD *)v14 = 8LL;
      *(_OWORD *)&v14[8] = 0LL;
      std::io::stdio::_eprint(&v13);
      v4 = _rust_alloc(4LL, 4LL);
      if ( !v4 )
        alloc::alloc::handle_alloc_error(4LL, 4LL);
      *(_DWORD *)v4 = 1;
      v6 = (__int64 (__fastcall **)())&anon_9b9ba72dabd212696498d24b7f543cb0_76_llvm_3928628070634382108;
      goto LABEL_11;
    }
    v8 = *(_QWORD *)(a2 + 128);
    if ( v8 )
    {
      if ( uu_dd::Source::skip(fd, v8) )
        goto LABEL_3;
      v9 = (__m128)*(unsigned __int64 *)fd;
    }
    else
    {
      v9 = (__m128)anon_f941c7d894c550ecfedd045c68d8a012_33_llvm_4119223083302802398;
    }
    _mm_storel_ps((double *)(a1 + 8), v9);
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)a1 = 0LL;
    return a1;
  }
  v3 = *((_QWORD *)&v13 + 1);
LABEL_3:
  *(_QWORD *)&v13 = 0x8000000000000000LL;
  *(_QWORD *)&v14[8] = v3;
  v4 = _rust_alloc(32LL, 8LL);
  if ( !v4 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v5 = v13;
  *(_OWORD *)(v4 + 16) = *(_OWORD *)v14;
  *(_OWORD *)v4 = v5;
  v6 = &anon_9b9ba72dabd212696498d24b7f543cb0_73_llvm_3928628070634382108;
LABEL_11:
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 16) = v6;
  *(_QWORD *)a1 = 1LL;
  close(fd[1]);
  return a1;
}
