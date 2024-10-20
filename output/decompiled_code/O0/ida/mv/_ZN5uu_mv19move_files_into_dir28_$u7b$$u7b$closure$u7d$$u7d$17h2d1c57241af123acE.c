__int64 __fastcall uu_mv::move_files_into_dir::{{closure}}(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v5; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v6[2]; // [rsp+8h] [rbp-70h] BYREF
  _QWORD v7[4]; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v8[8]; // [rsp+38h] [rbp-40h] BYREF

  v5 = a1;
  _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  v6[0] = v2;
  v6[1] = v3;
  v7[0] = v6;
  v7[1] = <&T as core::fmt::Display>::fmt;
  v7[2] = &v5;
  v7[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v8[0] = &anon_80a71568819187eb068e7dc772b8a818_81_llvm_5221707602514596811;
  v8[1] = 3LL;
  v8[4] = 0LL;
  v8[2] = v7;
  v8[3] = 2LL;
  std::io::stdio::_eprint(v8);
  return core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(&v5);
}
