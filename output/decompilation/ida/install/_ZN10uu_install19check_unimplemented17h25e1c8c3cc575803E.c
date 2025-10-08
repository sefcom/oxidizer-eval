__int64 __fastcall uu_install::check_unimplemented(__int64 a1)
{
  const char *v1; // rsi
  __int64 v2; // rdx
  __int64 v4; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v5[64]; // [rsp+8h] [rbp-40h] BYREF

  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aPreserveContex, 16LL) )
  {
    v1 = aPreserveContex_0;
    v2 = 22LL;
LABEL_5:
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v5, v1, v2);
    v4 = 0LL;
    return alloc::boxed::Box<T>::new(&v4);
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aContext, 7LL) )
  {
    v1 = aContextZ;
    v2 = 13LL;
    goto LABEL_5;
  }
  return 0LL;
}