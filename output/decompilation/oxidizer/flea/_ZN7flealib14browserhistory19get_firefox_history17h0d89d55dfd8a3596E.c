fn flealib::browserhistory::get_firefox_history() -> Result<struct64, struct32> {
    let a0: i64;  // rdi
    let v0: alloc::string::String;  // [bp-0x208], Other Possible Types: struct24, u128
    let v1: u64;  // [bp-0x200]
    let v2: u64;  // [bp-0x1f8]
    let v3: alloc::string::String;  // [bp-0x1f0]
    let v4: struct24;  // [bp-0x1f0]
    let v5: struct24;  // [bp-0x1d8]
    let v6: u64;  // [bp-0x1c8]
    let v7: alloc::string::String;  // [bp-0x1c0]
    let v8: struct24;  // [bp-0x1b0]
    let v9: struct176;  // [bp-0x1a8], Other Possible Types: core::result::Result<alloc::string::String, std::env::VarError>
    let v10: u128;  // [bp-0x1a8]
    let v11: u128;  // [bp-0x1a8]
    let v12: Result<struct64, struct32>;  // [bp-0x1a8]
    let v13: struct24;  // [bp-0x198], Other Possible Types: u64
    let v14: u64;  // [bp-0x190]
    let v15: u128;  // [bp-0x188]
    let v16: u128;  // [bp-0xf8]
    let v17: u64;  // [bp-0xe8]
    let v18: struct176;  // [bp-0xd8], Other Possible Types: struct24
    let v20: u64;  // rcx
    let v21: u64;  // rax
    let v22: u64;  // rax
    let v23: u64;  // rdx
    let v26: core::result::Result<std::fs::File, std::io::error::Error>;  // rax

    v9 = std::env::var("HOME");
    v0 = core::result::Result<T,E>::unwrap(&v9, "flealib/src/browserhistory.rs");
    v7 = <alloc::string::String as core::clone::Clone>::clone(&v0);
    alloc::vec::Vec<T,A>::append_elements(&v0, "/.mozilla/firefox/", v20);
    v9 = std::fs::metadata(v1, v2);
    if v9 as i64 == 2 {
        alloc::vec::Vec<T,A>::append_elements(&v7, "/snap/firefox/common/.mozilla/firefox/", v20);
        v13 = v8;
        v10 = *(&v7.vec.buf.inner.cap as &i128);
    } else {
        v13 = v2;
        v10 = v0.field_0;
    }
    vvar_368{stack -520} = alloc::string::String OrderedDict([(0, alloc::vec::Vec<u8, alloc::alloc::Global> OrderedDict([(0, alloc::raw_vec::RawVec<u8, alloc::alloc::Global> OrderedDict([(0, alloc::raw_vec::RawVecInner<alloc::alloc::Global> OrderedDict([(0, alloc::raw_vec::Cap OrderedDict([(0, Load(addr=(Reference vvar_357{stack -424}), size=8, endness=Iend_LE))])), (8, core::ptr::unique::Unique<u8> OrderedDict([(0, core::ptr::non_null::NonNull<u8> OrderedDict([(0, 𝜙@64b [((7973294, None), vvar_305{stack -512}), ((7973298, None), vvar_305{stack -512})])])), (8, core::marker::PhantomData<u8> OrderedDict())])), (16, alloc::alloc::Global OrderedDict())])), (16, core::marker::PhantomData<u8> OrderedDict())])), (16, vvar_295{stack -408})]))])
    v3 = <alloc::string::String as core::clone::Clone>::clone(&v0);
    alloc::vec::Vec<T,A>::append_elements(&v3, "profiles.ini", v20);
    v9 = std::fs::metadata(v3);
    if v9 as i64 == 2 {
        return struct32 {
            field_0: 9223372036854775826
            field_8: 0
            field_16: 8
            field_24: 0
        };
    }
    v18 = v4;
    v9 = ini::Ini::load_from_file_opt(&v18);
    v18 = core::result::Result<T,E>::unwrap(&v9);
    v21 = ini::Ini::section(&v18);
    if v21 {
        v22 = ini::Properties::get(v21);
        if v22 {
            alloc::vec::Vec<T,A>::append_elements(&v0, v22, v23, v20);
            alloc::vec::Vec<T,A>::append_elements(&v0, "/places.sqlite", v20);
            v9 = std::env::var("HOME");
            v5 = core::result::Result<T,E>::unwrap(&v9, "flealib/src/browserhistory.rs");
            alloc::vec::Vec<T,A>::append_elements(&v5, "/flea-tmp/", v20);
            core::result::Result<T,E>::unwrap(std::fs::create_dir_all(&v5));
            alloc::vec::Vec<T,A>::append_elements(&v5, "firefox_history", v20);
            core::result::Result<T,E>::unwrap(std::fs::copy(&v0, &v5), v23);
            v13 = v6;
            v11 = v5.field_0;
            v2 = v13;
            v0 = v11;
            v12 = flealib::browserhistory::get_history(v1, v13, "SELECT url, IFNULL(title, ''), visit_count, IFNULL(last_visit_date, 0) FROM moz_places ORDER BY last_visit_date DESC");
            v26 = v12 as i64;
            v16 = *((&v12 as &char + 8) as &i128);
            v17 = v14;
            return Ok(struct64 {
                field_0: v26
                field_8: v16
                field_24: v17
                field_32: v15
                field_48: *((&v12 as &char + 48) as &i128)
            });
        }
    }
    core::option::unwrap_failed(); /* do not return */
}
