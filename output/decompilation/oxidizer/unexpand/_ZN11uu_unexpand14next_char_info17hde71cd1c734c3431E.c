fn uu_unexpand::next_char_info(a0: i64, a1: u32, a2: i64, a3: u64, a4: i64) -> long long {
    let v0: core::slice::iter::Iter<u8>;  // [bp-0x48]
    let v1: i8;  // [bp-0x38]
    let v2: struct16;  // [bp-0x30]
    let v3: i8;  // [bp-0x28]
    let v5: u64;  // r15
    let v6: u64;  // r14
    let v7: u8;  // bl
    let v8: core::result::Result<&str, core::str::error::Utf8Error>;  // rax
    let v9: u64;  // rcx
    let v10: u64;  // rax
    let v12: u32;  // edx
    let v13: core::option::Option<u32>;  // rax:rax

    if a1 {
        v5 = *((a2 + a4) as &i8) < 0;
        v6 = 1;
        v7 = 3;
        if v5 + a4 + 1 <= a3 {
            v8 = core::str::converts::from_utf8(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a4, v5 + a4 + 1, a2, a3, "src/uu/unexpand/src/unexpand.rs"), a2);
            if *(&v1 as &i32) == 1 {
                v9 = 1;
                v10 = v8;
            } else {
                v0 = core::slice::iter::Iter<u8> {
                    ptr: core::ptr::non_null::NonNull<u8> {
                        pointer: v2
                    }
                    end_or_len: *(&v3 as &i64) + v2
                    _marker: core::marker::PhantomData<&u8> { }
                };
                v13 = core::str::validations::next_code_point(&v0) as u128;
                v9 = 1;
                v7 = 3;
                if (v13 as u8 & 1) && v12 != 8 && v12 != 9 && v12 != 32 {
                    v9 = v5 + 1;
                    if v12 >= 127 && v12 > 159 {
                        v10 = unicode_width::tables::lookup_width(v12) as u64;
                    }
                }
            }
        }
    }
    *((a0 + 8) as &u8) = v7;
    *(a0 as &u64) = v6;
    *((a0 + 16) as &u64) = v9;
    return v10;
}
