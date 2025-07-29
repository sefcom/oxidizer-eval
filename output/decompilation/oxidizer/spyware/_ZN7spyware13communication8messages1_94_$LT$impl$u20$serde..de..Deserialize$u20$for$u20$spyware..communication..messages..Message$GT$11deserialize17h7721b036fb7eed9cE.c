fn spyware::communication::messages::_::<impl serde::de::Deserialize for spyware::communication::messages::Message>::deserialize(a0: u64, a1: u64) -> long long {
    <&mut ron::de::Deserializer as serde::de::Deserializer>::deserialize_enum(a0, a1, "Message");
    return a0;
}
