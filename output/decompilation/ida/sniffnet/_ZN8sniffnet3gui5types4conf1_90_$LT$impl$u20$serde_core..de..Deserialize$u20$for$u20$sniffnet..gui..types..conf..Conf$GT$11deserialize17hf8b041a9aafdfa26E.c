// attributes: thunk
__int64 __fastcall sniffnet::gui::types::conf::_::<impl serde_core::de::Deserialize for sniffnet::gui::types::conf::Conf>::deserialize(
        void *a1)
{
  return <toml::de::Deserializer as serde_core::de::Deserializer>::deserialize_struct(a1);
}