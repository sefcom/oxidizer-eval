fn flealib::browserhistory::get_browsing_history(a0: i64) -> long long {
    let v0: struct4;  // [bp-0x138]
    let v1: u64;  // [bp-0x130]
    let v2: u64;  // [bp-0x128]
    let v3: struct4;  // [bp-0x118]
    let v4: u64;  // [bp-0x108]
    let v5: void*;  // [bp-0xf8]
    let v6: struct4;  // [bp-0xf0]
    let v7: void*;  // [bp-0xe8]
    let v8: struct24;  // [bp-0xe0]
    let v9: u64;  // [bp-0xd8]
    let v10: u64;  // [bp-0xd0]
    let v11: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0xc8]
    let v12: Result<struct64, struct32>;  // [bp-0xc8], Other Possible Types: u768
    let v13: u64;  // [bp-0xc8]
    let v14: struct4;  // [bp-0xc0]
    let v15: u64;  // [bp-0xb0]
    let v16: u128;  // [bp-0xa8]
    let v18: u64;  // rcx

    v11 = std::env::var("HOME");
    v8 = core::result::Result<T,E>::unwrap(&v11, "flealib/src/browserhistory.rs");
    alloc::vec::Vec<T,A>::append_elements(&v8, "/.config/google-chrome/Default/History", v18);
    v5 = 0;
    v6 = 8;
    v7 = 0;
    v11 = std::fs::metadata(v9, v10);
    if v11 as i64 != 2 {
        v12 = flealib::browserhistory::get_history(v9, v10, "SELECT url, title, visit_count, last_visit_time FROM urls ORDER BY last_visit_time DESC");
        v3 = v14;
        v4 = v15;
        match v12 {
            Ok(_) => {
                return struct64 {
                    field_0: v13
                    field_8: v3
                    field_24: v4
                    field_32: v16
                    field_48: *((&v12 as &char + 48) as &i128)
                };
            },
            Err(_) => {
                v0 = v3;
                v2 = v4;
                alloc::vec::Vec<T,A>::append_elements(&v5, v1, v4, "flealib/src/browserhistory.rs");
            },
        }
    }
    v12 = flealib::browserhistory::get_firefox_history();
    v3 = v14;
    v4 = v15;
    match v12 {
        Ok(_) => {
            return struct64 {
                field_0: v13
                field_8: v3
                field_24: v4
                field_32: v16
                field_48: *((&v12 as &char + 48) as &i128)
            };
        },
        Err(_) => {
            v0 = v3;
            v2 = v4;
            alloc::vec::Vec<T,A>::append_elements(&v5, v1, v4, "flealib/src/browserhistory.rs");
            return struct32 {
                field_0: 9223372036854775826
                field_8: *(&v5 as &i128)
                field_24: 0
            };
        },
    }
}
