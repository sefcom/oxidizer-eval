undefined8 *
_ZN5uu_cp9copy_link17h3110b816ad64228eE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  long lVar2;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  _ZN3std2fs9read_link17hdecc6681ebe33782E(&local_38);
  if (local_38 != -0x8000000000000000) {
    local_50 = local_38;
    local_48 = local_30;
    local_40 = local_28;
                    /* try { // try from 0020876b to 002087c2 has its CatchHandler @ 002087dc */
    cVar1 = _ZN3std4path4Path10is_symlink17h6ab8b58756c51c6bE(param_4,param_5);
    if (((cVar1 == '\0') &&
        (cVar1 = _ZN3std4path4Path7is_file17h82f08f46fb8d8099E(param_4,param_5), cVar1 == '\0')) ||
       (lVar2 = _ZN3std2fs11remove_file17h38159f05e7b4dc34E(param_4,param_5), lVar2 == 0)) {
      _ZN5uu_cp12symlink_file17h73880cbbf32f0256E(param_1,local_48,local_40,param_4,param_5,param_6)
      ;
    }
    else {
      *param_1 = 2;
      param_1[1] = lVar2;
    }
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_50);
    return param_1;
  }
  *param_1 = 2;
  param_1[1] = local_30;
  return param_1;
}