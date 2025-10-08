void __fastcall linera_exporter::runloops::block_processor::BlockProcessor<S,T>::run_with_shutdown(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  *(_QWORD *)(a1 + 168) = a2;
  *(_QWORD *)(a1 + 176) = a3;
  *(_DWORD *)(a1 + 184) = a4;
  *(_BYTE *)(a1 + 190) = 0;
}