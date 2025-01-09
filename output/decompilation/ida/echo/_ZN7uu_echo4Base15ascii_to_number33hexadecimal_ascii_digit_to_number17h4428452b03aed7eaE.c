char __fastcall uu_echo::Base::ascii_to_number::hexadecimal_ascii_digit_to_number(char a1)
{
  char result; // al

  result = 0;
  switch ( a1 )
  {
    case '0':
      result = 1;
      break;
    case '1':
      result = 1;
      break;
    case '2':
      result = 1;
      break;
    case '3':
      result = 1;
      break;
    case '4':
      result = 1;
      break;
    case '5':
      result = 1;
      break;
    case '6':
      result = 1;
      break;
    case '7':
      result = 1;
      break;
    case '8':
      result = 1;
      break;
    case '9':
      result = 1;
      break;
    case 'A':
    case 'a':
      result = 1;
      break;
    case 'B':
    case 'b':
      result = 1;
      break;
    case 'C':
    case 'c':
      result = 1;
      break;
    case 'D':
    case 'd':
      result = 1;
      break;
    case 'E':
    case 'e':
      result = 1;
      break;
    case 'F':
    case 'f':
      result = 1;
      break;
    default:
      return result;
  }
  return result;
}
