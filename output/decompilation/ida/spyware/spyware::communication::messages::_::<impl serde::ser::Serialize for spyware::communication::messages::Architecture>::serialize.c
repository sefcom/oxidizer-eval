__int64 __fastcall spyware::communication::messages::_::<impl serde::ser::Serialize for spyware::communication::messages::Architecture>::serialize(
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
        (unsigned int)aArchitecture,
        12,
        0,
        (unsigned int)aX86,
        3LL);
      break;
    case 1:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)aArchitecture,
        12,
        1,
        (unsigned int)aX8664,
        6LL);
      break;
    case 2:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)aArchitecture,
        12,
        2,
        (unsigned int)aMips,
        4LL);
      break;
    case 3:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)aArchitecture,
        12,
        3,
        (unsigned int)aPowerpc,
        7LL);
      break;
    case 4:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)aArchitecture,
        12,
        4,
        (unsigned int)aPowerpc64,
        9LL);
      break;
    case 5:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)aArchitecture,
        12,
        5,
        (unsigned int)aArm,
        3LL);
      break;
    case 6:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_unit_variant(
        a1,
        a3,
        (unsigned int)aArchitecture,
        12,
        6,
        (unsigned int)aAarch64,
        7LL);
      break;
  }
  return a1;
}