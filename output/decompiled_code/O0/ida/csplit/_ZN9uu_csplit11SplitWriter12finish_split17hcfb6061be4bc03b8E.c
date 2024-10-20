void __fastcall uu_csplit::SplitWriter::finish_split(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _QWORD v3[2]; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v4[6]; // [rsp+18h] [rbp-30h] BYREF

  if ( (*(_BYTE *)(a1 + 56) & 1) == 0 )
  {
    v1 = *(_QWORD *)(a1 + 32);
    if ( (*(_BYTE *)(v1 + 98) & 1) != 0 && !*(_QWORD *)(a1 + 48) )
    {
      v2 = *(_QWORD *)(a1 + 40);
      if ( !v2 )
        core::panicking::panic_const::panic_const_sub_overflow(&off_2A5068);
      *(_QWORD *)(a1 + 40) = v2 - 1;
    }
    else if ( (*(_BYTE *)(v1 + 97) & 1) == 0 )
    {
      v3[0] = a1 + 48;
      v3[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v4[0] = &unk_2A4FC0;
      v4[1] = 2LL;
      v4[4] = 0LL;
      v4[2] = v3;
      v4[3] = 1LL;
      std::io::stdio::_print(v4);
    }
  }
}
