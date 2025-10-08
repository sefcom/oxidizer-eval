__m128i __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> uu_od::byteorder_io::ByteOrder::read_f32(
        char a1,
        __int64 a2,
        __int64 a3)
{
  if ( a1 && a1 == 1 )
    return _mm_cvtsi32_si128(<byteorder::BigEndian as byteorder::ByteOrder>::read_u32(a2, a3));
  else
    return _mm_cvtsi32_si128(<byteorder::LittleEndian as byteorder::ByteOrder>::read_u32(a2, a3));
}