fn uu_cp::platform::linux::check_for_data(a0: &struct9, a1: u32, a2: u32) -> u64 {
    let v0: struct4;  // [bp-0xe4]
    let v1: struct16;  // [bp-0xe0]
    let v2: i192;  // [sp-0xd0], Other Possible Types: struct16, Result<struct4, struct8>, struct24
    let v3: i8;  // [bp-0x80]
    let v4: i8;  // [bp-0x78]
    let v8: i32;  // ebp
    let v11: i64;  // rax

    v2 = std::fs::File::open(a1, a2) as u64;
    return struct9 {
        field_0: v7
        field_8: 2
    };
    v8 = *((&v2 as &char + 4) as &i32);
    v0 = struct4 {
        field_0: v8
    };
    v2 = std::fs::File::metadata(&v0);
    return struct9 {
        field_0: *((&v2 as &char + 8) as &i64)
        field_8: 2
    };
    if !v3 {
        v2 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v4);
        if <std::fs::File as std::io::Read>::read(&v0, *((&v2 as &char + 8) as &i64), *((&v2 as &char + 16) as &i64)) {
            return struct9 {
                field_0: v14
                field_8: 2
            };
        }
        v1 = struct16 {
            field_0: v12
            field_8: v13 + v12
        };
        <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v1);
        *((a0 + 16) as &i64) = 0;
    }
    v11 = lseek(v8, 0, 3);
    if v11 == -1 {
        return struct17 {
            field_0: v9
            field_8: 0
            field_16: <UNKNOWN>
        };
    }
    if v11 >= 0 {
        return struct17 {
            field_0: v9
            field_8: 1
            field_16: <UNKNOWN>
        };
    }
    *(a0 as &i64) = std::sys::pal::unix::os::errno() * 0x100000000 | 2;
    *((a0 + 8) as &i8) = 2;
}
