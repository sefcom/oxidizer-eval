__int64 __fastcall fuel_core_keygen::_::<impl serde::ser::Serialize for fuel_core_keygen::KeyType>::serialize(
        __int64 a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    return <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_unit_variant(a1, aPeering, 7LL);
  else
    return <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_unit_variant(
             a1,
             "block-productionno storage space",
             16LL);
}