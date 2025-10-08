long long uu_stat::Stater::process_token_files(unsigned long long a0[12], void* a1, struct_0 *a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned int a6, char a7)
{
    char v0;  // [bp-0x188]
    unsigned long long v1;  // [bp-0x188]
    unsigned long long v2;  // [bp-0x188]
    unsigned long long v3;  // [bp-0x188]
    unsigned long long v4;  // [bp-0x188]
    unsigned int v5;  // [bp-0x180], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v6;  // [bp-0x17c]
    unsigned long long v7;  // [bp-0x178]
    unsigned int v8;  // [bp-0x174]
    char v9;  // [bp-0x168], Other Possible Types: unsigned long
    unsigned int v10;  // [bp-0x164]
    char v11;  // [bp-0x160], Other Possible Types: unsigned long long
    char v12;  // [bp-0x15c]
    char *v13;  // [bp-0x158], Other Possible Types: char
    unsigned long long v14;  // [bp-0x158], Other Possible Types: unsigned long
    unsigned int v15;  // [bp-0x154]
    unsigned long long v16;  // [bp-0x150]
    void* v17;  // [bp-0x148]
    unsigned int v18;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x130]
    unsigned long long v20;  // [bp-0x120]
    char *v21;  // [bp-0x118], Other Possible Types: char
    unsigned long long v22;  // [bp-0x110]
    char *v23;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v24;  // [bp-0x100]
    unsigned long long v25;  // [bp-0xf8]
    unsigned int v26;  // [bp-0xf0]
    char v27;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v28;  // [bp-0xe0]
    unsigned long long v29;  // [bp-0xd8]
    char v30;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v31;  // [bp-0xc8]
    unsigned long long v32;  // [bp-0xc0]
    unsigned long long v33;  // [bp-0xb8]
    char v34;  // [bp-0xb0], Other Possible Types: unsigned long
    char v35;  // [bp-0xa8]
    unsigned long v36;  // rbx
    unsigned long long v37;  // r10
    unsigned long v38;  // rbp
    unsigned long v39;  // r15
    unsigned long v40;  // r14
    unsigned long v41;  // r12
    unsigned long long v42;  // rsi
    unsigned long v43;  // rdx
    unsigned long long v44;  // rax
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax
    unsigned int v47;  // edx
    unsigned long long v48;  // rax
    unsigned long long v49;  // rsi
    unsigned long long v50;  // rax
    unsigned int v51;  // eax
    unsigned long long v52;  // rdx
    int v53;  // xmm0
    int v54;  // xmm1

    v36 = *((long long *)a1);
    v37 = v36 - 3;
    if (v37 >= 2)
        v37 = 2;
    if (!v37)
    {
        v18 = (int)a1[8];
        v21 = &v18;
        v22 = <char as core::fmt::Display>::fmt;
        v9 = &g_41ab40;
        v11 = 1;
        v17 = 0;
        v13 = &v21;
        v16 = 1;
        std::io::stdio::_print(&(char)v9);
        return 0;
    }
    else if (v37 == 1)
    {
        uu_stat::write_raw_byte((int)a1[8]);
        return 0;
    }
    else
    {
        v38 = (int)a1[28];
        v39 = (int)a1[32];
        v40 = (long long)a1[8];
        v41 = (long long)a1[16];
        switch ((int)a1[24])
        {
        case 65:
            uucore::features::fs::display_permissions(&(char)v3, a2, 1);
            break;
        case 66:
            v5 = 0x200;
            goto LABEL_476c21;
        case 67:
            v0.to_vec("unsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat ", 37);
            break;
        case 68:
            v48 = a2->field_20;
LABEL_476a5d:
            v5 = v48;
            v50 = 9223372036854775810;
            goto LABEL_476c2b;
        case 70:
            uucore::features::fsext::pretty_filetype(&v0, a2->field_38, a2->field_50);
            break;
        case 71:
            v9.locate(a2->field_40);
            if (*((long long *)&v9) == 0x8000000000000000)
            {
                uu_stat::Stater::process_token_files::{{closure}}(&v27, *((long long *)&v11));
            }
            else
            {
                v27 = *((long long *)&v9);
                v28 = *((long long *)&v11);
                v29 = *((long long *)&v13);
            }
            v7 = v29;
            v2 = v27;
            v5 = v28;
            break;
        case 72:
            v44 = a2->field_48 >> 8;
            goto LABEL_476c1c;
        case 76:
            v44 = (char)a2->field_48;
            goto LABEL_476c1c;
        case 78:
            uu_stat::get_quoted_file_name(&v9, a3, a4, a5, a6, a7);
            v46 = *((long long *)&v9);
            v47 = *((int *)&v11);
            if (v46 == 0x8000000000000000)
                return 1;
            v8 = v15;
            v6 = *((long long *)&v12);
            v4 = v46;
            v5 = v47;
            break;
        case 82:
            v33 = a2->field_48 >> 8;
            v18 = a2->field_48 & 4294967295;
            v21 = &v33;
            v22 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
            v23 = &v18;
            v24 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
            v9 = &g_519f98;
            v11 = 2;
            v17 = 0;
            v13 = &v21;
            v16 = 2;
            v0.map_or_else(&(char)v9);
            break;
        case 84:
            v48 = (char)a2->field_48;
            goto LABEL_476a5d;
        case 85:
            v34.locate(a2->field_3c);
            if (v34 == 0x8000000000000000)
            {
                v49 = *((long long *)&v35);
LABEL_476c8b:
                uu_stat::Stater::process_token_files::{{closure}}(&v30, v49);
            }
            else
            {
                uucore::features::entries::uid2usr::{{closure}}(&v9, &v34);
                v49 = *((long long *)&v11);
                if (*((long long *)&v9) == 0x8000000000000000)
                    goto LABEL_476c8b;
                v30 = *((long long *)&v9);
                v31 = *((long long *)&v11);
                v32 = *((long long *)&v13);
            }
            v7 = v32;
            v1 = v30;
            v5 = v31;
            break;
        case 87:
            v9.birth(a2);
            v44 = (!v9 ? 0 : *((long long *)&v11));
            goto LABEL_476c1c;
        case 88:
            v45 = a2->field_68;
            goto LABEL_476bd4;
        case 89:
            v9.from_timestamp(a2->field_78, (unsigned int)a2->field_80);
            if (*((int *)&v9))
            {
                v26 = *((int *)&v11);
                v25 = *((long long *)&v9);
            }
            else
            {
                (char)v25.default();
            }
            v9.from(&v25);
            if (!((char)v9.timestamp_nanos_opt() & 1))
            {
                v51 = *((int *)&v9).num_days_from_ce();
                v52 = *((int *)&v11) / 1000 + ((v51 - 719163) * 86400 + v10) * 1000000;
            }
            v5 = (unsigned long long)(DivV(v54 & 0xffffffffffffffff0000000000000000 | v52, v53));
            v50 = 9223372036854775812;
            goto LABEL_476c2b;
        case 90:
            v45 = a2->field_88;
            goto LABEL_476bd4;
        case 97:
            v5 = 4095 & a2->field_38;
            v50 = 9223372036854775811;
            goto LABEL_476c2b;
        case 98:
            v44 = a2->field_60;
            goto LABEL_476c1c;
        case 100:
            v44 = a2->field_20;
            goto LABEL_476c1c;
        case 102:
            v48 = a2->field_38;
            goto LABEL_476a5d;
        case 103:
            v44 = a2->field_40;
            goto LABEL_476c1c;
        case 104:
            v44 = a2->field_30;
            goto LABEL_476c1c;
        case 105:
            v44 = a2->field_28;
            goto LABEL_476c1c;
        case 109:
            v9.find_mount_point(a0, a5);
            if (*((long long *)&v9) == 0x8000000000000000)
                core::option::unwrap_failed(&g_519fb8); /* do not return */
            v7 = *((long long *)&v13);
            memcpy(&v0, &v9, 16);
            break;
        case 110:
            v0.to_vec(a3, a4);
            break;
        case 111:
            v44 = a2->field_58;
            goto LABEL_476c1c;
        case 114:
            v44 = a2->field_48;
LABEL_476c1c:
            v5 = v44;
LABEL_476c21:
            v50 = 9223372036854775809;
LABEL_476c2b:
            v3 = v50;
            break;
        case 115:
            v45 = a2->field_50;
LABEL_476bd4:
            v5 = v45;
            v50 = 0x8000000000000000;
            goto LABEL_476c2b;
        case 116:
            v48 = a2->field_48 >> 8;
            goto LABEL_476a5d;
        case 117:
            v44 = a2->field_3c;
            goto LABEL_476c1c;
        case 119:
            v9.birth(a2);
            if ((v9 & 1))
                uu_stat::pretty_time(&(char)v19, *((long long *)&v11), *((int *)&v13));
            else
                v19 = 0x8000000000000000;
            v9.to_vec("-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat ", 1);
            v23 = *((long long *)&v13);
            memcpy(&v21, &v9, 16);
            if (v19 == 0x8000000000000000)
            {
                v14 = v23;
                memcpy(&v9, &v21, 16);
            }
            else
            {
                v14 = v20;
                memcpy(&v9, &(char)v19, 16);
                core::ptr::drop_in_place<alloc::string::String>(&v21);
            }
            memcpy(&v0, &v9, 16);
            v7 = v14;
            break;
        case 120:
            v42 = a2->field_68;
            v43 = a2->field_70;
LABEL_476997:
            uu_stat::pretty_time(&v0, v42, v43);
            break;
        case 121:
            v42 = a2->field_78;
            v43 = a2->field_80;
            goto LABEL_476997;
        case 122:
            v42 = a2->field_88;
            v43 = a2->field_90;
            goto LABEL_476997;
        default:
            v50 = 9223372036854775813;
            goto LABEL_476c2b;
        }
        uu_stat::print_it(&(char)v3, v39 * 0x100000000 | v38, v41, v36, v40);
        core::ptr::drop_in_place<uu_stat::OutputType>(&(char)v3);
        return 0;
    }
}
