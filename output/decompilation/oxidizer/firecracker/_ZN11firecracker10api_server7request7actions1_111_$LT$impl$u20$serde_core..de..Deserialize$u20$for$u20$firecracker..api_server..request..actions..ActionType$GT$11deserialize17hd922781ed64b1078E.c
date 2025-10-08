fn firecracker::api_server::request::actions::_::<impl serde_core::de::Deserialize for firecracker::api_server::request::actions::ActionType>::deserialize(a0: u64, a1: void*, a2: u8) -> long long {
    return <&mut serde_json::de::Deserializer<R> as serde_core::de::Deserializer>::deserialize_enum(a0, a1, a2);
}
