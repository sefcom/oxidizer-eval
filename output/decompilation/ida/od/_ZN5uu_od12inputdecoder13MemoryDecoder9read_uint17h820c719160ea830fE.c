__int64 __fastcall uu_od::inputdecoder::MemoryDecoder::read_uint(__int64 a1, char a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v13[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF

  v12 = a4;
  switch ( a4 )
  {
    case 1LL:
      v4 = *(_QWORD *)(a1 + 16);
      if ( a3 >= v4 )
        core::panicking::panic_bounds_check(a3, v4, &off_1022F0);
      result = *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + a3);
      break;
    case 2LL:
      v9 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
             a3,
             a3 + 2,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 16),
             &off_102308);
      if ( a2 && a2 == 1 )
        result = (unsigned __int16)<byteorder::BigEndian as byteorder::ByteOrder>::read_u16(v9, v8);
      else
        result = (unsigned __int16)<byteorder::LittleEndian as byteorder::ByteOrder>::read_u16(v9, v8);
      break;
    case 4LL:
      v11 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
              a3,
              a3 + 4,
              *(_QWORD *)(a1 + 8),
              *(_QWORD *)(a1 + 16),
              &off_102320);
      if ( a2 && a2 == 1 )
        result = (unsigned int)<byteorder::BigEndian as byteorder::ByteOrder>::read_u32(v11, v10);
      else
        result = (unsigned int)<byteorder::LittleEndian as byteorder::ByteOrder>::read_u32(v11, v10);
      break;
    case 8LL:
      v7 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
             a3,
             a3 + 8,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 16),
             &off_102338);
      if ( a2 && a2 == 1 )
        result = <byteorder::BigEndian as byteorder::ByteOrder>::read_u64(v7, v6);
      else
        result = <byteorder::LittleEndian as byteorder::ByteOrder>::read_u64(v7, v6);
      break;
    default:
      v13[0] = &v12;
      v13[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v14[0] = &off_1022E0;
      v14[1] = 1LL;
      v14[4] = 0LL;
      v14[2] = v13;
      v14[3] = 1LL;
      core::panicking::panic_fmt(v14, &off_102350);
  }
  return result;
}