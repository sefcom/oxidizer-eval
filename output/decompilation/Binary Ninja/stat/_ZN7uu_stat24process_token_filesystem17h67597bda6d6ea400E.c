
  void* uu_stat::process_token_filesystem::h67597bda6d6ea400(int64_t* arg1, int64_t* arg2, int64_t arg3, uint64_t arg4)

{
    int64_t rcx = *arg1;
    int64_t r8 = 2;
    
    if (rcx - 3 < 2)
        r8 = rcx - 3;
    
    int32_t* var_78;
    void* const var_58;
    
    if (!r8)
    {
        int32_t var_5c = arg1[1];
        var_78 = &var_5c;
        int64_t (* var_70_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
        var_58 = &data_41ab40;
        int64_t var_50_1 = 1;
        int64_t var_38_1 = 0;
        int32_t** var_48_1 = &var_78;
        int64_t var_40_1 = 1;
        return std::io::stdio::_print::h5e446ff973c02de6(&var_58);
    }
    
    if (r8 == 1)
        /* tailcall */
        return uu_stat::write_raw_byte::hbbf81da3232f2130(arg1[1]);
    
    uint64_t rsi_3 = arg1[4] << 0x20 | *(arg1 + 0x1c);
    uint64_t r8_2 = arg1[1];
    int64_t rdx_2 = arg1[2];
    uint64_t rdi_4 = arg1[3] - 0x53;
    int64_t rax_6;
    
    if (rdi_4 > 0x21)
        var_78 = -0x8000000000000005;
    else
        switch (rdi_4)
        {
            case 0:
            {
                int64_t var_70_2 = arg2[1];
                var_78 = -0x8000000000000000;
                break;
            }
            case 1:
            {
                uucore::features::fsext::pretty_fstype::h1889f022e4b32583(&var_58, *arg2);
                _$LT$alloc..string..String$u20$as$u20$core..convert..From$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$::from::hf538378189c0d550(&var_78, &var_58);
                rcx = rcx;
                break;
            }
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 0xa:
            case 0xb:
            case 0xc:
            case 0xd:
            case 0x12:
            case 0x14:
            case 0x15:
            case 0x17:
            case 0x18:
            case 0x1a:
            case 0x1c:
            case 0x1d:
            case 0x1e:
            case 0x1f:
            {
                var_78 = -0x8000000000000005;
                break;
            }
            case 0xe:
            {
                rax_6 = arg2[4];
                goto label_474322;
            }
            case 0xf:
            {
                rax_6 = arg2[2];
                goto label_474322;
            }
            case 0x10:
            {
                rax_6 = arg2[5];
                goto label_474322;
            }
            case 0x11:
            {
                rax_6 = arg2[6];
                goto label_474322;
            }
            case 0x13:
            {
                rax_6 = arg2[3];
                goto label_474322;
            }
            case 0x16:
            {
                uint64_t var_70_4 = *(arg2 + 0x3c) | arg2[7] << 0x20;
                var_78 = -0x8000000000000002;
                break;
            }
            case 0x19:
            {
                rax_6 = arg2[8];
                goto label_474322;
            }
            case 0x1b:
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(&var_78, arg3, arg4);
                rcx = rcx;
                break;
            }
            case 0x20:
            {
                rax_6 = arg2[9];
                label_474322:
                int64_t var_70_5 = rax_6;
                var_78 = -0x8000000000000001;
                break;
            }
            case 0x21:
            {
                int64_t var_70_3 = *arg2;
                var_78 = -0x8000000000000002;
                break;
            }
        }
    uu_stat::print_it::hbae1e67489e4141f(&var_78, rsi_3, rdx_2, rcx, r8_2);
    return core::ptr::drop_in_place$LT$uu_stat..OutputType$GT$::h618762e13dd348ef(&var_78);
}
