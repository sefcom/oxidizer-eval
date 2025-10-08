fn uu_od::parse_nrofbytes::parse_number_of_bytes(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: u8;  // [bp-0x61]
    let v1: u32;  // [bp-0x50]
    let v2: &mut [u8];  // [bp-0x4f]
    let v3: u64;  // [bp-0x48]
    let v4: core::slice::iter::Iter<u8>;  // [bp-0x40]
    let v6: u64;  // r12
    let v8: core::fmt::rt::Argument;  // r13
    let v9: u32;  // edx
    let v10: struct112;  // rbp
    let v13: core::option::Option<&str>;  // rax
    let v14: core::fmt::rt::Argument;  // rax
    let v15: core::fmt::Arguments;  // rax
    let v16: i64;  // rbx
    let v17: u64;  // rax
    let v18: &mut [u8];  // rax:rdx
    let v19: core::option::Option<u32>;  // rax:rax
    let v21: &std::path::Path;  // rax:rdx
    let v22: core::result::Result<u64, core::num::error::ParseIntError>;  // rax:rdx
    let v24: u64;  // cc_ndep

    v6 = 2;
    if !core::slice::<impl [T]>::starts_with(a1, a2, "0x") && !core::slice::<impl [T]>::starts_with(a1, a2, "0X") {
        v1 = 0;
        v18 = core::char::methods::encode_utf8_raw(48, &v1, a2);
        if !core::slice::<impl [T]>::starts_with(a1, a2, v18.data_ptr, 1) {
            v21 = std::path::<impl core::convert::AsRef<std::path::Path> for str>::as_ref(a1, a2);
            return uucore::features::parser::parse_size::parse_size_u64(a0, v21.data_ptr, a2);
        }
    }
    v4 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v19 = core::str::validations::next_code_point_reverse(&v4) as u128;
    v8 = 1;
    match v19 {
        Some(_) => {
            match (v9) {
                66 => {
                    v10 = a2;
                    break;
                }
                _ => {
                    v10 = a2;
                    break;
                }
            }
        },
        None => {
            v10 = a2;
        },
    }
    v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v6, v10, a1, a2) as u64;
    v22 = core::num::<impl u64>::from_ascii_radix(&v1, v13, a2);
    if v1 as i8 {
        v0 = v2.data_ptr as i8;
        v14 = <T as alloc::string::SpecToString>::spec_to_string(a0 + 8, &v0);
        return struct8 {
            field_0: 1
        };
    }
    v15 = v8;
    if _ccall(0, 48, v15, v3, v24) as char {
        v16 = a0;
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0 + 8, a1, a2);
    } else {
        v16 = a0;
        *((a0 + 8) as &u64) = (v15 * v3) as u64;
        v17 = 4;
    }
    *(v16 as &u64) = v17;
    return v17;
}
