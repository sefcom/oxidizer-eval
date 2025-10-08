// attributes: thunk
__int64 just::attribute::Attribute::discriminant()
{
  return <just::attribute::AttributeDiscriminant as core::convert::From<&just::attribute::Attribute>>::from();
}