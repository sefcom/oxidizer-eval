const char *__fastcall forc_publish::forc_pub_client::ForcPubClient::upload(__int64 a1, __int64 a2, __int64 a3)
{
  const char *result; // rax

  *(_QWORD *)(a1 + 24) = a2;
  *(_OWORD *)a1 = *(_OWORD *)a3;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a3 + 16);
  result = a0696;
  *(_QWORD *)(a1 + 32) = a0696;
  *(_QWORD *)(a1 + 40) = 6LL;
  *(_BYTE *)(a1 + 200) = 0;
  return result;
}