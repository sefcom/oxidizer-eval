unsigned __int64 __fastcall sniffnet::gui::types::message::Message::StartApp(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  *a1 = a2;
  a1[1] = a3;
  result = 0x8000000000000000LL;
  a1[33] = 0x8000000000000000LL;
  return result;
}