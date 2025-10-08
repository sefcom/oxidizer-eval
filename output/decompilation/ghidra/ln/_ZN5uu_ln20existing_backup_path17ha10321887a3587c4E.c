void _ZN5uu_ln20existing_backup_path17ha10321887a3587c4E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined auStack_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  int local_e0 [44];
  
  _ZN5uu_ln18simple_backup_path17hf92f6b12668c10c1E(auStack_f8,param_2,param_3,&DAT_00119804,4);
                    /* try { // try from 00166c4f to 00166c90 has its CatchHandler @ 00166cab */
  _ZN3std2fs8metadata17h3a5d957c4cc0d9adE(local_e0,local_f0,local_e8);
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17haadcf12438c9539eE
            (local_e0);
  if (local_e0[0] == 2) {
    _ZN5uu_ln18simple_backup_path17hf92f6b12668c10c1E(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    _ZN5uu_ln20numbered_backup_path17h08a544ce38fbf5a5E(param_1,param_2,param_3);
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hba0bfa390dca4ccbE(auStack_f8);
  return;
}