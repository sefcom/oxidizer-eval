fn uu_join::Repr<Sep>::print_fields(a0: u64, a1: u64, a2: u64, a3: i64, a4: u64) -> long long {
    let v0: u64;  // [bp-0x38]
    let v2: u64;  // rax
    let v3: void*;  // rbx
    let v4: core::result::Result<(), std::io::error::Error>;  // rax
    let v5: u64;  // rax
    let v6: core::result::Result<(), std::io::error::Error>;  // rax
    let v7: &std::ffi::os_str::OsStr;  // rax:rdx

    v0 = v2;
    v0 = a1;
    if *((a3 + 16) as &i64) {
        do {
            if a4 != v3 {
                v7 = std::ffi::os_str::<impl core::convert::AsRef<std::ffi::os_str::OsStr> for alloc::string::String>::as_ref(a0);
                v4 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v7.data_ptr, a2);
                match v4 {
                    Err(_) => {
                        return v4;
                    },
                    Ok(_) => {
                        v5 = uu_join::Line::get_field(a3, v3);
                        core::option::unwrap(v5);
                        v6 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v5, a2);
                        if let Err(_) = v6 {
                            return v6;
                        }
                    },
                }
            }
            v3 += 1;
        } while (*((a3 + 16) as &i64) != v3);
    }
    return 0;
}
