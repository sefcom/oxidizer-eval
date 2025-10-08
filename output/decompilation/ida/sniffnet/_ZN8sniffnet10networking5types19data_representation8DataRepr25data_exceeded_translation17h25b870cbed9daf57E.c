char *__fastcall sniffnet::networking::types::data_representation::DataRepr::data_exceeded_translation(
        char a1,
        unsigned __int8 a2)
{
  unsigned __int8 v3; // si

  if ( !a1 )
    return (char *)sniffnet::translations::translations::packets_exceeded_translation(a2);
  if ( a1 == 1 )
    return (char *)sniffnet::translations::translations::bytes_exceeded_translation(a2);
  v3 = a2 - 1;
  if ( v3 > 0x15u )
    return (char *)&unk_18389D0;
  else
    return (char *)dword_18E9AF8 + dword_18E9AF8[v3];
}