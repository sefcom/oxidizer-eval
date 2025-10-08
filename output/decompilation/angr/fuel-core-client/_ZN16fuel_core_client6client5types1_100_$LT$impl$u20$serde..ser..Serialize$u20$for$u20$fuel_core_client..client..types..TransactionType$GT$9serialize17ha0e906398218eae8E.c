long long fuel_core_client::client::types::_::<impl serde::ser::Serialize for fuel_core_client::client::types::TransactionType>::serialize(unsigned long long a0, unsigned long a1)
{
    if (a1 != 9223372036854775814)
        return a0.serialize_newtype_struct();
    return a0.serialize_unit_variant();
}
