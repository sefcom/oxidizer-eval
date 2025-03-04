__int64 __fastcall uu_expand::is_digit_or_comma(int a1)
{
  __int64 result; // rax

  result = (unsigned int)(a1 - 48);
  LOBYTE(result) = (unsigned int)result < 0xA || a1 == 44;
  return result;
}
