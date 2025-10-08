fn bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while(a0: core::option::Option<&str>, a1: i64) -> long long {
    let v0: core::fmt::rt::Argument;  // [bp-0x40]
    let v2: struct24;  // r15
    let v3: struct24;  // r12
    let v4: Result<struct80, struct9>;  // rax
    let v5: core::fmt::rt::Argument;  // r13
    let v6: core::fmt::rt::Argument;  // rcx
    let v7: struct80;  // ebp
    let v8: core::fmt::rt::Argument;  // rcx
    let v9: struct24;  // r13
    let v10: core::fmt::rt::Argument;  // rbx

    v2 = a1 + 16;
    v3 = a1 + 40;
    core::option::Option<T>::get_or_insert_with(v3, v2);
    if *((a1 + 48) as &i32) != 0x110000 {
        core::option::Option<T>::get_or_insert_with(v3, v2);
        if *((a1 + 48) as &i32) == 0x110000 {
            core::option::unwrap_failed(); /* do not return */
        }
        v5 = *((a1 + 40) as &i64);
        core::option::Option<T>::get_or_insert_with(v3, v2);
        v6 = v5;
        v7 = *((a1 + 48) as &i32);
        if v7 != 0x110000 {
            v0 = v6;
            v8 = v0;
            v5 = v8;
            v6 = v8;
            if bat::vscreen::EscapeSequenceOffsetsIterator::next_nf::{{closure}}(v7 as u64) {
                do {
                    v10 = *(v3 as &i64);
                    *((a1 + 48) as &i32) = 1114113;
                    core::option::Option<T>::get_or_insert_with(v3, v2);
                    v7 = *((a1 + 48) as &i32);
                } while (v7 != 0x110000 && bat::vscreen::EscapeSequenceOffsetsIterator::next_nf::{{closure}}(v7 as u64));
                v5 = v9 + v10;
                v6 = v0;
            }
        }
        *((a0 + 8) as &core::fmt::rt::Argument) = v6;
        *((a0 + 16) as &core::fmt::rt::Argument) = v5;
        v4 = 1;
    }
    *(a0 as &Result<struct80, struct9>) = v4;
    return v4;
}
