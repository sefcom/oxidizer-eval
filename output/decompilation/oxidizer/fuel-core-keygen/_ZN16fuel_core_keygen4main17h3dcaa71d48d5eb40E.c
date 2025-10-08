fn fuel_core_keygen::main() -> long long {
    let v0: struct34;  // [bp-0x70]
    let v1: struct32;  // [bp-0x70]
    let v2: struct32;  // [bp-0x48]
    let v3: struct32;  // [bp-0x28]
    let v5: u64;  // rax

    v3 = clap_builder::derive::Parser::parse();
    v0 = fuel_core_keygen::Command::exec(&v3);
    if *((&v0.field_16 as &char + 8) as &i8) != 2 {
        v2 = v1;
        v5 = fuel_core_keygen::print_value(&v2, *((&v0.field_16 as &char + 8) as &i8));
    }
    return v5;
}
