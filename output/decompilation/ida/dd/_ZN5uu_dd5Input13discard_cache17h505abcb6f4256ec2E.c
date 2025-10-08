__int64 __fastcall uu_dd::Input::discard_cache(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rdx
  _QWORD v10[2]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v11[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v12[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v13[4]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v14[7]; // [rsp+50h] [rbp-38h] BYREF

  v4 = (unsigned int)uu_dd::Source::discard_cache(a1, a2, a3, a4);
  v5 = <core::result::Result<T,nix::errno::consts::Errno> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v4);
  v11[0] = v5;
  v11[1] = &off_13CAB0;
  if ( !v5 )
    return core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v11);
  v10[0] = v5;
  v10[1] = &off_13CAB0;
  v7 = (unsigned int)uucore::mods::error::UError::code(v4, a2, v6, &off_13CAB0);
  uucore::mods::error::set_exit_code(v7);
  v12[0] = uucore::util_name();
  v12[1] = v8;
  v13[0] = v12;
  v13[1] = <&T as core::fmt::Display>::fmt;
  v13[2] = v10;
  v13[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v14[0] = &unk_13DD50;
  v14[1] = 3LL;
  v14[4] = 0LL;
  v14[2] = v13;
  v14[3] = 2LL;
  std::io::stdio::_eprint(v14);
  return core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v10);
}