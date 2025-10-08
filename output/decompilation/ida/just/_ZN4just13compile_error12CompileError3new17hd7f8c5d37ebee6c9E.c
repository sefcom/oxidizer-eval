__int64 __fastcall just::compile_error::CompileError::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int128 v5; // xmm3
  __int64 result; // rax

  *(_QWORD *)a1 = alloc::boxed::Box<T>::new(a3);
  v3 = *(_OWORD *)(a2 + 16);
  v4 = *(_OWORD *)(a2 + 32);
  v5 = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 24) = v3;
  *(_OWORD *)(a1 + 40) = v4;
  *(_OWORD *)(a1 + 56) = v5;
  result = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 72) = result;
  return result;
}