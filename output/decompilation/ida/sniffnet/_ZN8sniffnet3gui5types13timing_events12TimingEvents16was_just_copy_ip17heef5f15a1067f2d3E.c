__int64 __fastcall sniffnet::gui::types::timing_events::TimingEvents::was_just_copy_ip(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  v2 = std::time::Instant::elapsed(a1 + 64);
  if ( v2 && (v2 != 1 || v3 > 0x1DCD64FF) )
    return 0LL;
  else
    return <core::net::ip_addr::IpAddr as core::cmp::PartialEq>::eq(a1 + 80, a2);
}