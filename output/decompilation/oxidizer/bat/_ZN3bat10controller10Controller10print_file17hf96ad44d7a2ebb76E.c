fn bat::controller::Controller::print_file(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i8, a7: i64) -> Option<struct80> {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0x108]
    let v2: u64;  // [bp-0x100]
    let v3: void*;  // [bp-0xf8]
    let v4: struct1;  // [bp-0xf0], Other Possible Types: struct8, u128
    let v5: struct40;  // [bp-0xf0]
    let v6: u128;  // [bp-0xe0]
    let v7: u128;  // [bp-0xd0]
    let v8: u128;  // [bp-0xc0]
    let v9: u128;  // [bp-0xb0]
    let v10: i64;  // [bp-0x88]
    let v11: struct48;  // [bp-0x80]
    let v12: struct24;  // [bp-0x80]
    let v13: u128;  // [bp-0x68]
    let v14: u64;  // [bp-0x58]
    let v15: struct32;  // [bp-0x50]
    let v16: i64;  // r12
    let v17: u64;  // r12
    let v18: i64;  // rax
    let v19: u64;  // rax
    let v20: Option<struct24>;  // rax

    if *((a5 + 56) as &i64) || bat::style::StyleComponents::header(192 + *(a1 as &i64)) {
        *((a3 + 24) as &i64)(&v4, a2, a4, a5, a6);
        if &v4 != "\r" {
            return Some(struct80 {
                field_0: v4
                field_16: v6
                field_32: v7
                field_48: v8
                field_64: v9
            });
        }
    }
    if *((a5 + 56) as &i64) {
        v16 = *(a1 as &i64);
        if (((0 ^ *((v16 + 144) as &i64)) & (0 ^ -(*((v16 + 144) as &i64)))) >> 63) as char {
            v10 = v16;
            v17 = *((v16 + 152) as &i64);
            v0 = 0;
            v2 = 8;
            v3 = 0;
            if *(a7 as &i64) {
                v4 = hashbrown::map::HashMap<K,V,S,A>::iter(a7);
                v18 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v4);
                if v18 {
                    do {
                        v19 = *(v18 as &i32);
                        v20 = v19 - v17;
                        v15 = struct32 {
                            field_0: 0
                            field_8: v20
                            field_16: 0
                            field_24: v17 + v19
                        };
                        v0 as u128 = alloc::vec::Vec<T,A>::push(&v15, "src/controller.rs");
                        v18 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v4);
                    } while (v18);
                }
            }
            v11 = bat::line_range::LineRanges::from(&v0 as u128);
            v10 = v10;
        } else {
            v12 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(*((v16 + 152) as &i64), *((v16 + 160) as &i64));
            v13 = *((v16 + 168) as &i128);
            v14 = *((v16 + 184) as &i64);
            v10 = v16;
        }
        v4 = bat::controller::Controller::print_file_ranges(v10, a2, *((a3 + 40) as &i64), *((a3 + 48) as &i64), a4, a5 + 40, &v12);
        if &v4 != "\r" {
            return Some(struct80 {
                field_0: v4
                padding_1: <UNKNOWN>
                field_16: <UNKNOWN>
                padding_24: <UNKNOWN>
                field_32: v7
                field_48: v8
                field_64: v9
            });
        }
    }
    *((a3 + 32) as &i64)(&v4, a2, a4, a5);
    if &v4 != "\r" {
        return Some(struct80 {
            field_0: v5
            field_16: v6
            field_32: v7
            field_48: v8
            field_64: v9
        });
    }
    return struct1 {
        field_0: 13
    };
}
