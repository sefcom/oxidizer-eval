__int64 __fastcall uu_dd::Output::discard_cache(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // [rsp+0h] [rbp-78h] BYREF
  __int64 v9; // [rsp+8h] [rbp-70h]
  _QWORD v10[2]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v11[4]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v12[7]; // [rsp+40h] [rbp-38h] BYREF

  v3 = uu_dd::Dest::discard_cache(*a1, a1[1], a2, a3);
  result = <core::result::Result<T,nix::errno::consts::Errno> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v3);
  if ( result )
  {
    v8 = result;
    v9 = v5;
    v6 = (*(unsigned int (__fastcall **)(__int64))(v5 + 96))(result);
    uucore::mods::error::set_exit_code(v6);
    v10[0] = uucore::util_name();
    v10[1] = v7;
    v11[0] = v10;
    v11[1] = <&T as core::fmt::Display>::fmt;
    v11[2] = &v8;
    v11[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v12[0] = &unk_161070;
    v12[1] = 3LL;
    v12[4] = 0LL;
    v12[2] = v11;
    v12[3] = 2LL;
    std::io::stdio::_eprint(v12);
    return core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v8, v9);
  }
  return result;
}
