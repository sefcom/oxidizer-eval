        unsigned __int8 a3)
{
  unsigned __int64 result; // rax

  result = a2;
  switch ( a2 )
  {
    case 0u:
    case 3u:
      result = (unsigned __int64)uu_dd::progress::ProgUpdate::print_transfer_stats(a1, a3);
      break;
    case 1u:
      result = (unsigned __int64)uu_dd::progress::ProgUpdate::print_io_lines((__int64)a1);
      break;
    case 2u:
      return result;
  }
  return result;
}
