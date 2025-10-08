long long just::parameter_kind::_::<impl serde_core::ser::Serialize for just::parameter_kind::ParameterKind>::serialize(char a0, unsigned long long a1)
{
    if (!a0)
    {
        return a1.serialize_unit_variant("plusUtf8", 4);
    }
    else if (a0 == 1)
    {
        return a1.serialize_unit_variant(&g_4698b8, 8);
    }
    else
    {
        return a1.serialize_unit_variant("staro", 4);
    }
}
