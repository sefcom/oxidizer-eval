char __fastcall just::recipe::Recipe<D>::enabled(__int64 a1)
{
  char v1; // bl
  char v2; // bp
  char v3; // r15
  char v4; // r12

  v1 = just::attribute_set::AttributeSet::contains((__int64 *)(a1 + 216), 6);
  v2 = just::attribute_set::AttributeSet::contains((__int64 *)(a1 + 216), 7);
  v3 = just::attribute_set::AttributeSet::contains((__int64 *)(a1 + 216), 12);
  v4 = just::attribute_set::AttributeSet::contains((__int64 *)(a1 + 216), 17);
  return v1 | v4 | (v2 | v3 | just::attribute_set::AttributeSet::contains((__int64 *)(a1 + 216), 18)) ^ 1;
}