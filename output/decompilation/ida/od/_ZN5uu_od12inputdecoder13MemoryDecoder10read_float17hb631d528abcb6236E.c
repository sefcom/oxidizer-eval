void __fastcall uu_od::inputdecoder::MemoryDecoder::read_float(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int u16; // eax
  __int64 v13; // rdi
  __int64 v14; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v15[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF

  v14 = a3;
  switch ( a3 )
  {
    case 2LL:
      v9 = a1[24];
      v10 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
              a2,
              a2 + 2,
              *(_QWORD *)(*(_QWORD *)a1 + 8LL),
              *(_QWORD *)(*(_QWORD *)a1 + 16LL),
              &off_1435D8);
      if ( v9 == 1 )
        u16 = <byteorder::BigEndian as byteorder::ByteOrder>::read_u16(v10, v11);
      else
        u16 = <byteorder::LittleEndian as byteorder::ByteOrder>::read_u16(v10, v11);
      v13 = u16;
      if ( (unsigned __int8)std_detect::detect::cache::test() )
        half::binary16::arch::x86::f16_to_f32_x86_f16c(v13);
      else
        half::binary16::arch::f16_to_f64_fallback(v13);
      break;
    case 4LL:
      v6 = *((_DWORD *)a1 + 6);
      v7 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
             a2,
             a2 + 4,
             *(_QWORD *)(*(_QWORD *)a1 + 8LL),
             *(_QWORD *)(*(_QWORD *)a1 + 16LL),
             &off_1435F0);
      uu_od::byteorder_io::ByteOrder::read_f32(v6, v7, v8);
      break;
    case 8LL:
      v3 = *((_DWORD *)a1 + 6);
      v4 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
             a2,
             a2 + 8,
             *(_QWORD *)(*(_QWORD *)a1 + 8LL),
             *(_QWORD *)(*(_QWORD *)a1 + 16LL),
             &off_143608);
      uu_od::byteorder_io::ByteOrder::read_f64(v3, v4, v5);
      break;
    default:
      v15[0] = &v14;
      v15[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v16[0] = &off_143550;
      v16[1] = 1LL;
      v16[4] = 0LL;
      v16[2] = v15;
      v16[3] = 1LL;
      core::panicking::panic_fmt(v16, &off_143620);
  }
}
