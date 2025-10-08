__int64 __fastcall fuel_core_client::reqwest_ext::_::<impl serde::ser::Serialize for fuel_core_client::reqwest_ext::ExtensionsRequest>::serialize(
        unsigned int a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 result; // rax
  char v4; // [rsp+8h] [rbp-30h] BYREF
  _BYTE v5[7]; // [rsp+9h] [rbp-2Fh]
  __int64 v6; // [rsp+10h] [rbp-28h]
  char v7; // [rsp+18h] [rbp-20h] BYREF
  _BYTE v8[7]; // [rsp+19h] [rbp-1Fh]
  __int64 v9; // [rsp+20h] [rbp-18h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v7, a3);
  if ( v7 == 2 )
    return v9;
  *(_DWORD *)&v5[3] = *(_DWORD *)&v8[3];
  *(_DWORD *)v5 = *(_DWORD *)v8;
  v4 = v7;
  v6 = v9;
  result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v4, a1, a2);
  if ( !result )
  {
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(&v4);
    return 0LL;
  }
  return result;
}