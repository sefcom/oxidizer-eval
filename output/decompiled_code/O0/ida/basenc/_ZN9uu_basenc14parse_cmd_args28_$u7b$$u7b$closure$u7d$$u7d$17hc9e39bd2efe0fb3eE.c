__int64 __fastcall uu_basenc::parse_cmd_args::{{closure}}(_QWORD *a1, _QWORD **a2)
{
  return clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(*a1, **a2, (*a2)[1], &off_12D558) & 1;
}
