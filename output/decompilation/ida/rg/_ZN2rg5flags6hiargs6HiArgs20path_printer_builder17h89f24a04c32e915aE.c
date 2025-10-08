__int64 __fastcall rg::flags::hiargs::HiArgs::path_printer_builder(__int64 a1, __int64 a2)
{
  __int64 v2; // rt0
  char v3; // of
  __int64 v4; // rax
  char v5; // dl
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  _OWORD v10[5]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  grep_printer::path::PathPrinterBuilder::new(v10);
  <grep_printer::color::ColorSpecs as core::clone::Clone>::clone((char *)v10 + 9, a2 + 805);
  v2 = _InterlockedIncrement64(*(volatile signed __int64 **)(a2 + 776));
  if ( (v2 < 0) ^ v3 | (v2 == 0) )
    BUG();
  v4 = grep_printer::path::PathPrinterBuilder::hyperlink(v10);
  *(_WORD *)(v4 + 84) = *(_WORD *)(a2 + 796);
  v5 = 10;
  if ( *(_BYTE *)(a2 + 798) )
    v5 = *(_BYTE *)(a2 + 799);
  *(_BYTE *)(v4 + 8) = v5;
  result = v11;
  *(_QWORD *)(a1 + 80) = v11;
  *(_OWORD *)(a1 + 64) = v10[4];
  v7 = v10[0];
  v8 = v10[1];
  v9 = v10[2];
  *(_OWORD *)(a1 + 48) = v10[3];
  *(_OWORD *)(a1 + 32) = v9;
  *(_OWORD *)(a1 + 16) = v8;
  *(_OWORD *)a1 = v7;
  return result;
}