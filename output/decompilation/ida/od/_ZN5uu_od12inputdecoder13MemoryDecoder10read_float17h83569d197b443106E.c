void __fastcall uu_od::inputdecoder::MemoryDecoder::read_float(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int u16; // eax
  __int64 v9; // rdi
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v11[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF

  v10 = a4;
  switch ( a4 )
  {
    case 2LL:
      v6 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
             a3,
             a3 + 2,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 16),
             &off_102368);
      if ( a2 && a2 == 1 )
        u16 = <byteorder::BigEndian as byteorder::ByteOrder>::read_u16(v6, v7);
      else
        u16 = <byteorder::LittleEndian as byteorder::ByteOrder>::read_u16(v6, v7);
      v9 = u16;
      if ( (unsigned __int8)std_detect::detect::cache::test() )
        half::binary16::arch::x86::f16_to_f32_x86_f16c(v9);
      else
        half::binary16::arch::f16_to_f64_fallback(v9);
      break;
    case 4LL:
      v5 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
             a3,
             a3 + 4,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 16),
             &off_102380);
      uu_od::byteorder_io::ByteOrder::read_f32(a2, v5);
      break;
    case 8LL:
      v4 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
             a3,
             a3 + 8,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 16),
             &off_102398);
      uu_od::byteorder_io::ByteOrder::read_f64(a2, v4);
      break;
    default:
      v11[0] = &v10;
      v11[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v12[0] = &off_1022E0;
      v12[1] = 1LL;
      v12[4] = 0LL;
      v12[2] = v11;
      v12[3] = 1LL;
      core::panicking::panic_fmt(v12, &off_1023B0);
  }
}