void _ZN11uu_realpath16process_relative17h8c6e307666422bfaE
               (undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,long param_5
               ,undefined8 param_6)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (param_3 == 0) {
    if (param_5 == 0) goto LAB_001b6a6c;
    local_38 = param_2[2];
    local_48 = *(undefined4 *)param_2;
    uStack_44 = *(undefined4 *)((long)param_2 + 4);
    uStack_40 = *(undefined4 *)(param_2 + 1);
    uStack_3c = *(undefined4 *)((long)param_2 + 0xc);
  }
  else {
                    /* try { // try from 001b6a0c to 001b6a13 has its CatchHandler @ 001b6a8d */
    cVar2 = _ZN3std4path4Path11starts_with17heff55995860ce76cE(param_2[1],param_2[2]);
    if (cVar2 == '\0') {
LAB_001b6a6c:
      param_1[2] = param_2[2];
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      return;
    }
    local_38 = param_2[2];
    local_48 = *(undefined4 *)param_2;
    uStack_44 = *(undefined4 *)((long)param_2 + 4);
    uStack_40 = *(undefined4 *)(param_2 + 1);
    uStack_3c = *(undefined4 *)((long)param_2 + 0xc);
    if (param_5 == 0) {
      param_5 = param_3;
      param_6 = param_4;
    }
  }
  _ZN6uucore8features2fs21make_path_relative_to17h09a4623272c797bdE
            (param_1,&local_48,param_5,param_6);
  return;
}