char _ZN5uu_ls8PathData3new13get_file_type17h50456aa863ca9f3aE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  int local_e0 [4];
  int local_d0 [44];
  
  if (param_4 != 0) {
    _ZN3std2fs8metadata17h459aac21f85cb4dfE(local_d0,param_2,param_3);
    if (local_d0[0] != 2) {
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hb9b2c6df5be91f44E
                (local_d0);
      return '\x01';
    }
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hb9b2c6df5be91f44E
              (local_d0);
  }
  _ZN3std2fs8DirEntry9file_type17hd81c8483f7ba6043E(local_e0,param_1);
  if (local_e0[0] == 0) {
    cVar1 = '\x01';
  }
  else {
                    /* try { // try from 00226eb0 to 00226ed2 has its CatchHandler @ 00226f1b */
    _ZN3std2fs16symlink_metadata17haff3ff196e1dc22bE(local_d0,param_2,param_3);
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hb9b2c6df5be91f44E
              (local_d0);
    cVar1 = (local_d0[0] == 2) + '\x01';
  }
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__FileType_C_std__io__error__Error_GT__GT_17hcb401049192dd8f7E
            (local_e0);
  return cVar1;
}