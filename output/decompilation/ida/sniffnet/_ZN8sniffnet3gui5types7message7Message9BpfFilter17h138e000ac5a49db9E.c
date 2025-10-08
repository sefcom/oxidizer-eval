unsigned __int64 __fastcall sniffnet::gui::types::message::Message::BpfFilter(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  result = 0x8000000000000005LL;
  *(_QWORD *)(a1 + 264) = 0x8000000000000005LL;
  return result;
}