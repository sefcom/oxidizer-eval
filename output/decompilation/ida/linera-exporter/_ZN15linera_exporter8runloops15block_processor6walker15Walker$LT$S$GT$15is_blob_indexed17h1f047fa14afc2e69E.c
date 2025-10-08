__int64 __fastcall linera_exporter::runloops::block_processor::walker::Walker<S>::is_blob_indexed(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int128 v3; // xmm1
  __int64 result; // rax

  *(_QWORD *)(a1 + 296) = a2;
  v3 = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(a1 + 304) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 320) = v3;
  result = *(unsigned __int8 *)(a3 + 32);
  *(_WORD *)(a1 + 336) = (unsigned __int8)result;
  return result;
}