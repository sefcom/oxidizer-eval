long _ZN5uu_mv20rename_file_fallback17hf572c573f0edc49fE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_60 = param_1;
  local_58 = param_2;
  local_50 = param_3;
  local_48 = param_4;
  cVar1 = (*(code *)PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_0024ab60)(param_3,param_4)
  ;
  if ((cVar1 == '\0') ||
     (lVar2 = _ZN3std2fs11remove_file17hcda18fb70e9be9e2E(param_3,param_4), local_40 = param_3,
     local_38 = param_4, local_30 = param_1, local_28 = param_2, lVar2 == 0)) {
    auVar3 = _ZN3std2fs4copy17hde78b31b31968bf9E(param_1,param_2,param_3,param_4);
    lVar2 = auVar3._8_8_;
    if (((auVar3 & (undefined  [16])0x1) == (undefined  [16])0x0) &&
       (lVar2 = _ZN6uucore8features7fsxattr11copy_xattrs17h8f8abeea335a41aeE(&local_60,&local_50),
       lVar2 == 0)) {
      lVar2 = _ZN3std2fs11remove_file17hcda18fb70e9be9e2E(param_1,param_2);
    }
  }
  else {
    lVar2 = _ZN5uu_mv20rename_file_fallback28__u7b__u7b_closure_u7d__u7d_17h6a325a2489558aceE
                      (&local_40,lVar2);
  }
  return lVar2;
}