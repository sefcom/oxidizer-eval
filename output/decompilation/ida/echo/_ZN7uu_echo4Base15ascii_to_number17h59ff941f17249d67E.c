char __fastcall uu_echo::Base::ascii_to_number(char a1, char a2)
{
  if ( a1 )
    return uu_echo::Base::ascii_to_number::hexadecimal_ascii_digit_to_number(a2);
  else
    return (unsigned __int8)(a2 - 48) < 8u;
}
