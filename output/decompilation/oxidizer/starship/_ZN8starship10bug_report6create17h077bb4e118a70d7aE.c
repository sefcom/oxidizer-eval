fn starship::bug_report::create() -> void {
    let v0: alloc::string::String;  // [bp-0x270], Other Possible Types: u64
    let v1: struct72;  // [bp-0x270]
    let v2: &str;  // [bp-0x268], Other Possible Types: u64
    let v3: u64;  // [bp-0x258]
    let v5: iNone;  // [bp-0x250], Other Possible Types: u128
    let v6: u8;  // [bp-0x240]
    let v7: void*;  // [bp-0x23f]
    let v8: u64;  // [bp-0x237]
    let v9: u64;  // [bp-0x230]
    let v10: struct24;  // [bp-0x228], Other Possible Types: u8
    let v11: i8;  // [bp-0x218]
    let v12: u64;  // [bp-0x1f8]
    let v13: std::io::stdio::Stdin;  // [bp-0x1f0], Other Possible Types: struct24, struct48, u64
    let v14: &str;  // [bp-0x1e8]
    let v15: u64;  // [bp-0x1d8]
    let v16: iNone;  // [bp-0x1d0], Other Possible Types: u128
    let v17: u8;  // [bp-0x1c0]
    let v18: void*;  // [bp-0x1bf]
    let v19: u64;  // [bp-0x1b7]
    let v20: struct24;  // [bp-0x1a8]
    let v21: u64;  // [bp-0x198]
    let v22: u64;  // [bp-0x188]
    let v23: u8;  // [bp-0x180]
    let v24: u64;  // [bp-0x178]
    let v25: u64;  // [bp-0x170]
    let v26: iNone;  // [bp-0x168]
    let v27: struct177;  // [bp-0x158]
    let v28: u64;  // [bp-0x98]
    let v29: u8;  // [bp-0x37]
    let v31: u64;  // rdx
    let v32: iNone;  // xmm1
    let v35: &str;  // rax:rdx
    let v36: &str;  // rax:rdx

    v36 = core::str::<impl str>::trim_matches("\npkg_version:1.23.0\nbranch:\ncommit_hash:f7d58382\nbuild_time:2025-10-02 04:15:51 +00:00\nbuild_env:rustc 1.89.0-nightly (bf64d66bd 2025-05-21),nightly-2025-05-22-x86_64-unknown-linux-gnu", v31);
    v28 = v36.length;
    println!("{}\n", &vvar_37{reg 16});
    os_info::get(&v36.data_ptr);
    <os_info::version::Version as core::clone::Clone>::clone(&v10, &v36.data_ptr);
    v1 = starship::bug_report::get_shell_info();
    v13 = starship::bug_report::get_terminal_info();
    v20 = starship::bug_report::get_starship_config();
    v32 = *(&v11 as &i128);
    v27 = struct177 {
        field_0: *(&v10 as &i128)
        field_16: v32
        field_32: v1.field_0
        field_48: *(&v1.field_16 as &i128)
        field_64: v5
        field_80: v1.field_48
        field_96: v9
        field_104: v13.field_0
        field_120: *(&v13.field_16 as &i128)
        field_136: v16
        field_152: *(&v20.field_0 as &i128)
        field_168: v21
        field_176: v29
    };
    starship::bug_report::get_github_issue_body(&v23, &v27);
    v6 = 1;
    v7 = 0;
    v8 = 90194313237;
    v0 = 0x8000000000000000;
    v2 = "Generated bug report:";
    v3 = 9223372036854775810;
    println!("{}\n{}\n\n", &v0, &v23);
    println!("Forward the pre-filled report above to GitHub in your browser?");
    v6 = 1;
    v7 = 0;
    v8 = 90194313237;
    v0 = 0x8000000000000000;
    v2 = "Warning:";
    v3 = 9223372036854775810;
    println!("{} To avoid any sensitive data from being exposed, please review the included information before proceeding. Data forwarded to GitHub is subject to GitHub's privacy policy.", &v0);
    v17 = 1;
    v18 = 0;
    v19 = 90194313237;
    v13 = 0x8000000000000000;
    v14 = "y";
    v15 = 9223372036854775810;
    v16 = v26;
    v6 = 1;
    v7 = 0;
    v8 = 90194313237;
    v0 = 0x8000000000000000;
    v2 = "Enter key";
    v3 = 9223372036854775810;
    v5 = v26;
    println!("Enter `{}` to accept, or anything else to decline, and `{}` to confirm your choice:\n", &v13, &v0);
    v10 = struct24 {
        field_0: 0
        field_8: ""
    };
    v13 = std::io::stdio::stdin();
    v0 = std::io::stdio::Stdin::read_line(&v13, &v10);
    v2 = v31;
    v35 = core::str::<impl str>::trim_matches(1, None, v31);
    v0 = alloc::str::<impl str>::to_lowercase(v35.data_ptr, v31);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, 9, "y") {
        v13 = starship::bug_report::make_github_issue_link(v24, v25);
        v22 = open::that(&v13);
        if v22 {
            v12 = v22;
            println!("Failed to open issue report in your browser: {}", &v12);
            println!("Please copy the above report and open an issue manually, or try opening the following link:\n{}", &v13);
        }
    } else {
        println!("Will not open an issue in your browser! Please copy the above report and open an issue manually.");
    }
    println!("Thanks for using the Starship bug report tool!");
    return;
}
