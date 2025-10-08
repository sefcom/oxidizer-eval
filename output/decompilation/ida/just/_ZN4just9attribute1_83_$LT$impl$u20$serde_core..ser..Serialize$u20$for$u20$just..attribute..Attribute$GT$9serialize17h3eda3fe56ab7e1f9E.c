__int64 __fastcall just::attribute::_::<impl serde_core::ser::Serialize for just::attribute::Attribute>::serialize(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  v2 = 16LL;
  if ( (unsigned __int64)(*a1 + 0x7FFFFFFFFFFFFFFFLL) < 0x14 )
    v2 = *a1 + 0x7FFFFFFFFFFFFFFFLL;
  switch ( v2 )
  {
    case 0LL:
      result = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_newtype_variant(
                 a2,
                 aConfirm,
                 7LL,
                 a1 + 1);
      break;
    case 1LL:
      result = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aDefault_0,
                 7LL);
      break;
    case 2LL:
      result = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_newtype_variant(
                 a2,
                 aDoc,
                 3LL,
                 a1 + 1);
      break;
    case 3LL:
      result = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aExitMessage,
                 12LL);
      break;
    case 4LL:
      result = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_newtype_variant(
                 a2,
                 aExtension,
                 9LL,
                 a1[2],
                 a1[3]);
      break;
    case 5LL:
      result = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_newtype_variant(
                 a2,
                 aGroup_0,
                 5LL,
                 a1[2],
                 a1[3]);
      break;
    case 6LL:
      result = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aLinux,
                 5LL);
      break;
    case 7LL:
      result = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aMacos,
                 5LL);
      break;
    case 8LL:
      result = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_newtype_variant(
                 a2,
                 a1[2],
                 a1[3]);
      break;
    case 9LL:
      result = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aNoCd,
                 5LL);
      break;
    case 10LL:
      result = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aNoExitMessage,
                 15LL);
      break;
    case 11LL:
      result = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aNoQuiet,
                 8LL);
      break;
    case 12LL:
      result = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aOpenbsd,
                 7LL);
      break;
    case 13LL:
      result = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aParallel,
                 8LL);
      break;
    case 14LL:
      result = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aPositionalArgu,
                 20LL);
      break;
    case 15LL:
      result = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aPrivate_0,
                 7LL);
      break;
    case 16LL:
      result = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_newtype_variant(a2, a1);
      break;
    case 17LL:
      result = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aUnix,
                 4LL);
      break;
    case 18LL:
      result = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_unit_variant(
                 a2,
                 aWindows,
                 7LL);
      break;
    case 19LL:
      result = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_newtype_variant(
                 a2,
                 aWorkingDirecto_0,
                 17LL,
                 a1[2],
                 a1[3]);
      break;
  }
  return result;
}