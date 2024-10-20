fn uu_sort::merge::merge_with_file_limit(a0: u64, a1: &u64, a2: &struct_7, a3: u64, a4: i64, a5: i64) -> u64 {
    let v149: &struct_0;  // r15
    let v231: u64;  // rdi
    let v232: u64;  // r14
    let v248: u64;  // rax
    let v254: &u64;  // rbx
    let v266: u64;  // rax
    let v267: &struct_1;  // rbx
    let v270: u64;  // rax
    let v271: u64;  // rdx
    let v272: u64;  // cc_dep2
    let v273: u64;  // rax
    let v274: u64;  // rax
    let v275: u64;  // rax

    vvar_389{reg 48} = vvar_322{reg 48} - 8;
    *((vvar_322{reg 48} - 8) as &&u8) = &g_4dca51;
    v231 = *((vvar_389{reg 48} + 472) as &i64);
    v232 = *((vvar_389{reg 48} + 480) as &i64) + 1;
    loop {
        vvar_442{reg 48} = vvar_2384{reg 48};
        if v232 == 1 {
            break;
        }
        v231 += 72;
        v232 -= 1;
        vvar_389{reg 48} = vvar_442{reg 48} - 8;
        *((vvar_442{reg 48} - 8) as &&u8) = &g_4dcaa2;
    }
    v248 = *((vvar_442{reg 48} + 528) as &i64);
    if v248 == 2 {
        vvar_442{reg 48} = vvar_442{reg 48} - 8;
        *((vvar_442{reg 48} - 8) as &&u8) = &g_4dcafe;
        std::sync::mpmc::counter::Receiver<C>::release(vvar_442{reg 48} + 536);
    } else {
        if v248 == 1 {
            vvar_442{reg 48} = vvar_442{reg 48} - 8;
            *((vvar_442{reg 48} - 8) as &&u8) = &g_4dcaef;
            std::sync::mpmc::counter::Receiver<C>::release(vvar_442{reg 48} + 536);
            goto LABEL_4dcb2e;
        }
        v254 = *((vvar_442{reg 48} + 536) as &i64);
        *(&v254[65] as &i32) = vvar_2360 - 1;
        if BinaryOp CasCmpNE {
            goto LABEL_0x4dcb08;
        }
        if ((Not ((vvar_2360 - 0x1<64>) == 0x0<64>))) { Goto None } else { Goto None }
        vvar_442{reg 48} = vvar_442{reg 48} - 8;
        *((vvar_442{reg 48} - 8) as &&u8) = &g_4dcb1a;
        std::sync::mpmc::array::Channel<T>::disconnect_receivers(v254);
        *(&v254[66] as &i8) = 1;
        if BinaryOp CasCmpNE {
            goto LABEL_0x4dcb1c;
        }
        if !vvar_2361 {
            goto LABEL_4dcb2e;
        }
    }
LABEL_4dcb2e:
    v266 = *((vvar_442{reg 48} + 144) as &i64);
    if v266 == 2 {
        vvar_442{reg 48} = vvar_442{reg 48} - 8;
        *((vvar_442{reg 48} - 8) as &&u8) = &g_4dcb66;
        std::sync::mpmc::counter::Sender<C>::release(vvar_504{reg 48} + 152);
    } else {
        if v266 == 1 {
            vvar_442{reg 48} = vvar_442{reg 48} - 8;
            *((vvar_442{reg 48} - 8) as &&u8) = &g_4dcb51;
            std::sync::mpmc::counter::Sender<C>::release(vvar_504{reg 48} + 152);
            goto LABEL_4dc914;
        }
        v267 = *((vvar_442{reg 48} + 152) as &i64);
        *(&v267->field_200 as &i32) = vvar_2363 - 1;
        if BinaryOp CasCmpNE {
            goto LABEL_0x4dcb73;
        }
        if ((Not ((vvar_2363 - 0x1<64>) == 0x0<64>))) { Goto None } else { Goto None }
        do {
            v270 = v267->field_80;
            v271 = v270 | v267->field_190;
            v267->field_80 = v271;
            if v270 == v267->field_80 {
                v267->field_80 = v271;
                v272 = v267->field_80;
            } else {
                v267->field_80 = v271;
                v272 = v267->field_80;
                v274 = v267->field_80;
            }
        } while ((v275 = v273, v270 != v272));
        if !(v275 & v267->field_190) {
            vvar_442{reg 48} = vvar_442{reg 48} - 8;
            *((vvar_442{reg 48} - 8) as &&u8) = &g_4dcbb9;
            std::sync::mpmc::waker::SyncWaker::disconnect(&v267->padding_88[184]);
        }
        v267->field_210 = 1;
        if BinaryOp CasCmpNE {
            goto LABEL_0x4dcbbb;
        }
        if !vvar_2364 {
            goto LABEL_4dc914;
        }
        vvar_442{reg 48} = vvar_442{reg 48} - 8;
        *((vvar_442{reg 48} - 8) as &&u8) = &g_4dcbd4;
    }
LABEL_4dc914:
    v149 = *((vvar_534{reg 48} + 72) as &i64);
}
