void __fastcall uu_od::inputdecoder::MemoryDecoder::read_float(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int u16; // eax
  __int64 v11; // rdi
  __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v13[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF

  v12 = a3;
  switch ( a3 )
  {
    case 2LL:
      v7 = a1[24];
      v8 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
             a2,
             a2 + 2,
             *(_QWORD *)(*(_QWORD *)a1 + 8LL),
             *(_QWORD *)(*(_QWORD *)a1 + 16LL),
             &off_1435D8);
      if ( v7 == 1 )
        u16 = <byteorder::BigEndian as byteorder::ByteOrder>::read_u16(v8, v9);
      else
        u16 = <byteorder::LittleEndian as byteorder::ByteOrder>::read_u16(v8, v9);
      v11 = u16;
      if ( (unsigned __int8)std_detect::detect::cache::test() )
        half::binary16::arch::x86::f16_to_f32_x86_f16c(v11);
      else
        half::binary16::arch::f16_to_f64_fallback(v11);
      break;
    case 4LL:
      v5 = *((_DWORD *)a1 + 6);
      v6 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
             a2,
             a2 + 4,
             *(_QWORD *)(*(_QWORD *)a1 + 8LL),
             *(_QWORD *)(*(_QWORD *)a1 + 16LL),
             &off_1435F0);
      uu_od::byteorder_io::ByteOrder::read_f32(v5, v6);
      break;
    case 8LL:
      v3 = *((_DWORD *)a1 + 6);
      v4 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
             a2,
             a2 + 8,
             *(_QWORD *)(*(_QWORD *)a1 + 8LL),
             *(_QWORD *)(*(_QWORD *)a1 + 16LL),
             &off_143608);
      uu_od::byteorder_io::ByteOrder::read_f64(v3, v4);
      break;
    default:
      v13[0] = &v12;
      v13[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v14[0] = &off_143550;
      v14[1] = 1LL;
      v14[4] = 0LL;
      v14[2] = v13;
      v14[3] = 1LL;
      core::panicking::panic_fmt(v14, &off_143620);
  }
}
