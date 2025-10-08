__int64 __fastcall rg::flags::parse::parse(_QWORD *a1)
{
  _QWORD dest[78]; // [rsp+8h] [rbp-270h] BYREF

  rg::flags::parse::parse_low(dest);
  return rg::flags::parse::ParseResult<T>::and_then(a1, dest);
}