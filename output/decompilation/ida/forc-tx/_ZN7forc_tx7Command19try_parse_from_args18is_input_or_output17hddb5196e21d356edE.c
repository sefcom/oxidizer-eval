char __fastcall forc_tx::Command::try_parse_from_args::is_input_or_output(__int64 a1, __int64 a2)
{
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aInput_0, 5LL) )
    return 1;
  else
    return <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aOutput, 6LL);
}