long long starship::modules::helm::parse_helm_version(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x58], Other Possible Types: char
    unsigned long v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax

    core::str::<impl str>::split_once(&v2, a1, a2, 43);
    v4 = v2.map_or(a1);
    v6 = core::str::<impl str>::trim_matches(core::str::<impl str>::trim_start_matches(core::str::<impl str>::trim_start_matches(v4, v5, "Client: a structENOTSOCKpathspeciso88598upstreamGurmukhiTai_Thamlocation.xonshrcbuf.yamlOS_CLOUDWorktreesafecrlfiso88596", 8), v5), v5);
    v0.to_vec(v6, a2);
    a0->field_10 = v1;
    *((void*)&a0->field_0) = v0;
    return v1;
}
