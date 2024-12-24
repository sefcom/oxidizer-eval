bool __fastcall uu_split::ignorable_io_error(__int64 a1, __int64 a2)
{
  return (unsigned __int8)std::io::error::Error::kind(a1) == 11 && a2 != 0x8000000000000000LL;
}
