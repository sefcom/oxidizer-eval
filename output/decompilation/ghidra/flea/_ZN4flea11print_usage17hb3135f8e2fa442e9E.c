void _ZN4flea11print_usage17hb3135f8e2fa442e9E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_80;
  code *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 **local_38;
  code *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_80 = &local_48;
  local_78 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he53499d21221b86bE;
  local_b0 = &DAT_007f5918;
  local_a8 = 2;
  local_90 = 0;
  local_a0 = &local_80;
  local_98 = 1;
                    /* try { // try from 0037ad8e to 0037ad9f has its CatchHandler @ 0037ae5c */
  local_48 = param_1;
  local_40 = param_2;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hbd37af77d9713dc6E(&local_28,&local_b0);
  local_68 = local_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  local_58 = local_18;
                    /* try { // try from 0037adbf to 0037adcf has its CatchHandler @ 0037ae61 */
  (*(code *)PTR__ZN7getopts7Options5usage17h7f7fdd7b1cb03bddE_00826760)
            (&local_80,param_3,CONCAT44(uStack_1c,uStack_20));
  local_30 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
  local_b0 = &DAT_007f5938;
  local_a8 = 2;
  local_90 = 0;
  local_a0 = &local_38;
  local_98 = 1;
                    /* try { // try from 0037ae1b to 0037ae25 has its CatchHandler @ 0037ae4d */
  local_38 = &local_80;
  (*(code *)PTR__ZN3std2io5stdio6_print17h17d6c2a1d6a6f99eE_00826768)(&local_b0);
                    /* try { // try from 0037ae26 to 0037ae2f has its CatchHandler @ 0037ae61 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8c3e4c9e242e21edE(&local_80);
                    /* try { // try from 0037ae30 to 0037ae39 has its CatchHandler @ 0037ae5c */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8c3e4c9e242e21edE(&local_68);
  _ZN4core3ptr37drop_in_place_LT_getopts__Options_GT_17ha123b29a12c62a26E(param_3);
  return;
}