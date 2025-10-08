fn ruff_python_formatter::read_from_stdin(a0: i64) -> int {
    let v0: std::io::stdio::StdinLock;  // [bp-0x38]
    let v1: struct24;  // [bp-0x28]
    let v2: std::io::stdio::Stdin;  // [bp-0x10]
    let v4: u8;  // dl
    let v7: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v1 = struct24 {
        field_0: 0
        field_8: ""
    };
    v2 = std::io::stdio::stdin();
    v0 = std::io::stdio::StdinLock {
        inner: std::sync::poison::mutex::MutexGuard<std::io::buffered::bufreader::BufReader<std::io::stdio::StdinRaw>> {
            lock: std::io::stdio::Stdin::lock(&v2) as u64
            poison: std::sync::poison::Guard {
                panicking: v4 & 1
            }
        }
    };
    v7 = <std::io::stdio::StdinLock as std::io::Read>::read_to_string(&v0, &v1);
    match v7 {
        Ok(_) => {
            return struct24 {
                field_0: *(&v1.field_0 as &i128)
                field_16: 0
            };
        },
        Err(_) => {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(*((&v7 as &char + 8) as &i64))
            };
        },
    }
}
