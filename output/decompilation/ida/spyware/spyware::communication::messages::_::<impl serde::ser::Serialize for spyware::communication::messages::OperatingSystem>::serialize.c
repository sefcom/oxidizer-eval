__int64 __fastcall spyware::communication::messages::_::<impl serde::ser::Serialize for spyware::communication::messages::OperatingSystem>::serialize(
        __int64 a1,
        _BYTE *a2,
        int a3)
{
  switch ( *a2 )
  {
    case 0:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)aOperatingsyste,
        15,
        0,
        (unsigned int)aWindows,
        7LL);
      break;
    case 1:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)aOperatingsyste,
        15,
        1,
        (unsigned int)aLinux,
        5LL);
      break;
    case 2:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)aOperatingsyste,
        15,
        2,
        (unsigned int)aFreebsd,
        7LL);
      break;
    case 3:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)aOperatingsyste,
        15,
        3,
        (unsigned int)aMacos,
        5LL);
      break;
    case 4:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)aOperatingsyste,
        15,
        4,
        (unsigned int)aIos,
        3LL);
      break;
    case 5:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)aOperatingsyste,
        15,
        5,
        (unsigned int)aAndroid,
        7LL);
      break;
    case 6:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)aOperatingsyste,
        15,
        6,
        (unsigned int)aUnknown,
        7LL);
      break;
  }
  return a1;
}