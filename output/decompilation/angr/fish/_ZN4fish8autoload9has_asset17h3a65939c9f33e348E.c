long long fish::autoload::has_asset(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x68]

    v0.get(a0, a1);
    v0.drop_in_place<core::option::Option<rust_embed_utils::EmbeddedFile>>();
    return vvar_4{reg 56} & 0xffffff00 | *((int *)&v0) != 2;
}
