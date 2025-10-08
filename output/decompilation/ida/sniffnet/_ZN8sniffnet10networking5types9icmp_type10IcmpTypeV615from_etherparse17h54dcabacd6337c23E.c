char __fastcall sniffnet::networking::types::icmp_type::IcmpTypeV6::from_etherparse(char a1, char a2)
{
  unsigned __int8 v2; // si
  char result; // al

  switch ( a1 )
  {
    case 0:
      v2 = a2 + 126;
      result = 37;
      if ( v2 < 0x20u )
        result = byte_282F30[v2];
      break;
    case 1:
      result = 0;
      break;
    case 2:
      result = 1;
      break;
    case 3:
      result = 2;
      break;
    case 4:
      result = 3;
      break;
    case 5:
      result = 4;
      break;
    case 6:
      result = 5;
      break;
    case 7:
      result = 9;
      break;
    case 8:
      result = 10;
      break;
    case 9:
      result = 11;
      break;
    case 10:
      result = 12;
      break;
    case 11:
      result = 13;
      break;
  }
  return result;
}