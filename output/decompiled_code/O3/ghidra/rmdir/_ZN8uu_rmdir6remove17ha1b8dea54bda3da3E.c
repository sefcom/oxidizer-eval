long * __rustcall uu_rmdir::remove(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  undefined auVar3 [16];
  long local_48;
  long lStack_40;
  long local_38;
  
  remove_single(&local_48);
  if (local_48 == 0) {
    if ((param_4 & 0x100) != 0) {
      auVar3 = std::path::Path::parent(param_2,param_3);
      while( true ) {
        lVar1 = auVar3._8_8_;
        lVar2 = auVar3._0_8_;
        if ((lVar2 == 0) || (lVar1 == 0)) break;
        remove_single(&local_48,lVar2,lVar1,param_4);
        if (local_48 != 0) goto LAB_001aa3b8;
        auVar3 = std::path::Path::parent(lVar2,lVar1);
      }
    }
    *param_1 = 0;
  }
  else {
LAB_001aa3b8:
    param_1[2] = local_38;
    *param_1 = local_48;
    param_1[1] = lStack_40;
  }
  return param_1;
}