long long fish::input_common::InputEventQueuer::parse_csi(void* a0, unsigned long long a1, struct_0 *a2)
{
    char v0;  // [bp-0x229]
    int v1;  // [bp-0x228], Other Possible Types: char, unsigned int
    unsigned long long v2;  // [bp-0x224]
    unsigned int v3;  // [bp-0x21c]
    void* v4;  // [bp-0x210], Other Possible Types: char
    unsigned long long v5;  // [bp-0x208]
    void* v6;  // [bp-0x200]
    char v7;  // [bp-0x1f8], Other Possible Types: unsigned long long
    void* v8;  // [bp-0x1f0], Other Possible Types: unsigned long long
    unsigned long v9;  // [bp-0x1e8], Other Possible Types: unsigned long long
    unsigned long v10;  // [bp-0x1e0], Other Possible Types: unsigned long long
    char *v11;  // [bp-0x1c8]
    char *v12;  // [bp-0x1c0]
    unsigned long long v13;  // [bp-0x1b8]
    struct_0 *v14;  // [bp-0x1b0]
    int v15;  // [bp-0x1a8]
    unsigned int v16;  // [bp-0x1a4]
    uint128_t v17;  // [bp-0x198]
    uint128_t v18;  // [bp-0x188]
    uint128_t v19;  // [bp-0x178]
    uint128_t v20;  // [bp-0x168]
    uint128_t v21;  // [bp-0x158]
    uint128_t v22;  // [bp-0x148]
    uint128_t v23;  // [bp-0x138]
    uint128_t v24;  // [bp-0x128]
    uint128_t v25;  // [bp-0x118]
    uint128_t v26;  // [bp-0x108]
    uint128_t v27;  // [bp-0xf8]
    uint128_t v28;  // [bp-0xe8]
    uint128_t v29;  // [bp-0xd8]
    uint128_t v30;  // [bp-0xc8]
    uint128_t v31;  // [bp-0xb8]
    char v32;  // [bp-0xa8]
    char v33;  // [bp-0x90]
    char v34;  // [bp-0x78]
    char v35;  // [bp-0x60]
    char v36;  // [bp-0x48]
    unsigned long long v38;  // rdx
    unsigned int v39;  // r13d
    unsigned long long v41;  // cc_ndep
    unsigned long v42;  // r13
    char v43;  // r13b
    void* v44;  // rbx
    void* v45;  // rbp
    unsigned long v46;  // rsi
    unsigned int *v47;  // rcx
    unsigned int v48;  // eax
    unsigned int v49;  // edx
    unsigned long v51;  // r13
    unsigned long v52;  // rax
    unsigned int v53;  // eax
    unsigned int v54;  // r12d
    char v55;  // bl
    unsigned int v57;  // ebx
    unsigned long long v58;  // rdi
    unsigned int v59;  // edi
    unsigned int v60;  // ebp
    unsigned int v61;  // eax
    char *v62;  // rdi
    char *v63;  // rsi
    unsigned long long v64;  // rdx
    unsigned long long v65;  // rax
    unsigned long long v66;  // rax
    unsigned long v67;  // r12
    unsigned long v68;  // r13
    unsigned int v71;  // ebx
    unsigned long v72;  // rdx
    char *v73;  // rdi
    char *v74;  // rsi
    unsigned long v75;  // rsi
    void* v76;  // rdi
    char v77;  // dl

    v31 = 0;
    v30 = 0;
    v29 = 0;
    v28 = 0;
    v27 = 0;
    v26 = 0;
    v25 = 0;
    v24 = 0;
    v23 = 0;
    v22 = 0;
    v21 = 0;
    v20 = 0;
    v19 = 0;
    v18 = 0;
    v17 = 0;
    *((uint128_t *)&v15) = 0;
    if (!((char)a1.try_readb(a2) & 1))
    {
        *((unsigned long long *)a0) = 1099511627867;
        *((unsigned long long *)&a0[8]) = 0;
        return 1099511627867;
    }
    v14 = a2;
    v39 = v38;
    if (((char)v38 & 252) == 60)
    {
        v41 = ((char)a1.try_readb(a2) & 1) < 1;
        v42 = -(((char)a1.try_readb(a2) & 1) < 1);
        v43 = (char)v42 | (char)v38;
        v39 = (unsigned int)v42 & 0xffffff00 | v43;
    }
    v44 = 0;
    v45 = 0;
    while ((char)g_a1b52c.contains(v43))
    {
        v46 = v39 - 48;
        if ((v46 & 255) < 10)
        {
            v47 = &(char)v15 + 0x10 * v44;
            v48 = 10 * *((int *)((char *)v47 + 0x4 * v45));
            if ((char)_ccall(0, 47, 10, (unsigned long long)(unsigned int)*((int *)((char *)v47 + 0x4 * v45)), v41))
            {
                v76 = a0;
                v75 = a2->field_8;
                return fish::input_common::invalid_sequence(a0, a2->field_8, v77);
            }
            v49 = v46;
            if ((char)__CFADD__(v48, v49))
            {
                v76 = a0;
                v75 = a2->field_8;
                return fish::input_common::invalid_sequence(a0, a2->field_8, v77);
            }
            *((unsigned int *)((char *)v47 + 0x4 * v45)) = v48 + v49;
        }
        else if ((v45 < 3 & v43 == 58))
        {
            v45 += 1;
        }
        else if (v43 == 59)
        {
            v44 += 1;
            v45 = 0;
        }
        else
        {
LABEL_13cc601:
            *((unsigned int *)a0) = 0x110000;
            return a0;
        }
        v41 = ((char)a1.try_readb(a2) & 1) < 1;
        v51 = -(((char)a1.try_readb(a2) & 1) < 1);
        v39 = (unsigned int)v51 & 0xffffff00 | (char)v51 | (char)v38;
        if (v44 >= 16)
            break;
    }
    if (v43 != 36)
    {
        v54 = v43;
        if (!(char)g_a1b52f.contains(v54))
        {
LABEL_13cc601:
            *((unsigned int *)a0) = 0x110000;
            return a0;
        }
        switch (v54)
        {
        case 65:
            v62 = &v1;
            v63 = &(char)v15;
            v64 = 62724;
            break;
        case 66:
            v62 = &v1;
            v63 = &(char)v15;
            v64 = 62725;
            break;
        case 67:
            v62 = &v1;
            v63 = &(char)v15;
            v64 = 62727;
            break;
        case 68:
            v62 = &v1;
            v63 = &(char)v15;
            v64 = 62726;
            break;
        case 69:
            v62 = &v1;
            v63 = &(char)v15;
            v64 = 53;
            break;
        case 70:
LABEL_13cc8d7:
            v62 = &(char)v1;
            v63 = &(char)v15;
            v64 = 62731;
            break;
        case 72:
LABEL_13cc8eb:
            v62 = &(char)v1;
            v63 = &(char)v15;
            v64 = 62730;
            break;
        case 73:
            v8 = 3;
            goto LABEL_13cc5e5;
        case 77: case 109:
            a1.disable_mouse_tracking();
            v4 = v0 == 60;
            if (v0 == 60 || v43 != 109)
            {
                if (v0 == 60)
                {
                    v55 = (int)v15;
                }
                else
                {
                    v57 = (((char)a1.try_readb(a2) & 1) ? (unsigned int)v38 : 255);
                    if (v57 < 32)
                    {
                        v76 = a0;
                        v75 = a2->field_8;
                        return fish::input_common::invalid_sequence(a0, a2->field_8, v77);
                    }
                    v55 = v57 - 32;
                }
                v11 = &v4;
                v12 = &v14;
                v13 = a1;
                if (!((char)fish::input_common::InputEventQueuer::parse_csi::{{closure}}(&v11, (unsigned int)v17) & 1))
                {
                    v76 = a0;
                    v75 = a2->field_8;
                    return fish::input_common::invalid_sequence(a0, a2->field_8, v77);
                }
                if (!((char)fish::input_common::InputEventQueuer::parse_csi::{{closure}}(&v11, (unsigned int)v18) & 1))
                {
                    v76 = a0;
                    v75 = a2->field_8;
                    return fish::input_common::invalid_sequence(a0, a2->field_8, v77);
                }
                if ((!(v55 & 28) & v43 == 77 & !(v55 & 67)))
                {
                    v8 = 6;
                    v9 = v38;
                    v10 = v38;
LABEL_13cc5e5:
                    v66 = 9223372036854775810;
                    goto LABEL_13cc5ef;
                }
            }
            break;
        case 79:
            v8 = 4;
            goto LABEL_13cc5e5;
        case 80:
            v58 = 1;
            goto LABEL_13cc401;
        case 81:
            v58 = 2;
            goto LABEL_13cc401;
        case 82:
            v67 = (int)v15 - 1;
            if ((int)v15 < 1)
            {
                v76 = a0;
                v75 = a2->field_8;
                return fish::input_common::invalid_sequence(a0, a2->field_8, v77);
            }
            v68 = (int)v17 - 1;
            if ((int)v17 < 1)
            {
                v76 = a0;
                v75 = a2->field_8;
                return fish::input_common::invalid_sequence(a0, a2->field_8, v77);
            }
            if ((char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
            {
                v4 = 0;
                v5 = 1;
                v6 = 0;
                (char)v11.to_flog_str(&g_15a99a0);
                (char)v7.into_iter(&(char)v11);
                v4.spec_extend(&(char)v7);
                v4.push(58, &g_14db1b0);
                v4.push(32, &g_14db1b0);
                v32.to_vec("Received cursor position report y:x:Received Primary Device Attribute responseDisabling mouse tracking", 34);
                (char)v7.into_iter(&v32);
                v4.spec_extend(&(char)v7);
                v4.push(32, &g_14db1b0);
                v33.to_vec(core::fmt::num::imp::<impl usize>::_fmt(v67, &(char)v7, 20), a2);
                (char)v7.into_iter(&v33);
                v4.spec_extend(&(char)v7);
                v4.push(32, &g_14db1b0);
                v34.to_vec("x:Received Primary Device Attribute responseDisabling mouse tracking", 2);
                (char)v7.into_iter(&v34);
                v4.spec_extend(&(char)v7);
                v4.push(32, &g_14db1b0);
                v35.to_vec(core::fmt::num::imp::<impl usize>::_fmt(v68, &(char)v7, 20), a2);
                (char)v7.into_iter(&v35);
                v4.spec_extend(&(char)v7);
                v4.push(10, &g_14db1b0);
                fish::flog::flog_impl(v5, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v4, v5);
            }
            v8 = 1;
            v9 = v68;
            v10 = v67;
            v66 = 9223372036854775811;
LABEL_13cc5ef:
            v7 = v66;
            a1.push_front(&v7);
            goto LABEL_13cc601;
        case 83:
            v58 = 4;
LABEL_13cc401:
            v62 = &v1;
            v63 = &(char)v15;
            v64 = (unsigned int)fish::key::function_key(v58);
            break;
        case 84:
            a1.disable_mouse_tracking();
            a1.try_readb(a2);
            a1.try_readb(a2);
            a1.try_readb(a2);
            a1.try_readb(a2);
LABEL_13cc44f:
            a1.try_readb(a2);
            a1.try_readb(a2);
            goto LABEL_13cc601;
        case 90:
            *((uint128_t *)&v1) = 281474976773389;
            *((unsigned int *)a0) = v1;
            *((unsigned long long *)&a0[4]) = v2;
            *((unsigned int *)&a0[12]) = v3;
            return v3;
        case 99:
            if ((char)v38 == 63)
            {
                if ((char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
                {
                    v4 = 0;
                    v5 = 1;
                    v6 = 0;
                    (char)v11.to_flog_str(&g_15a99a0);
                    v7.into_iter(&(char)v11);
                    v4.spec_extend(&v7);
                    v4.push(58, &g_14db270);
                    v4.push(32, &g_14db270);
                    v36.to_vec("Received Primary Device Attribute responseDisabling mouse tracking", 42);
                    v7.into_iter(&v36);
                    v4.spec_extend(&v7);
                    v4.push(10, &g_14db270);
                    fish::flog::flog_impl(v5, 0);
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v4, v5);
                }
                v8 = 0;
                v7 = 9223372036854775811;
                v65 = a1.push_front(&v7);
                *((unsigned int *)a0) = 0x110000;
                return v65;
            }
            goto LABEL_13cc601;
        case 116:
            a1.disable_mouse_tracking();
            goto LABEL_13cc44f;
        case 117:
            if ((char)v38 == 63)
            {
                fish::tty_handoff::maybe_set_kitty_keyboard_capability();
                goto LABEL_13cc601;
            }
            else
            {
                v59 = (int)v15;
                switch (v59)
                {
                case 57361:
                    v60 = 62736;
                    break;
                case 57363:
                    v60 = 62735;
                    break;
                case 57399:
                    v60 = 48;
                    break;
                case 57400:
                    v60 = 49;
                    break;
                case 57401:
                    v60 = 50;
                    break;
                case 57402:
                    v60 = 51;
                    break;
                case 57403:
                    v60 = 52;
                    break;
                case 57404:
                    v60 = 53;
                    break;
                case 57405:
                    v60 = 54;
                    break;
                case 57406:
                    v60 = 55;
                    break;
                case 57407:
                    v60 = 56;
                    break;
                case 57408:
                    v60 = 57;
                    break;
                case 57409:
                    v60 = 46;
                    break;
                case 57410:
                    v60 = 47;
                    break;
                case 57411:
                    v60 = 42;
                    break;
                case 57412:
                    v60 = 45;
                    break;
                case 57413:
                    v60 = 43;
                    break;
                case 57414:
                    v60 = 62723;
                    break;
                case 57415:
                    v60 = 61;
                    break;
                case 57417:
                    v60 = 62726;
                    break;
                case 57418:
                    v60 = 62727;
                    break;
                case 57419:
                    v60 = 62724;
                    break;
                case 57420:
                    v60 = 62725;
                    break;
                case 57421:
                    v60 = 62728;
                    break;
                case 57422:
                    v60 = 62729;
                    break;
                case 57423:
                    v60 = 62730;
                    break;
                case 57424:
                    v60 = 62731;
                    break;
                case 57425:
                    v60 = 62732;
                    break;
                case 57426:
                    v60 = 62721;
                    break;
                default:
                    if ((v59 ^ 0xd800) - 0x110000 < -0x10f800)
                    {
                        v76 = a0;
                        v75 = a2->field_8;
                        return fish::input_common::invalid_sequence(a0, a2->field_8, v77);
                    }
                    v60 = fish::key::canonicalize_keyed_control_char(v59);
                    break;
                }
                if ((v16 ^ 0xd800) - 0x110000 < -0x10f800)
                {
                    return fish::input_common::invalid_sequence(v76, v75, v77);
                }
                if (((int)(&v15)[8] ^ 0xd800) - 0x110000 < -0x10f800)
                {
                    return fish::input_common::invalid_sequence(v76, v75, v77);
                }
                v61 = fish::key::canonicalize_keyed_control_char(v16);
                fish::input_common::InputEventQueuer::parse_csi::{{closure}}(&v1, &(char)v15, v60, v61, (int)(&v15)[8]);
                *((unsigned int *)a0) = v1;
                *((unsigned long long *)&a0[4]) = v2;
                *((unsigned int *)&a0[12]) = v3;
                return v3;
            }
        case 126:
            v71 = (int)v15;
            switch (v71)
            {
            case 2:
                v62 = &(char)v1;
                v63 = &(char)v15;
                v64 = 62732;
                break;
            case 3:
                v62 = &(char)v1;
                v63 = &(char)v15;
                v64 = 62721;
                break;
            case 5:
                v62 = &(char)v1;
                v63 = &(char)v15;
                v64 = 62728;
                break;
            case 6:
                v62 = &(char)v1;
                v63 = &(char)v15;
                v64 = 62729;
                break;
            case 23: case 24:
                v72 = (int)fish::key::function_key(11) + v71 - 23;
                if (((unsigned int)v72 ^ 0xd800) - 0x110000 < -0x10f800)
                    core::option::unwrap_failed(&g_14db1c8); /* do not return */
                fish::input_common::InputEventQueuer::parse_csi::{{closure}}(&(char)v1, &(char)v15, v72, 0x110000, 0x110000);
                *((unsigned int *)a0) = v1;
                *((unsigned long long *)&a0[4]) = v2;
                *((unsigned int *)&a0[12]) = v3;
                return v3;
            case 25: case 26:
                v53 = (int)fish::key::function_key(3) + v71 - 25;
                if ((v53 ^ 0xd800) - 0x110000 < -0x10f800)
                    core::option::unwrap_failed(&g_14db1e0); /* do not return */
                v1 = v53;
                v2 = 0x10000;
                v3 = 0;
                v2 = 0x10000;
                v3 = 0;
                *((unsigned int *)a0) = v1;
                *((unsigned long long *)&a0[4]) = 0x10000;
                *((unsigned int *)&a0[12]) = 0;
                return 0;
            case 27:
                if (((int)v18 ^ 0xd800) - 0x110000 >= -0x10f800)
                {
                    v73 = &(char)v1;
                    v74 = &(char)v15;
                    v72 = (unsigned int)fish::key::canonicalize_keyed_control_char((int)v18);
                    fish::input_common::InputEventQueuer::parse_csi::{{closure}}(v73, v74, v72, 0x110000, 0x110000);
                    *((unsigned int *)a0) = v1;
                    *((unsigned long long *)&a0[4]) = v2;
                    *((unsigned int *)&a0[12]) = v3;
                    return v3;
                }
                return fish::input_common::invalid_sequence(v76, v75, v77);
            case 28: case 29:
                v53 = (int)fish::key::function_key(5) + v71 - 28;
                if ((v53 ^ 0xd800) - 0x110000 < -0x10f800)
                    core::option::unwrap_failed(&g_14db1f8); /* do not return */
                v1 = v53;
                v2 = 0x10000;
                v3 = 0;
                v2 = 0x10000;
                v3 = 0;
                *((unsigned int *)a0) = v1;
                *((unsigned long long *)&a0[4]) = 0x10000;
                *((unsigned int *)&a0[12]) = 0;
                return 0;
            case 31: case 32:
                v53 = (int)fish::key::function_key(7) + v71 - 31;
                if ((v53 ^ 0xd800) - 0x110000 < -0x10f800)
                    core::option::unwrap_failed(&g_14db210); /* do not return */
                v1 = v53;
                v2 = 0x10000;
                v3 = 0;
                v2 = 0x10000;
                v3 = 0;
                *((unsigned int *)a0) = v1;
                *((unsigned long long *)&a0[4]) = 0x10000;
                *((unsigned int *)&a0[12]) = 0;
                return 0;
            case 33: case 34:
                v53 = (int)fish::key::function_key(9) + v71 - 33;
                if ((v53 ^ 0xd800) - 0x110000 < -0x10f800)
                    core::option::unwrap_failed(&g_14db228); /* do not return */
                v1 = v53;
                v2 = 0x10000;
                v3 = 0;
                v2 = 0x10000;
                v3 = 0;
                *((unsigned int *)a0) = v1;
                *((unsigned long long *)&a0[4]) = 0x10000;
                *((unsigned int *)&a0[12]) = 0;
                return 0;
            case 200:
                a1.paste_start_buffering();
                goto LABEL_13cc601;
            case 201:
                a1.paste_commit();
                goto LABEL_13cc601;
            case 1: case 7:
                goto LABEL_13cc8eb;
            case 4: case 8:
                goto LABEL_13cc8d7;
            default:
                if (v71 - 11 < 5)
                {
                    v64 = (int)fish::key::function_key(1) + v71 - 11;
                    if (((unsigned int)v64 ^ 0xd800) - 0x110000 < -0x10f800)
                        core::option::unwrap_failed(&g_14db258); /* do not return */
                    goto LABEL_13ccc35;
                }
                if (v71 - 17 >= 5)
                    goto LABEL_13cc601;
                v64 = (int)fish::key::function_key(6) + v71 - 17;
                if (((unsigned int)v64 ^ 0xd800) - 0x110000 < -0x10f800)
                    core::option::unwrap_failed(&g_14db240); /* do not return */
LABEL_13ccc35:
                v62 = &(char)v1;
                v63 = &(char)v15;
                break;
            }
        default:
LABEL_13cc601:
            *((unsigned int *)a0) = 0x110000;
            return a0;
        }
        fish::input_common::InputEventQueuer::parse_csi::{{closure}}(v62, v63, v64, 0x110000, 0x110000);
        *((unsigned int *)a0) = v1;
        *((unsigned long long *)&a0[4]) = v2;
        *((unsigned int *)&a0[12]) = v3;
        return v3;
    }
    else if (!((char)v38 == 121 & (char)a1.try_readb(a2)))
    {
        v52 = (int)v15 - 23;
        if ((unsigned int)v52 >= 2)
        {
            *((unsigned int *)a0) = 0x110000;
            return v52;
        }
        v53 = (int)fish::key::function_key(11) + (int)v15 - 23;
        if ((v53 ^ 0xd800) - 0x110000 < -0x10f800)
            core::option::unwrap_failed(&g_14db198); /* do not return */
        v1 = v53;
        v2 = 0x10000;
        v3 = 0;
        v2 = 0x10000;
        v3 = 0;
        *((unsigned int *)a0) = v1;
        *((unsigned long long *)&a0[4]) = 0x10000;
        *((unsigned int *)&a0[12]) = 0;
        return 0;
    }
    else
    {
LABEL_13cc601:
        *((unsigned int *)a0) = 0x110000;
        return a0;
    }
}
