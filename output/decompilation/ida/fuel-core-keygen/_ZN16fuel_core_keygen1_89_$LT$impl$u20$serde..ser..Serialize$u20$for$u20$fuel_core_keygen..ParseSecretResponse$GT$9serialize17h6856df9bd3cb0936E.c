__int64 __fastcall fuel_core_keygen::_::<impl serde::ser::Serialize for fuel_core_keygen::ParseSecretResponse>::serialize(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  __int64 result; // rax
  __int64 v5; // rax
  __int128 v6; // [rsp+0h] [rbp-88h] BYREF
  __int128 v7; // [rsp+10h] [rbp-78h]
  __int128 v8; // [rsp+20h] [rbp-68h]
  __int128 v9; // [rsp+38h] [rbp-50h] BYREF
  __int128 v10; // [rsp+48h] [rbp-40h]
  __int128 v11; // [rsp+58h] [rbp-30h]

  v2 = *((unsigned __int8 *)a2 + 88);
  v3 = *a2;
  <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_struct(
    &v6,
    aParsesecretres,
    19LL,
    v2 + *a2 + 1);
  if ( (_QWORD)v6 == 0x8000000000000002LL )
  {
    result = *((_QWORD *)&v6 + 1);
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v6 + 1);
    *(_BYTE *)a1 = 6;
  }
  else
  {
    v10 = v7;
    v11 = v8;
    v9 = v6;
    if ( (_BYTE)v2
      && (v5 = <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::serialize_field(&v9, a2 + 11)) != 0
      || v3
      && (*(_QWORD *)&v6 = a2,
          (v5 = <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::serialize_field(&v9, &v6)) != 0)
      || (v5 = <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::serialize_field(
                 &v9,
                 (char *)a2 + 121)) != 0 )
    {
      *(_QWORD *)(a1 + 8) = v5;
      *(_BYTE *)a1 = 6;
      return core::ptr::drop_in_place<serde_json::value::ser::SerializeMap>(&v9);
    }
    else
    {
      v8 = v11;
      v7 = v10;
      v6 = v9;
      return <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::end(a1, &v6);
    }
  }
  return result;
}