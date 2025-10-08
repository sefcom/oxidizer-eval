__int64 __fastcall sniffnet::gui::types::timing_events::TimingEvents::copy_ip_now(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax

  *(_QWORD *)(a1 + 64) = std::time::Instant::now(a1);
  *(_DWORD *)(a1 + 72) = v2;
  *(_OWORD *)(a1 + 80) = *(_OWORD *)a2;
  result = *(unsigned __int8 *)(a2 + 16);
  *(_BYTE *)(a1 + 96) = result;
  return result;
}