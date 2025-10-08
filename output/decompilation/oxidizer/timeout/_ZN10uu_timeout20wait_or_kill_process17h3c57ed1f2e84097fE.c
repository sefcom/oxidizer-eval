fn uu_timeout::wait_or_kill_process(a0: i64, a1: u64, a2: u64, a3: u64, a4: u32, a5: u32, a6: u8, a7: u8, a8: u8) -> void {
    let v0: struct12;  // [bp-0x60]
    let v1: u32;  // [bp-0x5c]
    let v2: Result<struct4, struct8>;  // [bp-0x40]
    let v3: u32;  // ebp
    let v5: u32;  // ebp
    let v6: u64;  // rdx
    let v7: u32;  // eax
    let v8: u32;  // eax
    let v9: u32;  // eax

    v0 = <std::process::Child as uucore::features::process::ChildExt>::wait_or_timeout(a1, a4, a5);
    v3 = 124;
    if !v0.field_0 {
        if v1 == 1 {
            v3 = 125;
            if a6 {
                v5 = v0.field_8;
                v3 = v5 & 127;
                if (v5 & 127) && v3 + 1 <= 1 {
                    goto LABEL_46db31;
                }
            }
        } else if (uucore::features::signals::signal_by_name_or_value("KILL") & 1) {
            uu_timeout::report_if_verbose(v6, a2, a3, a8);
            uu_timeout::send_signal(a1, v6, a7);
            v2 = std::process::Child::wait(a1);
            if let Err(_) = v2 {
                v7 = 1;
                return struct16 {
                    field_0: v8
                    padding_4: <UNKNOWN>
                    field_8: *((&v2 as &char + 8) as &i64)
                };
            }
        } else {
LABEL_46db31:
            core::option::unwrap_failed(); /* do not return */
        }
    }
    *((a0 + 4) as &u32) = v3;
    v9 = 0;
}
