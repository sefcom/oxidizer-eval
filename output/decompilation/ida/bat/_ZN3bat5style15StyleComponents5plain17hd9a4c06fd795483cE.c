__int64 __fastcall bat::style::StyleComponents::plain(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int8 v6; // al
  _BYTE v8[48]; // [rsp+8h] [rbp-30h] BYREF

  hashbrown::map::HashMap<K,V,S,A>::iter(v8, a1, a3, a4, a5, a6);
  v6 = core::iter::traits::iterator::Iterator::try_fold(v8);
  return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v6, 0LL);
}