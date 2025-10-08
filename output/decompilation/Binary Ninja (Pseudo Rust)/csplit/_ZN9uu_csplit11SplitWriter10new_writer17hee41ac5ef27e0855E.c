
  fn uu_csplit::SplitWriter::new_writer::hee41ac5ef27e0855(arg1: *mut i64) -> i64

{
    let mut var_28: ();
    uu_csplit::split_name::SplitName::get::hecaf47b623a4fc62(&var_28, arg1[4], arg1[5]);
    let mut var_48: i32;
    std::fs::File::create::h9a48f376b3cc205c(&var_48, &var_28);
    
    if var_48 == 1
    {
        let result: i64;
        return result;
    }
    
    let var_44: i32;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h7c2b7c3db821253c(&var_48, 
        var_44);
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..buffered..bufwriter..BufWriter$LT$std..fs..File$GT$$GT$$GT$::h8e7ec623bec16818(arg1);
    let zmm0: i128 = var_48;
    let var_38: i128;
    *arg1.byte_offset(0x10) = var_38;
    *arg1 = zmm0;
    arg1[5] += 1;
    arg1[6] = 0;
    arg1[7] = 0;
    0
}
