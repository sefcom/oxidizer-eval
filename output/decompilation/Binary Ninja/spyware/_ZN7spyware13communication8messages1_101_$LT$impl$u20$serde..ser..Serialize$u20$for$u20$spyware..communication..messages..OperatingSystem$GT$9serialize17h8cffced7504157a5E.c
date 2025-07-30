
  int32_t* spyware::communication::messages::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..OperatingSystem$GT$::serialize::h8cffced7504157a5(int32_t* arg1, char* arg2, int64_t* arg3)

{
    int64_t var_18;
    int64_t* rsi;
    int32_t* rdi;
    int64_t r8;
    char const* const r9;
    
    switch (*arg2)
    {
        case 0:
        {
            var_18 = 7;
            r9 = "WindowsLinuxFreeBSDMacOSIOSAndro…";
            rdi = arg1;
            rsi = arg3;
            r8 = 0;
            break;
        }
        case 1:
        {
            var_18 = 5;
            r9 = "LinuxFreeBSDMacOSIOSAndroidUnkno…";
            rdi = arg1;
            rsi = arg3;
            r8 = 1;
            break;
        }
        case 2:
        {
            var_18 = 7;
            r9 = "FreeBSDMacOSIOSAndroidUnknownArc…";
            rdi = arg1;
            rsi = arg3;
            r8 = 2;
            break;
        }
        case 3:
        {
            var_18 = 5;
            r9 = "MacOSIOSAndroidUnknownArchitectu…";
            rdi = arg1;
            rsi = arg3;
            r8 = 3;
            break;
        }
        case 4:
        {
            var_18 = 3;
            r9 = "IOSAndroidUnknownArchitecturex86…";
            rdi = arg1;
            rsi = arg3;
            r8 = 4;
            break;
        }
        case 5:
        {
            var_18 = 7;
            r9 = "AndroidUnknownArchitecturex86x86…";
            rdi = arg1;
            rsi = arg3;
            r8 = 5;
            break;
        }
        case 6:
        {
            var_18 = 7;
            r9 = "UnknownArchitecturex86x86_64powe…";
            rdi = arg1;
            rsi = arg3;
            r8 = 6;
            break;
        }
    }
    
    _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h6d2e4e9ce69f5df2(rdi, rsi, "OperatingSystemWindowsLinuxFreeB…", 0xf, r8, r9, var_18);
    return arg1;
}
