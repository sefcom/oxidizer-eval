undefined8
_ZN7uu_tail6chunks16BytesChunkBuffer5print17had08519fe61c1e10E
          (undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4iter17h4a54dde34758e423E
            (&local_38,param_1);
  do {
    puVar7 = (undefined8 *)
             _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5d73d6dce9ac4e35E
                       (&local_38);
    uVar4 = uStack_2c;
    uVar3 = uStack_30;
    uVar2 = uStack_34;
    uVar1 = local_38;
    if (puVar7 == (undefined8 *)0x0) {
      local_38 = local_28;
      uStack_34 = uStack_24;
      uStack_30 = uStack_20;
      uStack_2c = uStack_1c;
      local_28 = uVar1;
      uStack_24 = uVar2;
      uStack_20 = uVar3;
      uStack_1c = uVar4;
      puVar7 = (undefined8 *)
               _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5d73d6dce9ac4e35E
                         (&local_38);
      if (puVar7 == (undefined8 *)0x0) {
        return 0;
      }
    }
    uVar5 = _ZN7uu_tail6chunks10BytesChunk10get_buffer17h202da470562e82e0E(*puVar7);
    lVar6 = _ZN3std2io5impls58__LT_impl_u20_std__io__Write_u20_for_u20__RF_mut_u20_W_GT_9write_all17h889fb69209bd29d4E
                      (param_2,uVar5);
  } while (lVar6 == 0);
  uVar5 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                    (lVar6);
  return uVar5;
}