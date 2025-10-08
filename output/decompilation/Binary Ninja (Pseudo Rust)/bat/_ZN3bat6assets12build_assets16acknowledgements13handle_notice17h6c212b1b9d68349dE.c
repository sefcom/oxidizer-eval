
  fn bat::assets::build_assets::acknowledgements::handle_notice::h6c212b1b9d68349d(arg1: *mut i8, arg2: i64) -> i64

{
    let mut result_1: i64;
    std::fs::read_to_string::h512db2d9218e57c1(&result_1, arg2);
    let mut result: i64 = result_1;
    let mut rdx_2: i64;
    let result_2: i64;
    
    if -(result) != -0x8000000000000000
    {
        *arg1.byte_offset(0x10) = result_2;
        let var_10: i64;
        *arg1.byte_offset(0x18) = var_10;
        rdx_2 = 0xd;
    }
    else
    {
        rdx_2 = 0;
        result = result_2;
    }
    *arg1 = rdx_2;
    *arg1.byte_offset(8) = result;
    result
}
