
  fn uu_cp::Attributes::union::h2578ff077a39174b.specialized.1() -> *mut i8

{
    let rax: i64;
    let mut var_38: i64 = rax;
    let mut rax_1: i8;
    let mut rdx: i8;
    let rsi: *mut i8;
    rax_1 = core::cmp::max_by::ha65c10ec7dc7bcb0(*rsi, rsi[1], 0, 0);
    *var_38[6] = rdx;
    let mut rax_2: i8;
    let mut rdx_1: i8;
    rax_2 = core::cmp::max_by::ha65c10ec7dc7bcb0(rsi[6], rsi[7], 0, 0);
    *var_38[5] = rax_2;
    *var_38[7] = rdx_1;
    let mut rax_3: i8;
    let mut rdx_2: i8;
    rax_3 = core::cmp::max_by::ha65c10ec7dc7bcb0(rsi[4], rsi[5], 0, 0);
    *var_38[4] = rdx_2;
    let mut rax_4: i8;
    let mut rdx_3: i8;
    rax_4 = core::cmp::max_by::ha65c10ec7dc7bcb0(rsi[2], rsi[3], 0, 0);
    *var_38[2] = rdx_3;
    let mut rax_5: i8;
    let mut rdx_4: i8;
    rax_5 = core::cmp::max_by::ha65c10ec7dc7bcb0(rsi[8], rsi[9], 1, 1);
    *var_38[3] = rdx_4;
    let mut rax_6: i8;
    let mut rdx_5: i8;
    rax_6 = core::cmp::max_by::ha65c10ec7dc7bcb0(rsi[0xa], rsi[0xb], 0, 0);
    let result: *mut i8;
    *result = rax_1 & 1;
    result[1] = *var_38[6];
    result[2] = rax_4 & 1;
    result[3] = *var_38[2];
    result[4] = rax_3 & 1;
    result[5] = *var_38[4];
    result[6] = *var_38[5] & 1;
    result[7] = *var_38[7];
    result[8] = rax_5 & 1;
    result[9] = *var_38[3];
    result[0xa] = rax_6 & 1;
    result[0xb] = rdx_5;
    result
}
