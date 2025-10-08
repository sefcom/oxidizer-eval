fn uu_cp::platform::linux::check_for_data(a0: i64, a1: u32, a2: u32) -> int {
    let v0: u64;  // [bp-0xe4]
    let v1: struct16;  // [bp-0xe0]
    let v2: Result<struct4, struct8>;  // [bp-0xd0], Other Possible Types: struct16
    let v3: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0xd0]
    let v4: u32;  // [bp-0xcc]
    let v5: core::fmt::Arguments;  // [bp-0xc8], Other Possible Types: u64
    let v6: core::fmt::rt::Argument;  // [bp-0x80]
    let v7: i64;  // [bp-0x78]
    let v8: i8;  // [bp-0x70]
    let v10: u32;  // ebp
    let v11: u64;  // r15
    let v12: u64;  // rax
    let v13: u64;  // r14
    let v14: u8;  // al
    let v16: void*;  // rdx
    let v17: u64;  // rdx
    let v18: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v2 = std::fs::File::open(a1, a2);
    match v2 {
        Err(_) => {
            return struct16 {
                field_0: v5
                field_8: 2
            };
        },
        Ok(v10) => {
            v2 = std::fs::File::metadata(&v0 as u32);
            if v2.field_0 as i32 == 2 {
                return struct16 {
                    field_0: v5
                    field_8: 2
                };
            } else if v6 {
                v11 = *(&v8 as &i64);
                v12 = lseek(v10, 0, 3) as u64;
                if v12 == -1 {
                    return struct24 {
                        field_0: v6
                        field_8: 0
                        field_16: v11
                    };
                } else if v12 >= 0 {
                    return struct16 {
                        field_0: v6
                        field_8: 1
                    };
                } else {
                    return struct16 {
                        field_0: *(__errno_location() as &i32) as u32 as u64 * 0x100000000 | 2
                        field_8: 2
                    };
                }
            } else {
                v3 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v7 as u8, "src/uu/cp/src/platform/linux.rs");
                v13 = v5;
                v18 = <std::fs::File as std::io::Read>::read(&v0 as u32, v13, v3.len);
                v1 = struct16 {
                    field_0: v13
                    field_8: v3.len + v13
                };
                <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v1);
                v16 = 0;
                return struct24 {
                    field_0: v17
                    field_8: v14
                    field_16: 0
                };
            }
        },
    }
}
