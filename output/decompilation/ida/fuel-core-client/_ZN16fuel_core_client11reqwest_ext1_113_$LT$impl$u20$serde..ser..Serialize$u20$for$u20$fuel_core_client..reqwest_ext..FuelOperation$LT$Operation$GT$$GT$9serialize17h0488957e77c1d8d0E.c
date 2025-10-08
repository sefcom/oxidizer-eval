__int64 __fastcall fuel_core_client::reqwest_ext::_::<impl serde::ser::Serialize for fuel_core_client::reqwest_ext::FuelOperation<Operation>>::serialize(
        __int64 a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h] BYREF
  __int128 v3; // [rsp+10h] [rbp-18h] BYREF

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_map(&v2);
  if ( (_BYTE)v2 == 2 )
    return *((_QWORD *)&v2 + 1);
  DWORD1(v3) = DWORD1(v2);
  *(_DWORD *)((char *)&v3 + 1) = *(_DWORD *)((char *)&v2 + 1);
  LOBYTE(v3) = v2;
  *((_QWORD *)&v3 + 1) = *((_QWORD *)&v2 + 1);
  result = <cynic::operation::Operation<QueryFragment,Variables> as serde::ser::Serialize>::serialize(a1, &v3);
  if ( !result )
  {
    result = serde::ser::SerializeMap::serialize_entry(&v3, *(unsigned int *)(a1 + 80), *(unsigned int *)(a1 + 84));
    if ( !result )
    {
      v2 = v3;
      <serde_json::ser::Compound<W,F> as serde::ser::SerializeMap>::end(&v2);
      return 0LL;
    }
  }
  return result;
}