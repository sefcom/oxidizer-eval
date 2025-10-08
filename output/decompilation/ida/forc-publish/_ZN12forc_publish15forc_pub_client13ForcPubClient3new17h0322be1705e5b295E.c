__int64 __fastcall forc_publish::forc_pub_client::ForcPubClient::new(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm2
  __int128 v4; // xmm3

  *(_QWORD *)(a1 + 88) = reqwest::async_impl::client::Client::new(a1);
  v2 = *(_OWORD *)(a2 + 16);
  v3 = *(_OWORD *)(a2 + 32);
  v4 = *(_OWORD *)(a2 + 48);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = v2;
  *(_OWORD *)(a1 + 32) = v3;
  *(_OWORD *)(a1 + 48) = v4;
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  return a1;
}