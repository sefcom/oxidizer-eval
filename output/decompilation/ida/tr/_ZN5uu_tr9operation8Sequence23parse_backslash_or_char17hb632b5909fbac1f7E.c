// attributes: thunk
__int64 uu_tr::operation::Sequence::parse_backslash_or_char()
{
  return <nom::branch::Choice<(A,B,C)> as nom::internal::Parser<Input>>::process();
}