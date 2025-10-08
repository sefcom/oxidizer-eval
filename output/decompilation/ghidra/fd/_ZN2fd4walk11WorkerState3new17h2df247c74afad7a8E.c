void _ZN2fd4walk11WorkerState3new17h2df247c74afad7a8E
               (long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_30;
  
  local_40 = 1;
  local_38 = 1;
  local_30 = 0;
                    /* try { // try from 002f84dd to 002f84e6 has its CatchHandler @ 002f854b */
  uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h22579eb5831378dcE(&local_40);
                    /* try { // try from 002f84ee to 002f84f7 has its CatchHandler @ 002f853e */
  uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h22579eb5831378dcE(&local_40);
  (*(code *)PTR_memcpy_0053fd28)(param_1,param_3,0x1f8);
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x1f8) = *param_2;
  *(undefined8 *)(param_1 + 0x200) = uVar1;
  *(undefined8 *)(param_1 + 0x208) = param_2[2];
  *(undefined8 *)(param_1 + 0x210) = uVar2;
  *(undefined8 *)(param_1 + 0x218) = uVar3;
  return;
}