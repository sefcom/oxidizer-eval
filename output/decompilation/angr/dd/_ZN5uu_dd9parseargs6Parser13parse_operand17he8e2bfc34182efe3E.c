long long uu_dd::parseargs::Parser::parse_operand(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x88], Other Possible Types: char, unsigned long long
    char v1;  // [bp-0x80]
    char v2;  // [bp-0x7f]
    unsigned long v3;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long v4;  // [bp-0x70]
    unsigned long long v5[14];  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    char v8;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    char v11;  // [bp-0x38]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long v15;  // r14

    core::str::<impl str>::split_once(&v8, a2, a3);
    if (!v8)
    {
        a0->field_8.to_vec(a2, a3);
        a0->field_0 = 0;
        return a0;
    }
    if ((char)v8.equal(v9, "bscbscountibsififlagobsofoflagoseekiseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative0", 2))
    {
        v0.parse_bytes(v10, *((long long *)&v11));
        v13 = *((long long *)&v1);
        if (v0 != 14)
        {
            *((int128_t *)&a0->field_9[7]) = *((int128_t *)&v3);
            a0->field_0 = v0;
            *((unsigned long long *)&a0->field_8) = v13;
            return a0;
        }
        v5[0] = 1;
        v5[1] = v13;
    }
    else
    {
        v7 = v10;
        v6 = *((long long *)&v11);
        if ((char)v8.equal(v9, "cbscountibsififlagobsofoflagoseekiseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x", 3))
        {
            (char)v0.parse_bytes(v7, v6);
            v13 = *((long long *)&v1);
            if (v0 != 14)
            {
                *((int128_t *)&a0->field_9[7]) = *((int128_t *)&v3);
                a0->field_0 = v0;
                *((unsigned long long *)&a0->field_8) = v13;
                return a0;
            }
            v5[6] = 1;
            v5[7] = v13;
        }
        else
        {
            if ((char)v8.equal(v9, "convname", 4))
            {
                a1->field_c0 = 1;
                (char)v0.parse_conv_flags(a1, v7, v6);
                goto LABEL_4c8fd6;
            }
            if ((char)v8.equal(v9, "countibsififlagobsofoflagoseekiseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd", 5))
            {
                (char)v0.parse_n(v7, v6);
                v14 = *((long long *)&v1);
                if (v0 != 14)
                {
                    a0->field_0 = v0;
                    *((unsigned long long *)&a0->field_8) = v14;
                    *((unsigned long long *)&a0->field_9[7]) = v3;
                    *((unsigned long *)&a0->field_9[15]) = v4;
                    return a0;
                }
                v5[12] = *((long long *)&v1);
                v5[13] = v3;
            }
            else if ((char)v8.equal(v9, "ibsififlagobsofoflagoseekiseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warn", 3))
            {
                (char)v0.parse_bytes(v7, v6);
                v13 = *((long long *)&v1);
                if (v0 != 14)
                {
                    *((int128_t *)&a0->field_9[7]) = *((int128_t *)&v3);
                    a0->field_0 = v0;
                    *((unsigned long long *)&a0->field_8) = v13;
                    return a0;
                }
                v5[2] = 1;
                v5[3] = v13;
            }
            else
            {
                if ((char)v8.equal(v9, "ififlagobsofoflagoseekiseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning", 2))
                {
                    (char)v0.to_vec(v7, v6);
                    v15 = &a1->field_70;
                    ::0x4c8200::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v15);
                    goto LABEL_4c90ee;
                }
                if ((char)v8.equal(v9, "iflagobsofoflagoseekiseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-z", 5))
                {
                    (char)v0.parse_input_flags(a1, v7, v6);
                    goto LABEL_4c8fd6;
                }
                else if ((char)v8.equal(v9, "obsofoflagoseekiseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-zero-m", 3))
                {
                    (char)v0.parse_bytes(v7, v6);
                    v13 = *((long long *)&v1);
                    if (v0 != 14)
                    {
                        *((int128_t *)&a0->field_9[7]) = *((int128_t *)&v3);
                        a0->field_0 = v0;
                        *((unsigned long long *)&a0->field_8) = v13;
                        return a0;
                    }
                    v5[4] = 1;
                    v5[5] = v13;
                }
                else if ((char)v8.equal(v9, "ofoflagoseekiseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-zero-mult", 2))
                {
                    (char)v0.to_vec(v7, v6);
                    v15 = &a1->padding_88;
                    ::0x4c8200::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v15);
LABEL_4c90ee:
                    *((unsigned long *)(v15 + 16)) = v3;
                    *((int128_t *)v15) = *((int128_t *)&v0);
                }
                else if ((char)v8.equal(v9, "oflagoseekiseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-zero-multip", 5))
                {
                    (char)v0.parse_output_flags(a1, v7, v6);
LABEL_4c8fd6:
                    if (v0 != 14)
                    {
                        *((unsigned long *)&a0->field_9[15]) = v4;
                        *((int128_t *)&a0->field_8) = *((int128_t *)&v1);
                        a0->field_0 = v0;
                        return a0;
                    }
                }
                else if ((char)v8.equal(v9, "seeknonehelpNoneshimconvname", 4) || (char)v8.equal(v9, "oseekiseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-zero-multipliers", 5))
                {
                    (char)v0.parse_n(v7, v6);
                    v14 = *((long long *)&v1);
                    if (v0 != 14)
                    {
                        a0->field_0 = v0;
                        *((unsigned long long *)&a0->field_8) = v14;
                        *((unsigned long long *)&a0->field_9[7]) = v3;
                        *((unsigned long *)&a0->field_9[15]) = v4;
                        return a0;
                    }
                    v5[10] = *((long long *)&v1);
                    v5[11] = v3;
                }
                else if ((char)v8.equal(v9, "skip", 4) || (char)v8.equal(v9, "iseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-zero-multipliersrc/uu", 5))
                {
                    (char)v0.parse_n(v7, v6);
                    v14 = *((long long *)&v1);
                    if (v0 != 14)
                    {
                        a0->field_0 = v0;
                        *((unsigned long long *)&a0->field_8) = v14;
                        *((unsigned long long *)&a0->field_9[7]) = v3;
                        *((unsigned long *)&a0->field_9[15]) = v4;
                        return a0;
                    }
                    v5[8] = *((long long *)&v1);
                    v5[9] = v3;
                }
                else if ((char)v8.equal(v9, "statusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-zero-multipliersrc/uu/dd/s", 6))
                {
                    (char)v0.parse_status_level(v7, v6);
                    if (v0 != 14)
                    {
                        *((unsigned long *)&a0->field_9[15]) = v4;
                        *((int128_t *)&a0->field_9[0]) = *((int128_t *)&v2);
                        a0->field_0 = v0;
                        a0->field_8 = v1;
                        return a0;
                    }
                    a1->field_d0 = v1;
                }
                else
                {
                    a0->field_8.to_vec(a2, a3);
                    a0->field_0 = 0;
                    return a0;
                }
            }
        }
    }
    a0->field_0 = 14;
    return a0;
}
