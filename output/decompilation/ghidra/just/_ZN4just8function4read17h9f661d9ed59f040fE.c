undefined8 *
_ZN4just8function4read17h9f661d9ed59f040fE
          (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined local_40 [24];
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = param_3;
  local_20 = param_4;
  _ZN4just17execution_context16ExecutionContext17working_directory17hcc9cc51d43cb6ad6E
            (local_58,*(undefined8 *)(*param_2 + 0x10),*(undefined8 *)(*param_2 + 0x18));
                    /* try { // try from 0036b91b to 0036b956 has its CatchHandler @ 0036b9a2 */
  _ZN3std4path4Path4join17h1eac0ae5e7efa361E(local_40,local_50,local_48,param_3,param_4);
  _ZN3std2fs14read_to_string17h6e0119a910dad901E(&local_70,local_40);
  param_1[3] = local_60;
  *(undefined4 *)(param_1 + 1) = local_70;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_6c;
  *(undefined4 *)(param_1 + 2) = uStack_68;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_64;
  *param_1 = 0;
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(local_58);
  return param_1;
}