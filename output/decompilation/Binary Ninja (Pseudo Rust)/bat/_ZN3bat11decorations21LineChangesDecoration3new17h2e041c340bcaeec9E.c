
  fn bat::decorations::LineChangesDecoration::new::h2e041c340bcaeec9(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let var_ab: i8 = 0x15;
    let var_b0: i16 = 0x1500;
    let mut var_b8: i64 = 0;
    let mut var_98: i128;
    bat::decorations::LineChangesDecoration::generate_cached::hecb1c1000ca73811(&var_98, &var_b8, 
        " \s +Failed to load one or more …", 1);
    let mut var_78: i128;
    bat::decorations::LineChangesDecoration::generate_cached::hecb1c1000ca73811(&var_78, 
        arg2.byte_offset(0x33), &data_5a2890, 1);
    let mut var_58: i128;
    bat::decorations::LineChangesDecoration::generate_cached::hecb1c1000ca73811(&var_58, 
        arg2.byte_offset(0x44), &data_5a2891, 3);
    let mut var_38: i128;
    bat::decorations::LineChangesDecoration::generate_cached::hecb1c1000ca73811(&var_38, 
        arg2.byte_offset(0x44), &data_5a2894, 1);
    let result: i64 = bat::decorations::LineChangesDecoration::generate_cached::hecb1c1000ca73811(
        &var_b8, arg2.byte_offset(0x55), &data_5a2895, 1);
    let mut zmm0: i128 = var_98;
    let var_88: i128;
    arg1[1] = var_88;
    *arg1 = zmm0;
    zmm0 = var_78;
    let var_68: i128;
    arg1[3] = var_68;
    arg1[2] = zmm0;
    zmm0 = var_58;
    let var_48: i128;
    arg1[5] = var_48;
    arg1[4] = zmm0;
    arg1[6] = var_38;
    let var_28: i128;
    arg1[7] = var_28;
    arg1[8] = var_b8;
    let var_a8: i128;
    arg1[9] = var_a8;
    result
}
