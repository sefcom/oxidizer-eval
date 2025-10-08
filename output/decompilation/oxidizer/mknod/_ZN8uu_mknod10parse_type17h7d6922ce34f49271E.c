fn uu_mknod::parse_type(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: struct24;  // [bp-0x40]
    let v1: u32;  // [bp-0x38]
    let v2: u64;  // [bp-0x34]
    let v3: u32;  // [bp-0x2c]
    let v4: core::slice::iter::Iter<u8>;  // [bp-0x28]
    let v7: u32;  // edx
    let v8: core::option::Option<u32>;  // rax:rax

    v4 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v8 = core::str::validations::next_code_point(&v4) as u128;
    match v8 {
        Some(_) => {
            return uu_mknod::parse_type::{{closure}}(a0, a1, a2, v7 as u64);
        },
        None => {
            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("missing device type");
            return struct32 {
                field_0: v0.field_0
                field_8: v1
                field_12: <UNKNOWN>
                field_20: <UNKNOWN>
            };
        },
    }
}
