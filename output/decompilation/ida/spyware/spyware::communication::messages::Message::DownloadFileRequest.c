unsigned __int64 __fastcall spyware::communication::messages::Message::DownloadFileRequest(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)a2;
  result = 0x8000000000000002LL;
  *(_QWORD *)a1 = 0x8000000000000002LL;
  return result;
}