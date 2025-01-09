undefined8 * __rustcall uu_tail::follow::files::FileHandling::from(undefined8 *param_1,long param_2)

{
  undefined uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined auStack_38 [24];
  
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  std::thread::local::LocalKey<T>::try_with(auStack_38,core::ops::function::FnOnce::call_once);
  auVar3 = core::result::Result<T,E>::expect(auStack_38);
  hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher
            (param_1 + 3,uVar2,auVar3._0_8_,auVar3._8_8_);
  uVar1 = *(undefined *)(param_2 + 0x4a);
  *param_1 = 0x8000000000000000;
  *(undefined *)(param_1 + 9) = uVar1;
  *(undefined *)((long)param_1 + 0x49) = 0;
  return param_1;
}