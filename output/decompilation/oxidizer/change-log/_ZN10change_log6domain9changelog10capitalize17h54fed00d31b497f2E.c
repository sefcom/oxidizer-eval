fn change_log::domain::changelog::capitalize(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: core::slice::iter::Iter<u8>;  // [bp-0x60]
    let v1: struct24;  // [bp-0x58]
    let v2: struct24;  // [bp-0x50], Other Possible Types: u8
    let v3: struct32;  // [bp-0x38]
    let v6: core::option::Option<u32>;  // rax:rax

    v0 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a2 + a1
        _marker: core::marker::PhantomData<&u8> { }
    };
    v6 = core::str::validations::next_code_point(&v0) as u128;
    match v6 {
        None => {
            return struct24 {
                field_0: 0
                field_8: 1
                field_16: 0
            };
        },
        Some(_) => {
            core::unicode::unicode_data::conversions::to_upper(&v2 as u8);
            v3 = core::char::CaseMappingIter::new(&v2);
            v2 = core::iter::traits::iterator::Iterator::collect(&v3);
            <alloc::string::String as core::ops::arith::Add<&str>>::add(a0, &v2, v0.ptr.pointer, v1 - v0.ptr.pointer);
            return a0;
        },
    }
}
