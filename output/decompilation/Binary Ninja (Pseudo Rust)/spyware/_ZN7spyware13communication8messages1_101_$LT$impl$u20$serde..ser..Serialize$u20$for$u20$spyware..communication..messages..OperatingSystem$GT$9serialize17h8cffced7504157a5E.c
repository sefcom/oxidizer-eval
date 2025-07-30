
  fn spyware::communication::messages::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..OperatingSystem$GT$::serialize::h8cffced7504157a5(arg1: *mut i32, arg2: *mut i8, arg3: *mut i64) -> *mut i32

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
            var_18 = 7;
            r9 = "WindowsLinuxFreeBSDMacOSIOSAndro…";
            rdi = arg1;
            rsi = arg3;
            r8 = 0;
        }
        1 =>
        {
            var_18 = 5;
            r9 = "LinuxFreeBSDMacOSIOSAndroidUnkno…";
            rdi = arg1;
            rsi = arg3;
            r8 = 1;
        }
        2 =>
        {
            var_18 = 7;
            r9 = "FreeBSDMacOSIOSAndroidUnknownArc…";
            rdi = arg1;
            rsi = arg3;
            r8 = 2;
        }
        3 =>
        {
            var_18 = 5;
            r9 = "MacOSIOSAndroidUnknownArchitectu…";
            rdi = arg1;
            rsi = arg3;
            r8 = 3;
        }
        4 =>
        {
            var_18 = 3;
            r9 = "IOSAndroidUnknownArchitecturex86…";
            rdi = arg1;
            rsi = arg3;
            r8 = 4;
        }
        5 =>
        {
            var_18 = 7;
            r9 = "AndroidUnknownArchitecturex86x86…";
            rdi = arg1;
            rsi = arg3;
            r8 = 5;
        }
        6 =>
        {
            var_18 = 7;
            r9 = "UnknownArchitecturex86x86_64powe…";
            rdi = arg1;
            rsi = arg3;
            r8 = 6;
        }
    }
    
    _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h6d2e4e9ce69f5df2(rdi, rsi, "OperatingSystemWindowsLinuxFreeB…", 0xf, r8, r9, var_18);
    arg1
}
