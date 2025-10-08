__int64 __fastcall sniffnet::gui::styles::types::palette_extension::_::<impl serde_core::ser::Serialize for sniffnet::gui::styles::types::palette_extension::PaletteExtension>::serialize(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r15
  __int64 v5; // rcx
  _BYTE v6[48]; // [rsp+0h] [rbp-38h] BYREF

  <serde::private::ser::FlatMapSerializer<M> as serde_core::ser::Serializer>::serialize_struct(v6, a3);
  v4 = *(_QWORD *)&v6[8];
  result = *(_QWORD *)v6;
  if ( *(_QWORD *)v6 == 0x8000000000000005LL )
  {
    <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(
      v6,
      *(_QWORD *)&v6[8],
      *(unsigned int *)(a2 + 108));
    if ( *(_QWORD *)v6 == 0x8000000000000005LL
      && (<serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(
            v6,
            v4,
            a2),
          *(_QWORD *)v6 == 0x8000000000000005LL)
      && (<serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(
            v6,
            v4,
            a2 + 32),
          *(_QWORD *)v6 == 0x8000000000000005LL)
      && (<serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(
            v6,
            v4,
            aAlphaChartBadg,
            17LL,
            *(float *)(a2 + 96)),
          *(_QWORD *)v6 == 0x8000000000000005LL)
      && (<serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(
            v6,
            v4,
            aAlphaRoundBord,
            19LL,
            *(float *)(a2 + 100)),
          *(_QWORD *)v6 == 0x8000000000000005LL)
      && (<serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(
            v6,
            v4,
            aAlphaRoundCont,
            22LL,
            *(float *)(a2 + 104)),
          *(_QWORD *)v6 == 0x8000000000000005LL) )
    {
      <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(
        v6,
        v4,
        a2 + 64);
      result = *(_QWORD *)v6;
      if ( *(_QWORD *)v6 == 0x8000000000000005LL
        && (<serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::serialize_field(
              v6,
              v4,
              a2 + 80),
            result = *(_QWORD *)v6,
            *(_QWORD *)v6 == 0x8000000000000005LL) )
      {
        return <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::end(a1);
      }
      else
      {
        *(_OWORD *)(a1 + 8) = *(_OWORD *)&v6[8];
        *(_QWORD *)a1 = result;
      }
    }
    else
    {
      result = *(_QWORD *)&v6[16];
      *(_QWORD *)(a1 + 16) = *(_QWORD *)&v6[16];
      *(_OWORD *)a1 = *(_OWORD *)v6;
    }
  }
  else
  {
    v5 = *(_QWORD *)&v6[16];
    *(_OWORD *)a1 = *(_OWORD *)v6;
    *(_QWORD *)(a1 + 16) = v5;
  }
  return result;
}