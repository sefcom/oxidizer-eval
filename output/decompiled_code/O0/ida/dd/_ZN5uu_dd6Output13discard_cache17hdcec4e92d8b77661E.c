int __fastcall uu_dd::Output::discard_cache(__int64 a1, off_t a2, off_t a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v12; // [rsp+8h] [rbp-80h] BYREF
  void (__fastcall **v13)(__int64); // [rsp+10h] [rbp-78h]
  _QWORD v14[2]; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v15[4]; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v16[8]; // [rsp+48h] [rbp-40h] BYREF

  v4 = 29LL;
  if ( *(_BYTE *)a1 != 1
    || (LODWORD(v5) = posix_fadvise(*(_DWORD *)(a1 + 4), a2, a3, 4), (_DWORD)v5)
    && (LODWORD(v5) = nix::errno::consts::from_i32((unsigned int)v5), v4 = (unsigned int)v5, (_DWORD)v5 != 134) )
  {
    v5 = <core::result::Result<T,nix::errno::consts::Errno> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context::{{closure}}(v4);
    if ( v5 )
    {
      v12 = v5;
      v13 = (void (__fastcall **)(__int64))v6;
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, (*(__int64 (__fastcall **)(__int64))(v6 + 96))(v5));
      v7 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v8 = *(_QWORD *)(v7 + 8);
      v9 = *(_QWORD *)(v7 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v8, 1LL, 1LL, v9);
      v14[0] = v8;
      v14[1] = v9;
      v15[0] = v14;
      v15[1] = <&T as core::fmt::Display>::fmt;
      v15[2] = &v12;
      v15[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v16[0] = &anon_58dd99f240cb7732bfa404b8c0d77df7_29_llvm_12656870414327897742;
      v16[1] = 3LL;
      v16[4] = 0LL;
      v16[2] = v15;
      v16[3] = 2LL;
      std::io::stdio::_eprint(v16);
      v5 = (__int64)v13;
      if ( *v13 )
      {
        (*v13)(v12);
        v5 = (__int64)v13;
      }
      v10 = *(_QWORD *)(v5 + 8);
      if ( v10 )
        LODWORD(v5) = _rust_dealloc(v12, v10, *(_QWORD *)(v5 + 16));
    }
  }
  return v5;
}
