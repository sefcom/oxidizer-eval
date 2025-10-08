long long uu_dd::parseargs::Parser::parse_operand(void* a0, char a1[209], unsigned long long a2, unsigned long long a3)
{
    struct_0 *v0;  // [bp-0x88]
    char v1;  // [bp-0x80], Other Possible Types: unsigned long long
    char v2;  // [bp-0x78]
    char v3;  // [bp-0x77]
    unsigned long long v4;  // [bp-0x70], Other Possible Types: unsigned long
    unsigned long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    char v8;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    char v11;  // [bp-0x38]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax

    core::str::<impl str>::split_once(&v8, a2, a3);
    if (!v8)
    {
        a0 + 8.to_vec(a2, a3);
        *((unsigned long long *)a0) = 0;
        return a0;
    }
    if ((char)v8.equal(v9, "bscbscountibsififlagobsofoflagoseekiseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zer", 2))
    {
        v1.parse_bytes(v10, *((long long *)&v11));
        v13 = *((long long *)&v2);
        if (v1 != 14)
        {
            *((int128_t *)&a0[16]) = *((int128_t *)&v4);
            *((unsigned long long *)a0) = v1;
            *((unsigned long long *)&a0[8]) = v13;
            return a0;
        }
        v0->field_0 = 1;
        v0->field_8 = v13;
    }
    else
    {
        v7 = v10;
        v6 = *((long long *)&v11);
        if ((char)v8.equal(v9, "cbscountibsififlagobsofoflagoseekiseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero ", 3))
        {
            v1.parse_bytes(v7, v6);
            v13 = *((long long *)&v2);
            if (v1 != 14)
            {
                *((int128_t *)&a0[16]) = *((int128_t *)&v4);
                *((unsigned long long *)a0) = v1;
                *((unsigned long long *)&a0[8]) = v13;
                return a0;
            }
            v0->field_30 = 1;
            v0->field_38 = v13;
        }
        else
        {
            if ((char)v8.equal(v9, "conv", 4))
            {
                a1[192] = 1;
                v1.parse_conv_flags(a1, v7, v6);
                goto LABEL_48cf36;
            }
            if ((char)v8.equal(v9, "countibsififlagobsofoflagoseekiseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero mul", 5))
            {
                v1.parse_n(v7, v6);
                v14 = *((long long *)&v2);
                if (v1 != 14)
                {
                    *((unsigned long long *)a0) = v1;
                    *((unsigned long long *)&a0[8]) = v14;
                    *((unsigned long long *)&a0[16]) = v4;
                    *((unsigned long *)&a0[24]) = v5;
                    return a0;
                }
                v0->field_60 = *((long long *)&v2);
                v0->field_68 = v4;
            }
            else if ((char)v8.equal(v9, "ibsififlagobsofoflagoseekiseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multipli", 3))
            {
                v1.parse_bytes(v7, v6);
                v13 = *((long long *)&v2);
                if (v1 != 14)
                {
                    *((int128_t *)&a0[16]) = *((int128_t *)&v4);
                    *((unsigned long long *)a0) = v1;
                    *((unsigned long long *)&a0[8]) = v13;
                    return a0;
                }
                v0->field_10 = 1;
                v0->field_18 = v13;
            }
            else if ((char)v8.equal(v9, "ififlagobsofoflagoseekiseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier;", 2))
            {
                v1.to_vec(v7, v6);
                core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v0->field_70);
                v0->field_80 = v4;
                v0->field_70 = *((int128_t *)&v1);
            }
            else if ((char)v8.equal(v9, "iflagobsofoflagoseekiseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; u", 5))
            {
                v1.parse_input_flags(a1, v7, v6);
                goto LABEL_48cf36;
            }
            else if ((char)v8.equal(v9, "obsofoflagoseekiseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  i", 3))
            {
                v1.parse_bytes(v7, v6);
                v13 = *((long long *)&v2);
                if (v1 != 14)
                {
                    *((int128_t *)&a0[16]) = *((int128_t *)&v4);
                    *((unsigned long long *)a0) = v1;
                    *((unsigned long long *)&a0[8]) = v13;
                    return a0;
                }
                v0->field_20 = 1;
                v0->field_28 = v13;
            }
            else if ((char)v8.equal(v9, "ofoflagoseekiseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if t", 2))
            {
                v1.to_vec(v7, v6);
                core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&(&v0->field_80)[1]);
                *((unsigned long *)((char *)&v0->field_88 + 8)) = v4;
                *((int128_t *)&(&v0->field_80)[1]) = *((int128_t *)&v1);
            }
            else if ((char)v8.equal(v9, "oflagoseekiseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if tha", 5))
            {
                v1.parse_output_flags(a1, v7, v6);
LABEL_48cf36:
                if (v1 != 14)
                {
                    *((unsigned long *)&a0[24]) = v5;
                    *((int128_t *)&a0[8]) = *((int128_t *)&v2);
                    *((unsigned long long *)a0) = v1;
                    return a0;
                }
            }
            else if ((char)v8.equal(v9, "seeknonehelpNoneshimconv", 4) || (char)v8.equal(v9, "oseekiseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is ", 5))
            {
                (char)v1.parse_n(v7, v6);
                v14 = *((long long *)&v2);
                if (v1 != 14)
                {
                    *((unsigned long long *)a0) = v1;
                    *((unsigned long long *)&a0[8]) = v14;
                    *((unsigned long long *)&a0[16]) = v4;
                    *((unsigned long *)&a0[24]) = v5;
                    return a0;
                }
                v0->field_50 = *((long long *)&v2);
                v0->field_58 = v4;
            }
            else if ((char)v8.equal(v9, "skip", 4) || (char)v8.equal(v9, "iseekstatusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is inten", 5))
            {
                (char)v1.parse_n(v7, v6);
                v14 = *((long long *)&v2);
                if (v1 != 14)
                {
                    *((unsigned long long *)a0) = v1;
                    *((unsigned long long *)&a0[8]) = v14;
                    *((unsigned long long *)&a0[16]) = v4;
                    *((unsigned long *)&a0[24]) = v5;
                    return a0;
                }
                v0->field_40 = *((long long *)&v2);
                v0->field_48 = v4;
            }
            else if ((char)v8.equal(v9, "statusnoxferciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0x00x is a zero multiplier; use  if that is intended\ns", 6))
            {
                v1.parse_status_level(v7, v6);
                if (v1 != 14)
                {
                    *((unsigned long *)&a0[24]) = v5;
                    *((int128_t *)&a0[9]) = *((int128_t *)&v3);
                    *((unsigned long long *)a0) = v1;
                    *((char *)&a0[8]) = v2;
                    return a0;
                }
                a1[208] = v2;
            }
            else
            {
                a0 + 8.to_vec(a2, a3);
                *((unsigned long long *)a0) = 0;
                return a0;
            }
        }
    }
    *((unsigned long long *)a0) = 14;
    return a0;
}
