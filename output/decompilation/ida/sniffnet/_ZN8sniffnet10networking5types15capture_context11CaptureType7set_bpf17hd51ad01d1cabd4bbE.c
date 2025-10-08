__int64 __fastcall sniffnet::networking::types::capture_context::CaptureType::set_bpf(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  return pcap::capture::activated::<impl pcap::capture::Capture<T>>::filter(a1, a3, a4, a5);
}