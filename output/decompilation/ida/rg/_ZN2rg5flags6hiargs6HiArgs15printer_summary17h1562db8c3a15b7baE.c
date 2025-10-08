__int64 __fastcall rg::flags::hiargs::HiArgs::printer_summary(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // r12
  __int64 v7; // rax
  _BYTE v9[24]; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE v10[36]; // [rsp+18h] [rbp-A0h] BYREF
  _BYTE v11[124]; // [rsp+3Ch] [rbp-7Ch] BYREF

  grep_printer::summary::SummaryBuilder::new(v10);
  <grep_printer::color::ColorSpecs as core::clone::Clone>::clone(v11, a2 + 805);
  v11[77] = *(_BYTE *)(a2 + 887) ^ 1;
  if ( _InterlockedIncrement64(*(volatile signed __int64 **)(a2 + 776)) <= 0 )
    BUG();
  v6 = grep_printer::summary::SummaryBuilder::hyperlink(v10);
  *(_BYTE *)(v6 + 114) = a4;
  *(_OWORD *)v6 = *(_OWORD *)(a2 + 32);
  *(_BYTE *)(v6 + 112) = *(_BYTE *)(a2 + 912);
  *(_WORD *)(v6 + 34) = *(_WORD *)(a2 + 798);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v9, asc_6671B);
  v7 = grep_printer::summary::SummaryBuilder::separator_field(v6, v9);
  *(_WORD *)(v7 + 32) = *(_WORD *)(a2 + 796);
  *(_BYTE *)(v7 + 111) = *(_DWORD *)(a2 + 768) != 1000000000;
  grep_printer::summary::SummaryBuilder::build(a1, v7, a3);
  return core::ptr::drop_in_place<grep_printer::summary::SummaryBuilder>(v10);
}