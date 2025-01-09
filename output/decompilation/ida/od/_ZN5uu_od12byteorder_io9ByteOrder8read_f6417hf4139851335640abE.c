double __fastcall uu_od::byteorder_io::ByteOrder::read_f64(char a1, __int64 a2, __int64 a3)
{
  __int64 u64; // rax

  if ( a1 && a1 == 1 )
    u64 = <byteorder::BigEndian as byteorder::ByteOrder>::read_u64(a2, a3);
  else
    u64 = <byteorder::LittleEndian as byteorder::ByteOrder>::read_u64(a2, a3);
  return *(double *)&u64;
}
