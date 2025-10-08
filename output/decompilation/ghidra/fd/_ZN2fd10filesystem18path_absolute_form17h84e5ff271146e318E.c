void _ZN2fd10filesystem18path_absolute_form17h84e5ff271146e318E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  char cVar2;
  undefined auVar3 [16];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  cVar2 = (*(code *)PTR__ZN3std4path4Path11is_absolute17hf2dacc49683e82acE_00540908)
                    (param_2,param_3);
  if (cVar2 != '\0') {
    (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00540648)
              (param_1,param_2,param_3);
    return;
  }
  auVar3 = _ZN3std4path4Path12strip_prefix17hf2675ccd78c74225E(param_2,param_3);
  (*(code *)PTR__ZN3std3env11current_dir17h2d02f56ea8ff76ebE_00540910)(&local_60);
  if (auVar3._0_8_ == 0) {
    auVar3 = auVar1;
  }
  local_38 = local_50;
  local_48 = local_60;
  uStack_44 = uStack_5c;
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  _ZN2fd10filesystem18path_absolute_form28__u7b__u7b_closure_u7d__u7d_17hf478e8e0fe4d09caE
            (param_1,auVar3._0_8_,auVar3._8_8_,&local_48);
  return;
}