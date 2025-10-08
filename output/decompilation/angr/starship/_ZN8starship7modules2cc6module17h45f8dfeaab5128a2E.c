long long starship::modules::cc::module(void* a0, unsigned long a1, unsigned int a2)
{
    int v0;  // [bp-0x2a8], Other Possible Types: char
    int v1;  // [bp-0x298]
    int v2;  // [bp-0x288]
    char v3;  // [bp-0x278]
    int v4;  // [bp-0x268]
    char v5;  // [bp-0x258]
    unsigned long long v6;  // [bp-0x250]
    int v7[2][6];  // [bp-0x248]
    int v8;  // [bp-0x238]
    int v9;  // [bp-0x228]
    char v10;  // [bp-0x218]
    int v11;  // [bp-0x208]
    char v12;  // [bp-0x1f8]
    unsigned long long v13;  // [bp-0x1e8]
    unsigned long long v14;  // [bp-0x1e0]
    unsigned long long v15;  // [bp-0x1d8]
    unsigned long long v16;  // [bp-0x1d0]
    unsigned long long v17;  // [bp-0x1c8]
    unsigned long long v18;  // [bp-0x1c0]
    unsigned long long v19;  // [bp-0x1b8]
    unsigned long long v20;  // [bp-0x1b0]
    unsigned long long v21;  // [bp-0x1a8]
    unsigned long long v22;  // [bp-0x1a0]
    unsigned long long v23;  // [bp-0x198]
    unsigned long long v24;  // [bp-0x190]
    unsigned long long v25;  // [bp-0x188]
    unsigned long long v26;  // [bp-0x180]
    unsigned long long v27;  // [bp-0x178]
    unsigned long long v28;  // [bp-0x170]
    char v29;  // [bp-0x168]
    char v30;  // [bp-0xc0]

    if (!a2)
    {
        v13 = "clangvia [$symbol($version(-$name) )]($style)C ";
        v14 = 5;
        v15 = "clangvia [$symbol($version(-$name) )]($style)C ";
        v16 = 5;
        v17 = "gccclangvia [$symbol($version(-$name) )]($style)C ";
        v18 = 3;
        v19 = "Free Software Foundationvicmdvisualreplacereplace_oneError in module `character`:\nsrc/modules/character.rs";
        v20 = 24;
        v0.new_module(a1, "chccgccclangvia [$symbol($version(-$name) )]($style)C ", 1);
        v29.try_load(v6);
        memcpy(&v12, &v5, 16);
        v11 = v4;
        memcpy(&v10, &v3, 16);
        v9 = v2;
        v8 = v1;
        v7[0] = v0;
        return starship::modules::cc::create_module(a0, a1, &v13, &v7, &v29);
    }
    v21 = "clang++crshard.yml";
    v22 = 7;
    v23 = "clangvia [$symbol($version(-$name) )]($style)C ";
    v24 = 5;
    v25 = "g++clang++crshard.yml";
    v26 = 3;
    v27 = "Free Software Foundationvicmdvisualreplacereplace_oneError in module `character`:\nsrc/modules/character.rs";
    v28 = 24;
    v0.new_module(a1, "cppcxxc++hpphhhxxh++tccg++clang++crshard.yml", 3);
    v30.try_load(v6);
    memcpy(&v12, &v5, 16);
    v11 = v4;
    memcpy(&v10, &v3, 16);
    v9 = v2;
    v8 = v1;
    v7[0] = v0;
    return starship::modules::cc::create_module(a0, a1, &v21, &v7, &v30);
}
