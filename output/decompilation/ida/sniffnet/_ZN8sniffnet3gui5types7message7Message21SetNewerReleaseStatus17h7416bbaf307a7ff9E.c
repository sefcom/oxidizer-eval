unsigned __int64 __fastcall sniffnet::gui::types::message::Message::SetNewerReleaseStatus(__int64 a1, char a2)
{
  unsigned __int64 result; // rax

  *(_BYTE *)a1 = a2;
  result = 0x8000000000000034LL;
  *(_QWORD *)(a1 + 264) = 0x8000000000000034LL;
  return result;
}