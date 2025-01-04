__int64 __fastcall uu_dd::Input::discard_cache(int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // [rsp+0h] [rbp-78h] BYREF
  __int64 v10; // [rsp+8h] [rbp-70h]
  _QWORD v11[2]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v12[4]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v13[7]; // [rsp+40h] [rbp-38h] BYREF

  v4 = uu_dd::Source::discard_cache(a1, a2, a3, a4);
  result = <core::result::Result<T,nix::errno::consts::Errno> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v4);
  if ( result )
  {
    v9 = result;
    v10 = v6;
    v7 = (*(unsigned int (__fastcall **)(__int64))(v6 + 96))(result);
    uucore::mods::error::set_exit_code(v7);
    v11[0] = uucore::util_name();
    v11[1] = v8;
    v12[0] = v11;
    v12[1] = <&T as core::fmt::Display>::fmt;
    v12[2] = &v9;
    v12[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v13[0] = &unk_161070;
    v13[1] = 3LL;
    v13[4] = 0LL;
    v13[2] = v12;
    v13[3] = 2LL;
    std::io::stdio::_eprint(v13);
    return core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v9, v10);
  }
  return result;
}
