fn uu_unexpand::next_char_info(a0: i64, a1: i32, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: core::slice::iter::Iter<u8>;  // [bp-0x40], Other Possible Types: struct16
    let v1: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x30]
    let v2: u64;  // [bp-0x28]
    let v4: u64;  // r14
    let v6: u64;  // rax
    let v7: u8;  // bl
    let v10: struct24;  // rcx
    let v12: u32;  // edx
    let v18: i64;  // rax
    let v19: struct24;  // rax
    let v20: core::option::Option<u32>;  // rax:rax

    if a1 && !((v4 = (*((a2 + a4) as &i8) < 0) as u8 as u64, v4 + a4 + 1 > a3)) {
        v1 = core::str::converts::from_utf8(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a4, v4 + a4 + 1, a2, a3, "src/uu/unexpand/src/unexpand.rs"), a2);
        match v1 {
            Err(_) => {
                v7 = 3;
                v10 = 1;
                v10 = 1;
            },
            Ok(_) => {
                v0 = struct16 {
                    field_0: v2
                    field_8: *((&v1 as &char + 16) as &i64) + v2
                };
                v0 = core::slice::iter::Iter<u8> {
                    ptr: core::ptr::non_null::NonNull<u8> {
                        pointer: v2
                    }
                    end_or_len: *((&v1 as &char + 16) as &i64) + v2
                    _marker: core::marker::PhantomData<&u8> { }
                };
                v20 = core::str::validations::next_code_point(&v0) as u128;
                v10 = 1;
                v7 = 3;
                match v20 {
                    Some(_) => {
                        match (v12) {
                            8 => {
                                v10 = 0;
                                break;
                            }
                            9 => {
                                v7 = 2;
                                v10 = 0;
                                break;
                            }
                            32 => {
                                v7 = 1;
                                v10 = 0;
                                break;
                            }
                            _ => {
                                v10 = v4 + 1;
                                if v12 < 127 {
                                    v10 = (32 <= v12) as u8 as u64;
                                    break;
                                } else {
                                    v18 = (v12 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v12 as u64));
                                    break;
                                }
                            }
                        }
                    },
                    None => {
                        v10 = 1;
                    },
                }
            },
        }
    } else {
        v10 = 1;
        v10 = v6;
    }
    v19 = v10;
    *((a0 + 8) as &u8) = v7;
    *(a0 as &struct24) = v19;
    *((a0 + 16) as &struct24) = v10;
    return v19;
}
