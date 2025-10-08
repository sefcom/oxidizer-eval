__int64 __fastcall forc_publish::forc_pub_client::_::<impl serde::ser::Serialize for forc_publish::forc_pub_client::PublishRequest>::serialize(
        __int64 a1)
{
  __int64 result; // rax
  char v2; // [rsp+0h] [rbp-28h] BYREF
  _BYTE v3[7]; // [rsp+1h] [rbp-27h]
  __int64 v4; // [rsp+8h] [rbp-20h]
  char v5; // [rsp+10h] [rbp-18h] BYREF
  _BYTE v6[7]; // [rsp+11h] [rbp-17h]
  __int64 v7; // [rsp+18h] [rbp-10h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v5);
  if ( v5 == 2 )
    return v7;
  *(_DWORD *)&v3[3] = *(_DWORD *)&v6[3];
  *(_DWORD *)v3 = *(_DWORD *)v6;
  v2 = v5;
  v4 = v7;
  result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v2, a1);
  if ( !result )
  {
    <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(&v2);
    return 0LL;
  }
  return result;
}