__int64 __fastcall fuel_core_keygen::_::<impl serde::ser::Serialize for fuel_core_keygen::NewKeyResponse>::serialize(
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
  __int128 v9; // [rsp+30h] [rbp-58h] BYREF
  __int128 v10; // [rsp+40h] [rbp-48h]
  __int128 v11; // [rsp+50h] [rbp-38h]

  v2 = *((unsigned __int8 *)a2 + 120);
  v3 = *a2;
  <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_struct(
    &v9,
    aNewkeyresponse,
    14LL,
    v2 + *a2 + 2);
  result = *((_QWORD *)&v9 + 1);
  if ( (_QWORD)v9 == 0x8000000000000002LL )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v9 + 1);
    *(_BYTE *)a1 = 6;
  }
  else
  {
    v8 = v11;
    v7 = v10;
    v6 = v9;
    v5 = <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::serialize_field(&v6, a2 + 11);
    if ( v5
      || (_BYTE)v2
      && (v5 = <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::serialize_field(&v6, a2 + 15)) != 0
      || v3
      && (*(_QWORD *)&v9 = a2,
          (v5 = <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::serialize_field(&v6, &v9)) != 0)
      || (v5 = <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::serialize_field(
                 &v6,
                 (char *)a2 + 153)) != 0 )
    {
      *(_QWORD *)(a1 + 8) = v5;
      *(_BYTE *)a1 = 6;
      return core::ptr::drop_in_place<serde_json::value::ser::SerializeMap>(&v6);
    }
    else
    {
      v11 = v8;
      v10 = v7;
      v9 = v6;
      return <serde_json::value::ser::SerializeMap as serde::ser::SerializeStruct>::end(a1, &v9);
    }
  }
  return result;
}