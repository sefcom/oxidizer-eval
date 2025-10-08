fn just::subcommand::Subcommand::summary_recursive(a0: i32, a1: &struct24, a2: i64, a3: i64) {
    let v0: u32;  // [bp-0xec]
    let v1: struct24;  // [bp-0xe8]
    let v2: struct24;  // [bp-0xe0]
    let v3: struct72;  // [bp-0xd8], Other Possible Types: u64
    let v4: struct24;  // [bp-0xc0]
    let v5: u64;  // [bp-0xc0], Other Possible Types: unsigned long
    let v6: u64;  // [bp-0x88]
    let v7: u64;  // [bp-0x80]
    let v8: struct24;  // [bp-0x68]
    let v9: u64;  // [bp-0x58]
    let v10: struct32;  // [bp-0x50]
    let v12: struct832;  // rax
    let v13: struct20;  // r15
    let v14: core::fmt::rt::Argument;  // r12
    let v15: struct81;  // r15
    let v16: i64;  // rdx
    let v17: core::option::Option<u32>;  // rax
    let v18: core::option::Option<u32>;  // rax
    let v20: struct32;  // ebp
    let v21: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // rax

    v8 = alloc::str::join_generic_copy(*((a1 + 8) as &i64), *((a1 + 16) as &i64), "::");
    v0 = a0;
    just::justfile::Justfile::public_recipes(&v3, a3, a0);
    v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v3);
    v12 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v10);
    if v12 {
        v13 = v12;
        v14 = *(a2 as &i64) + 1;
        do {
            if v14 != 1 {
                print!(" ");
            }
            v15 = v13 + 144;
            if v9 {
                v1 = just::token::Token::lexeme(v15);
                v2 = v16;
                print!("{}::{}", &v8, &v1);
                v4 = v5;
            } else {
                v6 = just::token::Token::lexeme(v15);
                v7 = v16;
                print!("{}", &v6);
                v4 = v5;
            }
            *(a2 as &core::fmt::rt::Argument) = v14;
            v13 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v10);
            v14 += 1;
        } while (v13);
    }
    v17 = *((a3 + 672) as &i64);
    v18 = v17;
    if let Some(_) = v18 {
        v18 = *((a3 + 688) as &i64);
    }
    v3 = struct72 {
        field_0: (v17) as u8 as u64
        field_8: 0
        field_16: v17
        field_24: *((a3 + 680) as &i64)
        field_32: v3
        field_40: 0
        field_48: v17
        field_56: *((a3 + 680) as &i64)
        field_64: v18
    };
    v20 = v0;
    loop {
        v21 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v3) as u64;
        match v21 {
            None => {
                return;
            },
            Some(_) => {
                alloc::vec::Vec<T,A>::push(a1, *(v21 as &i64), *((v21 + 8) as &i64), "src/subcommand.rs");
                just::subcommand::Subcommand::summary_recursive(v20, a1, a2, v16);
                if *((a1 + 16) as &i64) {
                    *((a1 + 16) as &i64) = *((a1 + 16) as &i64) - 1;
                }
            },
        }
    }
}
