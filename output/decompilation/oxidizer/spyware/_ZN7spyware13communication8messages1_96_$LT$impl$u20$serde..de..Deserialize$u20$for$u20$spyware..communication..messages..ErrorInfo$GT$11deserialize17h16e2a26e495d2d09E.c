fn spyware::communication::messages::_::<impl serde::de::Deserialize for spyware::communication::messages::ErrorInfo>::deserialize(a0: u64, a1: void*) -> long long {
    <&mut ron::de::Deserializer as serde::de::Deserializer>::deserialize_struct(a0, a1, "ErrorInfo");
    return a0;
}
