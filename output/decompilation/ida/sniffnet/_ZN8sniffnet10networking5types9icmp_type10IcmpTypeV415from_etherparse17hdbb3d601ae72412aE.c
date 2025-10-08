char __fastcall sniffnet::networking::types::icmp_type::IcmpTypeV4::from_etherparse(char a1, char a2)
{
  unsigned __int8 v2; // si
  char result; // al

  switch ( a1 )
  {
    case 0:
      v2 = a2 - 4;
      result = 29;
      if ( v2 < 0x28u )
        result = byte_18E9B50[v2];
      break;
    case 1:
      result = 0;
      break;
    case 2:
      result = 1;
      break;
    case 3:
      result = 3;
      break;
    case 4:
      result = 5;
      break;
    case 5:
      result = 8;
      break;
    case 6:
      result = 9;
      break;
    case 7:
      result = 10;
      break;
    case 8:
      result = 11;
      break;
  }
  return result;
}