fn flealib::commandprocessor::_::<impl serde::de::Deserialize for flealib::commandprocessor::FleaConfig>::deserialize(a0: u64, a1: u64, a2: u64) -> long long {
    <toml::de::Deserializer as serde::de::Deserializer>::deserialize_struct(a0, a1, a2, "FleaConfig", "ftp_user", 9);
    return a0;
}
