void __fastcall linera_exporter::runloops::block_processor::walker::Walker<S>::is_block_indexed(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 1736) = 0;
}