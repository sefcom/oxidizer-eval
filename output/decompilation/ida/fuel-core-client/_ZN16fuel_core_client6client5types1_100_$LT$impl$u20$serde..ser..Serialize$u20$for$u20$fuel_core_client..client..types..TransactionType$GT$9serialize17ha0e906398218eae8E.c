__int64 __fastcall fuel_core_client::client::types::_::<impl serde::ser::Serialize for fuel_core_client::client::types::TransactionType>::serialize(
        __int64 a1,
        __int64 a2)
{
  if ( a2 == 0x8000000000000006LL )
    return <serde_json::value::ser::RawValueEmitter as serde::ser::Serializer>::serialize_unit_variant(
             a1,
             aTransactiontyp,
             15LL,
             1LL,
             aUnknown,
             7LL);
  else
    return <serde_json::value::ser::RawValueEmitter as serde::ser::Serializer>::serialize_newtype_struct();
}