        __int64 a3)
{
  unsigned int u32; // eax

  if ( a1 && a1 == 1 )
    u32 = <byteorder::BigEndian as byteorder::ByteOrder>::read_u32(a2, a3);
  else
    u32 = <byteorder::LittleEndian as byteorder::ByteOrder>::read_u32(a2, a3);
  return _mm_cvtsi32_si128(u32);
}
