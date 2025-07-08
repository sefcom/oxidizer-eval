
  void uu_od::parse_formats::od_argument_traditional_format::h14da6a638cd1f622(int64_t* arg1, int32_t arg2)

{
    uint64_t rsi = arg2 - 0x42;
    
    if (rsi <= 0x36)
        switch (rsi)
        {
            case 0:
            case 0x2d:
            {
                uu_od::prn_int::FORMAT_ITEM_OCT16::h64be8d56f8dc029e;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\xf0\xf8\x4c\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
                break;
            }
            case 2:
            {
                uu_od::prn_int::FORMAT_ITEM_DEC32U::h66dd6ebd2b5b827b;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x20\x00\x4d\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
                break;
            }
            case 4:
            case 0x23:
            {
                uu_od::prn_float::FORMAT_ITEM_F64::h1192afa7d58a8f0b;
                __builtin_memcpy(arg1, 
                    "\x01\x00\x00\x00\x00\x00\x00\x00\x70\x4f\x4d\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x19\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
                break;
            }
            case 6:
            case 0x16:
            {
                uu_od::prn_int::FORMAT_ITEM_HEX32::h92607dc086bd3a3c;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\xfd\x4c\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
                break;
            }
            case 7:
            case 0xa:
            case 0x2a:
            {
                uu_od::prn_int::FORMAT_ITEM_DEC64S::h280693cf35e81ac1;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x10\x04\x4d\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x15\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
                break;
            }
            case 0xd:
            {
                uu_od::prn_int::FORMAT_ITEM_OCT32::h9bef40526ea9d661;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\xc0\xf9\x4c\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x0c\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
                break;
            }
            case 0x1f:
            {
                uu_od::prn_char::FORMAT_ITEM_A::h977264a75b7e76ca;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x90\x56\x4d\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
                break;
            }
            case 0x20:
            {
                uu_od::prn_int::FORMAT_ITEM_OCT8::h748c95f91b186723;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x20\xf8\x4c\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
                break;
            }
            case 0x21:
            {
                uu_od::prn_char::FORMAT_ITEM_C::h57e7d318a2a74d25;
                __builtin_memcpy(arg1, 
                    "\x02\x00\x00\x00\x00\x00\x00\x00\x50\x57\x4d\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
                break;
            }
            case 0x22:
            {
                uu_od::prn_int::FORMAT_ITEM_DEC16U::he4343001f7f4b894;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x60\xff\x4c\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
                break;
            }
            case 0x24:
            {
                uu_od::prn_float::FORMAT_ITEM_F32::hc4bad83f49247534;
                __builtin_memcpy(arg1, 
                    "\x01\x00\x00\x00\x00\x00\x00\x00\xb0\x4e\x4d\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
                break;
            }
            case 0x26:
            case 0x36:
            {
                uu_od::prn_int::FORMAT_ITEM_HEX16::h332dd71c6e61e864;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x30\xfc\x4c\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
                break;
            }
            case 0x27:
            {
                uu_od::prn_int::FORMAT_ITEM_DEC32S::h4b58f3efff8e46b5;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x40\x03\x4d\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x0c\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
                break;
            }
            case 0x31:
            {
                uu_od::prn_int::FORMAT_ITEM_DEC16S::h82d4416181fcc583;
                __builtin_memcpy(arg1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x70\x02\x4d\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00", 0x20);
                return;
                break;
            }
        }
    
    *arg1 = 3;
}
