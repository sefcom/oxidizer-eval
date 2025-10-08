long long starship::config::_::<impl serde_core::ser::Serialize for starship::config::VecOr<T>>::serialize(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    return a0.serialize_newtype_struct(a1, a2);
}
