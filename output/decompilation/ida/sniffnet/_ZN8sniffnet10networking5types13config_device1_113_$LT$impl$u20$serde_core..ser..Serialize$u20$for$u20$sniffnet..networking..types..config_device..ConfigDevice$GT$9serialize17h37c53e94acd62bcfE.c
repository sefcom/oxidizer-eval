__int64 __fastcall sniffnet::networking::types::config_device::_::<impl serde_core::ser::Serialize for sniffnet::networking::types::config_device::ConfigDevice>::serialize(
        _DWORD *a1)
{
  __int64 result; // rax

  result = <toml_edit::ser::map::DatetimeFieldSerializer as serde_core::ser::Serializer>::serialize_map(a1 + 2);
  *a1 = 1;
  return result;
}