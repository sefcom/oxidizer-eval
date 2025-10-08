__int64 __fastcall just::line::_::<impl serde_core::ser::Serialize for just::line::Line>::serialize(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return serde_core::ser::Serializer::collect_seq(a3, a1, a2);
}