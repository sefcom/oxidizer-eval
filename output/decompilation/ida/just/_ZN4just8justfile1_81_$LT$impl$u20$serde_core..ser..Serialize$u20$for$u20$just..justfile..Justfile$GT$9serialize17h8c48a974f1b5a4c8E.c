__int64 __fastcall just::justfile::_::<impl serde_core::ser::Serialize for just::justfile::Justfile>::serialize(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v4; // [rsp+8h] [rbp-10h]

  <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_struct(&v3, a2, 11LL);
  result = v3;
  if ( (_BYTE)v4 != 3 )
  {
    result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v3, a1 + 77);
    if ( !result )
    {
      result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v3, a1 + 80);
      if ( !result )
      {
        result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v3, a1 + 83);
        if ( !result )
        {
          result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                     &v3,
                     aDoc,
                     3LL,
                     a1 + 18);
          if ( !result )
          {
            result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                       &v3,
                       a1[1],
                       a1[2]);
            if ( !result )
            {
              result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                         &v3,
                         a1 + 84);
              if ( !result )
              {
                result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                           &v3,
                           a1 + 87);
                if ( !result )
                {
                  result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                             &v3,
                             a1 + 21);
                  if ( !result )
                  {
                    result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                               &v3,
                               a1[10],
                               a1[11]);
                    if ( !result )
                    {
                      result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                                 &v3,
                                 a1 + 71);
                      if ( !result )
                      {
                        result = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(
                                   &v3,
                                   a1[13],
                                   a1[14]);
                        if ( !result )
                          return <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::end(v3, v4);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}