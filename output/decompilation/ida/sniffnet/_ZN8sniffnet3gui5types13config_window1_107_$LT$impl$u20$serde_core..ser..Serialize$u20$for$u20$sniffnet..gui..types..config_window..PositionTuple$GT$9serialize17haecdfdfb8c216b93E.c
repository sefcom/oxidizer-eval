__int64 __fastcall sniffnet::gui::types::config_window::_::<impl serde_core::ser::Serialize for sniffnet::gui::types::config_window::PositionTuple>::serialize(
        __int64 a1,
        __int64 a2,
        float a3,
        float a4)
{
  __int64 result; // rax
  _BYTE v5[24]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v6; // [rsp+28h] [rbp-50h]
  __int128 v7; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+40h] [rbp-38h]
  __int128 v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-18h]

  <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_tuple_struct(
    v5,
    a2,
    aPositiontuple,
    13LL,
    2LL);
  v9 = *(_OWORD *)&v5[8];
  v10 = v6;
  if ( *(_DWORD *)v5 == 1 )
  {
    result = v10;
    *(_QWORD *)(a1 + 24) = v10;
    *(_OWORD *)(a1 + 8) = v9;
    *(_QWORD *)a1 = 8LL;
  }
  else
  {
    v8 = v10;
    v7 = v9;
    <toml_edit::ser::array::SerializeValueArray as serde_core::ser::SerializeTupleStruct>::serialize_field(v5, &v7, a3);
    if ( *(_QWORD *)v5 == 0x8000000000000005LL
      && (<toml_edit::ser::array::SerializeValueArray as serde_core::ser::SerializeTupleStruct>::serialize_field(
            v5,
            &v7,
            a4),
          *(_QWORD *)v5 == 0x8000000000000005LL) )
    {
      *(_QWORD *)&v5[16] = v8;
      *(_OWORD *)v5 = v7;
      return <toml_edit::ser::array::SerializeValueArray as serde_core::ser::SerializeTuple>::end(a1, v5);
    }
    else
    {
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v5[16];
      *(_OWORD *)(a1 + 8) = *(_OWORD *)v5;
      *(_QWORD *)a1 = 8LL;
      return core::ptr::drop_in_place<toml_edit::ser::array::SerializeValueArray>(&v7);
    }
  }
  return result;
}