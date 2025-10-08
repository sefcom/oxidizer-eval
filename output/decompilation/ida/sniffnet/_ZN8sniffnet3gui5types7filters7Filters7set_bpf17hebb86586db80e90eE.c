__int64 __fastcall sniffnet::gui::types::filters::Filters::set_bpf(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  core::ptr::drop_in_place<alloc::string::String>(a1);
  result = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = result;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  return result;
}