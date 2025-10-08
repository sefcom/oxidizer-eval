__int64 __fastcall sniffnet::gui::types::message::Message::HostSortSelection(__int64 a1, char a2)
{
  __int64 result; // rax

  result = a1;
  *(_BYTE *)a1 = a2;
  *(_QWORD *)(a1 + 264) = 0x8000000000000008LL;
  return result;
}