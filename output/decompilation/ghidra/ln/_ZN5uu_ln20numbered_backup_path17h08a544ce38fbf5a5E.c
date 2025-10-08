void _ZN5uu_ln20numbered_backup_path17h08a544ce38fbf5a5E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long local_130;
  undefined8 *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long *local_108;
  undefined *local_100;
  undefined local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined **local_e0;
  undefined8 local_d8;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  
  local_130 = 1;
  local_128 = param_1;
  while( true ) {
    local_108 = &local_130;
    local_100 = 
    PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17ha643a300066f02fcE_001fd188
    ;
    local_e0 = &PTR_s____target_is_not_a_directory_and_001f6218;
    local_d8 = 2;
    local_c0 = 0;
    local_d0 = &local_108;
    local_c8 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h600e3d9d768361adE(local_f8,&local_e0);
                    /* try { // try from 00166b6c to 00166b79 has its CatchHandler @ 00166be0 */
    _ZN5uu_ln18simple_backup_path17hf92f6b12668c10c1E(&local_120,param_2,param_3,local_f0,local_e8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbf70cab9980d1377E(local_f8);
                    /* try { // try from 00166b8c to 00166ba0 has its CatchHandler @ 00166bf5 */
    _ZN3std2fs8metadata17h3a5d957c4cc0d9adE(&local_e0,uStack_118,local_110);
    ppuVar1 = local_e0;
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17haadcf12438c9539eE
              (&local_e0);
    if ((int)ppuVar1 == 2) break;
    local_130 = local_130 + 1;
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hba0bfa390dca4ccbE(&local_120);
  }
  local_128[2] = local_110;
  *local_128 = local_120;
  local_128[1] = uStack_118;
  return;
}