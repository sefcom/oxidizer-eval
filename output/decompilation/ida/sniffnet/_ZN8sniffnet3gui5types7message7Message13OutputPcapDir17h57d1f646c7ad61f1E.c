__int64 __fastcall sniffnet::gui::types::message::Message::OutputPcapDir(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = a1;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 264) = 0x800000000000002ELL;
  return result;
}