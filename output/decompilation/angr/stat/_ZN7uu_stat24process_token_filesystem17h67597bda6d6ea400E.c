long long uu_stat::process_token_filesystem(void* a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    char *v0;  // [bp-0x78], Other Possible Types: unsigned long long (64 bits)[1]
    unsigned long long v1;  // [bp-0x78]
    unsigned long v2;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned int v3;  // [bp-0x5c]
    char v4;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x50]
    char *v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    void* v8;  // [bp-0x38]
    unsigned long v10;  // rcx
    unsigned long long v11;  // r9
    unsigned long long v12;  // rsi
    unsigned long v13;  // r8
    unsigned long v14;  // rdx
    unsigned long long v15;  // rax
    unsigned long v16;  // rax

    v10 = *((long long *)a0);
    v11 = v10 - 3;
    if (v11 >= 2)
        v11 = 2;
    if (!v11)
    {
        v3 = (int)a0[8];
        v0 = &v3;
        v2 = <char as core::fmt::Display>::fmt;
        v4 = &g_41ab40;
        v5 = 1;
        v8 = 0;
        v6 = &v0;
        v7 = 1;
        return std::io::stdio::_print(&v4);
    }
    if (v11 == 1)
        return (unsigned long long)uu_stat::write_raw_byte((int)a0[8]);
    v12 = (int)a0[32] * 0x100000000 | (int)a0[28];
    v13 = (long long)a0[8];
    v14 = (long long)a0[16];
    switch ((int)a0[24])
    {
    case 83:
        v2 = a1->field_8;
        v15 = 0x8000000000000000;
        goto LABEL_474331;
    case 84:
        uucore::features::fsext::pretty_fstype(&v4, a1->field_0);
        v0.from(&v4);
        goto LABEL_474319;
    case 97:
        v16 = a1->field_20;
        break;
    case 98:
        v16 = a1->field_10;
        break;
    case 99:
        v16 = a1->field_28;
        break;
    case 100:
        v16 = a1->field_30;
        break;
    case 102:
        v16 = a1->field_18;
        break;
    case 105:
        v2 = a1->field_3c | a1->field_38 * 0x100000000;
LABEL_4742db:
        v15 = 9223372036854775810;
        goto LABEL_474331;
    case 108:
        v16 = a1->field_40;
        break;
    case 110:
        v0.to_vec(a2, a3);
LABEL_474319:
    case 115:
        v16 = a1->field_48;
        break;
    case 116:
        v2 = a1->field_0;
        goto LABEL_4742db;
    default:
        v15 = 9223372036854775813;
LABEL_474331:
        v1 = v15;
    }
}
