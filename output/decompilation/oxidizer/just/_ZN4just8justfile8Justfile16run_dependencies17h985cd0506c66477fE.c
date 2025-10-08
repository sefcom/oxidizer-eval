fn just::justfile::Justfile::run_dependencies(a0: i64, a1: u64, a2: i64, a3: i64, a4: u64, a5: u64, a6: u64, a7: u64, a8: u64, a9: u64, a10: u64) -> int {
    let v0: void*;  // [bp-0x158]
    let v1: struct16;  // [bp-0x150]
    let v2: struct24;  // [bp-0x150]
    let v3: iNone;  // [bp-0x138], Other Possible Types: struct64
    let v4: struct32;  // [bp-0x138], Other Possible Types: u256
    let v5: u128;  // [bp-0x131]
    let v6: u128;  // [bp-0x129]
    let v7: struct24;  // [bp-0x121]
    let v8: struct64;  // [bp-0x120]
    let v9: struct24;  // [bp-0xf0], Other Possible Types: struct32
    let v10: u8;  // [bp-0xd0]
    let v11: struct32;  // [bp-0xd0]
    let v12: struct104;  // [bp-0xd0]
    let v14: struct103;  // [bp-0xc0]
    let v15: struct24;  // [bp-0xb8]
    let v16: struct24;  // [bp-0xb8]
    let v17: i8;  // [bp-0xb0]
    let v18: i8;  // [bp-0xa0]
    let v19: i8;  // [bp-0x90]
    let v20: i8;  // [bp-0x80]
    let v21: i64;  // [bp-0x70]
    let v22: u64;  // [bp-0x68]
    let v23: u64;  // [bp-0x40]
    let v24: u64;  // [bp-0x38]
    let v25: struct24;  // r13
    let v26: struct16;  // r12
    let v27: struct16;  // r12
    let v28: u8;  // al
    let v29: u64;  // r12
    let v30: alloc::string::String;  // xmm0
    let v31: core::result::Result<alloc::string::String, std::env::VarError>;  // xmm2
    let v32: core::result::Result<alloc::string::String, std::env::VarError>;  // xmm3
    let v33: iNone;  // xmm0
    let v34: iNone;  // xmm1
    let v35: struct88;  // xmm2
    let v36: struct24;  // al
    let v37: iNone;  // xmm0
    let v38: core::fmt::rt::Argument;  // xmm1
    let v39: core::fmt::Arguments;  // xmm2

    v23 = a1;
    v24 = a5;
    if *((*(a2 as &i64) + 415) as &i8) {
        return struct1 {
            field_0: 56
        };
    }
    v2 = struct24 {
        field_0: 0
        field_8: ""
    };
    if a4 {
        do {
            v27 = v26;
            v9 = struct24 {
                field_0: *((v25 - 16) as &i64)
                field_8: *((v25 - 8) as &i64) * 128 + *((v25 - 16) as &i64)
                field_16: a6
            };
            core::iter::traits::iterator::Iterator::collect(&v11, &v9);
            v28 = v10;
            if v28 != 56 {
                v30 = *((&v11.field_0 as &char + 1) as &i128);
                v31 = *(&v17 as &i128);
                v32 = *(&v18 as &i128);
                v6 = v14.field_0;
                *(&v3 as &alloc::string::String) = v30;
                *(&v0[96] as &unsigned long) = v21;
                *(&v0[80] as &i128) = *(&v20 as &i128);
                *(&v0[64] as &i128) = *(&v19 as &i128);
                *(&v0[48] as &core::result::Result<alloc::string::String, std::env::VarError>) = v32;
                *(&v0[32] as &core::result::Result<alloc::string::String, std::env::VarError>) = v31;
                *(&v0[16] as &i128) = (&v3)[15] as i128;
                *(&v0[1] as &i128) = v3 as i128;
                *(v0 as &u8) = v28;
                return;
            }
            v7 = v15;
            v5 = v11.field_8;
            v11 = struct32 {
                field_0: v25
                field_8: v5
                field_24: v7.field_0
            };
            v1 = alloc::vec::Vec<T,A>::push(&v11);
            v25 += 32;
            v29 = v27 - 32;
            v15 = v16;
            v26 = v29;
        } while (v27 != 32);
    }
    if just::attribute_set::AttributeSet::contains(a8 + 216, 13) {
        v3 = struct64 {
            field_0: *(&v2.field_0 as &i128)
            field_16: 0
            field_24: &v23
            field_32: &v24
            field_40: &vvar_7
            field_48: &vvar_9
            field_56: &vvar_10
        };
        v12 = std::thread::scoped::scope(&v3);
        if &v12 != "8" {
            *(&v0[96] as &unsigned long) = v21;
            *(&v0[80] as &u128) = v12.field_80;
            *(&v0[64] as &u128) = v12.field_64;
            v33 = v12.field_0;
            v34 = v12.field_16;
            v35 = v12.field_32;
            *(&v0[48] as &u128) = v12.field_48;
            *(&v0[32] as &struct88) = v35;
            v0[16] = v34;
            *(v0) = v33;
            return;
        }
    } else {
        v9 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v2 as u64);
        v4 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9);
        if !((((0 ^ v4.field_8 as i64) & (0 ^ -(v4.field_8 as i64))) >> 63) as char) {
            do {
                just::justfile::Justfile::run_recipe(&v11, *((&v4 as &char + 16) as &i64), v8, a1, v22, 1, a7, *(v4.field_0 as &i64) + 16, a9, a10);
                v36 = v11.field_0 as i8;
                if v36 != 56 {
                    *(&v0[96] as &unsigned long) = v21;
                    *(&v0[81] as &u128) = v12.field_0;
                    *(&v0[65] as &u128) = v12.field_0;
                    v37 = *((&v11.field_0 as &char + 1) as &i128);
                    v38 = v12.field_0;
                    v39 = v12.field_0;
                    *(&v0[49] as &u128) = v12.field_0;
                    *(&v0[33] as &core::fmt::Arguments) = v39;
                    *(&v0[17] as &core::fmt::rt::Argument) = v38;
                    v0[1] = v37;
                    *(v0 as &struct24) = v36;
                    return;
                }
                v4 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9);
            } while (v4.field_8 as i64 != 0x8000000000000000);
        }
    }
    *(v0 as &i8) = 56;
    return;
}
