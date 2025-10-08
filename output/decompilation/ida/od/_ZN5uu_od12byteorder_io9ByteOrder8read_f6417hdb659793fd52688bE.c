double __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> uu_od::byteorder_io::ByteOrder::read_f64(
        char a1,
        __int64 a2,
        __int64 a3)
{
  if ( a1 && a1 == 1 )
    return COERCE_DOUBLE(<byteorder::BigEndian as byteorder::ByteOrder>::read_u64(a2, a3));
  else
    return COERCE_DOUBLE(<byteorder::LittleEndian as byteorder::ByteOrder>::read_u64(a2, a3));
}