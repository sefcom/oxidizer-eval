fn starship::config::_::<impl serde_core::ser::Serialize for starship::config::VecOr<T>>::serialize(a0: u64, a1: u64, a2: u64) -> long long {
    return <toml::value::ValueSerializer as serde_core::ser::Serializer>::serialize_newtype_struct(a0, a1, a2);
}
