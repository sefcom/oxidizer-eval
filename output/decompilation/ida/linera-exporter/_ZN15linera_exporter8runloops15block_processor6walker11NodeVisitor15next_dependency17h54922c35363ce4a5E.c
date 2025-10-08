__int64 __fastcall linera_exporter::runloops::block_processor::walker::NodeVisitor::next_dependency(
        __int64 a1,
        _QWORD *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int64 result; // rax

  v2 = a2[23];
  if ( v2 >= a2[8] )
  {
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
  }
  else
  {
    v3 = a2[7];
    a2[23] = v2 + 1;
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(v3 + 72 * v2 + 64);
    v4 = *(_OWORD *)(v3 + 72 * v2);
    v5 = *(_OWORD *)(v3 + 72 * v2 + 16);
    v6 = *(_OWORD *)(v3 + 72 * v2 + 32);
    *(_OWORD *)(a1 + 56) = *(_OWORD *)(v3 + 72 * v2 + 48);
    *(_OWORD *)(a1 + 40) = v6;
    *(_OWORD *)(a1 + 24) = v5;
    *(_OWORD *)(a1 + 8) = v4;
    result = 1LL;
    *(_QWORD *)a1 = 1LL;
  }
  return result;
}