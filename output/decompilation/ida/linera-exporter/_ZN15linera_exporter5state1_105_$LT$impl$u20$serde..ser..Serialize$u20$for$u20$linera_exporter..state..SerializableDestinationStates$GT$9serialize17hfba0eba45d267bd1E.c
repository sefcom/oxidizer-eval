__int64 __fastcall linera_exporter::state::_::<impl serde::ser::Serialize for linera_exporter::state::SerializableDestinationStates>::serialize(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int128 v6; // xmm0
  __int128 v7; // [rsp+8h] [rbp-30h] BYREF
  __int128 v8; // [rsp+18h] [rbp-20h]

  <bcs::ser::Serializer<W> as serde::ser::Serializer>::serialize_struct(&v7, a3, 500LL, aDestinationsta, 17LL);
  result = v7;
  v4 = v8;
  if ( (_QWORD)v7 == 16LL )
  {
    result = <bcs::ser::Serializer<W> as serde::ser::SerializeStruct>::serialize_field(
               &v7,
               *((_QWORD *)&v7 + 1),
               v8,
               a2);
    if ( (_DWORD)v7 == 16 )
    {
      return <bcs::ser::Serializer<W> as serde::ser::SerializeSeq>::end(a1);
    }
    else
    {
      v6 = v7;
      *(_OWORD *)(a1 + 16) = v8;
      *(_OWORD *)a1 = v6;
    }
  }
  else
  {
    v5 = *((_QWORD *)&v8 + 1);
    *(_OWORD *)a1 = v7;
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)(a1 + 24) = v5;
  }
  return result;
}