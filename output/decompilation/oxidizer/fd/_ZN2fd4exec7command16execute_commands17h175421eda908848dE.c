fn fd::exec::command::execute_commands(a0: i64, a1: u64, a2: u64) -> char {
    let v0: u32;  // [bp-0x2f4]
    let v2: void*;  // [bp-0x2e8]
    let v3: struct16;  // [bp-0x2e8]
    let v4: u64;  // [bp-0x2e0]
    let v5: void*;  // [bp-0x2d8]
    let v6: u64;  // [bp-0x2d0]
    let v7: struct24;  // [bp-0x2c8], Other Possible Types: u64
    let v8: struct32;  // [bp-0x2c8]
    let v9: struct16;  // [bp-0x2c4]
    let v10: u64;  // [bp-0x2c0]
    let v11: u64;  // [bp-0x2a0]
    let v12: u64;  // [bp-0x298]
    let v13: struct24;  // [bp-0x290]
    let v14: struct24;  // [bp-0x270]
    let v15: u128;  // [bp-0x258]
    let v16: u128;  // [bp-0x248]
    let v17: u64;  // [bp-0x238]
    let v18: struct16;  // [bp-0x228]
    let v19: struct16;  // [bp-0x200]
    let v20: u64;  // [bp-0x200]
    let v21: u1728;  // [bp-0x1f0]
    let v22: struct232;  // [bp-0x118]
    let v23: u64;  // [bp-0x110]
    let v25: u64;  // rsi
    let v28: u64;  // rdx
    let v31: Result<struct52, struct16>;  // [bp-0x2a8]
    let v35: u64;  // [bp-0x278]

    v6 = a1;
    v2 = 0;
    v4 = 8;
    v5 = 0;
    v17 = *((a0 + 32) as &i64);
    v16 = *((a0 + 16) as &i128);
    v15 = *(a0 as &i128);
    v0 = a2;
    if a2 {
        do {
            vvar_597{stack -280} = struct232 OrderedDict([(0, 𝜙@64b [((6235298, None), vvar_520{stack -280}), ((6235038, None), None)])])
            <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&v22, &v15);
            if v22.field_0 == 9223372036854775809 {
                fd::exec::command::OutputBuffer::write(&v3);
                return 2;
            }
            v25 = v23;
            if v22.field_0 == 0x8000000000000000 {
                fd::exec::command::handle_cmd_error(0, v25, v28);
                return 4;
            }
            v19 = struct16 {
                field_0: v22.field_0
                field_8: v25
            };
            memcpy(&v21, &v22 as u8, 216);
            v31 = argmax::Command::output(&v19);
            if let Err(_) = v31 {
                v7 = v11;
                fd::exec::command::OutputBuffer::write(&v3);
                fd::exec::command::handle_cmd_error(&v20, v11, a2);
                return 4;
            }
            v14 = struct24 {
                field_0: v31 as i64
                field_8: v11
                field_16: v12
            };
            v7 = v13;
            v3 = fd::exec::command::OutputBuffer::push(&v14, &v7);
        } while (!(*((&v31 as &char + 48) as &i32) & 65407));
    } else {
        do {
            vvar_600{stack -280} = struct232 OrderedDict([(0, 𝜙@64b [((6235574, None), vvar_379{stack -280}), ((6235313, None), None)])])
            <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&v22, &v15);
            if v22.field_0 == 9223372036854775809 {
                fd::exec::command::OutputBuffer::write(&v3);
                return 2;
            }
            v25 = v23;
            if v22.field_0 == 0x8000000000000000 {
                fd::exec::command::handle_cmd_error(0, v25, v28);
                return 4;
            }
            v19 = struct16 {
                field_0: v22.field_0
                field_8: v25
            };
            memcpy(&v21, &v22 as u8, 216);
            v8 = argmax::Command::spawn(&v19);
            if v8.field_0 == 1 {
                v11 = v10;
                v7 = v11;
                fd::exec::command::OutputBuffer::write(&v3);
                fd::exec::command::handle_cmd_error(&v20, v11, a2);
                return 4;
            }
            v18 = v9;
            v31 = std::process::Child::wait_with_output(&v18);
            if let Err(_) = v31 {
                v7 = v11;
                fd::exec::command::OutputBuffer::write(&v3);
                fd::exec::command::handle_cmd_error(&v20, v11, a2);
                return 4;
            }
        } while (!(v35 as i16 & 65407));
    }
    fd::exec::command::OutputBuffer::write(&v3);
    return 4;
}
