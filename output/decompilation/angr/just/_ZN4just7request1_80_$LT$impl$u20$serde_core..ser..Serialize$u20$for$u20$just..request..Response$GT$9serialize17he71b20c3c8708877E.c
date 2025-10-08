long long just::request::_::<impl serde_core::ser::Serialize for just::request::Response>::serialize(struct_0 *a0, unsigned long long a1)
{
    if (a0->field_0 != 1)
        return a1.serialize_newtype_variant(&a0->padding_4[4]);
    return a1.serialize_newtype_variant(a0->field_10, a0->field_18);
}
