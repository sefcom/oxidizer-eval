void _ZN5uu_ln20numbered_backup_path17h43f0286cb18b9b8fE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined *local_110;
  code *local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  
  local_138 = 1;
  local_130 = param_1;
  while( true ) {
    local_108 = 
    _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
    ;
    local_e8 = &PTR_s_____0022d0f0;
    uStack_e0 = 2;
    local_c8 = 0;
    local_d0 = 1;
    local_110 = (undefined *)&local_138;
    local_d8 = &local_110;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hf2027c020971d755E(&local_100,&local_e8);
    local_e8 = (undefined **)CONCAT44(uStack_fc,local_100);
    uStack_e0 = CONCAT44(uStack_f4,uStack_f8);
    local_d8 = (undefined **)local_f0;
                    /* try { // try from 001baf74 to 001baf81 has its CatchHandler @ 001baff6 */
    _ZN5uu_ln18simple_backup_path17hd90ca54508e22200E(&local_128,param_2,param_3,uStack_e0);
                    /* try { // try from 001baf82 to 001bafb0 has its CatchHandler @ 001bb005 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h903473fdb0d332f1E(&local_e8);
    _ZN3std2fs8metadata17hebad4fc3d3e825b8E(&local_e8,uStack_120,local_118);
    if (local_e8 == (undefined **)0x2) break;
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h834abcfa2f925b76E
              (local_e8,uStack_e0);
    local_138 = local_138 + 1;
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hff8990cc0a5456e3E(&local_128);
  }
                    /* try { // try from 001bafc2 to 001bafcb has its CatchHandler @ 001baff4 */
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h834abcfa2f925b76E
            (2,uStack_e0);
  local_130[2] = local_118;
  *local_130 = local_128;
  local_130[1] = uStack_120;
  return;
}