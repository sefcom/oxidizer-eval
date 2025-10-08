void __fastcall uu_cat::write_new_line(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v7; // rax
  _BYTE *v8; // r15
  __int64 v9; // rax
  _BYTE v10[72]; // [rsp+0h] [rbp-48h] BYREF

  if ( !*(_BYTE *)(a4 + 57) )
  {
    if ( *(_BYTE *)(a4 + 56) )
    {
      if ( *a3 == 1 && *(_BYTE *)(a4 + 58) == 1 )
        goto LABEL_21;
      *(_BYTE *)(a4 + 58) = 1;
      if ( a3[4] == 2 )
      {
        v8 = a3;
        v7 = uu_cat::LineNumber::write(a4, a2);
        if ( v7 )
          goto LABEL_16;
        uu_cat::LineNumber::increment((_QWORD *)a4);
        a3 = v8;
      }
      if ( a3[2] )
        goto LABEL_13;
    }
    else
    {
      *(_BYTE *)(a4 + 58) = 1;
      if ( a3[2] )
      {
LABEL_13:
        uu_cat::write_end_of_line(v10, a2, asc_1AD97, 2LL, a5);
        v9 = *(_QWORD *)v10;
        if ( *(_QWORD *)v10 == 0x8000000000000006LL )
          goto LABEL_21;
LABEL_19:
        *(_OWORD *)(a1 + 8) = *(_OWORD *)&v10[8];
        *(_QWORD *)a1 = v9;
        return;
      }
    }
    uu_cat::write_end_of_line(v10, a2, asc_1AD96, 1LL, a5);
    v9 = *(_QWORD *)v10;
    if ( *(_QWORD *)v10 == 0x8000000000000006LL )
      goto LABEL_21;
    goto LABEL_19;
  }
  if ( a3[2] )
  {
    v7 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, &unk_1AD99, 2LL);
    if ( !v7 )
    {
      *(_BYTE *)(a4 + 57) = 0;
      uu_cat::write_end_of_line(v10, a2, asc_1AD97, 2LL, a5);
      if ( *(_QWORD *)v10 != 0x8000000000000006LL )
        goto LABEL_22;
LABEL_21:
      *(_QWORD *)a1 = 0x8000000000000006LL;
      return;
    }
LABEL_16:
    *(_QWORD *)a1 = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 8) = v7;
    return;
  }
  v7 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, asc_1AD95, 1LL);
  if ( v7 )
    goto LABEL_16;
  *(_BYTE *)(a4 + 57) = 0;
  uu_cat::write_end_of_line(v10, a2, asc_1AD96, 1LL, a5);
  if ( *(_QWORD *)v10 == 0x8000000000000006LL )
    goto LABEL_21;
LABEL_22:
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&v10[16];
  *(_OWORD *)a1 = *(_OWORD *)v10;
}