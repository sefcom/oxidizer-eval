void __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> uu_od::inputdecoder::MemoryDecoder::zero_out_buffer(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rcx

  if ( a2 < a3 )
  {
    v3 = *a1;
    do
    {
      if ( a2 >= *(_QWORD *)(v3 + 16) )
        core::panicking::panic_bounds_check(a2, *(_QWORD *)(v3 + 16), &off_102298);
      *(_BYTE *)(*(_QWORD *)(v3 + 8) + a2++) = 0;
    }
    while ( a3 != a2 );
  }
}