// attributes: thunk
__int64 __fastcall sniffnet::gui::types::settings::_::<impl serde_core::de::Deserialize for sniffnet::gui::types::settings::Settings>::deserialize(
        void *a1,
        void *a2)
{
  return <toml_edit::de::value::ValueDeserializer as serde_core::de::Deserializer>::deserialize_struct(a1, a2);
}