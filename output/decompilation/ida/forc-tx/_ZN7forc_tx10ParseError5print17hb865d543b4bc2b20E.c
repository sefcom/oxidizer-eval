__int64 __fastcall forc_tx::ParseError::print(_QWORD *a1)
{
  unsigned __int64 v1; // rcx
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // [rsp+0h] [rbp-328h] BYREF
  _QWORD *v7; // [rsp+8h] [rbp-320h] BYREF
  __int64 (__fastcall *v8)(); // [rsp+10h] [rbp-318h]
  void *v9; // [rsp+18h] [rbp-310h] BYREF
  __int64 v10; // [rsp+20h] [rbp-308h]
  _QWORD *v11; // [rsp+28h] [rbp-300h]
  __int64 v12; // [rsp+30h] [rbp-2F8h]
  __int64 v13; // [rsp+38h] [rbp-2F0h]

  v1 = 3LL;
  if ( (*a1 ^ 0x8000000000000000LL) < 5 )
    v1 = *a1 ^ 0x8000000000000000LL;
  v6 = a1;
  switch ( v1 )
  {
    case 0uLL:
    case 1uLL:
    case 2uLL:
      v2 = clap_builder::error::Error<F>::print(a1 + 1);
      if ( !v2 )
        goto LABEL_10;
      result = clap_builder::error::Error<F>::raw(v2);
      break;
    case 3uLL:
      v7 = &v6;
      v8 = <&T as core::fmt::Display>::fmt;
      v9 = &unk_1D12D8;
      v10 = 2LL;
      v13 = 0LL;
      v11 = &v7;
      v12 = 1LL;
      std::io::stdio::_print(&v9);
      <forc_tx::ParseError::print::ForcTxIo as clap_builder::derive::CommandFactory>::command(&v9);
      v4 = clap_builder::builder::command::Command::print_long_help(&v9);
      if ( v4 )
      {
        v5 = clap_builder::error::Error<F>::raw(v4);
        core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v9);
        result = v5;
      }
      else
      {
        core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v9);
LABEL_10:
        result = 0LL;
      }
      break;
    case 4uLL:
      v7 = &v6;
      v8 = <&T as core::fmt::Display>::fmt;
      v9 = &unk_1D12F8;
      v10 = 2LL;
      v13 = 0LL;
      v11 = &v7;
      v12 = 1LL;
      std::io::stdio::_print(&v9);
      result = 0LL;
      break;
  }
  return result;
}