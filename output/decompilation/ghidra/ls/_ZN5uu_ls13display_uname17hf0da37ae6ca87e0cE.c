undefined8 __rustcall uu_ls::display_uname(undefined8 param_1,undefined4 param_2,char param_3)

{
  undefined4 in_EAX;
  undefined8 uVar1;
  long lVar2;
  byte extraout_DL;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  if (param_3 != '\0') {
    _<T_as_alloc::string::ToString>::to_string(param_1,&stack0xfffffffffffffffc);
    return CONCAT44(param_2,in_EAX);
  }
  uStack_64 = param_2;
  uVar1 = once_cell::sync::OnceCell<T>::get_or_try_init
                    (cached_uid2usr::UID_CACHE,cached_uid2usr::UID_CACHE);
  std::sync::mutex::Mutex<T>::lock(&uStack_60,uVar1);
  lVar2 = core::result::Result<T,E>::unwrap(&uStack_60,&PTR_DAT_00312920);
  hashbrown::rustc_entry::_<impl_hashbrown::map::HashMap<K,V,S,A>>::rustc_entry
            (&uStack_60,lVar2 + 8,param_2);
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_28 = uStack_48;
  uStack_40 = uStack_60;
  uVar1 = std::collections::hash::map::Entry<K,V>::or_insert_with(&uStack_40,&uStack_64);
  _<alloc::string::String_as_core::clone::Clone>::clone(param_1,uVar1);
  uVar1 = core::ptr::
          drop_in_place<std::sync::mutex::MutexGuard<std::collections::hash::map::HashMap<u32,alloc::string::String>>>
                    (lVar2,extraout_DL & 1);
  return uVar1;
}