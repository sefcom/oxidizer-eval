__int64 __fastcall sniffnet::gui::styles::types::palette::_::<impl serde_core::ser::Serialize for sniffnet::gui::styles::types::palette::Palette>::serialize(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r15
  __int64 v5; // rcx
  __int128 v6; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h]

  <serde::private::ser::FlatMapSerializer<M> as serde_core::ser::Serializer>::serialize_struct(&v6, a3);
  v4 = *((_QWORD *)&v6 + 1);
  result = v6;
  if ( (_QWORD)v6 == 0x8000000000000005LL )
  {
    <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(
      &v6,
      *((_QWORD *)&v6 + 1),
      a2);
    if ( (_QWORD)v6 == 0x8000000000000005LL
      && (<serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(
            &v6,
            v4,
            a2 + 16),
          (_QWORD)v6 == 0x8000000000000005LL)
      && (<serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(
            &v6,
            v4,
            a2 + 32),
          (_QWORD)v6 == 0x8000000000000005LL)
      && (<serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(
            &v6,
            v4,
            a2 + 48),
          (_QWORD)v6 == 0x8000000000000005LL)
      && (<serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(
            &v6,
            v4,
            a2 + 64),
          (_QWORD)v6 == 0x8000000000000005LL)
      && (<serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(
            &v6,
            v4,
            a2 + 80),
          (_QWORD)v6 == 0x8000000000000005LL) )
    {
      return <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::end(a1);
    }
    else
    {
      result = v7;
      *(_QWORD *)(a1 + 16) = v7;
      *(_OWORD *)a1 = v6;
    }
  }
  else
  {
    v5 = v7;
    *(_OWORD *)a1 = v6;
    *(_QWORD *)(a1 + 16) = v5;
  }
  return result;
}