__int64 __fastcall just::function::num_cpus(__int64 a1)
{
  __int64 num_cpus; // rax
  __int64 v2; // rax
  __int128 v4; // [rsp+0h] [rbp-38h] BYREF
  __int64 v5; // [rsp+10h] [rbp-28h]
  _BYTE v6[28]; // [rsp+1Ch] [rbp-1Ch] BYREF

  num_cpus = num_cpus::linux::get_num_cpus();
  v2 = core::fmt::num::imp::<impl usize>::_fmt(num_cpus, v6, 20LL);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v4, v2);
  *(_QWORD *)(a1 + 24) = v5;
  *(_OWORD *)(a1 + 8) = v4;
  *(_QWORD *)a1 = 0LL;
  return a1;
}