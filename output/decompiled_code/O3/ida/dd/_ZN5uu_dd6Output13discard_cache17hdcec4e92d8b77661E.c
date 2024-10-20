__int64 (__fastcall *__fastcall uu_dd::Output::discard_cache(__int64 a1, off_t a2, off_t a3))(_QWORD)
{
  __int64 v4; // rdi
  unsigned int v5; // eax
  __int64 (__fastcall *result)(_QWORD); // rax
  __int64 (__fastcall **v7)(_QWORD); // rdx
  __int64 (__fastcall *v8)(_QWORD); // r14
  __int64 (__fastcall **v9)(_QWORD); // r15
  __int64 (__fastcall *v10)(_QWORD); // rsi
  __int64 (__fastcall *v11)(_QWORD); // [rsp+0h] [rbp-88h] BYREF
  __int64 (__fastcall **v12)(_QWORD); // [rsp+8h] [rbp-80h]
  _QWORD v13[4]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v14[6]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v15; // [rsp+60h] [rbp-28h] BYREF

  v4 = 29LL;
  if ( *(_BYTE *)a1 == 1 )
  {
    v5 = posix_fadvise(*(_DWORD *)(a1 + 4), a2, a3, 4);
    if ( v5 )
      v4 = (unsigned int)nix::errno::consts::from_i32(v5);
    else
      v4 = 134LL;
  }
  result = (__int64 (__fastcall *)(_QWORD))<core::result::Result<T,nix::errno::consts::Errno> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v4);
  if ( result )
  {
    v11 = result;
    v12 = v7;
    _InterlockedExchange(&uucore::mods::error::EXIT_CODE, v7[12](result));
    if ( uucore::UTIL_NAME != 2 )
      once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v15 = xmmword_11BE68;
    v13[0] = &v15;
    v13[1] = <&T as core::fmt::Display>::fmt;
    v13[2] = &v11;
    v13[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v14[0] = &anon_9f4e4934d0aaa5b427ddb4e543ea7cbc_21_llvm_12052237596857428533;
    v14[1] = 3LL;
    v14[4] = 0LL;
    v14[2] = v13;
    v14[3] = 2LL;
    std::io::stdio::_eprint(v14);
    v8 = v11;
    v9 = v12;
    result = *v12;
    if ( *v12 )
      result = (__int64 (__fastcall *)(_QWORD))result(v11);
    v10 = v9[1];
    if ( v10 )
      return (__int64 (__fastcall *)(_QWORD))_rust_dealloc(v8, v10, v9[2]);
  }
  return result;
}
