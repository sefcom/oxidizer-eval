void _ZN2fd3fmt5input16remove_extension17hfdc34e319ac0822aE
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  _ZN2fd3fmt5input7dirname17h900660a28c19a669E(&local_68);
                    /* try { // try from 002f568c to 002f5697 has its CatchHandler @ 002f572e */
  auVar3 = (*(code *)PTR__ZN3std4path4Path9file_stem17hc69c2d2c61933548E_0053ff08)(param_2,param_3);
  if (auVar3._0_8_ != 0) {
    auVar1 = auVar3;
  }
                    /* try { // try from 002f56b4 to 002f56c3 has its CatchHandler @ 002f5718 */
  _ZN3std4path4Path4join17h1476eb6a0e8f28c9E(&local_50,local_60,local_58,auVar1._0_8_,auVar1._8_8_);
  _ZN4core3mem4drop17h3eb21fab0c0d11e6E(local_68,local_60);
                    /* try { // try from 002f56d9 to 002f56ee has its CatchHandler @ 002f5747 */
  uVar2 = _ZN2fd10filesystem17strip_current_dir17hccbc9a783f2543e7E(local_48,local_40);
  (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00540648)
            (&local_38,uVar2);
  *(undefined8 *)(param_1 + 4) = local_28;
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  _ZN4core3mem4drop17h3eb21fab0c0d11e6E(local_50,local_48);
  return;
}