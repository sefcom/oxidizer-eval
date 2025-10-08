fn uu_stat::Stater::handle_percent_case(a0: i64, a1: i64, a2: u64, a3: i64, a4: u64, a5: u64, a6: u64) -> int {
    let v0: u32;  // [bp-0x110]
    let v1: u16;  // [bp-0x10c]
    let v2: i64;  // [bp-0x108]
    let v3: core::slice::iter::Iter<u8>;  // [bp-0xf8], Other Possible Types: struct20, u128
    let v4: struct24;  // [bp-0xf8]
    let v5: u64;  // [bp-0xe8]
    let v6: u32;  // [bp-0xe0]
    let v7: void*;  // [bp-0xc0]
    let v8: i64;  // [bp-0xb8]
    let v9: alloc::string::String;  // [bp-0xa8], Other Possible Types: struct24
    let v10: u64;  // [bp-0xa0]
    let v11: u64;  // [bp-0x98]
    let v12: void*;  // [bp-0x90]
    let v13: u128;  // [bp-0x88]
    let v14: u8;  // [bp-0x78]
    let v15: struct24;  // [bp-0x70], Other Possible Types: u32
    let v16: void*;  // [bp-0x68]
    let v17: u64;  // [bp-0x60]
    let v18: alloc::string::String;  // [bp-0x48]
    let v19: u64;  // r12
    let v20: core::result::Result<(), core::fmt::Error>;  // rax
    let v24: core::fmt::rt::Argument;  // rax
    let v25: i64;  // rcx
    let v27: core::fmt::Arguments;  // rbp
    let v28: alloc::string::String;  // rdx
    let v29: struct24;  // rdi
    let v30: core::result::Result<(), core::fmt::Error>;  // rbx, Other Possible Types: u64, unsigned long
    let v31: struct24;  // r15
    let v33: u32;  // edx
    let v34: u64;  // rax
    let v35: core::option::Option<u32>;  // rax:rax
    let v36: &[u8];  // rax:rdx

    v19 = *(a3 as &i64);
    v20 = v19 + 1;
    *(a3 as &core::result::Result<(), core::fmt::Error>) = v20;
    if v20 >= a4 {
        return struct16 {
            field_0: 3
            field_8: 37
        };
    }
    if *((a1 + v19 * 4 + 4) as &i32) == 37 {
        *(a3 as &u64) = v19 + 2;
    } else {
        v1 = 0;
        v0 = 0;
        uu_stat::Stater::process_flags(a1, a2, a3, a4, &v0);
        v15 = <str as uu_stat::ScanUtil>::scan_num(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(*(a3 as &i64), a5, a6) as u64, a2);
        if (v15.field_0 as i8 & 1) {
            if v30 >= a4 || *((a1 + v30 * 4) as &i32) == 37 {
                v4 = struct24 {
                    field_0: v19
                    field_8: core::cmp::Ord::min(*(a3 as &i64) + v17, a4 - 1)
                    field_16: 0
                };
                v36 = <core::ops::range::RangeInclusive<usize> as core::slice::index::SliceIndex<[T]>>::index(&v4, a1, a2);
                v9 = core::iter::traits::iterator::Iterator::collect(v36.ptr, &v36.ptr[4 * v36.len]);
                v12 = 0;
                v13 = *(&v9.field_8 as &i128);
                v14 = 1;
                v18 = format!("{}: invalid directive", &v12);
                v6 = 1;
                v3 = *(&v18.vec.buf.inner.cap as &i128);
                v5 = v18.vec.len;
                *((v2 + 8) as &u64) = alloc::boxed::Box<T>::new(&v3) as u64;
                *((v2 + 16) as &&u8) = &g_519a38;
                *(v2 as &i64) = 5;
                return;
            }
            v7 = v16;
        }
        uu_stat::check_bound(a5, a6, a4, v19, v30);
        if v24 {
LABEL_475452:
            v25 = a0;
        } else {
            if *((a1 + v30 * 4) as &i32) != 46 {
                v29 = a1;
                v25 = a0;
                v28 = a3;
LABEL_47551b:
                *(v28 as &unsigned long) = v30;
                v31 = v30 + 1;
                if !(v31 < a2 & v31 < a4) {
                    v34 = *((v29 + v30 * 4) as &i32);
                    *((v25 + 32) as &u16) = v1;
                    *((v25 + 28) as &u32) = v0;
                    *(v25 as &core::fmt::Arguments) = v27;
                    *((v25 + 8) as &unsigned long) = v8;
                    *((v25 + 16) as &void*) = v7;
                    *((v25 + 24) as &u32) = v34;
                    return;
                }
                v15 = *((v29 + v30 * 4 + 4) as &i32);
                if (*((v29 + v30 * 4) as &i32) | 4) != 76 {
                    v34 = *((v29 + v30 * 4) as &i32);
                    *((v25 + 32) as &u16) = v1;
                    *((v25 + 28) as &u32) = v0;
                    *(v25 as &core::fmt::Arguments) = v27;
                    *((v25 + 8) as &unsigned long) = v8;
                    *((v25 + 16) as &void*) = v7;
                    *((v25 + 24) as &u32) = v34;
                    return;
                }
                if v15 != 114 && v15 != 100 {
                    v34 = *((v29 + v30 * 4) as &i32);
                    *((v25 + 32) as &u16) = v1;
                    *((v25 + 28) as &u32) = v0;
                    *(v25 as &core::fmt::Arguments) = v27;
                    *((v25 + 8) as &unsigned long) = v8;
                    *((v25 + 16) as &void*) = v7;
                    *((v25 + 24) as &u32) = v34;
                    return;
                }
                v9 = format!("{}{}", v29 + v30 * 4, &v15);
                *(v28 as &struct24) = v31;
                v3 = core::slice::iter::Iter<u8> {
                    ptr: core::ptr::non_null::NonNull<u8> {
                        pointer: v10
                    }
                    end_or_len: v11 + v10
                    _marker: core::marker::PhantomData<&u8> { }
                };
                v35 = core::str::validations::next_code_point(&v3) as u128;
                if let Some(_) = v35 {
                    if v33 != 0x110000 {
                        *((v2 + 32) as &u16) = v1;
                        *((v2 + 28) as &u32) = v0;
                        *(v2 as &core::fmt::Arguments) = v27;
                        *((v2 + 8) as &unsigned long) = v8;
                        *((v2 + 16) as &void*) = v7;
                        *((v2 + 24) as &u32) = v33;
                        return;
                    }
                }
                core::option::unwrap_failed(); /* do not return */
            }
            v30 += 1;
            uu_stat::check_bound(a5, a6, a4, v19, v30);
            if v24 {
                goto LABEL_475452;
            }
            v3 = <str as uu_stat::ScanUtil>::scan_num(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v30, a5, a6) as u64, a2);
            uu_stat::check_bound(a5, a6, a4, v19, v30);
            v25 = a0;
            v28 = a3;
            v29 = a1;
            if !v24 {
                goto LABEL_47551b;
            }
        }
        *((v25 + 8) as &core::fmt::rt::Argument) = v24;
        *((v25 + 16) as &&u8) = &g_519a38;
        *(v25 as &i64) = 5;
        return;
    }
    return struct16 {
        field_0: 3
        field_8: 37
    };
}
