unsigned __int64 __fastcall sniffnet::gui::types::message::Message::ChangeScaleFactor(__int64 a1, double a2)
{
  unsigned __int64 result; // rax

  *(double *)a1 = a2;
  result = 0x8000000000000024LL;
  *(_QWORD *)(a1 + 264) = 0x8000000000000024LL;
  return result;
}