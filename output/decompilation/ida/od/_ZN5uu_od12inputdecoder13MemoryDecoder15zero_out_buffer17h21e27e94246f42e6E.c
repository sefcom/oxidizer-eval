void __fastcall uu_od::inputdecoder::MemoryDecoder::zero_out_buffer(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax

  if ( a2 < a3 )
  {
    v4 = a2;
    v5 = *a1;
    do
    {
      v6 = *(_QWORD *)(v5 + 16);
      if ( v4 >= v6 )
        core::panicking::panic_bounds_check(v4, v6, &off_143508);
      v7 = <usize as core::iter::range::Step>::forward_unchecked(v4);
      *(_BYTE *)(*(_QWORD *)(v5 + 8) + v4) = 0;
      v4 = v7;
    }
    while ( v7 < a3 );
  }
}
