__int64 __fastcall bat::app::App::forced_style_components(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  _BYTE v4[72]; // [rsp+0h] [rbp-48h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v4, a2, aDecorations, 11LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(aDecorations, 11LL, v4);
  if ( v2
    && (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                          *(_QWORD *)(v2 + 8),
                          *(_QWORD *)(v2 + 16),
                          aNever,
                          5LL) )
  {
    return <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(a1);
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNumber_0, 6LL) )
    return <std::collections::hash::set::HashSet<T,S> as core::iter::traits::collect::FromIterator<T>>::from_iter(
             a1,
             7LL);
  result = clap_builder::parser::matches::arg_matches::ArgMatches::get_count(a2, aPlain, 5LL);
  if ( (_BYTE)result )
    return <std::collections::hash::set::HashSet<T,S> as core::iter::traits::collect::FromIterator<T>>::from_iter(
             a1,
             11LL);
  *a1 = 0LL;
  return result;
}