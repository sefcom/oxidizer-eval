fn linera_summary::performance_summary::PerformanceSummary::init(a0: i64, a1: i64, a2: i64) -> double {
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: u128;  // xmm0
    let v4: iNone;  // xmm1
    let v5: iNone;  // xmm2

    v0 = v2;
    memcpy(a0, a1, 280);
    v3 = *(a2 as &i128);
    v4 = *((a2 + 16) as &i128);
    v5 = *((a2 + 32) as &i128);
    *((a0 + 280) as &u128) = v3;
    *((a0 + 296) as void*) = v4;
    *((a0 + 312) as void*) = v5;
    *((a0 + 736) as &i8) = 0;
    return v3;
}
