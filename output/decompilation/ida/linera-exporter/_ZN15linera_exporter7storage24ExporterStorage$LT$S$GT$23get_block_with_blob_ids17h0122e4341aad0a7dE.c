void __fastcall linera_exporter::storage::ExporterStorage<S>::get_block_with_blob_ids(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)a1 = a3;
  *(_BYTE *)(a1 + 25) = 0;
}