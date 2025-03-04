__int64 __fastcall uu_base32::base_common::handle_input(__int64 *a1, char a2, __int64 a3)
{
  __int64 supports_fast_decode_and_encode; // r15
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  __int64 v11[6]; // [rsp+8h] [rbp-30h] BYREF

  supports_fast_decode_and_encode = uu_base32::base_common::get_supports_fast_decode_and_encode(a2);
  v6 = v5;
  v11[0] = std::io::stdio::stdout();
  v10 = std::io::stdio::Stdout::lock(v11);
  if ( *(_BYTE *)(a3 + 40) )
    v7 = uu_base32::base_common::fast_decode::fast_decode(
           a1,
           (__int64)&v10,
           supports_fast_decode_and_encode,
           v6,
           *(_BYTE *)(a3 + 41));
  else
    v7 = uu_base32::base_common::fast_encode::fast_encode(
           a1,
           (__int64)&v10,
           supports_fast_decode_and_encode,
           v6,
           *(_QWORD *)a3,
           *(_QWORD *)(a3 + 8));
  v8 = v7;
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v10);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::features::encoding::SupportsFastDecodeAndEncode>>(
    supports_fast_decode_and_encode,
    v6);
  core::ptr::drop_in_place<uu_base32::base_common::Config>(a3);
  return v8;
}
