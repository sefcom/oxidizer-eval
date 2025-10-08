__int64 __fastcall rg::flags::hiargs::suggest_other_engine(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3[5]; // [rsp+0h] [rbp-28h] BYREF

  v3[0] = 0x8000000000000000LL;
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v3);
  result = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = result;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  return result;
}