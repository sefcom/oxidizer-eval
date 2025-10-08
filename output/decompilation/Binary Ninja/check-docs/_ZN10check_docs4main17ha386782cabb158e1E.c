
  int128_t* check_docs::main::ha386782cabb158e1()

{
    char const (** const var_1e8)[0x52];
    check_docs::search_for_pattern::hb802ea78856797e4(&var_1e8, 
        "ANCHOR.{{#include.md./docs/src/S…", 6, ".{{#include.md./docs/src/SUMMARY…");
    char const (** const r14)[0x52] = var_1e8;
    int128_t* var_1e0;
    
    if (-(r14) == -0x8000000000000000)
        return var_1e0;
    
    int64_t var_1d8;
    check_docs::extract_starts_and_ends::h30dde6298c2e4524(&var_1e8, var_1e0, var_1d8);
    char const (** const rax_2)[0x52] = var_1e8;
    int128_t* r15_1 = var_1e0;
    
    if (rax_2 != -0x8000000000000000)
    {
        int128_t var_1d0;
        int128_t var_48 = var_1d0;
        int64_t var_1c0;
        int64_t var_38_1 = var_1c0;
        char const (** const var_80)[0x52] = rax_2;
        int128_t* var_78_1 = r15_1;
        int64_t var_70_1 = var_1d8;
        check_docs::filter_valid_anchors::h39bbb345caf4f14f(&var_1e8, &var_80, &var_48);
        int128_t var_138 = var_1e8;
        int128_t var_1b8 = var_1d0;
        int64_t rbp;
        rbp = 1;
        check_docs::search_for_pattern::hb802ea78856797e4(&var_1e8, 
            "{{#include.md./docs/src/SUMMARY.…", 0xa, ".{{#include.md./docs/src/SUMMARY…");
        char const (** const rax_5)[0x52] = var_1e8;
        r15_1 = var_1e0;
        rbp = 1;
        
        if (rax_5 != -0x8000000000000000)
        {
            char const (** const var_c8)[0x52] = rax_5;
            int128_t* var_c0_1 = r15_1;
            int64_t var_b8_1 = var_1d8;
            rbp = 1;
            check_docs::parse_includes::h98cae0f800d53a09(&var_1e8, &var_c8);
            int64_t var_58_1 = var_1d8;
            int128_t var_68 = var_1e8;
            int128_t var_198 = var_1d0;
            int128_t var_f8 = var_138;
            check_docs::validate_includes::h41bae39804dee97e(&var_1e8, &var_68, &var_f8);
            int64_t var_168_1 = var_1d8;
            int128_t var_178 = var_1e8;
            int128_t var_158 = var_1d0;
            check_docs::search_for_pattern::hb802ea78856797e4(&var_1e8, 
                ".md./docs/src/SUMMARY.md./docs/s…", 3, "./docs/src/SUMMARY.md./docs/src/…");
            char const (** const rax_11)[0x52] = var_1e8;
            r15_1 = var_1e0;
            
            if (rax_11 != -0x8000000000000000)
            {
                char const (** const var_b0)[0x52] = rax_11;
                int128_t* var_a8_1 = r15_1;
                int64_t var_a0_1 = var_1d8;
                check_docs::parse_md_files::hf10b783de1f7744b(&var_f8, &var_b0, 
                    "./docs/src/utf8info\");
                int64_t var_1f8_1 = 0xa;
                check_docs::find_files::h9e4b901753d7660d(&var_1e8, "*.mdnam", 4, 
                    "./docs/src/utf8info\", 0xb);
                char const (** const rax_12)[0x52] = var_1e8;
                r15_1 = var_1e0;
                
                if (rax_12 != -0x8000000000000000)
                {
                    char const (** const var_98)[0x52] = rax_12;
                    int128_t* var_90_1 = r15_1;
                    int64_t var_88_1 = var_1d8;
                    int128_t var_d8;
                    var_1d0 = var_d8;
                    var_1d8 = var_1d8;
                    var_1e8 = var_f8;
                    void var_110;
                    check_docs::validate_md_files::ha2d5d22a4b1fbbc4(&var_110, &var_1e8, &var_98);
                    check_docs::report_errors::h75874821b4daa881("warninginclude pathsanchors", 7, 
                        *var_158[8], var_1c0);
                    check_docs::report_errors::h75874821b4daa881("include pathsanchors", 0xd, 
                        *var_198[8], var_1c0);
                    check_docs::report_errors::h75874821b4daa881("anchors", 7, *var_1b8[8], 
                        var_1c0);
                    check_docs::report_errors::h75874821b4daa881("include", 8, *var_178[8], 
                        var_168_1);
                    int64_t var_108;
                    int64_t var_100;
                    check_docs::report_errors::h75874821b4daa881("md filesStandar", 8, var_108, 
                        var_100);
                    
                    if (!var_1c0 && !var_168_1 && !var_1c0 && !var_1c0 && !var_100)
                    {
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$anyhow..Error$GT$$GT$::hfe5e2e719a94780f(&var_110);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$anyhow..Error$GT$$GT$::hfe5e2e719a94780f(&var_158);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$anyhow..Error$GT$$GT$::hfe5e2e719a94780f(&var_178);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$anyhow..Error$GT$$GT$::hfe5e2e719a94780f(&var_198);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$anyhow..Error$GT$$GT$::hfe5e2e719a94780f(&var_1b8);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h410bbc7067db87e9(
                            r14, var_1e0);
                        return nullptr;
                    }
                    
                    var_1e8 = &data_5d28c8;
                    int64_t var_1e0_1 = 1;
                    int64_t var_1d8_1 = 8;
                    int128_t var_1d0_1 = {0};
                    r15_1 = anyhow::__private::format_err::hd87f3faee3401bd9(&var_1e8);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$anyhow..Error$GT$$GT$::hfe5e2e719a94780f(&var_110);
                }
                else
                    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h1ec950fce63b4fbb(&var_f8);
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$anyhow..Error$GT$$GT$::hfe5e2e719a94780f(
                &var_158);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$anyhow..Error$GT$$GT$::hfe5e2e719a94780f(
                &var_178);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$anyhow..Error$GT$$GT$::hfe5e2e719a94780f(
                &var_198);
            rbp = 0;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$anyhow..Error$GT$$GT$::hfe5e2e719a94780f(
            &var_1b8);
        
        if (rbp)
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$check_docs..Anchor$GT$$GT$::hc9e5607e38ec4097(&var_138);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h410bbc7067db87e9(r14, var_1e0);
    return r15_1;
}
