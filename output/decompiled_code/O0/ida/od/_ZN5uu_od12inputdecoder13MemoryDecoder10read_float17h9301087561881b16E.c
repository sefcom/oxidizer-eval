        __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  double result; // xmm0_8
  __int64 v10; // rdx
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  char **v19; // rdx
  __int64 v20; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v21[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v22[7]; // [rsp+20h] [rbp-38h] BYREF

  v20 = a3;
  if ( a3 != 2 )
  {
    if ( a3 != 4 )
    {
      if ( a3 != 8 )
      {
        v21[0] = &v20;
        v21[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v22[0] = &anon_73050de727ff50a019884682d8624ba5_78_llvm_6296603921265638786;
        v22[1] = 1LL;
        v22[4] = 0LL;
        v22[2] = v21;
        v22[3] = 1LL;
        core::panicking::panic_fmt(
          v22,
          &anon_73050de727ff50a019884682d8624ba5_86_llvm_6296603921265638786,
          a3,
          a4,
          a5,
          a6);
      }
      v6 = a2 + 8;
      if ( a2 >= 0xFFFFFFFFFFFFFFF8LL )
        core::panicking::panic_const::panic_const_add_overflow(&anon_73050de727ff50a019884682d8624ba5_84_llvm_6296603921265638786);
      v7 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
      if ( v7 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        if ( v8 >= 0 )
        {
          if ( v8 >= v6 )
          {
            if ( a1[24] && a1[24] == 1 )
              return COERCE_DOUBLE(_byteswap_uint64(*(_QWORD *)(v7 + a2)));
            else
              return *(double *)(v7 + a2);
          }
          v19 = &anon_73050de727ff50a019884682d8624ba5_85_llvm_6296603921265638786;
LABEL_54:
          core::slice::index::slice_end_index_len_fail(v6, v8, v19);
        }
      }
LABEL_46:
      core::panicking::panic_nounwind(anon_73050de727ff50a019884682d8624ba5_15_llvm_6296603921265638786, 162LL);
    }
    v6 = a2 + 4;
    if ( a2 >= 0xFFFFFFFFFFFFFFFCLL )
      core::panicking::panic_const::panic_const_add_overflow(&anon_73050de727ff50a019884682d8624ba5_82_llvm_6296603921265638786);
    v10 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    if ( !v10 )
      goto LABEL_46;
    v8 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
    if ( v8 < 0 )
      goto LABEL_46;
    if ( v8 < v6 )
    {
      v19 = &anon_73050de727ff50a019884682d8624ba5_83_llvm_6296603921265638786;
      goto LABEL_54;
    }
    if ( a1[24] && a1[24] == 1 )
      return COERCE_FLOAT(_byteswap_ulong(*(_DWORD *)(v10 + a2)));
    else
      return *(float *)(v10 + a2);
  }
  v6 = a2 + 2;
  if ( a2 >= 0xFFFFFFFFFFFFFFFELL )
    core::panicking::panic_const::panic_const_add_overflow(&anon_73050de727ff50a019884682d8624ba5_80_llvm_6296603921265638786);
  v12 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  if ( !v12 )
    goto LABEL_46;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  if ( v8 < 0 )
    goto LABEL_46;
  if ( v8 < v6 )
  {
    v19 = &anon_73050de727ff50a019884682d8624ba5_81_llvm_6296603921265638786;
    goto LABEL_54;
  }
  if ( a1[24] && a1[24] == 1 )
  {
    v13 = *(unsigned __int16 *)(v12 + a2);
    LOWORD(v13) = __ROL2__(v13, 8);
  }
  else
  {
    v13 = *(unsigned __int16 *)(v12 + a2);
  }
  if ( !std_detect::detect::cache::CACHE )
  {
    if ( (std_detect::detect::cache::detect_and_initialize() & 0x800000000LL) == 0 )
      goto LABEL_29;
    return half::binary16::arch::x86::f16_to_f32_x86_f16c(v13);
  }
  if ( (std_detect::detect::cache::CACHE & 0x800000000LL) != 0 )
    return half::binary16::arch::x86::f16_to_f32_x86_f16c(v13);
LABEL_29:
  if ( (v13 & 0x7FFF) == 0 )
  {
    *(_QWORD *)&result = (unsigned __int64)(unsigned __int16)v13 << 48;
    return result;
  }
  v14 = (unsigned __int16)v13 & 0x8000;
  v15 = v13 & 0x7C00;
  v16 = v13 & 0x3FF;
  v17 = v14 << 48;
  if ( v15 == 31744 )
  {
    if ( !v16 )
    {
      *(_QWORD *)&result = v17 | 0x7FF0000000000000LL;
      return result;
    }
    v17 |= v16 << 42;
    v18 = 0x7FF8000000000000LL;
  }
  else
  {
    if ( (_WORD)v15 )
    {
      *(_QWORD *)&result = v17 | ((unsigned __int64)(((unsigned __int16)v15 >> 10) + 1008) << 52) | (v16 << 42);
      return result;
    }
    if ( (_WORD)v16 )
    {
      _BitScanReverse((unsigned __int16 *)&v15, v16);
      v15 ^= 0xFu;
    }
    else
    {
      LOWORD(v15) = 16;
    }
    v18 = ((unsigned __int64)(unsigned int)(1014 - v15) << 52) | (v16 << ((unsigned __int8)v15 + 37)) & 0xFFFFFFFFFFFFFLL;
  }
  *(_QWORD *)&result = v17 | v18;
  return result;
}
