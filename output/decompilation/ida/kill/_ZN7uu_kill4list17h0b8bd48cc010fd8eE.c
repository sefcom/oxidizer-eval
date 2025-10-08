__int64 __fastcall uu_kill::list(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 result; // rax
  __int64 v6; // rax
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // [rsp+8h] [rbp-A0h] BYREF
  __int64 (__fastcall **v10)(); // [rsp+10h] [rbp-98h]
  _QWORD v11[2]; // [rsp+18h] [rbp-90h] BYREF
  _QWORD v12[4]; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v13[12]; // [rsp+48h] [rbp-60h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  if ( !v1 )
    return uu_kill::print_signals();
  v2 = *(_QWORD *)(a1 + 8);
  v3 = 24 * v1;
  v4 = 0LL;
  do
  {
    while ( 1 )
    {
      v6 = uu_kill::print_signal(*(_UNKNOWN ***)(v2 + v4 + 8), *(_QWORD *)(v2 + v4 + 16));
      if ( v6 )
        break;
      result = core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(
                 0LL,
                 &off_E76B0);
      v4 += 24LL;
      if ( v3 == v4 )
        return result;
    }
    v9 = v6;
    v10 = &off_E76B0;
    v7 = <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v6);
    uucore::mods::error::set_exit_code(v7);
    v11[0] = uucore::util_name();
    v11[1] = v8;
    v12[0] = v11;
    v12[1] = <&T as core::fmt::Display>::fmt;
    v12[2] = &v9;
    v12[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v13[0] = &unk_E7718;
    v13[1] = 3LL;
    v13[4] = 0LL;
    v13[2] = v12;
    v13[3] = 2LL;
    std::io::stdio::_eprint(v13);
    result = core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
               v9,
               v10);
    v4 += 24LL;
  }
  while ( v3 != v4 );
  return result;
}