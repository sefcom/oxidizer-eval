fn spyware::communication::messages::_::<impl serde::de::Deserialize for spyware::communication::messages::Architecture>::deserialize(a0: u64, a1: &u64) -> long long {
    <&mut ron::de::tag::TagDeserializer as serde::de::Deserializer>::deserialize_enum(a0, a1, "Architecture");
    return a0;
}
