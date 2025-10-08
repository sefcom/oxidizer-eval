__int64 __fastcall meilitool::upgrade::v1_10::_::<impl serde_core::ser::Serialize for meilitool::upgrade::v1_10::IndexStats>::serialize(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // rax
  char v3; // [rsp+0h] [rbp-28h] BYREF
  _BYTE v4[7]; // [rsp+1h] [rbp-27h]
  __int64 v5; // [rsp+8h] [rbp-20h]
  char v6; // [rsp+10h] [rbp-18h] BYREF
  _BYTE v7[7]; // [rsp+11h] [rbp-17h]
  __int64 v8; // [rsp+18h] [rbp-10h]

  <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_struct(
    &v6,
    a2,
    aIndexstats,
    10LL,
    6LL);
  if ( v6 == 2 )
    return v8;
  *(_DWORD *)&v4[3] = *(_DWORD *)&v7[3];
  *(_DWORD *)v4 = *(_DWORD *)v7;
  v3 = v6;
  v5 = v8;
  result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
             &v3,
             aNumberOfDocume,
             19LL,
             a1[4]);
  if ( !result )
  {
    result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
               &v3,
               aDatabaseSize,
               13LL,
               a1[5]);
    if ( !result )
    {
      result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                 &v3,
                 aUsedDatabaseSi,
                 18LL,
                 a1[6]);
      if ( !result )
      {
        result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v3, a1 + 7);
        if ( !result )
        {
          result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v3, a1);
          if ( !result )
          {
            result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v3, a1 + 2);
            if ( !result )
            {
              <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::end(&v3);
              return 0LL;
            }
          }
        }
      }
    }
  }
  return result;
}