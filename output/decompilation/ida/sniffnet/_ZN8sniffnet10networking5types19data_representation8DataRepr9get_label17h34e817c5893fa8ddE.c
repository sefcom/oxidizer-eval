const char *__fastcall sniffnet::networking::types::data_representation::DataRepr::get_label(
        char a1,
        unsigned __int8 a2)
{
  unsigned __int8 v3; // si

  if ( !a1 )
    return (const char *)sniffnet::translations::translations::packets_translation(a2);
  if ( a1 == 1 )
    return (char *)dword_18E9910 + dword_18E9910[a2];
  v3 = a2 - 7;
  if ( v3 >= 0x10u )
    return aBits;
  else
    return (char *)dword_18E99F0 + dword_18E99F0[v3];
}