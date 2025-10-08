void _ZN4just11load_dotenv11load_dotenv17h65248fa26d942f27E
               (undefined *param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined local_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  auVar5._8_8_ = param_5;
  auVar5._0_8_ = param_4;
  if ((((*(char *)((long)param_3 + 0x13a) == '\0') && (*(char *)((long)param_3 + 0x13b) != '\x01'))
      && (*(long *)(param_2 + 0x90) == -0x8000000000000000)) &&
     ((*param_3 == -0x8000000000000000 && (*(char *)((long)param_3 + 0x13c) == '\0')))) {
    if (*(long *)(param_2 + 0xa8) == -0x8000000000000000 && param_3[3] == -0x8000000000000000)
    goto LAB_00374e35;
LAB_00374d0a:
    _ZN3std4path4Path4join17h509d33a3bbf89c2cE(local_50,param_4,param_5,param_2 + 0xa8);
    uVar3 = local_40;
    uVar2 = local_48;
                    /* try { // try from 00374d27 to 00374d52 has its CatchHandler @ 00374e5e */
    cVar1 = (*(code *)PTR__ZN3std4path4Path7is_file17h6e28d87ff76ffc41E_00566aa0)(local_48,local_40)
    ;
    if (cVar1 != '\0') {
      _ZN4just11load_dotenv14load_from_file17h94978de6d8bd46bbE
                (param_1,uVar2,uVar3,*(undefined *)((long)param_3 + 0x13b));
LAB_00374e29:
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(local_50);
      return;
    }
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(local_50);
  }
  else if (*(long *)(param_2 + 0xa8) != -0x8000000000000000 || param_3[3] != -0x8000000000000000)
  goto LAB_00374d0a;
  auVar4 = _ZN4core6option15Option_LT_T_GT_6map_or17hbda13e54d0b493bfE(param_2 + 0x90);
  local_38 = auVar4._0_8_;
  do {
    uVar2 = auVar5._8_8_;
    uVar3 = auVar5._0_8_;
    auVar5 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00566a90)(uVar3,uVar2);
    _ZN3std4path4Path4join17h1eac0ae5e7efa361E(local_50,uVar3,uVar2,local_38,auVar4._8_8_);
    uVar3 = local_40;
    uVar2 = local_48;
                    /* try { // try from 00374dd2 to 00374ddd has its CatchHandler @ 00374e60 */
    cVar1 = (*(code *)PTR__ZN3std4path4Path7is_file17h6e28d87ff76ffc41E_00566aa0)(local_48,local_40)
    ;
    if (cVar1 != '\0') {
                    /* try { // try from 00374e19 to 00374e28 has its CatchHandler @ 00374e5c */
      _ZN4just11load_dotenv14load_from_file17h94978de6d8bd46bbE
                (param_1,uVar2,uVar3,*(undefined *)((long)param_3 + 0x13b));
      goto LAB_00374e29;
    }
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(local_50);
  } while (auVar5._0_8_ != 0);
  if (*(char *)((long)param_3 + 0x13c) != '\0') {
    *param_1 = 0x11;
    return;
  }
LAB_00374e35:
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *param_1 = 0x38;
  return;
}