__int64 __fastcall uu_od::inputdecoder::MemoryDecoder::read_uint(unsigned __int8 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 result; // rax
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v15[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF

  v14 = a3;
  switch ( a3 )
  {
    case 1LL:
      v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
      if ( v3 <= a2 )
        core::panicking::panic_bounds_check(a2, v3, &off_143560);
      result = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + a2);
      break;
    case 2LL:
      v11 = a1[24];
      v12 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
              a2,
              a2 + 2,
              *(_QWORD *)(*(_QWORD *)a1 + 8LL),
              *(_QWORD *)(*(_QWORD *)a1 + 16LL),
              &off_143578);
      if ( v11 == 1 )
        LOWORD(result) = <byteorder::BigEndian as byteorder::ByteOrder>::read_u16(v12, v13);
      else
        LOWORD(result) = <byteorder::LittleEndian as byteorder::ByteOrder>::read_u16(v12, v13);
      result = (unsigned __int16)result;
      break;
    case 4LL:
      v5 = a1[24];
      v6 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
             a2,
             a2 + 4,
             *(_QWORD *)(*(_QWORD *)a1 + 8LL),
             *(_QWORD *)(*(_QWORD *)a1 + 16LL),
             &off_143590);
      if ( v5 == 1 )
        result = (unsigned int)<byteorder::BigEndian as byteorder::ByteOrder>::read_u32(v6, v7);
      else
        result = (unsigned int)<byteorder::LittleEndian as byteorder::ByteOrder>::read_u32(v6, v7);
      break;
    case 8LL:
      v8 = a1[24];
      v9 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
             a2,
             a2 + 8,
             *(_QWORD *)(*(_QWORD *)a1 + 8LL),
             *(_QWORD *)(*(_QWORD *)a1 + 16LL),
             &off_1435A8);
      if ( v8 == 1 )
        result = <byteorder::BigEndian as byteorder::ByteOrder>::read_u64(v9, v10);
      else
        result = <byteorder::LittleEndian as byteorder::ByteOrder>::read_u64(v9, v10);
      break;
    default:
      v15[0] = &v14;
      v15[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v16[0] = &off_143550;
      v16[1] = 1LL;
      v16[4] = 0LL;
      v16[2] = v15;
      v16[3] = 1LL;
      core::panicking::panic_fmt(v16, &off_1435C0);
  }
  return result;
}
