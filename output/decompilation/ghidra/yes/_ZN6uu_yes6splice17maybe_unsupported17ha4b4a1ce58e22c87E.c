ulong __rustcall uu_yes::splice::maybe_unsupported(uint param_1)

{
  if ((param_1 < 0x27) && ((0x4000400200U >> ((ulong)param_1 & 0x3f) & 1) != 0)) {
    return 0;
  }
  return (ulong)param_1 << 0x20 | 2;
}