char __fastcall uu_split::ignorable_io_error(__int64 a1, __int64 a2)
{
  return ((unsigned __int8)std::io::error::Error::kind() == 11) & !__OFSUB__(-a2, 1LL);
}