long long starship::configs::cpp::<impl core::default::Default for starship::configs::cc::CcConfig<starship::configs::cpp::CppConfigMarker>>::default(struct_8 *a0)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long long v3[18];  // rax
    unsigned long long v4[18];  // rbx
    struct_0 *v5;  // rax
    struct_0 *v6;  // r14
    unsigned long long v7[4];  // rax
    unsigned long long v8[4];  // rax
    unsigned long long v9[4];  // r13
    unsigned long long v10[4];  // rax

    v0 = v2;
    v3 = 8.alloc_impl(144, 0);
    if (!v3)
        alloc::alloc::handle_alloc_error(8, 144); /* do not return */
    v4 = v3;
    v4[0] = "cppcxxc++hpphhhxxh++tccg++clang++crshard.yml";
    v4[1] = 3;
    v4[2] = "ccgccclangvia [$symbol($version(-$name) )]($style)C ";
    v4[3] = 2;
    v4[4] = "cxxc++hpphhhxxh++tccg++clang++crshard.yml";
    v4[5] = 3;
    v4[6] = "c++hpphhhxxh++tccg++clang++crshard.yml";
    v4[7] = 3;
    v4[8] = "hpphhhxxh++tccg++clang++crshard.yml";
    v4[9] = 3;
    v4[10] = "hhhxxh++tccg++clang++crshard.yml";
    v4[11] = 2;
    v4[12] = "hxxh++tccg++clang++crshard.yml";
    v4[13] = 3;
    v4[14] = "h++tccg++clang++crshard.yml";
    v4[15] = 3;
    v4[16] = "tccg++clang++crshard.yml";
    v4[17] = 3;
    v5 = 8.alloc_impl(72, 0);
    if (!v5)
        alloc::alloc::handle_alloc_error(8, 72); /* do not return */
    v6 = v5;
    v7 = 8.alloc_impl(32, 0);
    if (!v7)
        alloc::alloc::handle_alloc_error(8, 32); /* do not return */
    v7[0] = "c++hpphhhxxh++tccg++clang++crshard.yml";
    v7[1] = 3;
    v7[2] = "--version(Get-Host | Select Version | Format-Table -HideTableHeaders | Out-String).trim()Failed to load config value: src/config.rs";
    v7[3] = 9;
    v8 = 8.alloc_impl(32, 0);
    if (!v8)
        alloc::alloc::handle_alloc_error(8, 32); /* do not return */
    v9 = v8;
    v9[0] = "g++clang++crshard.yml";
    v9[1] = 3;
    v9[2] = "--version(Get-Host | Select Version | Format-Table -HideTableHeaders | Out-String).trim()Failed to load config value: src/config.rs";
    v9[3] = 9;
    v10 = 8.alloc_impl(32, 0);
    if (!v10)
        alloc::alloc::handle_alloc_error(8, 32); /* do not return */
    v10[0] = "clang++crshard.yml";
    v10[1] = 7;
    v10[2] = "--version(Get-Host | Select Version | Format-Table -HideTableHeaders | Out-String).trim()Failed to load config value: src/config.rs";
    v10[3] = 9;
    v6->field_0 = 2;
    v6->field_8 = v7;
    v6->field_10 = 2;
    v6->field_18 = 2;
    v6->field_20 = v9;
    v6->field_28 = 2;
    v6->field_30 = 2;
    v6->field_38 = v10;
    v6->field_40 = 2;
    a0->field_58 = "via [$symbol($version(-$name) )]($style)C ";
    a0->field_60 = 40;
    a0->field_68 = "v${raw}";
    a0->field_70 = 7;
    a0->field_78 = "149 bold147 boldidentifymetadataSOFTWAREBorrowedENOTUNIQELIBEXECAbsoluteno_proxyx-cp1256FilePathCherokeecherokeegeorgiantifinaghhostname.haxelibClient: a structENOTSOCKpathspeciso88598upstreamGurmukhiTai_Thamlocation.xonshrcbuf.yamlOS_CLOUDWorktreesafecrlf";
    a0->field_80 = 8;
    a0->field_88 = "C++ trueTERM";
    a0->field_90 = 4;
    *((char *)&a0->field_98) = 1;
    a0->field_0 = 9;
    a0->field_8 = v4;
    a0->field_10 = 9;
    a0->field_18 = 0;
    a0->field_20 = 8;
    *((uint128_t *)&(&a0->field_20)[1]) = 0;
    *((unsigned long long *)((char *)&a0->field_28 + 8)) = 8;
    a0->field_38 = 0;
    a0->field_40 = 3;
    a0->field_48 = v6;
    a0->field_50 = 3;
    return a0;
}
