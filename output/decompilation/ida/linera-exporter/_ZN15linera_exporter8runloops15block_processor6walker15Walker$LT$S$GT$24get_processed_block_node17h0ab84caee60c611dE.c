void __fastcall linera_exporter::runloops::block_processor::walker::Walker<S>::get_processed_block_node(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 264) = 0;
}