
  fn check_docs::main::ha386782cabb158e1() -> *mut i128

{
    let mut var_1e8: *mut *mut [i8; 0x52];
    check_docs::search_for_pattern::hb802ea78856797e4(&var_1e8, 
        "ANCHOR.{{#include.md./docs/src/S…", 6, ".{{#include.md./docs/src/SUMMARY…");
    let r14: *mut *mut [i8; 0x52] = var_1e8;
    let var_1e0: *mut i128;
    
    if -(r14) == -0x8000000000000000
    {
        return var_1e0;
    }
    
    let mut var_1d8: i64;
    check_docs::extract_starts_and_ends::h30dde6298c2e4524(&var_1e8, var_1e0, var_1d8);
    let rax_2: *mut *mut [i8; 0x52] = var_1e8;
    let mut r15_1: *mut i128 = var_1e0;
    
    if rax_2 != -0x8000000000000000
    {
        let mut var_1d0: i128;
        let mut var_48: i128 = var_1d0;
        let var_1c0: i64;
        let var_38_1: i64 = var_1c0;
        let mut var_80: *mut *mut [i8; 0x52] = rax_2;
        let var_78_1: *mut i128 = r15_1;
        let var_70_1: i64 = var_1d8;
        check_docs::filter_valid_anchors::h39bbb345caf4f14f(&var_1e8, &var_80, &var_48);
        let mut var_138: i128 = var_1e8;
        let mut var_1b8: i128 = var_1d0;
        let mut rbp: i64;
        rbp = 1;
        check_docs::search_for_pattern::hb802ea78856797e4(&var_1e8, 
            "{{#include.md./docs/src/SUMMARY.…", 0xa, ".{{#include.md./docs/src/SUMMARY…");
        let rax_5: *mut *mut [i8; 0x52] = var_1e8;
        r15_1 = var_1e0;
        rbp = 1;
        
        if rax_5 != -0x8000000000000000
        {
            let mut var_c8: *mut *mut [i8; 0x52] = rax_5;
            let var_c0_1: *mut i128 = r15_1;
            let var_b8_1: i64 = var_1d8;
            rbp = 1;
            check_docs::parse_includes::h98cae0f800d53a09(&var_1e8, &var_c8);
            let var_58_1: i64 = var_1d8;
            let mut var_68: i128 = var_1e8;
            let mut var_198: i128 = var_1d0;
            let mut var_f8: i128 = var_138;
            check_docs::validate_includes::h41bae39804dee97e(&var_1e8, &var_68, &var_f8);
            let var_168_1: i64 = var_1d8;
            let mut var_178: i128 = var_1e8;
            let mut var_158: i128 = var_1d0;
            check_docs::search_for_pattern::hb802ea78856797e4(&var_1e8, 
                ".md./docs/src/SUMMARY.md./docs/s…", 3, "./docs/src/SUMMARY.md./docs/src/…");
            let rax_11: *mut *mut [i8; 0x52] = var_1e8;
            r15_1 = var_1e0;
            
            if rax_11 != -0x8000000000000000
            {
                let mut var_b0: *mut *mut [i8; 0x52] = rax_11;
                let var_a8_1: *mut i128 = r15_1;
                let var_a0_1: i64 = var_1d8;
                check_docs::parse_md_files::hf10b783de1f7744b(&var_f8, &var_b0, 
                    "./docs/src/utf8info\");
                let var_1f8_1: i64 = 0xa;
                check_docs::find_files::h9e4b901753d7660d(&var_1e8, "*.mdnam", 4, 
                    "./docs/src/utf8info\", 0xb);
                let rax_12: *mut *mut [i8; 0x52] = var_1e8;
                r15_1 = var_1e0;
                
                if rax_12 != -0x8000000000000000
                {
                    let mut var_98: *mut *mut [i8; 0x52] = rax_12;
                    let var_90_1: *mut i128 = r15_1;
                    let var_88_1: i64 = var_1d8;
                    let var_d8: i128;
                    var_1d0 = var_d8;
                    var_1d8 = var_1d8;
                    var_1e8 = var_f8;
                    let mut var_110: ();
                    check_docs::validate_md_files::ha2d5d22a4b1fbbc4(&var_110, &var_1e8, &var_98);
                    check_docs::report_errors::h75874821b4daa881("warninginclude pathsanchors", 7, 
                        *var_158[8], var_1c0);
                    check_docs::report_errors::h75874821b4daa881("include pathsanchors", 0xd, 
                        *var_198[8], var_1c0);
                    check_docs::report_errors::h75874821b4daa881("anchors", 7, *var_1b8[8], 
                        var_1c0);
                    check_docs::report_errors::h75874821b4daa881("include", 8, *var_178[8], 
                        var_168_1);
                    let var_108: i64;
                    let var_100: i64;
                    check_docs::report_errors::h75874821b4daa881("md filesStandar", 8, var_108, 
                        var_100);
                    
                    if var_1c0 == 0 && var_168_1 == 0 && var_1c0 == 0 && var_1c0 == 0
                        && var_100 == 0
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
                    let var_1e0_1: i64 = 1;
                    let var_1d8_1: i64 = 8;
                    let var_1d0_1: i128 = {0};
                    r15_1 = anyhow::__private::format_err::hd87f3faee3401bd9(&var_1e8);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$anyhow..Error$GT$$GT$::hfe5e2e719a94780f(&var_110);
                }
                else
                {
                    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h1ec950fce63b4fbb(&var_f8);
                }
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
        
        if rbp != 0
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$check_docs..Anchor$GT$$GT$::hc9e5607e38ec4097(&var_138);
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h410bbc7067db87e9(r14, var_1e0);
    r15_1
}
