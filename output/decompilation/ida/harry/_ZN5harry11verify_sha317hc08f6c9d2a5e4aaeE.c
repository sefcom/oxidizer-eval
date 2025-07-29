__int64 __fastcall harry::verify_sha3(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD v4[3]; // [rsp+8h] [rbp-2C0h] BYREF
  _QWORD v5[2]; // [rsp+20h] [rbp-2A8h] BYREF
  _BYTE v6[64]; // [rsp+30h] [rbp-298h] BYREF
  _BYTE dest[288]; // [rsp+70h] [rbp-258h] BYREF
  _BYTE src[312]; // [rsp+190h] [rbp-138h] BYREF

  <digest::core_api::wrapper::CoreWrapper<T> as core::default::Default>::default(src);
  <D as digest::digest::Digest>::update(src, a1, a2);
  memcpy(dest, src, sizeof(dest));
  digest::FixedOutput::finalize_fixed(v6, dest);
  v5[0] = v6;
  v5[1] = generic_array::hex::<impl core::fmt::LowerHex for generic_array::GenericArray<u8,T>>::fmt;
  core::fmt::Arguments::new_v1(dest, &off_73FF0, 1LL, v5, 1LL);
  alloc::fmt::format(v4, dest);
  v2 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4[0], v4[2], a83ed150dbcc970, 128LL);
  core::ptr::drop_in_place<alloc::string::String>(v4);
  return v2;
}