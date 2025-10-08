long long bat::assets::lazy_theme_set::_::<impl serde::ser::Serialize for bat::assets::lazy_theme_set::LazyTheme>::serialize(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    return a2.serialize_tuple().serialize_field(a0, a1);
}
