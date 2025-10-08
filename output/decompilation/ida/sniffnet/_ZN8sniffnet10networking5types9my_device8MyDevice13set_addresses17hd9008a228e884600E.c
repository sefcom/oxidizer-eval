__int64 __fastcall sniffnet::networking::types::my_device::MyDevice::set_addresses(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  core::ptr::drop_in_place<alloc::vec::Vec<pcap::device::Address>>(a1[3], a1[4]);
  result = *(_QWORD *)(a2 + 16);
  a1[5] = result;
  *(_OWORD *)(a1 + 3) = *(_OWORD *)a2;
  return result;
}