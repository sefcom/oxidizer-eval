__int64 __fastcall sniffnet::networking::types::capture_context::CaptureType::stats(__int64 a1, __int64 a2, __int64 a3)
{
  return pcap::capture::activated::<impl pcap::capture::Capture<T>>::stats(a1, a3);
}