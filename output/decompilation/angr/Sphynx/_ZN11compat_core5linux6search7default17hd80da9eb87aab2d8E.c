long long compat_core::linux::search::default::hd80da9eb87aab2d8(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4[3])
{
    unsigned long long v0[3];  // [bp-0x118]
    unsigned long long v1[3];  // [sp-0x110], Other Possible Types: unsigned long long
    unsigned long long v2[3];  // [bp-0x108]
    unsigned long long v3[3];  // [bp-0x108]
    unsigned long long v4;  // [sp-0xf8]
    struct_0 *v5;  // [sp-0xe8]
    unsigned long long v6;  // [sp-0xe0]
    unsigned long long v7[3];  // [bp-0xd8]
    unsigned long long v8[3];  // [sp-0xd0], Other Possible Types: unsigned long long, unsigned long
    struct_1 *v9;  // [sp-0xc8]
    unsigned long long v10;  // [sp-0xc0]
    unsigned long long v11[3];  // [sp-0xb8]
    unsigned long long v12;  // [sp-0xb0]
    unsigned long long v13[3];  // [sp-0xa8]
    struct_1 *v14;  // [bp-0x98], Other Possible Types: char
    unsigned long long v15[3];  // [bp-0x90], Other Possible Types: char
    char v16;  // [bp-0x88]
    char v17;  // [bp-0x80]
    char v18;  // [bp-0x70]
    char v19;  // [bp-0x60]
    unsigned long long v20[3];  // [sp-0x58]
    char v21;  // [bp-0x48]
    unsigned long long v23[3];  // r13
    unsigned long long v25;  // rbp
    unsigned long long v27[3];  // xmm0
    struct_0 *v28;  // rax
    unsigned long long v29[3];  // xmm0
    int v30;  // ymm0
    int v31;  // ymm0
    unsigned long long v32;  // 4105
    struct_1 *v33;  // rax
    struct_1 *v34;  // r12
    unsigned long long v35;  // rbp
    struct_1 *v36;  // r15
    unsigned long long v37[3];  // rax
    void* v38;  // rcx
    unsigned long long v39[3];  // rbx
    unsigned long long v40[3];  // rbx
    unsigned long long v41[3];  // xmm0
    unsigned long long v42[3];  // rbx
    unsigned long long v43;  // r15
    struct_1 *v44;  // r13
    struct_1 *v45;  // r13
    unsigned long long v46;  // cc_ndep
    int v47;  // ymm1
    unsigned long long v48[3];  // rax
    unsigned long long v49[3];  // xmm0
    unsigned long long v50[3];  // xmm0
    struct_0 *v51;  // rcx
    unsigned long long v52;  // 4099
    unsigned long long v53[3];  // xmm0
    unsigned long long v54[3];  // xmm1
    unsigned long long v55;  // 4104
    unsigned long long v56;  // 4098
    unsigned long long v58;  // rax
    struct_0 *v59;  // rax
    unsigned long long v60;  // 4099

    v23 = a4;
    v6 = 8;
    *((uint128_t *)&v7[0]) = 0;
    if ((int)compat_core::unix::filters::exclude_self::h13168d9e64c5a6a6(&v6))
    {
        core::ptr::drop_in_place::h858b25f8e31a269e(&v6);
        core::ptr::drop_in_place::h858b25f8e31a269e(v23);
        return 1;
    }
    v25 = a4[2];
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::h68438e0eeab99c5f(&v6, v8, v25);
    ::libc.so.0::memcpy(v8 * 32 + v6, a4[0], v25 * 32);
    v8[0] = v8 + v25;
    a4[2] = 0;
    v3[0] = v8;
    v27 = *((int128_t *)&v6);
    v0[0] = v27;
    v28 = __rust_alloc(40, 8);
    if (!v28)
    {
        goto LABEL_4425b1;
    }
    else
    {
        *((uint128_t *)&v28->field_0) = 18446744073709551617;
        v29 = *((int128_t *)&v0);
        v31 = ((v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 18446744073709551617) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29;
        *((unsigned long long *[3])&v28->field_10) = v29;
        v28->field_20 = v3;
        v5 = v28;
        v32 = *(a0);
        v13[0] = a4;
        if (v32)
        {
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::heb84b3aeb379fa06(&v14, a0);
            v34 = v14;
            v10 = *((long long *)&v15);
            v35 = *((long long *)&v16);
        }
        else
        {
            v33 = __rust_alloc(24, 8);
            if (!v33)
            {
LABEL_4425b1:
                alloc::alloc::handle_alloc_error::h32f10317ed76b9c7(); /* do not return */
            }
            v36 = v33;
            v35 = 1;
            if (!a3)
            {
                v38 = 0;
                v37 = 1;
            }
            else
            {
                v37 = __rust_alloc(a3, 1);
                if (!v37)
                    _ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$11allocate_in28_$u7b$$u7b$closure$u7d$$u7d$17h9f289d254163e8c5E.llvm.3765406455587417959(); /* do not return */
                v38 = a3;
            }
            v0[0] = v37;
            v1 = v38;
            v2[0] = 0;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::ha6434863460e3dbe(v0, 0, a3);
            v39 = v2;
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h5bd23e75d5fc6e32(v0 + v39, a3, a2, a3);
            v40 = (char *)v39 + a3;
            v3[0] = v40;
            v34 = v36;
            *((unsigned long long *[3])&v36->padding_-8[0]) = v40;
            v41 = *((int128_t *)&v0);
            v36->field_-18 = &v41[0];
            v14 = v36;
            v31 = (v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 18446744073709551617;
            *((uint128_t *)&v15[0]) = 18446744073709551617;
            v10 = 1;
        }
        compat_kernel::core::request::RequestHandle::new::h70a9b30cf8e74595(v0);
        v42 = v0;
        v12 = v1;
        v11[0] = v3;
        v43 = &(&v34->field_-18)[3 * v35];
        v44 = v34;
        if (v35)
        {
            v9 = v34;
            v45 = &v34->field_0;
            while (true)
            {
                v44 = v45;
                v48 = v44->field_0;
                v49 = *((int128_t *)&v44->padding_-8);
                v0[0] = v49;
                if (!v0)
                    break;
                v50 = *((int128_t *)&v0);
                v20[0] = v50;
                v0[0] = v48;
                v1[0] = v20;
                _$LT$std..path..PathBuf$u20$as$u20$core..convert..From$LT$alloc..string..String$GT$$GT$::from::hb2a0746043238cf6(&v21, v0);
                v51 = v5;
                v52 = v51->field_0;
                v51->field_0 = v52 + 1;
                if (CasCmpNE(v51->field_0, v52))
                    goto LABEL_0x44246f;
                if ((char)amd64g_calculate_condition(14, 4, v52, 1, v46))
                    [D] Unsupported jumpkind Ijk_NoDecode at address 4466086()
                compat_file_search::query::QueryInput::new::hd3c1ca8d4598b01d(&v17, &v21, 1, v51);
                v4 = *((long long *)&v19);
                v53 = *((int128_t *)&v17);
                v31 = ((v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53;
                v54 = *((int128_t *)&v18);
                v47 = v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54;
                v2[0] = v54;
                v0[0] = v53;
                v55 = v42[2];
                v42[2] = v55 + 1;
                if (CasCmpNE(v42[2], v55))
                    goto LABEL_0x4424b6;
                if ((char)amd64g_calculate_condition(14, 4, v55, 1, v46))
                    [D] Unsupported jumpkind Ijk_NoDecode at address 4466086()
LABEL_4424c2:
                v56 = v42[0];
                v42[0] = v56 + 1;
                if (CasCmpNE(v42[0], v56))
                    goto LABEL_4424c2;
                if ((char)amd64g_calculate_condition(14, 4, v56, 1, v46))
                    [D] Unsupported jumpkind Ijk_NoDecode at address 4466086()
                compat_kernel::core::server::Server::send_query::hb0e1e005505623bc(a1, v0, v42);
                v45 = &v44->field_0;
                if (v44 == v43)
                {
                    v34 = v9;
                    goto LABEL_442533;
                }
            }
            v34 = v9;
        }
        if (v43 != v44)
        {
            do
            {
                if (v44->field_-10)
                    __rust_dealloc(v44->field_-18);
            } while ((v44 += 24, v43 != v44));
        }
LABEL_442533:
        v58 = v10;
        if (v58 && v58 * 24)
            __rust_dealloc(v34);
        compat_kernel::frontend::console::start::h119e227426a8a75e(v12, v11, v42);
        v59 = v5;
        v60 = v59->field_0;
        v59->field_0 = v60 - 1;
        if (CasCmpNE(v59->field_0, v60))
            goto LABEL_0x442570;
        v23 = v13;
        if (v60 != 1)
        {
            core::ptr::drop_in_place::h858b25f8e31a269e(v23);
            return 0;
        }
        alloc::sync::Arc$LT$T$GT$::drop_slow::h07b4a1678f750bef(&v5);
    }
}
