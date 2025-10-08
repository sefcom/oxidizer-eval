__int64 __fastcall sniffnet::networking::types::capture_context::CaptureSource::from_conf(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a2 + 496) != 1 )
    return sniffnet::networking::types::config_device::ConfigDevice::to_my_device(
             a1,
             *(_QWORD *)(a2 + 344),
             *(_QWORD *)(a2 + 352));
  <alloc::string::String as core::clone::Clone>::clone(a1 + 8, a2 + 448);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 1LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 9;
  result = 0x8000000000000000LL;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return result;
}