fn uu_csplit::SplitWriter::writeln(a0: &struct16, a1: i64, a2: i32) -> long long {
    let v0: struct40;  // [bp-0x48]
    let v2: u64;  // rbx
    let v3: i64;  // r15
    let v4: struct8;  // rax
    let v5: i64;  // r15
    let v6: struct8;  // rax

    if *((a0 + 56) as &i8) {
        return 0;
    }
    if *(a0 as &i64) != 0x8000000000000000 {
        v2 = a2;
        v3 = *((a0 + 16) as &i64);
        if *(a0 as &i64) - v3 > a2 {
            memcpy(*((a0 + 8) as &i64) + v3, a1, v2);
            v5 = v3 + v2;
            *((a0 + 16) as &struct_0 *) = v5;
        } else {
            v4 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0);
            if v4 {
                return v4;
            }
        }
        if *(a0 as &i64) - v5 >= 2 {
            *((*((a0 + 8) as &i64) + v5) as &i8) = 10;
            *((a0 + 16) as &struct_0 *) = v5 + 1;
        } else {
            v6 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0);
            if v6 {
                return v6;
            }
        }
        *((a0 + 48) as &u64) = *((a0 + 48) as &i64) + v2 + 1;
    } else {
        v0 = struct40 {
            field_0: "trying to write to a split that was not created"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        panic!("trying to write to a split that was not created");
    }
    return 0;
}
