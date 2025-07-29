__int64 __fastcall spyware::communication::messages::_::<impl serde::ser::Serialize for spyware::communication::messages::PointerWidth>::serialize(
        __int64 a1,
        _BYTE *a2,
        int a3)
{
  if ( *a2 )
    <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_unit_variant(
      a1,
      a3,
      (unsigned int)aPointerwidth,
      12,
      1,
      (unsigned int)aBit64,
      5LL);
  else
    <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_unit_variant(
      a1,
      a3,
      (unsigned int)aPointerwidth,
      12,
      0,
      (unsigned int)aBit32,
      5LL);
  return a1;
}