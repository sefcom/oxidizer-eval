__int64 __fastcall rg::flags::hiargs::HiArgs::printer_standard(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rt0
  char v5; // of
  __int64 v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r12
  __int64 v12; // rax
  _BYTE v14[24]; // [rsp+0h] [rbp-128h] BYREF
  _BYTE v15[24]; // [rsp+18h] [rbp-110h] BYREF
  _BYTE v16[24]; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v17[24]; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v18[68]; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v19[132]; // [rsp+A4h] [rbp-84h] BYREF

  grep_printer::standard::StandardBuilder::new(v18);
  v19[83] = *(_BYTE *)(a2 + 804);
  <grep_printer::color::ColorSpecs as core::clone::Clone>::clone(v19, a2 + 805);
  v19[82] = *(_BYTE *)(a2 + 880);
  v19[76] = *(_BYTE *)(a2 + 884);
  v4 = _InterlockedIncrement64(*(volatile signed __int64 **)(a2 + 776));
  if ( (v4 < 0) ^ v5 | (v4 == 0) )
    BUG();
  v6 = grep_printer::standard::StandardBuilder::hyperlink(v18);
  *(_BYTE *)(v6 + 149) = *(_BYTE *)(a2 + 891);
  *(_OWORD *)v6 = *(_OWORD *)(a2 + 16);
  *(_BYTE *)(v6 + 146) = *(_BYTE *)(a2 + 905);
  *(_BYTE *)(v6 + 145) = *(_BYTE *)(a2 + 912);
  *(_WORD *)(v6 + 66) = *(_WORD *)(a2 + 798);
  *(_BYTE *)(v6 + 148) = 1;
  *(_BYTE *)(v6 + 147) = *(_BYTE *)(a2 + 911);
  v7 = 0x8000000000000000LL;
  if ( !__OFSUB__(0LL, *(_QWORD *)(a2 + 688)) )
  {
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v15, *(_QWORD *)(a2 + 696), *(_QWORD *)(a2 + 704));
    v7 = *(_QWORD *)v15;
    *(_OWORD *)&v14[8] = *(_OWORD *)&v15[8];
  }
  *(_QWORD *)v14 = v7;
  v8 = ((__int64 (__fastcall *)(__int64, _BYTE *))grep_printer::standard::StandardBuilder::replacement)(v6, v14);
  v9 = 0x8000000000000000LL;
  if ( *(_QWORD *)(a2 + 616) != 0x8000000000000000LL )
  {
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v15, *(_QWORD *)(a2 + 624), *(_QWORD *)(a2 + 632));
    v9 = *(_QWORD *)v15;
    *(_OWORD *)&v14[8] = *(_OWORD *)&v15[8];
  }
  *(_QWORD *)v14 = v9;
  v10 = ((__int64 (__fastcall *)(__int64, _BYTE *))grep_printer::standard::StandardBuilder::separator_context)(v8, v14);
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v16, *(_QWORD *)(a2 + 168), *(_QWORD *)(a2 + 176));
  v11 = grep_printer::standard::StandardBuilder::separator_field_context(v10, v16);
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v17, *(_QWORD *)(a2 + 192), *(_QWORD *)(a2 + 200));
  v12 = grep_printer::standard::StandardBuilder::separator_field_match(v11, v17);
  *(_WORD *)(v12 + 64) = *(_WORD *)(a2 + 796);
  *(_BYTE *)(v12 + 143) = *(_DWORD *)(a2 + 768) != 1000000000;
  *(_BYTE *)(v12 + 152) = *(_BYTE *)(a2 + 910);
  if ( *(_QWORD *)(a2 + 784) == 1LL )
  {
    if ( *(_QWORD *)(a2 + 640) == 0x8000000000000000LL )
    {
      *(_QWORD *)v14 = 0x8000000000000000LL;
    }
    else
    {
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v15, *(_QWORD *)(a2 + 648), *(_QWORD *)(a2 + 656));
      *(_QWORD *)&v14[16] = *(_QWORD *)&v15[16];
      *(_OWORD *)v14 = *(_OWORD *)v15;
    }
    ((void (__fastcall *)(_BYTE *, _BYTE *))grep_printer::standard::StandardBuilder::separator_search)(v18, v14);
  }
  grep_printer::standard::StandardBuilder::build(a1, v18, a3);
  return core::ptr::drop_in_place<grep_printer::standard::StandardBuilder>(v18);
}