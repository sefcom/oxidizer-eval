__int64 __fastcall uu_base32::base_common::handle_input(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v6; // [rsp+30h] [rbp-88h]
  __int64 v7; // [rsp+38h] [rbp-80h]
  __int64 v9; // [rsp+78h] [rbp-40h]
  int v10[2]; // [rsp+88h] [rbp-30h] BYREF
  int v11[2]; // [rsp+90h] [rbp-28h]
  int v12[2]; // [rsp+98h] [rbp-20h] BYREF
  int v13[2]; // [rsp+A0h] [rbp-18h] BYREF

  *(_QWORD *)v10 = uu_base32::base_common::get_supports_fast_decode_and_encode(a2);
  *(_QWORD *)v11 = v3;
  v6 = <alloc::boxed::Box<T,A> as core::convert::AsRef<T>>::as_ref(v10);
  v7 = v4;
  *(_QWORD *)v13 = std::io::stdio::stdout();
  *(_QWORD *)v12 = std::io::stdio::Stdout::lock(v13);
  if ( (*(_BYTE *)(a3 + 40) & 1) != 0 )
    v9 = uu_base32::base_common::fast_decode::fast_decode(a1, (__int64)v12, v6, v7);
  else
    v9 = uu_base32::base_common::fast_encode::fast_encode(a1, (__int64)v12, v6, v7, *(_QWORD *)a3, *(_QWORD *)(a3 + 8));
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v12);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::features::encoding::SupportsFastDecodeAndEncode>>(v10);
  core::ptr::drop_in_place<uu_base32::base_common::Config>(a3);
  return v9;
}
