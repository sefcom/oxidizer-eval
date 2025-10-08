
  int64_t bat::decorations::LineChangesDecoration::new::h2e041c340bcaeec9(int128_t* arg1, void* arg2)

{
    char var_ab = 0x15;
    int16_t var_b0 = 0x1500;
    int64_t var_b8 = 0;
    int128_t var_98;
    bat::decorations::LineChangesDecoration::generate_cached::hecb1c1000ca73811(&var_98, &var_b8, 
        " \s +Failed to load one or more …", 1);
    int128_t var_78;
    bat::decorations::LineChangesDecoration::generate_cached::hecb1c1000ca73811(&var_78, 
        arg2 + 0x33, &data_5a2890, 1);
    int128_t var_58;
    bat::decorations::LineChangesDecoration::generate_cached::hecb1c1000ca73811(&var_58, 
        arg2 + 0x44, &data_5a2891, 3);
    int128_t var_38;
    bat::decorations::LineChangesDecoration::generate_cached::hecb1c1000ca73811(&var_38, 
        arg2 + 0x44, &data_5a2894, 1);
    int64_t result = bat::decorations::LineChangesDecoration::generate_cached::hecb1c1000ca73811(
        &var_b8, arg2 + 0x55, &data_5a2895, 1);
    int128_t zmm0 = var_98;
    int128_t var_88;
    arg1[1] = var_88;
    *arg1 = zmm0;
    zmm0 = var_78;
    int128_t var_68;
    arg1[3] = var_68;
    arg1[2] = zmm0;
    zmm0 = var_58;
    int128_t var_48;
    arg1[5] = var_48;
    arg1[4] = zmm0;
    arg1[6] = var_38;
    int128_t var_28;
    arg1[7] = var_28;
    arg1[8] = var_b8;
    int128_t var_a8;
    arg1[9] = var_a8;
    return result;
}
