
  fn spyware::communication::messages::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..Architecture$GT$::serialize::ha11211a0fbb1410a(arg1: *mut i32, arg2: *mut i8, arg3: *mut i64) -> *mut i32

{
    let mut var_18: i64;
    let mut rsi: *mut i64;
    let mut rdi: *mut i32;
    let mut r8: i64;
    let mut r9: *const i8;
    
    match *arg2
    {
        0 =>
        {
            var_18 = 3;
            r9 = "x86x86_64powerpcpowerpc64armaarc…";
            rdi = arg1;
            rsi = arg3;
            r8 = 0;
        }
        1 =>
        {
            var_18 = 6;
            r9 = "x86_64powerpcpowerpc64armaarch64…";
            rdi = arg1;
            rsi = arg3;
            r8 = 1;
        }
        2 =>
        {
            var_18 = 4;
            r9 = "mips    NOEXi128 as dyn WARNfals…";
            rdi = arg1;
            rsi = arg3;
            r8 = 2;
        }
        3 =>
        {
            var_18 = 7;
            r9 = "powerpcpowerpc64armaarch64Pointe…";
            rdi = arg1;
            rsi = arg3;
            r8 = 3;
        }
        4 =>
        {
            var_18 = 9;
            r9 = "powerpc64armaarch64PointerWidthB…";
            rdi = arg1;
            rsi = arg3;
            r8 = 4;
        }
        5 =>
        {
            var_18 = 3;
            r9 = "armaarch64PointerWidthBit32Bit64…";
            rdi = arg1;
            rsi = arg3;
            r8 = 5;
        }
        6 =>
        {
            var_18 = 7;
            r9 = "aarch64PointerWidthBit32Bit64Get…";
            rdi = arg1;
            rsi = arg3;
            r8 = 6;
        }
    }
    
    _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h6d2e4e9ce69f5df2(rdi, rsi, "Architecturex86x86_64powerpcpowe…", 0xc, r8, r9, var_18);
    arg1
}
