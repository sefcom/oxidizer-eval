void __fastcall uu_kill::kill(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+8h] [rbp-A0h] BYREF
  unsigned int v8; // [rsp+14h] [rbp-94h] BYREF
  _QWORD v9[2]; // [rsp+18h] [rbp-90h] BYREF
  _QWORD v10[4]; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v11[12]; // [rsp+48h] [rbp-60h] BYREF

  if ( a3 )
  {
    v3 = 4 * a3;
    v4 = 0LL;
    do
    {
      v8 = *(_DWORD *)(a2 + v4);
      v5 = nix::sys::signal::kill(v8, a1);
      if ( (_DWORD)v5 != 134 )
      {
        v7 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
               (v5 << 32) | 2,
               &v8);
        uucore::mods::error::set_exit_code(1LL);
        v9[0] = uucore::util_name();
        v9[1] = v6;
        v10[0] = v9;
        v10[1] = <&T as core::fmt::Display>::fmt;
        v10[2] = &v7;
        v10[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v11[0] = &unk_E7718;
        v11[1] = 3LL;
        v11[4] = 0LL;
        v11[2] = v10;
        v11[3] = 2LL;
        std::io::stdio::_eprint(v11);
        core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v7);
      }
      v4 += 4LL;
    }
    while ( v3 != v4 );
  }
}