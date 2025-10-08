__int64 __fastcall rg::flags::defs::convert::human_readable_usize(__int64 a1)
{
  return rg::flags::defs::convert::human_readable_u64(a1) & 1;
}