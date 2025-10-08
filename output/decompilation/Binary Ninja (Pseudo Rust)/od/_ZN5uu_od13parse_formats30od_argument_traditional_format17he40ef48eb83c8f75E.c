
  fn uu_od::parse_formats::od_argument_traditional_format::he40ef48eb83c8f75(arg1: *mut i64, arg2: i32)

{
    let rsi: u64 = arg2 - 0x42;
    
    if rsi <= 0x36
    {
        match rsi
        {
            0 | 0x2d =>
            {
                uu_od::prn_int::FORMAT_ITEM_OCT16::h4b4b8bb8a5e43dd2;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x40\xe0\x46\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
            }
            2 =>
            {
                uu_od::prn_int::FORMAT_ITEM_DEC32U::h251bc30c385722e3;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x50\xe5\x46\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
            }
            4 | 0x23 =>
            {
                uu_od::prn_float::FORMAT_ITEM_F64::h4e1465f7b339c48c;
                __builtin_memcpy(arg1, 
                    "\x01\x00\x00\x00\x00\x00\x00\x00\xd0\xb4\x46\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x19\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
            }
            6 | 0x16 =>
            {
                uu_od::prn_int::FORMAT_ITEM_HEX32::hebeb94f8b43a7b87;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x10\xe3\x46\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
            }
            7 | 0xa | 0x2a =>
            {
                uu_od::prn_int::FORMAT_ITEM_DEC64S::h9e672e2970b254d0;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x20\xe8\x46\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x15\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
            }
            0xd =>
            {
                uu_od::prn_int::FORMAT_ITEM_OCT32::hd4b8fb69527230c4;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\xd0\xe0\x46\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x0c\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
            }
            0x1f =>
            {
                uu_od::prn_char::FORMAT_ITEM_A::h29fa15115d588c40;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\xd0\xaf\x46\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
            }
            0x20 =>
            {
                uu_od::prn_int::FORMAT_ITEM_OCT8::hef2644addd76c9d6;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\xb0\xdf\x46\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
            }
            0x21 =>
            {
                uu_od::prn_char::FORMAT_ITEM_C::h76f27ef44ba1df33;
                __builtin_memcpy(arg1, 
                    "\x02\x00\x00\x00\x00\x00\x00\x00\x60\xb0\x46\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
            }
            0x22 =>
            {
                uu_od::prn_int::FORMAT_ITEM_DEC16U::h6e396b4e07fb8bfe;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\xc0\xe4\x46\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
            }
            0x24 =>
            {
                uu_od::prn_float::FORMAT_ITEM_F32::h2b02f4fac18bca9f;
                __builtin_memcpy(arg1, 
                    "\x01\x00\x00\x00\x00\x00\x00\x00\x30\xb4\x46\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
            }
            0x26 | 0x36 =>
            {
                uu_od::prn_int::FORMAT_ITEM_HEX16::ha7e4a2841f632ddb;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x80\xe2\x46\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
            }
            0x27 =>
            {
                uu_od::prn_int::FORMAT_ITEM_DEC32S::haa02e5dadb165856;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x90\xe7\x46\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x0c\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
            }
            0x31 =>
            {
                uu_od::prn_int::FORMAT_ITEM_DEC16S::h46c3b88def1c89e5;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\xe7\x46\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
            }
        }
    }
    
    *arg1 = 3;
}
