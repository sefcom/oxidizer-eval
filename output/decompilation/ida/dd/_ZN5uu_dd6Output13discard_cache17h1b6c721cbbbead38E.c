__int64 __fastcall uu_dd::Output::discard_cache(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD v12[2]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v13[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v14[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v15[4]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v16[7]; // [rsp+50h] [rbp-38h] BYREF

  v4 = (unsigned int)uu_dd::Dest::discard_cache(a1, a2, a3, a4);
  v5 = <core::result::Result<T,nix::errno::consts::Errno> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v4);
  v13[0] = v5;
  v13[1] = &off_13CAB0;
  if ( !v5 )
    return core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v13);
  v12[0] = v5;
  v12[1] = &off_13CAB0;
  v7 = (unsigned int)uucore::mods::error::UError::code(v4, a2, v6, &off_13CAB0);
  uucore::mods::error::set_exit_code(v7);
  v14[0] = uucore::util_name(v7, a2, v8, v9);
  v14[1] = v10;
  v15[0] = v14;
  v15[1] = <&T as core::fmt::Display>::fmt;
  v15[2] = v12;
  v15[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v16[0] = &unk_13DD50;
  v16[1] = 3LL;
  v16[4] = 0LL;
  v16[2] = v15;
  v16[3] = 2LL;
  std::io::stdio::_eprint(v16);
  return core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v12);
}