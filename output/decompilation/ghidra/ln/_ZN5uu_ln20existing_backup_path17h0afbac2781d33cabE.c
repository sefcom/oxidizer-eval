void _ZN5uu_ln20existing_backup_path17h0afbac2781d33cabE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined local_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  
  _ZN5uu_ln18simple_backup_path17hd90ca54508e22200E(local_f0,param_2,param_3,&DAT_00115fd8,4);
                    /* try { // try from 001bb060 to 001bb0ac has its CatchHandler @ 001bb0c8 */
  _ZN3std2fs8metadata17hebad4fc3d3e825b8E(&local_d8,local_e8,local_e0);
  if (local_d8 == 2) {
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h834abcfa2f925b76E
              (2,local_d0);
    _ZN5uu_ln18simple_backup_path17hd90ca54508e22200E(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h834abcfa2f925b76E
              (local_d8,local_d0);
    _ZN5uu_ln20numbered_backup_path17h43f0286cb18b9b8fE(param_1,param_2,param_3);
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hff8990cc0a5456e3E(local_f0);
  return;
}