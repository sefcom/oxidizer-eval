void _ZN9alacritty7migrate12migrate_toml17h20014181f4101fc3E(undefined8 *param_1,long param_2)

{
  undefined8 extraout_RDX;
  undefined4 *local_208;
  undefined *local_200;
  int local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined **local_118;
  undefined8 local_110;
  undefined *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  
                    /* try { // try from 0055fd3a to 0055fd44 has its CatchHandler @ 0056004c */
  (*(code *)
    PTR__ZN79__LT_toml_edit__document__DocumentMut_u20_as_u20_core__str__traits__FromStr_GT_8from_str17hbf17e879749770faE_009dff80
  )(&local_1f8,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  if (local_1f8 == 0xc) {
    local_98 = local_1a0;
    local_a8 = local_1b0;
    uStack_a0 = uStack_1a8;
    local_b8 = local_1c0;
    uStack_b4 = uStack_1bc;
    uStack_b0 = uStack_1b8;
    uStack_ac = uStack_1b4;
    local_c8 = local_1d0;
    uStack_c4 = uStack_1cc;
    uStack_c0 = uStack_1c8;
    uStack_bc = uStack_1c4;
    local_d8 = local_1e0;
    uStack_d4 = uStack_1dc;
    uStack_d0 = uStack_1d8;
    uStack_cc = uStack_1d4;
    local_e8 = uStack_1f0;
    uStack_e4 = uStack_1ec;
    uStack_e0 = uStack_1e8;
    uStack_dc = uStack_1e4;
    local_208 = &local_e8;
    local_200 = 
    PTR__ZN66__LT_toml_edit__error__TomlError_u20_as_u20_core__fmt__Display_GT_3fmt17hbb15701e6108b9dbE_009dff88
    ;
    local_118 = &PTR_s_TOML_parsing_error__00983390;
    local_110 = 1;
    local_f8 = 0;
    local_100 = 1;
                    /* try { // try from 0055fdf4 to 0055fe0a has its CatchHandler @ 00560022 */
    local_108 = (undefined *)&local_208;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E
              (&local_130,0,extraout_RDX,&local_118);
    param_1[3] = local_120;
    *(undefined4 *)(param_1 + 1) = local_130;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_12c;
    *(undefined4 *)(param_1 + 2) = uStack_128;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_124;
    *param_1 = 0xc;
                    /* try { // try from 0055fe2b to 0055fe37 has its CatchHandler @ 0056004c */
    _ZN4core3ptr48drop_in_place_LT_toml_edit__error__TomlError_GT_17hff698a679f654637E(&local_e8);
  }
  else {
    (*(code *)PTR_memcpy_009de0b0)(&local_e8,&local_1f8,200);
                    /* try { // try from 0055fe58 to 0055ffb3 has its CatchHandler @ 00560034 */
    _ZN9alacritty7migrate10move_value17ha75dcc59eab66952E
              (&local_1f8,&local_e8,&PTR_s_draw_bold_text_with_bright_color_009833a0,
               &PTR_s_colors_009833b0);
    param_1[3] = CONCAT44(uStack_1e4,uStack_1e8);
    *(int *)(param_1 + 1) = local_1f8;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_1f4;
    *(undefined4 *)(param_1 + 2) = uStack_1f0;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_1ec;
    *param_1 = 0xc;
                    /* try { // try from 0055fff0 to 0055fffc has its CatchHandler @ 0056004c */
    _ZN4core3ptr53drop_in_place_LT_toml_edit__document__DocumentMut_GT_17h9bb944d092de2eb6E
              (&local_e8);
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(param_2);
  return;
}