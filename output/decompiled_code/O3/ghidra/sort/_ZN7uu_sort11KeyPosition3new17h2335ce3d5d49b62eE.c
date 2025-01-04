void __rustcall
uu_sort::KeyPosition::new
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined param_5)

{
  long lVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  char local_90;
  undefined uStack_8f;
  undefined6 uStack_8e;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  _<char_as_core::str::pattern::Pattern>::into_searcher(local_68,0x2e,param_2,param_3);
  local_78 = 0;
  local_38 = 1;
  local_70 = param_3;
  auVar3 = core::str::iter::SplitInternal<P>::next(&local_78);
  lVar2 = auVar3._0_8_;
  if (lVar2 == 0) {
    new::___closure__(&local_a8,param_2,param_3);
  }
  else {
    auVar4 = core::str::iter::SplitInternal<P>::next(&local_78);
    core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str(&local_90,lVar2,auVar3._8_8_);
    lVar1 = local_88;
    if (local_90 == '\0') {
      if (local_88 == 0) {
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1 + 1,"field index can not be 0",0x18);
      }
      else {
        local_a8 = 0x8000000000000000;
        uStack_a0 = param_4;
        core::option::Option<T>::map_or(&local_90,auVar4._0_8_,auVar4._8_8_,&local_a8);
        lVar2 = CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90));
        if (lVar2 == -0x8000000000000000) {
          param_1[1] = lVar1;
          param_1[2] = local_88;
          *(undefined *)(param_1 + 3) = param_5;
          *param_1 = 0;
          return;
        }
        param_1[1] = lVar2;
        param_1[2] = local_88;
        param_1[3] = local_80;
      }
      goto LAB_00220e5f;
    }
    new::___closure__(&local_a8,lVar2,auVar3._8_8_,uStack_8f);
  }
  *(undefined4 *)(param_1 + 1) = (undefined4)local_a8;
  *(undefined4 *)((long)param_1 + 0xc) = local_a8._4_4_;
  *(undefined4 *)(param_1 + 2) = (undefined4)uStack_a0;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_a0._4_4_;
  param_1[3] = local_98;
LAB_00220e5f:
  *param_1 = 1;
  return;
}