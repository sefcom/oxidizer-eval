__int64 __fastcall fuel_core_client::client::types::_::<impl serde::ser::Serialize for fuel_core_client::client::types::ResolvedOutput>::serialize(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int128 v4; // [rsp+0h] [rbp-78h] BYREF
  __int128 v5; // [rsp+10h] [rbp-68h]
  __int128 v6; // [rsp+20h] [rbp-58h]
  __int128 v7; // [rsp+30h] [rbp-48h] BYREF
  __int128 v8; // [rsp+40h] [rbp-38h]
  __int128 v9; // [rsp+50h] [rbp-28h]

  <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_struct(&v7, aResolvedoutput_0, 14LL, 2LL);
  result = *((_QWORD *)&v7 + 1);
  if ( (_QWORD)v7 == 0x8000000000000002LL )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v7 + 1);
    *(_BYTE *)a1 = 6;
  }
  else
  {
    v6 = v9;
    v5 = v8;
    v4 = v7;
    v3 = <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::serialize_field(&v4, a2 + 80);
    if ( v3
      || (v3 = <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::serialize_field(&v4, a2)) != 0 )
    {
      *(_QWORD *)(a1 + 8) = v3;
      *(_BYTE *)a1 = 6;
      return core::ptr::drop_in_place<serde_json::value::ser::SerializeMap>(&v4);
    }
    else
    {
      v9 = v6;
      v8 = v5;
      v7 = v4;
      return <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::end(a1, &v7);
    }
  }
  return result;
}