long long starship::modules::cc::create_module(void* a0, unsigned long long a1, unsigned long long a2, uint128_t a3[6], struct_0 *a4)
{
    int v0;  // [bp-0x168]
    unsigned long long v1;  // [bp-0x158]
    unsigned long long v2;  // [bp-0x150]
    unsigned long long v3;  // [bp-0x148]
    char v4;  // [bp-0x140]
    int v5;  // [bp-0x138]
    unsigned long long v6;  // [bp-0x128]
    char *v7;  // [bp-0x120]
    unsigned long long v8;  // [bp-0x118]
    char *v9;  // [bp-0x110]
    unsigned long long v10;  // [bp-0x108]
    unsigned long long v11;  // [bp-0x100]
    unsigned long long v12;  // [bp-0xf8]
    unsigned long long v13;  // [bp-0xf0]
    unsigned long long v14;  // [bp-0xe8]
    unsigned long long v15;  // [bp-0xe0]
    char v16;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0xd0]
    char *v18;  // [bp-0xc8]
    unsigned long long v19;  // [bp-0xc0]
    void* v20;  // [bp-0xb8]
    unsigned long long v23;  // rax
    int v24;  // xmm0
    int v25;  // xmm1
    int v26;  // xmm2

    v2 = "cppcxxc++hpphhhxxh++tccg++clang++crshard.yml";
    v3 = 3;
    if (!a4->field_a0)
    {
        if ((char)starship::modules::cc::is_cc_project(a4, a1) == 2 || !((char)starship::modules::cc::is_cc_project(a4, a1) & 1))
            goto LABEL_b86c83;
        memcpy(&v16, a4, 168);
        starship::modules::cc::parse_module(&v4, a1, a3, &v16, a2);
        if (*((int *)&v4) != 1)
        {
            v23 = a3.set_segments(&(char)v5);
            *((uint128_t *)&a0[80]) = a3[5];
            *((uint128_t *)&a0[64]) = a3[4];
            v24 = a3[0];
            v25 = a3[1];
            v26 = a3[2];
            *((uint128_t *)&a0[48]) = a3[3];
            a0[32] = v26;
            a0[16] = v25;
            *(a0) = v24;
            return v23;
        }
        v1 = v6;
        v0 = v5;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
        {
            v7 = &v2;
            v8 = <&T as core::fmt::Display>::fmt;
            v9 = &v0;
            v10 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
            v16 = &g_11f3c88;
            v17 = 2;
            v20 = 0;
            v18 = &v7;
            v19 = 2;
            v11 = "starship::modules::ccFree Software Foundationvicmdvisualreplacereplace_oneError in module `character`:\nsrc/modules/character.rs";
            v12 = 21;
            v13 = "starship::modules::ccFree Software Foundationvicmdvisualreplacereplace_oneError in module `character`:\nsrc/modules/character.rs";
            v14 = 21;
            v15 = log::__private_api::loc(&g_11f3ca8);
            log::__private_api::log(&v16, 2, &v11);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v0);
    }
    else
    {
LABEL_b86c83:
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<starship::configs::terraform::TerraformConfig>(a4);
    }
    return (unsigned long long)core::ptr::drop_in_place<starship::module::Module>(a3);
}
