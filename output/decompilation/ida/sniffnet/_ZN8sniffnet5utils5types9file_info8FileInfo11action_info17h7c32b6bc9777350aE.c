char *__fastcall sniffnet::utils::types::file_info::FileInfo::action_info(char a1, unsigned __int8 a2)
{
  char *result; // rax
  unsigned __int8 v3; // si

  switch ( a1 )
  {
    case 0:
      result = sniffnet::translations::translations_3::style_from_file_translation(a2);
      break;
    case 1:
      result = sniffnet::translations::translations_3::database_from_file_translation(a2);
      break;
    case 2:
      result = sniffnet::translations::translations_3::select_directory_translation(a2);
      break;
    case 3:
      v3 = a2 - 1;
      if ( v3 > 0x15u )
        result = (char *)&unk_184B172;
      else
        result = (char *)dword_18EF2C0 + dword_18EF2C0[v3];
      break;
  }
  return result;
}