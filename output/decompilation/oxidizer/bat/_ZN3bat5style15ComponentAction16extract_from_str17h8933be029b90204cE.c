fn bat::style::ComponentAction::extract_from_str(a0: i64, a1: core::option::Option<&str>, a2: i192) -> long long {
    let v0: u32;  // [bp-0x2c]
    let v1: core::slice::iter::Iter<u8>;  // [bp-0x28]
    let v4: u32;  // edx
    let v6: u64;  // rdx
    let v7: u8;  // al
    let v8: struct24;  // rax
    let v9: struct24;  // rdx
    let v11: u64;  // rdx
    let v12: &mut [u8];  // rax:rdx
    let v13: core::option::Option<u32>;  // rax:rax
    let v14: &mut [u8];  // rax:rdx

    v1 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v13 = core::str::validations::next_code_point(&v1) as u128;
    if !(v13 as i8 & 1) {
        goto LABEL_842cd4;
    }
    match (v4) {
        43 => {
            v0 = 0;
            v14 = core::char::methods::encode_utf8_raw(43, &v0, 4);
            a1 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v14.data_ptr, v14.length, a1, a2) as u64;
            core::option::unwrap(a1);
            v7 = 1;
            v8 = a1 & -0x100 | 1;
            v9 = v11;
            break;
        }
        45 => {
            v0 = 0;
            v12 = core::char::methods::encode_utf8_raw(45, &v0, 4);
            a1 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v12.data_ptr, v12.length, a1, a2) as u64;
            core::option::unwrap(a1);
            v7 = 2;
            v8 = a1 & -0x100 | 2;
            v9 = v6;
            break;
        }
        _ => {
LABEL_842cd4:
            v8 = 0;
            v9 = a2;
            break;
        }
    }
    return struct24 {
        field_0: v7
        padding_1: <UNKNOWN>
        field_8: a1
        field_16: v9
    };
}
