fn just::parser::Parser::next_are(a0: i64, a1: i64, a2: i64) -> u8 {
    let v0: struct16;  // [bp-0x80]
    let v1: struct72;  // [bp-0x70]
    let v3: u64;  // rdx
    let v4: struct16;  // rax
    let v5: i64;  // r13

    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(a0 + 56, *(a1 as &i8));
    v0 = struct16 {
        field_0: just::parser::Parser::rest(a0)
        field_8: v3
    };
    v4 = 0;
    loop {
        v5 = v4;
        if a2 == v4 {
            break;
        }
        v1 = core::iter::traits::iterator::Iterator::try_fold(&v0);
        if &v1 as u8 == "%" {
            break;
        }
        v4 = v5 + 1;
        if v1.field_64 as i8 != *((a1 + v5) as &i8) {
            break;
        }
    }
    return a2 == v5;
}
