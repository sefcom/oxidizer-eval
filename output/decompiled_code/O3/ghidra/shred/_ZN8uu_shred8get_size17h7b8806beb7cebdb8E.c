void __rustcall uu_shred::get_size(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  long local_18;
  
  if (*param_1 == -0x8000000000000000) {
    uVar1 = 0;
  }
  else {
                    /* try { // try from 001bc1b5 to 001bc1b9 has its CatchHandler @ 001bc1e0 */
    auVar2 = get_size::___closure__(param_1[1],param_1[2]);
    param_2 = auVar2._8_8_;
    uVar1 = auVar2._0_8_;
  }
  local_18 = param_1[2];
  local_28 = *(undefined4 *)param_1;
  uStack_24 = *(undefined4 *)((long)param_1 + 4);
  uStack_20 = *(undefined4 *)(param_1 + 1);
  uStack_1c = *(undefined4 *)((long)param_1 + 0xc);
  core::option::Option<T>::or_else(uVar1,param_2,&local_28);
  return;
}