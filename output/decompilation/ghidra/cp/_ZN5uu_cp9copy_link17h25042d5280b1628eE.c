void _ZN5uu_cp9copy_link17h25042d5280b1628eE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  long lVar2;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  _ZN3std2fs9read_link17heab6e9ac9c5efda3E(&local_50);
  if (local_50 != -0x8000000000000000) {
    local_38 = param_6;
                    /* try { // try from 001a54b5 to 001a5508 has its CatchHandler @ 001a5522 */
    cVar1 = (*(code *)PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_00267ae0)
                      (param_4,param_5);
    if (((cVar1 == '\0') &&
        (cVar1 = (*(code *)PTR__ZN3std4path4Path7is_file17h6e28d87ff76ffc41E_00267ad8)
                           (param_4,param_5), cVar1 == '\0')) ||
       (lVar2 = _ZN3std2fs11remove_file17h19277b2d7a4f8643E(param_4,param_5), lVar2 == 0)) {
      _ZN5uu_cp12symlink_file17haf96ef023560a2f2E
                (param_1,local_48,local_40,param_4,param_5,local_38);
    }
    else {
      *param_1 = 0x8000000000000001;
      param_1[1] = lVar2;
    }
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE(&local_50);
    return;
  }
  *param_1 = 0x8000000000000001;
  param_1[1] = local_48;
  return;
}