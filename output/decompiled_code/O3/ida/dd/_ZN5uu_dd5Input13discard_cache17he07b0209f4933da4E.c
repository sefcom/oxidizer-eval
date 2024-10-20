__int64 (__fastcall *__fastcall uu_dd::Input::discard_cache(int a1, int a2, off_t a3, off_t a4))(_QWORD)
{
  __int64 v5; // rdi
  unsigned int v6; // eax
  __int64 (__fastcall *result)(_QWORD); // rax
  __int64 (__fastcall **v8)(_QWORD); // rdx
  __int64 (__fastcall *v9)(_QWORD); // r14
  __int64 (__fastcall **v10)(_QWORD); // r15
  __int64 (__fastcall *v11)(_QWORD); // rsi
  __int64 (__fastcall *v12)(_QWORD); // [rsp+0h] [rbp-88h] BYREF
  __int64 (__fastcall **v13)(_QWORD); // [rsp+8h] [rbp-80h]
  _QWORD v14[4]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v15[6]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v16; // [rsp+60h] [rbp-28h] BYREF

  v5 = 29LL;
  if ( !a1 )
  {
    v6 = posix_fadvise(a2, a3, a4, 4);
    if ( v6 )
      v5 = (unsigned int)nix::errno::consts::from_i32(v6);
    else
      v5 = 134LL;
  }
  result = (__int64 (__fastcall *)(_QWORD))<core::result::Result<T,nix::errno::consts::Errno> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v5);
  if ( result )
  {
    v12 = result;
    v13 = v8;
    _InterlockedExchange(&uucore::mods::error::EXIT_CODE, v8[12](result));
    if ( uucore::UTIL_NAME != 2 )
      once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v16 = xmmword_11BE68;
    v14[0] = &v16;
    v14[1] = <&T as core::fmt::Display>::fmt;
    v14[2] = &v12;
    v14[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v15[0] = &anon_9f4e4934d0aaa5b427ddb4e543ea7cbc_21_llvm_12052237596857428533;
    v15[1] = 3LL;
    v15[4] = 0LL;
    v15[2] = v14;
    v15[3] = 2LL;
    std::io::stdio::_eprint(v15);
    v9 = v12;
    v10 = v13;
    result = *v13;
    if ( *v13 )
      result = (__int64 (__fastcall *)(_QWORD))result(v12);
    v11 = v10[1];
    if ( v11 )
      return (__int64 (__fastcall *)(_QWORD))_rust_dealloc(v9, v11, v10[2]);
  }
  return result;
}
