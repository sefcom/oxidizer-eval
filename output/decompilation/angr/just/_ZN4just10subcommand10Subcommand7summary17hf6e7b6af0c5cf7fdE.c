long long just::subcommand::Subcommand::summary(unsigned long long a0, char a1, unsigned long long a2)
{
    void* v0;  // [bp-0x40]
    void* v1;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x30]
    void* v3;  // [bp-0x28], Other Possible Types: unsigned long long
    uint128_t v4;  // [bp-0x20]
    void* v6;  // 4098
    unsigned long long v7;  // rax

    v0 = 0;
    v1 = 0;
    v2 = 8;
    v3 = 0;
    a0.summary_recursive(&v1, &v0, a2);
    core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(v1, 8);
    v1 = &g_82dbf8;
    v2 = 1;
    v3 = 8;
    v4 = 0;
    v6 = v0;
    v7 = std::io::stdio::_print(&v1) & 0xffffffffffffff00 | v6;
    if (!a1 || v6)
        return v7;
    v1 = &g_831490;
    v2 = 1;
    v3 = 8;
    v4 = 0;
    return std::io::stdio::_eprint(&v1);
}
