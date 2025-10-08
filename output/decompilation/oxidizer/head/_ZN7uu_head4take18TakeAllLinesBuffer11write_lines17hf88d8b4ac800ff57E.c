fn uu_head::take::TakeAllLinesBuffer::write_lines(a0: i64, a1: i64, a2: u64, a3: void*, a4: u8) -> long long {
    let v0: struct25;  // [bp-0x58]
    let v2: u64;  // rdx
    let v3: void*;  // rax
    let v4: u64;  // rax
    let v5: u64;  // rdx
    let v6: i64;  // rdx
    let v7: u64;  // rax
    let v10: void*;  // rax
    let v11: u64;  // rax

    if !a3 {
        panic!("Must request at least 1 line.");
    }
    if a3 <= *((a1 + 32) as &i64) {
        v4 = uu_head::take::TakeAllBuffer::remaining_buffer(a1);
        v0 = struct25 {
            field_0: v4
            field_8: v4
            field_16: v5 + v4
            field_24: a4
        };
        if core::iter::traits::iterator::Iterator::advance_by(&v0, a3 - 1) || memchr::arch::generic::memchr::Iter::next(&v0 as u128) != 1 {
            panic!("Somehow we're being asked to write more lines than we have, that's a bug in copy_all_but_lines.");
        }
        v7 = uu_head::take::TakeAllBuffer::write_bytes_exact(a1, a2, v5 + 1);
        if v7 {
            *((a0 + 8) as &u64) = v7;
        }
    } else if (uu_head::take::TakeAllBuffer::write_all(a1, a2) & 1) {
        *((a0 + 8) as &u64) = v2;
    }
    *((a1 + 32) as &void*) = v3;
    v10 = 0;
    return struct24 {
        field_0: v11
        field_8: v6
        field_16: a3
    };
}
