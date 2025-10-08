void __fastcall forc_publish::forc_pub_client::ForcPubClient::publish(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5)
{
  *(_QWORD *)(a1 + 200) = a2;
  *(_OWORD *)a1 = *a3;
  *(_QWORD *)(a1 + 48) = a4;
  *(_QWORD *)(a1 + 56) = a5;
  *(_BYTE *)(a1 + 212) = 0;
}