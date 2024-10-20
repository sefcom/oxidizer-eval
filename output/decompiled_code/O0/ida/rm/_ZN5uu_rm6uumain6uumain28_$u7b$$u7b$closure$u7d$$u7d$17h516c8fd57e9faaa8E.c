_BOOL8 __fastcall uu_rm::uumain::uumain::{{closure}}(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  char v6; // [rsp+17h] [rbp-1h] BYREF

  v6 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(*a1, *a2, a2[1], &off_114168);
  if ( (<core::option::Option<T> as core::cmp::PartialEq>::eq(&v6, &unk_1795F) & 1) != 0 )
  {
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(*a1, *a2, a2[1], &off_114180);
    return (unsigned __int64)core::option::Option<T>::unwrap_or(v2, v3, 0LL) > *(_QWORD *)a1[1];
  }
  else
  {
    return 0;
  }
}
