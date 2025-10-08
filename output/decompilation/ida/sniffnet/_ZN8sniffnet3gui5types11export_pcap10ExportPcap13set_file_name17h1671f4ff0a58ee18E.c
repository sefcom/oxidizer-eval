__int64 __fastcall sniffnet::gui::types::export_pcap::ExportPcap::set_file_name(__int64 a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+8h] [rbp-20h] BYREF
  __int64 v3; // [rsp+18h] [rbp-10h]

  alloc::str::<impl str>::replace(&v2);
  core::ptr::drop_in_place<alloc::string::String>(a1);
  result = v3;
  *(_QWORD *)(a1 + 16) = v3;
  *(_OWORD *)a1 = v2;
  return result;
}