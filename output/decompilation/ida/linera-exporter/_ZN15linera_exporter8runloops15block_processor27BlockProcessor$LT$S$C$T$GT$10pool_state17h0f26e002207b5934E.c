__int64 __fastcall linera_exporter::runloops::block_processor::BlockProcessor<S,T>::pool_state(void *a1, __int64 a2)
{
  memcpy(a1, (const void *)(a2 + 1296), 0x188uLL);
  core::ptr::drop_in_place<linera_exporter::storage::BlockProcessorStorage<linera_storage::db_storage::DbStorage<linera_views::backends::memory::MemoryDatabase>>>(a2);
  return core::ptr::drop_in_place<linera_exporter::runloops::NewBlockQueue>(a2 + 1688);
}