fn flealib::email::EMail::send_email(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64, a6: u64, a7: void*, a8: u32, a9: void*, a10: u32, a11: void*, a12: u32, a13: u64, a14: u64) -> long long {
    let v0: Option<struct24>;  // [bp-0x310]
    let v1: u128;  // [bp-0x308]
    let v2: struct48;  // [bp-0x308]
    let v3: u64;  // [bp-0x2f8]
    let v4: u128;  // [bp-0x2f0]
    let v5: u64;  // [bp-0x2e0]
    let v6: void*;  // [bp-0x2d8], Other Possible Types: Result<struct57, struct9>, struct216, struct88, struct24
    let v7: u192;  // [bp-0x2d8]
    let v8: Result<struct32, struct16>;  // [bp-0x2d8]
    let v9: struct24;  // [bp-0x2d0]
    let v10: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x2c8]
    let v11: Result<struct4, struct8>;  // [bp-0x2c0]
    let v12: struct24;  // [bp-0x288]
    let v13: struct48;  // [bp-0x1f8], Other Possible Types: struct88, struct56
    let v14: Result<struct57, struct9>;  // [bp-0x198], Other Possible Types: struct216, struct24, struct88
    let v15: u128;  // [bp-0x198]
    let v17: u64;  // [bp-0x188]
    let v18: u64;  // [bp-0x188]
    let v19: struct216;  // [bp-0xb8]

    v6 = 0;
    v9 = 8;
    v10 = 0;
    v11 = 0x8000000000000000;
    v12 = 1;
    v14 = <lettre::message::mailbox::types::Mailbox as core::str::traits::FromStr>::from_str(a3, a4);
    v13 = core::result::Result<T,E>::unwrap(&v14, "flealib/src/email.rs");
    v14 = lettre::message::MessageBuilder::from(&v6, &v13);
    v6 = <lettre::message::mailbox::types::Mailbox as core::str::traits::FromStr>::from_str(a1, a2);
    v13 = core::result::Result<T,E>::unwrap(&v6, "flealib/src/email.rs");
    v6 = lettre::message::MessageBuilder::to(&v14, &v13);
    v14 = lettre::message::MessageBuilder::subject(&v6, a5, a6);
    v6 = struct88 {
        field_0: g_b0a378.field_0
        field_16: g_b0a388.field_0
        field_32: g_b0a398.field_0
        field_48: g_b0a3a8.field_0
        field_64: g_b0a3b8.field_0
        field_80: g_b0a3c8.field_0
    };
    v13 = lettre::message::MessageBuilder::header(&v14, &v6);
    v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(a7, a8);
    v14 = v7;
    v6 = lettre::message::MessageBuilder::body(&v13, &v14);
    v19 = core::result::Result<T,E>::unwrap(&v6);
    v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(a9, a10);
    v17 = v10;
    v15 = *(&v6.field_0 as &i128);
    v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(a11, a12);
    v5 = v10;
    v4 = *(&v6.field_0 as &i128);
    v1 = v15;
    v3 = v18;
    v6 = lettre::transport::smtp::transport::SmtpTransport::relay(a13, a14);
    v14 = core::result::Result<T,E>::unwrap(&v6);
    v13 = v2;
    v6 = lettre::transport::smtp::transport::SmtpTransportBuilder::credentials(&v14, &v13);
    v0 = lettre::transport::smtp::transport::SmtpTransportBuilder::build(&v6);
    v8 = lettre::transport::Transport::send(&v0, &v19);
    return 8;
}
