__int64 __fastcall sniffnet::gui::types::export_pcap::ExportPcap::set_directory(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  core::ptr::drop_in_place<alloc::string::String>(a1 + 24);
  result = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 40) = result;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)a2;
  return result;
}