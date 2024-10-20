__int64 __fastcall uu_od::prn_float::format_item_flo16(__int64 a1, double a2)
{
  unsigned int v2; // eax
  float v3; // xmm0_4
  unsigned int v4; // r14d
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // xmm0_8
  void *v12; // [rsp+8h] [rbp-90h] BYREF
  __int64 v13; // [rsp+10h] [rbp-88h]
  _QWORD *v14; // [rsp+18h] [rbp-80h]
  __int64 v15; // [rsp+20h] [rbp-78h]
  __int64 v16; // [rsp+28h] [rbp-70h]
  _QWORD v17[2]; // [rsp+38h] [rbp-60h] BYREF
  __int128 v18; // [rsp+48h] [rbp-50h] BYREF
  __int64 v19; // [rsp+58h] [rbp-40h]
  _BYTE v20[16]; // [rsp+60h] [rbp-38h] BYREF
  _BYTE v21[40]; // [rsp+70h] [rbp-28h] BYREF

  if ( std_detect::detect::cache::CACHE )
  {
    if ( (std_detect::detect::cache::CACHE & 0x800000000LL) == 0 )
    {
LABEL_3:
      v2 = half::binary16::arch::f64_to_f16_fallback();
      goto LABEL_6;
    }
  }
  else if ( (std_detect::detect::cache::detect_and_initialize() & 0x800000000LL) == 0 )
  {
    goto LABEL_3;
  }
  v3 = a2;
  v2 = half::binary16::arch::x86::f32_to_f16_x86_f16c(v3);
LABEL_6:
  v4 = v2;
  if ( std_detect::detect::cache::CACHE )
  {
    if ( (std_detect::detect::cache::CACHE & 0x800000000LL) == 0 )
      goto LABEL_8;
LABEL_16:
    *(double *)&v10 = half::binary16::arch::x86::f16_to_f32_x86_f16c(v4);
    goto LABEL_23;
  }
  if ( (std_detect::detect::cache::detect_and_initialize() & 0x800000000LL) != 0 )
    goto LABEL_16;
LABEL_8:
  if ( (v4 & 0x7FFF) == 0 )
  {
    v10 = (unsigned __int64)(unsigned __int16)v4 << 48;
    goto LABEL_23;
  }
  v5 = (unsigned __int16)v4 & 0x8000;
  v6 = v4 & 0x7C00;
  v7 = v4 & 0x3FF;
  v8 = v5 << 48;
  if ( v6 == 31744 )
  {
    if ( !v7 )
    {
      v10 = v8 | 0x7FF0000000000000LL;
      goto LABEL_23;
    }
    v8 |= v7 << 42;
    v9 = 0x7FF8000000000000LL;
  }
  else
  {
    if ( (_WORD)v6 )
    {
      v10 = v8 | ((unsigned __int64)(((unsigned __int16)v6 >> 10) + 1008) << 52) | (v7 << 42);
      goto LABEL_23;
    }
    if ( (_WORD)v7 )
    {
      _BitScanReverse((unsigned __int16 *)&v6, v7);
      v6 ^= 0xFu;
    }
    else
    {
      LOWORD(v6) = 16;
    }
    v9 = ((unsigned __int64)(unsigned int)(1014 - v6) << 52) | (v7 << ((unsigned __int8)v6 + 37)) & 0xFFFFFFFFFFFFFLL;
  }
  v10 = v8 | v9;
LABEL_23:
  uu_od::prn_float::format_float(v20, 9LL, 4LL, *(double *)&v10);
  v17[0] = v20;
  v17[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v12 = &off_12E338;
  v13 = 1LL;
  v14 = v17;
  v15 = 1LL;
  v16 = 0LL;
  alloc::fmt::format::format_inner(&v18, &v12);
  alloc::raw_vec::RawVec<T,A>::current_memory(&v12, v20);
  if ( v13 )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v21, v12, v13, v14);
  *(_QWORD *)(a1 + 16) = v19;
  *(_OWORD *)a1 = v18;
  return a1;
}
