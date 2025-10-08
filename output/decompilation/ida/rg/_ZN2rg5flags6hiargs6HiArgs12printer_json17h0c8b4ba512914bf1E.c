__int64 __fastcall rg::flags::hiargs::HiArgs::printer_json(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int128 v7; // [rsp+0h] [rbp-68h] BYREF
  char v8; // [rsp+18h] [rbp-50h]
  char v9; // [rsp+19h] [rbp-4Fh]
  unsigned __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+28h] [rbp-40h]
  unsigned __int64 v12; // [rsp+38h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h]

  grep_printer::json::JSONBuilder::new(&v7);
  v8 = 0;
  v7 = *(_OWORD *)(a2 + 32);
  v9 = 0;
  if ( __OFSUB__(0LL, *(_QWORD *)(a2 + 688)) )
  {
    v4 = 0x8000000000000000LL;
  }
  else
  {
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v12, *(_QWORD *)(a2 + 696), *(_QWORD *)(a2 + 704));
    v4 = v12;
    v11 = v13;
  }
  v10 = v4;
  v5 = grep_printer::json::JSONBuilder::replacement(&v7, &v10);
  grep_printer::json::JSONBuilder::build(a1, v5, a3);
  return core::ptr::drop_in_place<grep_printer::json::JSONBuilder>(&v7);
}