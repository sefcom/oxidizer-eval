fn uu_basenc::uu_app() -> : struct712 {
    let a0: void*;  // rdi
    let v0: struct640;  // [bp-0xfb0]
    let v1: struct640;  // [bp-0xd30]
    let v2: struct640;  // [bp-0xab0]
    let v3: struct712;  // [bp-0x7e8], Other Possible Types: u8
    let v4: struct640;  // [bp-0x520]
    let v5: struct640;  // [bp-0x2a0]

    uu_base32::base_common::base_app(&v3, "Encode/decode data and print to standard output\nWith no FILE, or when FILE is -, read standard input.\n\nWhen decoding, the input may contain newlines in addition to the bytes of\nthe formal alphabet. Use --ignore-garbage to attempt to recover\nfrom any other non-alphabet bytes in the encoded stream.", "{} [OPTION]... [FILE]");
    v2 = clap_builder::builder::arg::Arg::new("base64");
    v5 = clap_builder::builder::arg::Arg::long(&v2, "base64");
    v0 = clap_builder::builder::arg::Arg::help(&v5, "same as 'base64' program");
    v4 = clap_builder::builder::arg::Arg::action(&v0);
    v1 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(&v4);
    memcpy(&v2, &v3, 712);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("base64url");
    v5 = clap_builder::builder::arg::Arg::long(&v2, "base64url");
    v0 = clap_builder::builder::arg::Arg::help(&v5, "file- and url-safe base64");
    v4 = clap_builder::builder::arg::Arg::action(&v0);
    v1 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(&v4);
    memcpy(&v2, &v3, 712);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("base32");
    v5 = clap_builder::builder::arg::Arg::long(&v2, "base32");
    v0 = clap_builder::builder::arg::Arg::help(&v5, "same as 'base32' program");
    v4 = clap_builder::builder::arg::Arg::action(&v0);
    v1 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(&v4);
    memcpy(&v2, &v3, 712);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("base32hex");
    v5 = clap_builder::builder::arg::Arg::long(&v2, "base32hex");
    v0 = clap_builder::builder::arg::Arg::help(&v5, "extended hex alphabet base32");
    v4 = clap_builder::builder::arg::Arg::action(&v0);
    v1 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(&v4);
    memcpy(&v2, &v3, 712);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("base16");
    v5 = clap_builder::builder::arg::Arg::long(&v2, "base16");
    v0 = clap_builder::builder::arg::Arg::help(&v5, "hex encoding");
    v4 = clap_builder::builder::arg::Arg::action(&v0);
    v1 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(&v4);
    memcpy(&v2, &v3, 712);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("base2lsbf");
    v5 = clap_builder::builder::arg::Arg::long(&v2, "base2lsbf");
    v0 = clap_builder::builder::arg::Arg::help(&v5, "bit string with least significant bit (lsb) first");
    v4 = clap_builder::builder::arg::Arg::action(&v0);
    v1 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(&v4);
    memcpy(&v2, &v3, 712);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("base2msbf");
    v5 = clap_builder::builder::arg::Arg::long(&v2, "base2msbf");
    v0 = clap_builder::builder::arg::Arg::help(&v5, "bit string with most significant bit (msb) first");
    v4 = clap_builder::builder::arg::Arg::action(&v0);
    v1 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(&v4);
    memcpy(&v2, &v3, 712);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("z85");
    v5 = clap_builder::builder::arg::Arg::long(&v2, "z85");
    v0 = clap_builder::builder::arg::Arg::help(&v5, "ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5");
    v4 = clap_builder::builder::arg::Arg::action(&v0);
    v1 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(&v4);
    memcpy(&v2, &v3, 712);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v1);
    memcpy(a0, &v3, 712);
    return;
}
