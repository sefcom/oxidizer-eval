long _ZN5uu_ls13show_dir_name17hae576568cd75c94bE(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  (*(code *)PTR__ZN6uucore8features13quoting_style15escape_dir_name17he94a972280d79721E_0048fe60)
            (&local_80,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             param_3 + 0xfc);
  if ((*(char *)(param_3 + 0xf7) == '\0') || (*(char *)(param_3 + 0xf6) != '\0')) {
    local_58 = local_70;
    local_68 = local_80;
    uStack_64 = uStack_7c;
    uStack_60 = uStack_78;
    uStack_5c = uStack_74;
    bVar2 = false;
  }
  else {
    bVar2 = true;
                    /* try { // try from 00299b16 to 00299b22 has its CatchHandler @ 00299ba5 */
    _ZN5uu_ls16create_hyperlink17h0a10a692235dc40bE
              (&local_68,CONCAT44(uStack_74,uStack_78),local_70,param_1);
  }
  uVar1 = CONCAT44(uStack_5c,uStack_60);
                    /* try { // try from 00299b2d to 00299b72 has its CatchHandler @ 00299baa */
  lVar3 = _ZN5uu_ls12write_os_str17hde566466aa27da95E(param_2,uVar1,local_58);
  if (lVar3 == 0) {
    local_50 = &DAT_00386b58;
    local_48 = 1;
    local_40 = 8;
    local_38 = 0;
    uStack_30 = 0;
    lVar3 = _ZN3std2io5Write9write_fmt17h700c3576e0a1d616E(param_2,&local_50);
  }
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h9930b46afeec8fe4E
            (CONCAT44(uStack_64,local_68),uVar1);
  if (bVar2) {
    _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h9930b46afeec8fe4E
              (CONCAT44(uStack_7c,local_80),CONCAT44(uStack_74,uStack_78));
  }
  return lVar3;
}