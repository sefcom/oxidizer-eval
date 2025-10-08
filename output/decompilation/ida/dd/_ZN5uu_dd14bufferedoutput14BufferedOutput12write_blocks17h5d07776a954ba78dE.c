__int64 __fastcall uu_dd::bufferedoutput::BufferedOutput::write_blocks(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 result; // rax
  __int128 v13; // xmm0
  _QWORD v14[4]; // [rsp+0h] [rbp-78h] BYREF
  int v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+28h] [rbp-50h]
  __int128 v17; // [rsp+30h] [rbp-48h]
  __int128 v18; // [rsp+40h] [rbp-38h]

  v5 = *(_QWORD *)(a2[5] + 120LL);
  if ( !v5 )
    core::panicking::panic_const::panic_const_rem_by_zero(&off_13D788);
  v7 = a4 + a2[2];
  if ( (v5 | v7) >> 32 )
    v8 = (a4 + a2[2]) % v5;
  else
    v8 = (unsigned int)v7 % (unsigned int)v5;
  v9 = 0LL;
  if ( a4 >= v8 )
    v9 = a4 - v8;
  core::slice::<impl [T]>::split_at_unchecked(v14, a3, a4, v9);
  v10 = v14[2];
  v11 = v14[3];
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    a2,
    v14[0],
    v14[0] + v14[1]);
  uu_dd::Output::write_blocks(&v15, a2 + 3, a2[1], a2[2]);
  if ( v15 == 1 )
  {
    *(_QWORD *)(a1 + 8) = v16;
    result = 1LL;
  }
  else
  {
    v13 = v17;
    *(_OWORD *)(a1 + 32) = v18;
    *(_OWORD *)(a1 + 16) = v13;
    a2[2] = 0LL;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      a2,
      v10,
      v10 + v11);
    result = 0LL;
  }
  *(_QWORD *)a1 = result;
  return result;
}