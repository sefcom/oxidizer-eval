__int64 __fastcall linera_exporter::runloops::indexer::indexer_api::element::Payload::encode(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)a1 == 1 )
    return prost::encoding::message::encode(v4, v5, a2);
  else
    return prost::encoding::message::encode(v4, v5, a2);
}