void __fastcall uu_csplit::SplitWriter::finish_split(__int64 a1)
{
  __int64 v1; // rax
  _QWORD v2[2]; // [rsp+0h] [rbp-40h] BYREF
  _QWORD v3[6]; // [rsp+10h] [rbp-30h] BYREF

  if ( !*(_BYTE *)(a1 + 56) )
  {
    v1 = *(_QWORD *)(a1 + 32);
    if ( *(_BYTE *)(v1 + 98) != 1 || *(_QWORD *)(a1 + 48) )
    {
      if ( !*(_BYTE *)(v1 + 97) )
      {
        v2[0] = a1 + 48;
        v2[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v3[0] = &unk_242C88;
        v3[1] = 2LL;
        v3[4] = 0LL;
        v3[2] = v2;
        v3[3] = 1LL;
        std::io::stdio::_print(v3);
      }
    }
    else
    {
      --*(_QWORD *)(a1 + 40);
    }
  }
}