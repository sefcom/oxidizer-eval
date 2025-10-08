const char *__fastcall sniffnet::networking::types::capture_context::CaptureSource::title(
        __int64 a1,
        unsigned __int8 a2)
{
  unsigned __int8 v2; // si

  if ( !__OFSUB__(-a1, 1LL) )
    return (const char *)sniffnet::translations::translations::network_adapter_translation(a2);
  v2 = a2 - 1;
  if ( v2 >= 0x16u )
    return aCaptureFile;
  else
    return (char *)dword_18E9800 + dword_18E9800[v2];
}