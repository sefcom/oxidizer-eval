long long uu_factor::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned long long v1;  // [bp-0x7f4]
    unsigned int v2;  // [bp-0x7ec]
    char v3;  // [bp-0x7e8]
    unsigned long v4;  // [bp-0x52c]
    unsigned int v5;  // [bp-0x524]
    char v6;  // [bp-0x520]
    char v7;  // [bp-0x2a0]
    unsigned long long v10;  // rdx

    v0.new(uucore::util_name(), v10);
    v3.version(&v0);
    v0.about(&v3);
    uucore::format_usage(&v6, "{} [OPTION]... [NUMBER]...Print factors in the form p^ePrint help information.Only odd modulus are supported by the Montgomery form/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-modular-0.5.1/src/monty.rsattempt to shift right with negative/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint/shift.rs", 26);
    v3.override_usage(&v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 2252383929761928 | v4;
    v2 = v5;
    v3.new("NUMBER(uutils coreutils) 0.0.30Print the prime factors of the given NUMBER(s).\nIf none are specified, read from standard input.{} [OPTION]... [NUMBER]...Print factors in the form p^ePrint help information.Only odd modulus are supported by the Montgomery form/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-modular-0.5.1/src/monty.rsattempt to shift right with negative/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint/shift.rs", 6);
    v6.action(&v3, 1);
    v3.arg(&v0, &v6);
    v0.new("exponentsNUMBER(uutils coreutils) 0.0.30Print the prime factors of the given NUMBER(s).\nIf none are specified, read from standard input.{} [OPTION]... [NUMBER]...Print factors in the form p^ePrint help information.Only odd modulus are supported by the Montgomery form/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-modular-0.5.1/src/monty.rsattempt to shift right with negative/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint/shift.rs", 9);
    v6.short(&v0);
    v0.long(&v6, "exponentsNUMBER(uutils coreutils) 0.0.30Print the prime factors of the given NUMBER(s).\nIf none are specified, read from standard input.{} [OPTION]... [NUMBER]...Print factors in the form p^ePrint help information.Only odd modulus are supported by the Montgomery form/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-modular-0.5.1/src/monty.rsattempt to shift right with negative/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint/shift.rs", 9);
    v6.help(&v0, "Print factors in the form p^ePrint help information.Only odd modulus are supported by the Montgomery form/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-modular-0.5.1/src/monty.rsattempt to shift right with negative/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint/shift.rs", 29);
    v7.action(&v6, 2);
    v0.arg(&v3, &v7);
    v3.new("helpNoneshim", 4);
    v6.long(&v3, "helpNoneshim", 4);
    v3.help(&v6, "Print help information.Only odd modulus are supported by the Montgomery form/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-modular-0.5.1/src/monty.rsattempt to shift right with negative/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint/shift.rs", 23);
    v6.action(&v3, 5);
    a0.arg(&v0, &v6);
    return a0;
}
