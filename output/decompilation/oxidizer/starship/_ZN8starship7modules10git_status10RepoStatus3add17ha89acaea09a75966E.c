fn starship::modules::git_status::RepoStatus::add(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: struct40;  // [bp-0x80]
    let v2: Result<struct24, struct24>;  // [bp-0x58]
    let v3: core::slice::iter::Iter<u8>;  // [bp-0x28]
    let v6: u32;  // edx
    let v7: struct24;  // rax
    let v8: Option<struct40>;  // rax
    let v9: Option<struct40>;  // rax
    let v10: core::option::Option<&str>;  // rax
    let v11: struct16;  // rdx
    let v12: &mut [u8];  // rdi
    let v13: core::option::Option<u32>;  // rax:rax

    v3 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v13 = core::str::validations::next_code_point(&v3) as u128;
    match v13 {
        Some(_) => {
            v7 = (v6 - 33) as u64;
            match (v7 as u32) {
                1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | 28 | 29 => {
LABEL_b9cabb:
                    v9 = core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64;
                    if let Some(_) = v9 {
LABEL_b9ca6a:
                        v0 = struct40 {
                            field_0: "starship::modules::git_status"
                            field_16: "starship::modules::git_status"
                            field_32: log::__private_api::loc(v12)
                        };
                        v9 = log::__private_api::log(&v2, 1, &v0) as u64;
                    }
                    break;
                }
                16 => {
                    v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(2, 4, a1, a2) as u64;
                }
                17 => {
                    *((a0 + 72) as &i64) = *((a0 + 72) as &i64) + 1;
                    v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(2, 4, a1, a2) as u64;
                }
                30 => {
                    *((a0 + 104) as &i64) = *((a0 + 104) as &i64) + 1;
                    v9 = v8;
                }
                0 => {
LABEL_b9caa6:
                    return v9;
                }
                _ => {
                    if v6 != 117 {
                        goto LABEL_b9cabb;
                    }
                    *((a0 + 56) as &i64) = *((a0 + 56) as &i64) + 1;
                    v9 = v7;
                    break;
                }
            }
            return starship::modules::git_status::RepoStatus::parse_normal_status(a0, v10, v11);
        },
        None => {
            v9 = core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64;
            if let Some(_) = v9 {
                goto LABEL_b9ca6a;
            }
            goto LABEL_b9caa6;
        },
    }
}
