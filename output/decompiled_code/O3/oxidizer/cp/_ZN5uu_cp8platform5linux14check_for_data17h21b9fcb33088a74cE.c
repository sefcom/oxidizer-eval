fn uu_cp::platform::linux::check_for_data(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct4;  // [bp-0xe4]
    let v1: struct16;  // [bp-0xe0]
    let v2: i192;  // [sp-0xd0], Other Possible Types: struct16, struct24, Result<struct4, struct8>
    let v3: i8;  // [bp-0xc8]
    let v4: i8;  // [bp-0x80]
    let v5: i8;  // [bp-0x78]
    let v6: i8;  // [bp-0x70]
    let v8: i64;  // rax
    let v9: i32;  // ebp
    let v10: i64;  // r14
    let v11: i64;  // r15
    let v12: i64;  // rax

    v2 = std::fs::File::open(a1, a2);
    match v2 {
        Err(v8) => {
            return struct9 {
                field_0: v8
                field_8: 2
            };
        },
        Ok(v9) => {
            v0 = struct4 {
                field_0: v9
            };
            v2 = std::fs::File::metadata(&v0);
            if v2 == 2 {
                *(a0 as &i64) = *((&v2 as &char + 8) as &i64);
                *((a0 + 8) as &i8) = 2;
                goto LABEL_512ea4;
            } else {
                v10 = v4;
                if v10 {
                    v11 = v6;
                    v12 = lseek(v9 as u32 as u64, 0, 3) as u64;
                    if v12 == -1 {
                        *(a0 as &i64) = v10;
                        *((a0 + 8) as &i8) = 0;
                        goto LABEL_512e4e;
                    } else if v12 < 0 {
                        *(a0 as &i64) = std::sys::pal::unix::os::errno() * 0x100000000 | 2;
                        *((a0 + 8) as &i8) = 2;
                    } else {
                        *(a0 as &i64) = v10;
                        *((a0 + 8) as &i8) = 1;
LABEL_512e4e:
                        *((a0 + 16) as &i64) = v11;
                    }
                } else {
                    v2 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v5);
                    if !<std::fs::File as std::io::Read>::read(&v0, *((&v2 as &char + 8) as &i64), *((&v2 as &char + 16) as &i64)) {
                        v1 = struct16 {
                            field_0: v13
                            field_8: v14 + v13
                        };
                        <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v1);
                        *((a0 + 16) as &i64) = 0;
                    }
                    *(a0 as &i64) = 0;
                    *((a0 + 8) as &i8) = 2;
LABEL_512ea4:
                }
            }
            return v8;
        },
    }
}
