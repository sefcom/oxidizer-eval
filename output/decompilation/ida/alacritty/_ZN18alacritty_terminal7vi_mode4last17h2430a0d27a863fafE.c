__int64 __fastcall alacritty_terminal::vi_mode::last(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r14
  int v4; // edx
  int v5; // ebx
  __int64 result; // rax
  _BYTE v7[8]; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v8; // [rsp+10h] [rbp-28h]

  v3 = alacritty_terminal::term::Term<T>::expand_wide(a1, a2, a3, 1);
  v5 = v4;
  alacritty_terminal::vi_mode::last_occupied_in_line((__int64)v7, a1, v4);
  if ( (v7[0] & 1) == 0 || (result = v8, v3 >= v8) )
  {
    if ( (unsigned __int8)alacritty_terminal::vi_mode::is_wrap(a1, v3) )
    {
      do
        ++v5;
      while ( (unsigned __int8)alacritty_terminal::vi_mode::is_wrap(a1, v3) );
      alacritty_terminal::vi_mode::last_occupied_in_line((__int64)v7, a1, v5 - 1);
      if ( v7[0] )
        return v8;
      return v3;
    }
    else
    {
      return *(_QWORD *)(a1 + 184) - 1LL;
    }
  }
  return result;
}