/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * __rustcall
uu_tr::operation::TranslateOperation::new(undefined8 *param_1,long param_2,long param_3)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined local_d0 [96];
  undefined local_70 [32];
  undefined local_50 [40];
  
  if (*(long *)(param_3 + 0x10) == 0) {
    if (*(long *)(param_2 + 0x10) == 0) {
                    /* try { // try from 001be6fd to 001be710 has its CatchHandler @ 001be751 */
      std::thread::local::LocalKey<T>::try_with(local_d0);
      auVar6 = core::result::Result<T,E>::expect(local_d0);
      uVar5 = _UNK_0022ef00;
      param_1[2] = _DAT_0022eef8;
      param_1[3] = uVar5;
      uVar4 = _UNK_0022eef4;
      uVar3 = _UNK_0022eef0;
      uVar2 = PTR_DAT_0022eee8._4_4_;
      *(undefined4 *)param_1 = PTR_DAT_0022eee8._0_4_;
      *(undefined4 *)((long)param_1 + 4) = uVar2;
      *(undefined4 *)(param_1 + 1) = uVar3;
      *(undefined4 *)((long)param_1 + 0xc) = uVar4;
      *(undefined (*) [16])(param_1 + 4) = auVar6;
    }
    else {
      param_1[1] = 0x8000000000000005;
      *param_1 = 0;
    }
                    /* try { // try from 001be72e to 001be735 has its CatchHandler @ 001be75e */
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(param_3);
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(param_2);
  }
  else {
    uVar1 = *(undefined *)(*(long *)(param_3 + 0x10) + -1 + *(long *)(param_3 + 8));
    _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter(local_70,param_2)
    ;
    _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter(local_d0,param_3)
    ;
    core::iter::traits::iterator::Iterator::chain(local_50,local_d0,uVar1);
    core::iter::traits::iterator::Iterator::zip(local_d0,local_70,local_50);
    _<std::collections::hash::map::HashMap<K,V,S>as_core::iter::traits::collect::FromIterator<(K,V)>>
    ::from_iter(param_1,local_d0);
  }
  return param_1;
}