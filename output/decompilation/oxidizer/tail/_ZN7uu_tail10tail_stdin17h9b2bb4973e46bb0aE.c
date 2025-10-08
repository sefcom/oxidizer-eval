fn uu_tail::tail_stdin(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: u64;  // [bp-0xc8]
    let v1: struct48;  // [bp-0xc0], Other Possible Types: u192
    let v2: struct24;  // [bp-0xc0], Other Possible Types: u384
    let v3: u64;  // [bp-0x90]
    let v4: struct24;  // [bp-0x88], Other Possible Types: struct48
    let v6: Option<struct24>;  // [bp-0x48]
    let v7: u64;  // [bp-0x48]
    let v8: u64;  // [bp-0x40]
    let v11: core::result::Result<(), std::io::error::Error>;  // rax
    let v13: core::fmt::Arguments;  // r14
    let v15: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v6 = uu_tail::paths::Input::resolve(a2);
    if (((0 ^ v6 as i64) & (0 ^ -(v7))) >> 63) as char {
        uu_tail::paths::HeaderPrinter::print_input(a1, *((a2 + 8) as &i64), *((a2 + 16) as &i64));
        v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(std::io::stdio::stdin());
        v11 = uu_tail::unbounded_tail(&v1, a0) as u64;
        match v11 {
            Err(_) => {
                return v11;
            },
            Ok(_) => {
                v4 = v2;
                return uu_tail::follow::watch::Observer::add_stdin(a3, *((a2 + 8) as &i64), *((a2 + 16) as &i64) as i32, alloc::boxed::Box<T>::new(&v4));
            },
        }
    } else {
        v0 = v8;
        v3 = *((&v6 as &char + 16) as &i64);
        v2 = same_file::Handle::stdin();
        if *((&v2.field_16 as &char + 4) as &i8) != 2 {
            v4 = v1;
            v15 = <std::fs::File as std::io::Seek>::stream_position(same_file::Handle::as_file_mut(&v4));
        }
        v11 = uu_tail::tail_file(a0, a1, a2, v0, v3, a3, v13);
        return 0;
    }
}
