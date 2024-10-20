__int64 __fastcall uu_join::Repr<Sep>::print_line_ending(__int64 a1, __int64 a2)
{
  char v3; // [rsp+16h] [rbp-2h] BYREF
  char v4; // [rsp+17h] [rbp-1h]

  v4 = *(_BYTE *)(a1 + 328);
  v3 = v4;
  return <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, &v3, 1LL);
}
