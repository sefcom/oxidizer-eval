__int64 __fastcall uu_tsort::Graph::new(__int64 a1, __int64 *a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rdx

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  v5 = std::thread::local::LocalKey<T>::with(a1);
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 16) = v4;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)&off_EB278;
  *(_OWORD *)(a1 + 40) = xmmword_EB288;
  *(_QWORD *)(a1 + 56) = v5;
  *(_QWORD *)(a1 + 64) = v6;
  return a1;
}