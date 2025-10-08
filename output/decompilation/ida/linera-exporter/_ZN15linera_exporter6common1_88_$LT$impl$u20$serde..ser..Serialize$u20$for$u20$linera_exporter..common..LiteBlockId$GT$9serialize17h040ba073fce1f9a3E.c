__int64 __fastcall linera_exporter::common::_::<impl serde::ser::Serialize for linera_exporter::common::LiteBlockId>::serialize(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int128 v8; // [rsp+8h] [rbp-40h] BYREF
  __int128 v9; // [rsp+18h] [rbp-30h]

  <bcs::ser::Serializer<W> as serde::ser::Serializer>::serialize_struct(&v8, a3, 500LL, aLiteblockid, 11LL);
  v4 = *((_QWORD *)&v8 + 1);
  result = v8;
  v5 = v9;
  if ( (_QWORD)v8 == 16LL )
  {
    result = <bcs::ser::Serializer<W> as serde::ser::SerializeTuple>::serialize_element(
               &v8,
               *((_QWORD *)&v8 + 1),
               v9,
               a2);
    if ( (_DWORD)v8 == 16
      && (result = <bcs::ser::Serializer<W> as serde::ser::SerializeTuple>::serialize_element(
                     &v8,
                     v4,
                     v5,
                     *(_QWORD *)(a2 + 32)),
          (_DWORD)v8 == 16) )
    {
      return <bcs::ser::Serializer<W> as serde::ser::SerializeSeq>::end(a1);
    }
    else
    {
      v7 = v8;
      *(_OWORD *)(a1 + 16) = v9;
      *(_OWORD *)a1 = v7;
    }
  }
  else
  {
    v6 = *((_QWORD *)&v9 + 1);
    *(_OWORD *)a1 = v8;
    *(_QWORD *)(a1 + 16) = v5;
    *(_QWORD *)(a1 + 24) = v6;
  }
  return result;
}