void _ZN2rg5flags5parse6ngrams17hd8afd45d5ce1348eE
               (undefined8 param_1,undefined2 *param_2,long param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  if (param_3 == 0) {
    puVar2 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18,0);
    if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 00355a6e to 00355a86 has its CatchHandler @ 00355b24 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1dbf6ec1d593e24cE
                (&local_50,"!!!",3);
      local_28 = local_40;
      local_38 = (undefined4)local_50;
      uStack_34 = local_50._4_4_;
      uStack_30 = (undefined4)uStack_48;
      uStack_2c = uStack_48._4_4_;
      puVar2[2] = local_40;
      *(undefined4 *)puVar2 = (undefined4)local_50;
      *(undefined4 *)((long)puVar2 + 4) = local_50._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_48;
      *(undefined4 *)((long)puVar2 + 0xc) = uStack_48._4_4_;
LAB_00355aa3:
      local_68 = 1;
      local_58 = 1;
      local_60 = puVar2;
LAB_00355adb:
      _ZN120__LT_alloc__collections__btree__set__BTreeSet_LT_T_GT__u20_as_u20_core__iter__traits__collect__FromIterator_LT_T_GT__GT_9from_iter17h58e1dc8f6c845226E
                (param_1,&local_68);
      return;
    }
LAB_00355af0:
    (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00526d20)(8,0x18);
  }
  else {
    if (param_3 != 1) {
      if (param_3 != 2) {
        local_40 = 3;
        local_50 = param_2;
        uStack_48 = param_3;
        _ZN4core4iter6traits8iterator8Iterator7collect17hb279056447b3b5b5E(&local_68,&local_50);
        goto LAB_00355adb;
      }
      puVar2 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18,0);
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = (undefined2 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(1,3,0);
        if (puVar3 == (undefined2 *)0x0) {
                    /* try { // try from 00355b12 to 00355b21 has its CatchHandler @ 00355b26 */
          (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00526d20)(1,3);
          goto LAB_00355b22;
        }
        *puVar3 = *param_2;
        *(undefined *)(puVar3 + 1) = 0x21;
LAB_00355a3f:
        *puVar2 = 3;
        puVar2[1] = puVar3;
        puVar2[2] = 3;
        goto LAB_00355aa3;
      }
      goto LAB_00355af0;
    }
    puVar2 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18,0);
    if (puVar2 == (undefined8 *)0x0) goto LAB_00355af0;
    puVar3 = (undefined2 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(1,3,0);
    if (puVar3 != (undefined2 *)0x0) {
      *(undefined *)puVar3 = *(undefined *)param_2;
      *(undefined2 *)((long)puVar3 + 1) = 0x2121;
      goto LAB_00355a3f;
    }
  }
                    /* try { // try from 00355b00 to 00355b0f has its CatchHandler @ 00355b28 */
  (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00526d20)(1,3);
LAB_00355b22:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}