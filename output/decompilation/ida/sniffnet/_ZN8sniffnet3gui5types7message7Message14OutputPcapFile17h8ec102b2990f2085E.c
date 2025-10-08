unsigned __int64 __fastcall sniffnet::gui::types::message::Message::OutputPcapFile(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  result = 0x800000000000002FLL;
  *(_QWORD *)(a1 + 264) = 0x800000000000002FLL;
  return result;
}