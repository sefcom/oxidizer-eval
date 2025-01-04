char __fastcall uu_split::custom_write_all(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // r15

  v6 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a4);
  if ( v6 )
  {
    v7 = v6;
    LOBYTE(v6) = uu_split::ignorable_io_error(v6, a5);
    if ( (_BYTE)v6 )
    {
      *(_WORD *)a1 = 0;
      LOBYTE(v6) = core::ptr::drop_in_place<std::io::error::Error>(v7);
    }
    else
    {
      *(_QWORD *)(a1 + 8) = v7;
      *(_BYTE *)a1 = 1;
    }
  }
  else
  {
    *(_WORD *)a1 = 256;
  }
  return v6;
}
