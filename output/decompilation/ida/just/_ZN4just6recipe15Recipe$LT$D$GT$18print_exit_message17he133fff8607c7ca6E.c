char __fastcall just::recipe::Recipe<D>::print_exit_message(__int64 a1, char a2)
{
  char v2; // cl
  char result; // al

  v2 = just::attribute_set::AttributeSet::contains((__int64 *)(a1 + 216), 3);
  result = 1;
  if ( !v2 )
  {
    if ( (a2 & 1) != 0 )
      return 0;
    else
      return just::attribute_set::AttributeSet::contains((__int64 *)(a1 + 216), 10) ^ 1;
  }
  return result;
}