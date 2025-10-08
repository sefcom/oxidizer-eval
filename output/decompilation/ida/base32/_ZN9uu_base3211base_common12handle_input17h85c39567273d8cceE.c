__int64 __fastcall uu_base32::base_common::handle_input(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned __int8 v3; // bp
  __int64 supports_fast_decode_and_encode; // r15
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v9; // [rsp+10h] [rbp-48h] BYREF
  __int64 v10; // [rsp+18h] [rbp-40h] BYREF
  __int64 v11; // [rsp+20h] [rbp-38h]

  uu_base32::base_common::has_padding((__int64)&v10, a1);
  v2 = v10;
  if ( !v10 )
  {
    v3 = *(_BYTE *)(a2 + 40);
    supports_fast_decode_and_encode = uu_base32::base_common::get_supports_fast_decode_and_encode(
                                        2LL,
                                        v3,
                                        (unsigned __int8)v11);
    v6 = v5;
    v10 = std::io::stdio::stdout();
    v9 = std::io::stdio::Stdout::lock(&v10);
    if ( v3 )
      v7 = uu_base32::base_common::fast_decode::fast_decode(
             (_DWORD)a1,
             (unsigned int)&off_10CF10,
             (unsigned int)&v9,
             (unsigned int)&off_10CF68,
             supports_fast_decode_and_encode,
             v6,
             *(_BYTE *)(a2 + 41));
    else
      v7 = uu_base32::base_common::fast_encode::fast_encode(
             (_DWORD)a1,
             (unsigned int)&off_10CF10,
             (unsigned int)&v9,
             (unsigned int)&off_10CF68,
             supports_fast_decode_and_encode,
             v6,
             *(_QWORD *)a2,
             *(_QWORD *)(a2 + 8));
    v2 = v7;
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(&v9);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
      supports_fast_decode_and_encode,
      v6);
  }
  core::ptr::drop_in_place<uu_base32::base_common::Config>(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
  return v2;
}