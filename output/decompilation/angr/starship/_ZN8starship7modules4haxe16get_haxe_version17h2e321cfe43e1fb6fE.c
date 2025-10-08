long long starship::modules::haxe::get_haxe_version(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x30]

    starship::modules::haxe::get_haxerc_version(&v0, a1);
    return a0.or_else(&v0, a1);
}
