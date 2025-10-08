void _ZN7forc_tx4help17h9e856c379f44076cE(void)

{
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined local_50 [16];
  undefined8 *local_40;
  undefined *local_38;
  undefined *local_30;
  code *local_28;
  undefined local_20 [16];
  undefined8 local_10;
  
  local_98 = 0;
  local_90 = 0x1300000003;
  local_b0 = 0x8000000000000000;
  local_a8 = "EXAMPLES:";
  local_a0 = 9;
                    /* try { // try from 0022b3b4 to 0022b43d has its CatchHandler @ 0022b475 */
  local_50 = (*(code *)PTR__ZN7forc_tx8examples17hc0d239ac650df6e3E_002d86a8)();
  local_40 = &local_b0;
  local_38 = 
  PTR__ZN86__LT_ansiterm__display__ANSIGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h0d43b2c8a4ac4007E_002d86b0
  ;
  local_30 = local_50;
  local_28 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h6b48d5b7b7ad47b8E;
  local_88 = &DAT_002d12f8;
  uStack_80 = 2;
  local_68 = 0;
  local_78 = &local_40;
  local_70 = 2;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h2f8585fb2c8c23bcE
            (local_20,0,local_50._8_8_,&local_88);
  _ZN4core3ptr68drop_in_place_LT_ansiterm__display__ANSIGenericString_LT_str_GT__GT_17hcc6ac66e0e4368abE
            (&local_b0);
  local_78 = (undefined8 **)local_10;
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_16into_boxed_slice17h3595125297bd929dE(&local_88);
  return;
}