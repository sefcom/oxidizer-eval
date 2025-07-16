fn uu_csplit::SplitWriter::writeln(a0: &struct16, a1: i64, a2: i32) -> long long {
    let v1: u64;  // rbx
    let v2: i64;  // r15
    let v3: struct8;  // rax
    let v4: i64;  // r15
    let v5: struct8;  // rax

    if *((a0 + 56) as &i8) {
        return 0;
    }
    if *(a0 as &i64) != 0x8000000000000000 {
        v1 = a2;
        v2 = *((a0 + 16) as &i64);
        if *(a0 as &i64) - v2 > a2 {
            memcpy(*((a0 + 8) as &i64) + v2, a1, v1);
            v4 = v2 + v1;
            *((a0 + 16) as &struct_0 *) = v4;
        } else {
            v3 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0);
            if v3 {
                return v3;
            }
        }
        if *(a0 as &i64) - v4 >= 2 {
            *((*((a0 + 8) as &i64) + v4) as &i8) = 10;
            *((a0 + 16) as &struct_0 *) = v4 + 1;
        } else {
            v5 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0);
            if v5 {
                return v5;
            }
        }
        *((a0 + 48) as &u64) = *((a0 + 48) as &i64) + v1 + 1;
    } else {
        panic!("trying to write to a split that was not created");
    }
    return 0;
}
