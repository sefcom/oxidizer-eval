fn uu_paste::InputSource::read_until(a1: i64, a2: i8, a3: i64) -> : struct16 {
    let a0: i64;  // rdi
    let v0: std::io::stdio::StdinLock;  // [bp-0x30]
    let v2: u64;  // rdx
    let v3: i64;  // rdi
    let v4: u8;  // dl
    let v6: u64;  // rdx
    let v7: u64;  // rdx
    let v8: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    if !*(a1 as &i64) {
        v3 = *((a1 + 8) as &i64);
        if *((v3 + 16) as &i64) > 9223372036854775806 {
            return struct16 {
                field_0: uu_paste::InputSource::read_until::{{closure}}()
                field_8: &g_4decf0
            };
        }
        *((v3 + 16) as &i64) = *((v3 + 16) as &i64) + 1;
        v0 = std::io::stdio::StdinLock {
            inner: std::sync::poison::mutex::MutexGuard<std::io::buffered::bufreader::BufReader<std::io::stdio::StdinRaw>> {
                lock: std::io::stdio::Stdin::lock(v3 + 24) as u64
                poison: std::sync::poison::Guard {
                    panicking: v4 & 1
                }
            }
        };
        v8 = <std::io::stdio::StdinLock as std::io::BufRead>::read_until(&v0, a2, a3);
        if let Err(_) = v8 {
            return struct16 {
                field_0: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v8 as &char + 8) as &i64))
                field_8: v6
            };
        }
    } else if (std::io::read_until(a1, a2, a3) & 1) {
        return struct16 {
            field_0: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2)
            field_8: v2
        };
    }
    return struct16 {
        field_0: 0
        field_8: v7
    };
}
