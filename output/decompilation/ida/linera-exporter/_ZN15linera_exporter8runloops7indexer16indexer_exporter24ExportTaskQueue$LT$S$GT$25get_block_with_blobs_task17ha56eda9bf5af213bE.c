void __fastcall linera_exporter::runloops::indexer::indexer_exporter::ExportTaskQueue<S>::get_block_with_blobs_task(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 80) = 0;
}