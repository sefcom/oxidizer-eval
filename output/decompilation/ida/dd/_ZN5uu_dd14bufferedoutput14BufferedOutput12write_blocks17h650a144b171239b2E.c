__int64 __fastcall uu_dd::bufferedoutput::BufferedOutput::write_blocks(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 slice; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 v15; // xmm0
  _QWORD v17[4]; // [rsp+0h] [rbp-98h] BYREF
  __int128 v18; // [rsp+20h] [rbp-78h]
  __int128 v19; // [rsp+30h] [rbp-68h]
  _QWORD v20[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v21; // [rsp+50h] [rbp-48h]
  __int128 v22; // [rsp+60h] [rbp-38h]

  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 120LL);
  if ( !v5 )
    core::panicking::panic_const::panic_const_rem_by_zero(&off_162200);
  v7 = a4 + *(_QWORD *)(a2 + 16);
  if ( (v5 | v7) >> 32 )
    v8 = (a4 + *(_QWORD *)(a2 + 16)) % v5;
  else
    v8 = (unsigned int)v7 % (unsigned int)v5;
  v9 = 0LL;
  if ( a4 >= v8 )
    v9 = a4 - v8;
  core::slice::<impl [T]>::split_at_unchecked(v17, a3, a4, v9);
  v10 = v17[2];
  v11 = v17[3];
  slice = core::slice::iter::Iter<T>::make_slice(v17[0], v17[0] + v17[1]);
  alloc::vec::Vec<T,A>::append_elements(a2, slice);
  uu_dd::Output::write_blocks(v20, a2 + 24, *(char ***)(a2 + 8), *(_QWORD *)(a2 + 16));
  if ( v20[0] )
  {
    *(_QWORD *)(a1 + 8) = v20[1];
    v13 = 1LL;
  }
  else
  {
    v19 = v22;
    v18 = v21;
    *(_QWORD *)(a2 + 16) = 0LL;
    v14 = core::slice::iter::Iter<T>::make_slice(v10, v10 + v11);
    alloc::vec::Vec<T,A>::append_elements(a2, v14);
    v15 = v18;
    *(_OWORD *)(a1 + 32) = v19;
    *(_OWORD *)(a1 + 16) = v15;
    v13 = 0LL;
  }
  *(_QWORD *)a1 = v13;
  return a1;
}
