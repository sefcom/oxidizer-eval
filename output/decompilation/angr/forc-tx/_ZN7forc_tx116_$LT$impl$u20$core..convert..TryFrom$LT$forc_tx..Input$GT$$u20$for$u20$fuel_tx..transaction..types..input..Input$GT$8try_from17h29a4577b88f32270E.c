long long forc_tx::<impl core::convert::TryFrom<forc_tx::Input> for fuel_tx::transaction::types::input::Input>::try_from(struct_0 *a0, unsigned long a1)
{
    unsigned int v0;  // [bp-0x1c4]
    unsigned long v1;  // [bp-0x1c0]
    unsigned long v2;  // [bp-0x1b8], Other Possible Types: unsigned int
    unsigned long v3;  // [bp-0x1b0]
    unsigned long v4;  // [bp-0x1a8]
    unsigned long v5;  // [bp-0x1a0]
    unsigned long v6;  // [bp-0x198]
    unsigned long v7;  // [bp-0x190]
    unsigned long v8;  // [bp-0x188]
    unsigned long v9;  // [bp-0x180]
    unsigned long v10;  // [bp-0x180]
    unsigned long v11;  // [bp-0x178]
    unsigned long v12;  // [bp-0x170]
    unsigned long v13;  // [bp-0x168]
    unsigned long v14;  // [sp-0x160]
    unsigned long v15;  // [bp-0x158]
    unsigned long v16;  // [bp-0x150]
    unsigned long v17;  // [bp-0x148]
    unsigned long v18;  // [sp-0x140]
    unsigned long v19;  // [bp-0x138]
    unsigned long v20;  // [sp-0x130]
    unsigned long v21;  // [sp-0x128]
    unsigned long v22;  // [sp-0x120]
    unsigned long v23;  // [bp-0x118]
    char v24;  // [bp-0x110], Other Possible Types: unsigned long
    unsigned long v25;  // [bp-0x108]
    unsigned long v26;  // [bp-0x100]
    unsigned long v27;  // [bp-0xe8]
    unsigned long v28;  // [bp-0xe0]
    unsigned long v29;  // [bp-0xd8]
    unsigned long v30;  // [bp-0xd0]
    unsigned long v31;  // [sp-0xc8]
    unsigned long v32;  // [bp-0xc0]
    unsigned long long v33;  // [bp-0x98]
    unsigned long v34;  // [bp-0x90]
    unsigned long v35;  // [bp-0x88]
    unsigned long v36;  // [sp-0x80]
    unsigned long v37;  // [bp-0x80]
    unsigned long v38;  // [bp-0x78]
    unsigned long v39;  // [sp-0x70]
    unsigned long v40;  // [sp-0x68]
    unsigned long v41;  // [bp-0x60]
    unsigned long v42;  // [sp-0x58]
    unsigned long v43;  // [sp-0x50]
    int v44;  // [bp-0x48]
    unsigned long v45;  // [bp-0x40]
    unsigned long v46;  // [bp-0x38]
    unsigned long long v48;  // r12
    unsigned long long v49;  // rcx
    unsigned long long v50;  // r13
    unsigned long long v51;  // r14
    unsigned long v52;  // r15
    unsigned long v53;  // rax
    unsigned long v54;  // r9
    unsigned long v55;  // rdi
    unsigned long v56;  // r11
    unsigned long v57;  // r10
    unsigned long v58;  // r8
    unsigned long v59;  // rdx
    unsigned short v60;  // _bp
    unsigned long v61;  // rcx
    unsigned long v62;  // rsi
    unsigned short v63;  // _bp
    unsigned long v64;  // r14
    unsigned long v65;  // r13
    unsigned long v66;  // rdi
    unsigned long v67;  // rax
    unsigned long v68;  // r15
    unsigned long v69;  // rax
    unsigned long v70;  // rax
    unsigned long v71;  // r9
    unsigned long v72;  // r10
    unsigned long v73;  // rax
    unsigned long v74;  // rcx
    unsigned long v75;  // rax
    unsigned long v76;  // rdi
    unsigned long v77;  // rsi
    unsigned long v78;  // r14
    unsigned long v79;  // rbp
    unsigned long v80;  // rdx
    unsigned long v81;  // r12
    unsigned long v82;  // r13
    unsigned long v83;  // rcx
    unsigned long v84;  // rdx
    unsigned long v85;  // rax
    unsigned long v87;  // r9
    unsigned long v89;  // r8
    unsigned long v90;  // rbp
    unsigned long v91;  // r14
    unsigned long v92;  // r13
    unsigned long v93;  // r15
    unsigned long v94;  // rax
    unsigned long v95;  // rcx
    unsigned long v96;  // rdx
    unsigned long v100;  // rdx
    unsigned long v101;  // r9

    v48 = 0x8000000000000000;
    v49 = *((long long *)a1) ^ 0x8000000000000000;
    if (v49 >= 2)
        v49 = 2;
    if (v49)
    {
        if (v49 == 1)
        {
            v6 = *((short *)(a1 + 112));
            v50 = *((short *)(a1 + 118)) * 0x100000000 | *((int *)(a1 + 114));
            v13 = *((short *)(a1 + 120));
            v5 = *((short *)(a1 + 122));
            v8 = *((int *)(a1 + 124));
            v2 = *((int *)(a1 + 128));
            v17 = *((short *)(a1 + 132));
            v12 = *((short *)(a1 + 134));
            v23 = *((long long *)(a1 + 136));
            v51 = *((short *)(a1 + 144));
            v52 = *((long long *)(a1 + 8));
            v53 = *((long long *)(a1 + 16));
            v54 = *((long long *)(a1 + 24));
            v55 = *((long long *)(a1 + 32));
            v56 = *((long long *)(a1 + 40));
            v57 = *((long long *)(a1 + 48));
            v58 = *((long long *)(a1 + 56));
            v59 = *((long long *)(a1 + 64));
            v27 = *((int *)(a1 + 104));
            v60 = *((short *)(a1 + 108));
            v4 = *((long long *)(a1 + 72));
            v1 = *((int *)(a1 + 80));
            v16 = *((short *)(a1 + 84));
            v28 = *((short *)(a1 + 86));
            v61 = *((long long *)(a1 + 88));
            v62 = *((long long *)(a1 + 96));
            v7 = v62;
            v48 = 9223372036854775810;
            v11 = v62;
            goto LABEL_52a33d;
        }
        v55 = *((long long *)(a1 + 72));
        v56 = *((long long *)(a1 + 80));
        v57 = *((long long *)(a1 + 88));
        v58 = *((long long *)(a1 + 96));
        v59 = *((long long *)(a1 + 104));
        v7 = *((long long *)(a1 + 112));
        v9 = *((long long *)(a1 + 120));
        v61 = *((long long *)(a1 + 128));
        v13 = *((long long *)(a1 + 136));
        v4 = *((long long *)(a1 + 144));
        v23 = *((long long *)(a1 + 152));
        v18 = *((long long *)(a1 + 160));
        v29 = *((long long *)(a1 + 168));
        v46 = *((long long *)(a1 + 16));
        v63 = *((short *)(a1 + 184));
        v6 = *((short *)(a1 + 186));
        v35 = *((long long *)(a1 + 176));
        v64 = *((long long *)(a1 + 24));
        v5 = *((long long *)(a1 + 32));
        v8 = *((long long *)(a1 + 40));
        v65 = *((long long *)(a1 + 48));
        v2 = *((long long *)(a1 + 56));
        v16 = *((long long *)(a1 + 64));
        *((int128_t *)&v44) = *((int128_t *)a1);
        std::fs::read(&v24, &(char)v44);
        v66 = (long long)v44;
        if (v24 == 0x8000000000000000)
        {
            a0->field_8 = 0;
            a0->field_10 = v25;
            a0->field_18 = v66;
            a0->field_20 = v45;
            a0->field_28 = v46;
            a0->field_0 = 9223372036854775814;
            core::ptr::drop_in_place<forc_tx::Predicate>(a1 + 24);
            return a0;
        }
        v52 = v24;
        v67 = v9;
        v68 = v67 >> 16;
        v32 = v67 >> 32;
        v11 = v67 >> 48;
        v69 = v4;
        v33 = v69 >> 16;
        v17 = v69 >> 32;
        v12 = v69 >> 48;
        v70 = v18;
        v0 = (v70 & 4294967295) >> 16;
        v19 = v70 >> 32;
        v53 = v25;
        v54 = v26;
        core::ptr::drop_in_place<forc_tx::<impl core::convert::TryFrom<forc_tx::Input> for fuel_tx::transaction::types::input::Input>::try_from::{{closure}}>(v66, v45);
        if (v63)
        {
            if ((v64 ^ 0x8000000000000000) || (v65 ^ 0x8000000000000000))
                goto LABEL_52aa95;
            v71 = v13;
            v50 = v23;
            v72 = v29;
            if (v54)
            {
                v27 = (unsigned int)v4 | (unsigned int)v33 * 0x10000;
                v6 = v50 & 4294967295;
                v50 >>= 16;
                v28 = v11;
                v16 = v32;
                v2 = v72;
                v48 = 9223372036854775813;
                v4 = v30;
                v60 = v17;
                v17 = v72 >> 32;
                v11 = v12 & 4294967295;
                v12 = v72 >> 48;
                v23 = (unsigned short)v6;
                v7 = v71;
                v1 = (unsigned short)v9 | (unsigned int)v68 * 0x10000;
                v8 = v19;
                v5 = v0;
                v51 = v18;
                v62 = v51 & 4294967295;
                v13 = v62;
LABEL_52a33d:
                v0 = v62;
                v19 = v62;
            }
            else
            {
                v21 = v56;
                v20 = v58;
                v30 = v4;
                v32 = v71 >> 32;
                v73 = v71 >> 48;
                v11 = v73;
                v48 = 9223372036854775811;
                v17 = v73;
                v12 = v73;
                v74 = v50;
                v3 = v18;
                v7 = v72;
                v31 = v59;
                v56 = v61;
                v22 = v57;
                v75 = v55;
                v14 = v75;
                v8 = v75;
                v5 = v75;
                v0 = v75;
                v27 = v71;
                v19 = v75;
                goto LABEL_52aea0;
            }
        }
        else
        {
            if (v64 == 0x8000000000000000 || v65 == 0x8000000000000000)
            {
LABEL_52aa95:
                a0->field_8 = 3;
                a0->field_0 = 9223372036854775814;
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v52, v53);
                if (v64 != 0x8000000000000000)
                    core::mem::drop(v64, v5);
                if (v65 == 0x8000000000000000)
                    return a0;
                core::mem::drop(v65, v2);
                return a0;
            }
            v38 = v64;
            v39 = v5;
            v40 = v8;
            v41 = v65;
            v42 = v2;
            v43 = v16;
            std::fs::read(&v24, &v38);
            if (v24 == 0x8000000000000000)
            {
                a0->field_8 = 1;
                a0->field_10 = v25;
                a0->field_18 = v64;
                a0->field_20 = v5;
                a0->field_28 = v8;
                a0->field_0 = 9223372036854775814;
                core::mem::drop(v65, v2);
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v76, v77);
                return a0;
            }
            v14 = v24;
            v22 = v26;
            core::ptr::drop_in_place<forc_tx::<impl core::convert::TryFrom<forc_tx::Input> for fuel_tx::transaction::types::input::Input>::try_from::{{closure}}>(v64, v5);
            std::fs::read(&v24, &v41);
            if (v24 == 0x8000000000000000)
            {
                a0->field_8 = 2;
                a0->field_10 = v25;
                a0->field_18 = v65;
                a0->field_20 = v2;
                a0->field_28 = v16;
                a0->field_0 = 9223372036854775814;
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v14, v25);
                v76 = v52;
                v77 = v53;
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v76, v77);
                return a0;
            }
            v20 = v24;
            v21 = v25;
            v78 = v25;
            v79 = v26;
            core::ptr::drop_in_place<forc_tx::<impl core::convert::TryFrom<forc_tx::Input> for fuel_tx::transaction::types::input::Input>::try_from::{{closure}}>(v65, v2);
            if (v54)
            {
                v8 = (unsigned short)v32 | (unsigned int)v11 * 0x10000;
                v19 = (unsigned short)v17 | (unsigned int)v12 * 0x10000;
                v80 = v56;
                v16 = v80 >> 32;
                v28 = v80 >> 48;
                v5 = v68;
                v81 = v59;
                v82 = v7;
                v6 = v82 & 4294967295;
                v50 = v82 >> 16;
                v7 = v58;
                v1 = v80;
                v59 = v79;
                v57 = v20;
                v83 = v61;
                v34 = v18;
                v36 = v29;
                v29 = v23;
                v23 = v13;
                v13 = v9;
                v58 = v78;
                v2 = v83;
                v17 = v83 >> 32;
                v12 = v83 >> 48;
                v51 = v4 & 4294967295;
                v61 = v57;
                v55 = v21;
                v11 = v81 >> 48;
                v4 = v55;
                v56 = v22;
                v0 = v33;
                v60 = v81 >> 32;
                v27 = v81 & 4294967295;
                v54 = v14;
                v52 = v53;
                v53 = v54;
                v48 = v52;
            }
            else
            {
                v30 = v79;
                v31 = v78;
                v27 = (unsigned short)v9 | (unsigned int)v68 * 0x10000;
                v84 = v61;
                v50 = v84 >> 16;
                v2 = (unsigned short)v4 | (unsigned int)v33 * 0x10000;
                v85 = v13;
                v5 = (v85 & 4294967295) >> 16 & 4294967295;
                v8 = v85 >> 32;
                v48 = 9223372036854775812;
                v3 = v59;
                v6 = v84 & 4294967295;
                v4 = v57;
                v9 = v55;
                v74 = v58;
LABEL_52aea0:
                v1 = v74;
                v16 = v74 >> 32;
                v28 = v74 >> 48;
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v52, v53);
                v34 = v35;
                v59 = v56;
                v51 = v18;
                v58 = v9;
                v53 = v21;
                v52 = v14;
                v55 = v20;
                v54 = v22;
                v56 = v31;
                v57 = v30;
                v60 = v32;
                v61 = v3;
            }
        }
    }
    else
    {
        v87 = *((long long *)(a1 + 168));
        v36 = *((long long *)(a1 + 176));
        v13 = *((short *)(a1 + 184));
        v14 = *((long long *)(a1 + 56));
        v21 = *((long long *)(a1 + 64));
        v22 = *((long long *)(a1 + 72));
        v20 = *((long long *)(a1 + 80));
        v4 = *((long long *)(a1 + 88));
        v57 = *((long long *)(a1 + 104));
        v9 = *((long long *)(a1 + 112));
        v15 = *((long long *)(a1 + 120));
        v89 = *((int *)(a1 + 128));
        v17 = *((short *)(a1 + 132));
        v23 = *((long long *)(a1 + 136));
        v90 = *((long long *)(a1 + 8));
        v91 = *((long long *)(a1 + 16));
        v92 = *((long long *)(a1 + 32));
        v93 = *((long long *)(a1 + 40));
        if ((*((char *)(a1 + 144)) & 1))
        {
            v94 = v90 ^ 0x8000000000000000;
            if (!(v92 ^ 0x8000000000000000) && !v94)
            {
                v3 = *((long long *)(a1 + 152));
                v95 = *((short *)(a1 + 146));
                v18 = v94;
                v28 = v18;
                v7 = *((long long *)(a1 + 160));
                v16 = v17;
                v2 = v89;
                v8 = v16;
                v0 = a1;
                v19 = a1;
                v10 = v9;
                v37 = v36;
                v56 = *((long long *)(a1 + 96));
                goto LABEL_52a474;
            }
        }
        else if (v92 == 0x8000000000000000 || v90 == 0x8000000000000000)
        {
            a0->field_8 = 3;
            a0->field_0 = 9223372036854775814;
            if (v90 != 0x8000000000000000)
                core::mem::drop(v90, v91);
            if (v92 == 0x8000000000000000)
                return a0;
            goto LABEL_52aa71;
        }
        else
        {
            v34 = *((long long *)(a1 + 168));
            v3 = *((long long *)(a1 + 152));
            v2 = v89;
            v87 = *((long long *)(a1 + 104));
            v31 = *((long long *)(a1 + 96));
            v29 = *((long long *)(a1 + 160));
            v39 = v91;
            v1 = *((long long *)(a1 + 24));
            v40 = *((long long *)(a1 + 24));
            v41 = v92;
            v42 = v93;
            v7 = *((long long *)(a1 + 48));
            v43 = *((long long *)(a1 + 48));
            std::fs::read(&(char)v24, &v38);
            if (v24 == 0x8000000000000000)
            {
                a0->field_8 = 1;
                a0->field_10 = v25;
                a0->field_18 = v90;
                a0->field_20 = v91;
                a0->field_28 = v1;
                a0->field_0 = 9223372036854775814;
LABEL_52aa71:
                core::mem::drop(v92, v93);
                return a0;
            }
            v6 = v24;
            v1 = v25;
            v12 = v26;
            core::ptr::drop_in_place<forc_tx::<impl core::convert::TryFrom<forc_tx::Input> for fuel_tx::transaction::types::input::Input>::try_from::{{closure}}>(v90, v91);
            std::fs::read(&(char)v24, &v41);
            v96 = v3;
            if (v24 == 0x8000000000000000)
            {
                a0->field_8 = 2;
                a0->field_10 = v25;
                a0->field_18 = v92;
                a0->field_20 = v93;
                a0->field_28 = v7;
                a0->field_0 = 9223372036854775814;
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v6, v1);
                return a0;
            }
            v0 = (v96 & 4294967295) >> 16;
            v19 = v96 >> 32;
            v35 = v13 & 65535;
            v57 = v26;
            core::ptr::drop_in_place<forc_tx::<impl core::convert::TryFrom<forc_tx::Input> for fuel_tx::transaction::types::input::Input>::try_from::{{closure}}>(v92, v93);
            v100 = v20;
            v16 = v100 >> 32;
            v89 = v100 & 4294967295;
            v101 = v15;
            v95 = (v101 & 4294967295) >> 16 & 4294967295;
            v8 = v101 >> 32;
            v48 = 9223372036854775809;
            v18 = v96;
            v28 = v100 >> 48;
            v3 = v4;
            v7 = v31;
            v20 = v24;
            v4 = v22;
            v13 = v101;
            v10 = v14;
            v15 = v21;
            v22 = v12;
            v14 = v6;
            v21 = v1;
            v37 = v9;
            v56 = v25;
LABEL_52a474:
            v27 = v87;
            v1 = v89;
            v5 = v95;
            v6 = v37;
            v50 = v37 >> 16;
            v60 = v87 >> 32;
            v11 = v87 >> 48;
            v12 = v37;
            v53 = v21;
            v52 = v14;
            v55 = v20;
            v54 = v22;
            v61 = v3;
            v58 = v10;
            v59 = v15;
            v51 = v18;
        }
    }
    a0->field_0 = v48;
    a0->field_8 = v52;
    a0->field_10 = v53;
    a0->field_18 = v54;
    a0->field_20 = v55;
    a0->field_28 = v56;
    a0->field_30 = v57;
    a0->field_38 = v58;
    a0->field_40 = v59;
    a0->field_48 = v4;
    a0->field_50 = v1;
    a0->field_54 = v16;
    a0->field_56 = v28;
    a0->field_58 = v61;
    a0->field_60 = v7;
    a0->field_68 = v27;
    a0->field_6c = v60;
    a0->field_6e = v11;
    a0->field_70 = v6;
    *((unsigned int *)&(&a0->field_70)[1]) = v50;
    *((unsigned short *)((char *)&a0->field_72 + 2)) = v50 >> 32;
    a0->field_76 = v13;
    a0->field_78 = v5;
    *((unsigned int *)&a0->field_7a) = v8;
    a0->field_7c = v2;
    *((unsigned short *)&a0->field_80) = v17;
    *((unsigned short *)((char *)&a0->field_80 + 2)) = v12;
    *((unsigned long *)&a0->field_84) = v23;
    *((unsigned short *)&a0->field_88) = v51;
    *((unsigned short *)((char *)&a0->field_88 + 2)) = v0;
    *((unsigned int *)((char *)&a0->field_88 + 4)) = v19;
    *((unsigned long *)&a0->field_90) = v29;
    a0->field_98 = v34;
    a0->field_a0 = v36;
    a0->field_a8 = v35;
    return a0;
}
