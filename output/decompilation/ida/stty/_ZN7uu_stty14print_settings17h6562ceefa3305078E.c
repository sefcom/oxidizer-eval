__int64 __fastcall uu_stty::print_settings(__int128 *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // ebp

  if ( *(_BYTE *)(a2 + 41) )
  {
    uu_stty::print_in_save_format(a1);
    return 134LL;
  }
  result = uu_stty::print_terminal_size((__int64)a1, a2);
  if ( (_DWORD)result == 134 )
  {
    v3 = *(unsigned __int8 *)(a2 + 40);
    result = uu_stty::print_control_chars((__int64)a1, *(_BYTE *)(a2 + 40));
    if ( (_DWORD)result == 134 )
    {
      uu_stty::print_flags(a1, v3);
      uu_stty::print_flags(a1, v3);
      uu_stty::print_flags(a1, v3);
      uu_stty::print_flags(a1, v3);
      return 134LL;
    }
  }
  return result;
}