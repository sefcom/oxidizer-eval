__int64 __fastcall uu_cat::uumain::uumain::{{closure}}(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v5; // [rsp+10h] [rbp-8h]

  v5 = *a1;
  v2 = <alloc::string::String as core::ops::deref::Deref>::deref(a2);
  return clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v5, v2, v3, &off_1060B8) & 1;
}
