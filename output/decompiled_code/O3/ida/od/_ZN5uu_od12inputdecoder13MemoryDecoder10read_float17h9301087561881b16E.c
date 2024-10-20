double __fastcall uu_od::inputdecoder::MemoryDecoder::read_float(_BYTE *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  double result; // xmm0_8
  __int64 v7; // rax
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  char **v16; // rdx
  char **v17; // rdx
  __int64 v18; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v19[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v20[7]; // [rsp+20h] [rbp-38h] BYREF

  v18 = a3;
  if ( a3 != 2 )
  {
    if ( a3 != 4 )
    {
      if ( a3 != 8 )
      {
        v19[0] = &v18;
        v19[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v20[0] = &off_1034C0;
        v20[1] = 1LL;
        v20[4] = 0LL;
        v20[2] = v19;
        v20[3] = 1LL;
        core::panicking::panic_fmt(v20, &off_103530);
      }
      v3 = a2 + 8;
      if ( a2 <= 0xFFFFFFFFFFFFFFF7LL )
      {
        v4 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        if ( v3 <= v4 )
        {
          v5 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
          if ( a1[24] == 1 )
            return COERCE_DOUBLE(_byteswap_uint64(*(_QWORD *)(v5 + a2)));
          else
            return *(double *)(v5 + a2);
        }
        v17 = &off_103518;
LABEL_46:
        core::slice::index::slice_end_index_len_fail(v3, v4, v17);
      }
      v16 = &off_103518;
LABEL_42:
      core::slice::index::slice_index_order_fail(a2, v3, v16);
    }
    v3 = a2 + 4;
    if ( a2 > 0xFFFFFFFFFFFFFFFBLL )
    {
      v16 = &off_103500;
      goto LABEL_42;
    }
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
    if ( v3 > v4 )
    {
      v17 = &off_103500;
      goto LABEL_46;
    }
    v7 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    if ( a1[24] == 1 )
      return COERCE_FLOAT(_byteswap_ulong(*(_DWORD *)(v7 + a2)));
    else
      return *(float *)(v7 + a2);
  }
  v3 = a2 + 2;
  if ( a2 > 0xFFFFFFFFFFFFFFFDLL )
  {
    v16 = &off_1034E8;
    goto LABEL_42;
  }
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  if ( v3 > v4 )
  {
    v17 = &off_1034E8;
    goto LABEL_46;
  }
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  if ( a1[24] && a1[24] == 1 )
  {
    v10 = *(unsigned __int16 *)(v9 + a2);
    LOWORD(v10) = __ROL2__(v10, 8);
  }
  else
  {
    v10 = *(unsigned __int16 *)(v9 + a2);
  }
  if ( !std_detect::detect::cache::CACHE )
  {
    if ( (std_detect::detect::cache::detect_and_initialize() & 0x800000000LL) == 0 )
      goto LABEL_21;
    return half::binary16::arch::x86::f16_to_f32_x86_f16c(v10);
  }
  if ( (std_detect::detect::cache::CACHE & 0x800000000LL) != 0 )
    return half::binary16::arch::x86::f16_to_f32_x86_f16c(v10);
LABEL_21:
  if ( (v10 & 0x7FFF) == 0 )
  {
    *(_QWORD *)&result = (unsigned __int64)(unsigned __int16)v10 << 48;
    return result;
  }
  v11 = (unsigned __int16)v10 & 0x8000;
  v12 = v10 & 0x7C00;
  v13 = v10 & 0x3FF;
  v14 = v11 << 48;
  if ( v12 == 31744 )
  {
    if ( !v13 )
    {
      *(_QWORD *)&result = v14 | 0x7FF0000000000000LL;
      return result;
    }
    v14 |= v13 << 42;
    v15 = 0x7FF8000000000000LL;
  }
  else
  {
    if ( (_WORD)v12 )
    {
      *(_QWORD *)&result = v14 | ((unsigned __int64)(((unsigned __int16)v12 >> 10) + 1008) << 52) | (v13 << 42);
      return result;
    }
    if ( (_WORD)v13 )
    {
      _BitScanReverse((unsigned __int16 *)&v12, v13);
      v12 ^= 0xFu;
    }
    else
    {
      LOWORD(v12) = 16;
    }
    v15 = ((unsigned __int64)(unsigned int)(1014 - v12) << 52) | (v13 << ((unsigned __int8)v12 + 37)) & 0xFFFFFFFFFFFFFLL;
  }
  *(_QWORD *)&result = v14 | v15;
  return result;
}
