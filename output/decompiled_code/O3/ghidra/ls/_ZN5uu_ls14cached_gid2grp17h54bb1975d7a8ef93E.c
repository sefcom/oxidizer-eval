void __rustcall uu_ls::cached_gid2grp(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  byte extraout_DL;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_64 = param_2;
  uVar1 = once_cell::sync::OnceCell<T>::get_or_try_init
                    (cached_gid2grp::GID_CACHE,cached_gid2grp::GID_CACHE);
  std::sync::mutex::Mutex<T>::lock(&local_60,uVar1);
  lVar2 = core::result::Result<T,E>::unwrap(&local_60,&PTR_DAT_00312b70);
                    /* try { // try from 0022ba8f to 0022bad4 has its CatchHandler @ 0022baec */
  hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
            (&local_60,lVar2 + 8,param_2);
  local_38 = local_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  local_28 = local_48;
  local_40 = local_60;
  uVar1 = std::collections::hash::map::Entry<K,V>::or_insert_with(&local_40,&local_64);
  _<alloc::string::String_as_core::clone::Clone>::clone(param_1,uVar1);
  core::ptr::
  drop_in_place<std::sync::mutex::MutexGuard<std::collections::hash::map::HashMap<u32,alloc::string::String>>>
            (lVar2,extraout_DL & 1);
  return;
}