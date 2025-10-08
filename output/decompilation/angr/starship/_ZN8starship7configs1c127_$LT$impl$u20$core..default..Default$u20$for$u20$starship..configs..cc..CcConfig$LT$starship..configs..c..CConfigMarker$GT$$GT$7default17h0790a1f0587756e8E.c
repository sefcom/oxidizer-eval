long long starship::configs::c::<impl core::default::Default for starship::configs::cc::CcConfig<starship::configs::c::CConfigMarker>>::default(struct_8 *a0)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long long v3[4];  // rax
    unsigned long long v4[4];  // rbx
    struct_0 *v5;  // rax
    struct_0 *v6;  // r14
    unsigned long long v7[4];  // rax
    unsigned long long v8[4];  // r12
    unsigned long long v9[4];  // rax
    unsigned long long v10[4];  // r13
    unsigned long long v11[4];  // rax

    v0 = v2;
    v3 = 8.alloc_impl(32, 0);
    if (!v3)
        alloc::alloc::handle_alloc_error(8, 32); /* do not return */
    v4 = v3;
    v4[0] = "chccgccclangvia [$symbol($version(-$name) )]($style)C ";
    v4[1] = 1;
    v4[2] = "hccgccclangvia [$symbol($version(-$name) )]($style)C ";
    v4[3] = 1;
    v5 = 8.alloc_impl(72, 0);
    if (!v5)
        alloc::alloc::handle_alloc_error(8, 72); /* do not return */
    v6 = v5;
    v7 = 8.alloc_impl(32, 0);
    if (!v7)
        alloc::alloc::handle_alloc_error(8, 32); /* do not return */
    v8 = v7;
    v8[0] = "ccgccclangvia [$symbol($version(-$name) )]($style)C ";
    v8[1] = 2;
    v8[2] = "--version(Get-Host | Select Version | Format-Table -HideTableHeaders | Out-String).trim()Failed to load config value: src/config.rs";
    v8[3] = 9;
    v9 = 8.alloc_impl(32, 0);
    if (!v9)
        alloc::alloc::handle_alloc_error(8, 32); /* do not return */
    v10 = v9;
    v10[0] = "gccclangvia [$symbol($version(-$name) )]($style)C ";
    v10[1] = 3;
    v10[2] = "--version(Get-Host | Select Version | Format-Table -HideTableHeaders | Out-String).trim()Failed to load config value: src/config.rs";
    v10[3] = 9;
    v11 = 8.alloc_impl(32, 0);
    if (!v11)
        alloc::alloc::handle_alloc_error(8, 32); /* do not return */
    v11[0] = "clangvia [$symbol($version(-$name) )]($style)C ";
    v11[1] = 5;
    v11[2] = "--version(Get-Host | Select Version | Format-Table -HideTableHeaders | Out-String).trim()Failed to load config value: src/config.rs";
    v11[3] = 9;
    v6->field_0 = 2;
    v6->field_8 = v8;
    v6->field_10 = 2;
    v6->field_18 = 2;
    v6->field_20 = v10;
    v6->field_28 = 2;
    v6->field_30 = 2;
    v6->field_38 = v11;
    v6->field_40 = 2;
    a0->field_58 = "via [$symbol($version(-$name) )]($style)C ";
    a0->field_60 = 40;
    a0->field_68 = "v${raw}";
    a0->field_70 = 7;
    a0->field_78 = "149 bold147 boldidentifymetadataSOFTWAREBorrowedENOTUNIQELIBEXECAbsoluteno_proxyx-cp1256FilePathCherokeecherokeegeorgiantifinaghhostname.haxelibClient: a structENOTSOCKpathspeciso88598upstreamGurmukhiTai_Thamlocation.xonshrcbuf.yamlOS_CLOUDWorktreesafecrlf";
    a0->field_80 = 8;
    a0->field_88 = "C ";
    a0->field_90 = 2;
    *((char *)&a0->field_98) = 0;
    a0->field_0 = 2;
    a0->field_8 = v4;
    a0->field_10 = 2;
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
