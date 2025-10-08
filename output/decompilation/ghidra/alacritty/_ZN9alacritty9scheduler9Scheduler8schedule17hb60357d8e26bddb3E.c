void _ZN9alacritty9scheduler9Scheduler8schedule17hb60357d8e26bddb3E
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,char param_5,
               undefined8 param_6,undefined param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined auVar4 [12];
  undefined8 local_140;
  undefined local_138 [12];
  undefined local_128 [192];
  undefined local_68 [12];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined local_40;
  
                    /* try { // try from 0056db08 to 0056db1d has its CatchHandler @ 0056dbf6 */
  auVar4 = (*(code *)PTR__ZN3std4time7Instant3now17h767314cc8c6c5886E_009de3e8)();
  auVar4 = (*(code *)
             PTR__ZN88__LT_std__time__Instant_u20_as_u20_core__ops__arith__Add_LT_core__time__Duration_GT__GT_3add17h6e1ba6fe622dc9c8E_009df6d0
           )(auVar4._0_8_,auVar4._8_4_,param_3,param_4);
  local_138 = auVar4;
  _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4iter17h6161f52003526c91E
            (local_128,param_1 + 0x20);
  local_140 = 0;
  auVar3 = _ZN109__LT_alloc__collections__vec_deque__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17h119dbd4628219e7cE
                     (local_128,local_138,&local_140);
  uVar2 = auVar3._8_8_;
  if ((auVar3 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
  }
  uVar1 = 1000000000;
  if (param_5 != '\0') {
    uVar1 = param_4;
  }
  local_68 = auVar4;
  (*(code *)PTR_memcpy_009de0b0)(local_128,param_2,0xc0);
  local_40 = param_7;
  local_58 = param_3;
  local_50 = uVar1;
  local_48 = param_6;
  _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_6insert17h4a2214b1eb0a2d0fE
            (param_1 + 0x20,uVar2,local_128);
  return;
}