fn uu_pr::trailer_content(a0: i64, a1: i8, a2: i8) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // rcx

    v1 = 8;
    if (a1 & 1) && !(a2 & 1) {
        v1 = alloc::alloc::Global::alloc_impl(8, 120);
        *(v1 as &i64) = 0;
        *((v1 + 8) as &i64) = 1;
        *((v1 + 16) as &i128) = 0;
        *((v1 + 32) as &i64) = 1;
        *((v1 + 40) as &i128) = 0;
        *((v1 + 56) as &i64) = 1;
        *((v1 + 64) as &i128) = 0;
        *((v1 + 80) as &i64) = 1;
        *((v1 + 88) as &i128) = 0;
        *((v1 + 104) as &i64) = 1;
        *((v1 + 112) as &i64) = 0;
        v2 = 5;
    }
    *(a0 as &u64) = v2;
    *((a0 + 8) as &u64) = v1;
    *((a0 + 16) as &u64) = v2;
    return v1;
}
