__int64 __fastcall linera_indexer_plugins::operations::_::<impl serde::ser::Serialize for linera_indexer_plugins::operations::OperationKey>::serialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int128 v9; // [rsp+8h] [rbp-40h] BYREF
  __int128 v10; // [rsp+18h] [rbp-30h]

  <bcs::ser::Serializer<W> as serde::ser::Serializer>::serialize_struct(&v9, a3, a4, aOperationkey, 12LL);
  v5 = *((_QWORD *)&v9 + 1);
  result = v9;
  v6 = v10;
  if ( (_QWORD)v9 == 16LL )
  {
    result = <bcs::ser::Serializer<W> as serde::ser::SerializeTuple>::serialize_element(
               &v9,
               *((_QWORD *)&v9 + 1),
               v10,
               a2);
    if ( (_DWORD)v9 == 16
      && (result = <bcs::ser::Serializer<W> as serde::ser::SerializeTuple>::serialize_element(
                     &v9,
                     v5,
                     v6,
                     *(_QWORD *)(a2 + 32)),
          (_DWORD)v9 == 16)
      && (result = <bcs::ser::Serializer<W> as serde::ser::SerializeTuple>::serialize_element(
                     &v9,
                     v5,
                     *(_QWORD *)(a2 + 40)),
          (_DWORD)v9 == 16) )
    {
      return <bcs::ser::Serializer<W> as serde::ser::SerializeSeq>::end(a1);
    }
    else
    {
      v8 = v9;
      *(_OWORD *)(a1 + 16) = v10;
      *(_OWORD *)a1 = v8;
    }
  }
  else
  {
    v7 = *((_QWORD *)&v10 + 1);
    *(_OWORD *)a1 = v9;
    *(_QWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 24) = v7;
  }
  return result;
}